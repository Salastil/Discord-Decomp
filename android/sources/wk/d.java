package wk;

import android.graphics.PointF;
import android.media.MediaFormat;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLExt;
import android.opengl.EGLSurface;
import android.opengl.GLES20;
import android.opengl.Matrix;
import android.util.Log;
import android.view.Surface;
import e4.i;
import e4.l;
import java.nio.Buffer;
import java.nio.FloatBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import org.webrtc.EglBase;

/* loaded from: classes3.dex */
public final class d implements e {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public f f19870b;

    /* renamed from: c, reason: collision with root package name */
    public i f19871c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f19872d;

    /* renamed from: e, reason: collision with root package name */
    public final float[] f19873e = new float[16];

    /* renamed from: f, reason: collision with root package name */
    public boolean f19874f;

    public d() {
        ArrayList arrayList = new ArrayList();
        this.f19872d = arrayList;
        this.a = false;
        arrayList.add(new uk.a());
    }

    @Override // wk.e
    public final boolean a() {
        return this.a;
    }

    @Override // wk.e
    public final void b(Surface surface, MediaFormat mediaFormat, MediaFormat mediaFormat2) {
        float f2;
        float f10;
        float f11;
        float f12;
        float f13;
        float f14;
        if (surface == null) {
            throw new IllegalArgumentException("GlVideoRenderer requires an output surface");
        }
        if (mediaFormat2 == null) {
            throw new IllegalArgumentException("GlVideoRenderer requires target media format");
        }
        int integer = mediaFormat2.containsKey("rotation-degrees") ? mediaFormat2.getInteger("rotation-degrees") : (mediaFormat == null || !mediaFormat.containsKey("rotation-degrees")) ? 0 : mediaFormat.getInteger("rotation-degrees");
        float integer2 = (mediaFormat2.containsKey("width") && mediaFormat2.containsKey("height")) ? mediaFormat2.getInteger("width") / mediaFormat2.getInteger("height") : 1.0f;
        i iVar = new i();
        iVar.f7952d = EGL14.EGL_NO_DISPLAY;
        iVar.f7953e = EGL14.EGL_NO_CONTEXT;
        iVar.f7954i = EGL14.EGL_NO_SURFACE;
        iVar.f7955v = surface;
        EGLDisplay eglGetDisplay = EGL14.eglGetDisplay(0);
        iVar.f7952d = eglGetDisplay;
        if (eglGetDisplay == EGL14.EGL_NO_DISPLAY) {
            throw new RuntimeException("unable to get EGL14 display");
        }
        int[] iArr = new int[2];
        if (!EGL14.eglInitialize(eglGetDisplay, iArr, 0, iArr, 1)) {
            iVar.f7952d = null;
            throw new RuntimeException("unable to initialize EGL14");
        }
        EGLConfig[] eGLConfigArr = new EGLConfig[1];
        if (!EGL14.eglChooseConfig((EGLDisplay) iVar.f7952d, new int[]{12324, 8, 12323, 8, 12322, 8, 12352, 4, EglBase.EGL_RECORDABLE_ANDROID, 1, 12344}, 0, eGLConfigArr, 0, 1, new int[1], 0)) {
            throw new RuntimeException("unable to find RGB888+recordable ES2 EGL config");
        }
        iVar.f7953e = EGL14.eglCreateContext((EGLDisplay) iVar.f7952d, eGLConfigArr[0], EGL14.EGL_NO_CONTEXT, new int[]{12440, 2, 12344}, 0);
        i.m("eglCreateContext");
        if (((EGLContext) iVar.f7953e) == null) {
            throw new RuntimeException("null context");
        }
        iVar.f7954i = EGL14.eglCreateWindowSurface((EGLDisplay) iVar.f7952d, eGLConfigArr[0], (Surface) iVar.f7955v, new int[]{12344}, 0);
        i.m("eglCreateWindowSurface");
        EGLSurface eGLSurface = (EGLSurface) iVar.f7954i;
        if (eGLSurface == null) {
            throw new RuntimeException("surface was null");
        }
        if (!EGL14.eglMakeCurrent((EGLDisplay) iVar.f7952d, eGLSurface, eGLSurface, (EGLContext) iVar.f7953e)) {
            throw new RuntimeException("eglMakeCurrent failed");
        }
        this.f19871c = iVar;
        int i5 = -1;
        this.f19870b = new f((mediaFormat == null || !mediaFormat.containsKey("width")) ? -1 : mediaFormat.getInteger("width"), (mediaFormat == null || !mediaFormat.containsKey("height")) ? -1 : mediaFormat.getInteger("height"));
        float[] fArr = new float[16];
        Matrix.setIdentityM(fArr, 0);
        Matrix.orthoM(fArr, 0, -integer2, integer2, -1.0f, 1.0f, -1.0f, 1.0f);
        float[] fArr2 = new float[16];
        Matrix.setIdentityM(fArr2, 0);
        if (integer == 0) {
            f2 = 0.0f;
            f10 = 1.0f;
        } else if (integer != 90) {
            float f15 = -1.0f;
            if (integer == 180) {
                f2 = 0.0f;
            } else if (integer != 270) {
                double d6 = (integer / 180) * 3.141592653589793d;
                float sin = (float) Math.sin(d6);
                f15 = (float) Math.cos(d6);
                f2 = sin;
            } else {
                f10 = 0.0f;
                f2 = -1.0f;
            }
            f10 = f15;
        } else {
            f10 = 0.0f;
            f2 = 1.0f;
        }
        Matrix.setLookAtM(fArr2, 0, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, f2, f10, 0.0f);
        float[] fArr3 = this.f19873e;
        Matrix.setIdentityM(fArr3, 0);
        Matrix.multiplyMM(fArr3, 0, fArr, 0, fArr2, 0);
        Iterator it = this.f19872d.iterator();
        while (it.hasNext()) {
            uk.a aVar = (uk.a) it.next();
            Matrix.setIdentityM(aVar.f18948c, 0);
            int K = ki.b.K(35633, "uniform mat4 uMVPMatrix;\nuniform mat4 uSTMatrix;\nattribute vec4 aPosition;\nattribute vec4 aTextureCoord;\nvarying vec2 vTextureCoord;\nvoid main()\n{\ngl_Position = uMVPMatrix * aPosition;\nvTextureCoord = (uSTMatrix * aTextureCoord).xy;\n}");
            aVar.f18950e = K;
            if (K == 0) {
                throw new RuntimeException("failed loading vertex shader");
            }
            int K2 = ki.b.K(35632, "#extension GL_OES_EGL_image_external : require\nprecision mediump float;\nvarying vec2 vTextureCoord;\nuniform samplerExternalOES sTexture;\nvoid main()\n{\ngl_FragColor = texture2D(sTexture, vTextureCoord);\n}");
            aVar.f18951f = K2;
            if (K2 == 0) {
                aVar.a();
                throw new RuntimeException("failed loading fragment shader");
            }
            int i6 = aVar.f18950e;
            int glCreateProgram = GLES20.glCreateProgram();
            ki.b.c("glCreateProgram");
            if (glCreateProgram == 0) {
                Log.e("b", "Could not create glProgram");
            }
            GLES20.glAttachShader(glCreateProgram, i6);
            ki.b.c("glAttachShader");
            GLES20.glAttachShader(glCreateProgram, K2);
            ki.b.c("glAttachShader");
            GLES20.glLinkProgram(glCreateProgram);
            int[] iArr2 = new int[1];
            GLES20.glGetProgramiv(glCreateProgram, 35714, iArr2, 0);
            if (iArr2[0] != 1) {
                Log.e("b", "Could not link glProgram: ");
                Log.e("b", GLES20.glGetProgramInfoLog(glCreateProgram));
                GLES20.glDeleteProgram(glCreateProgram);
                glCreateProgram = 0;
            }
            aVar.f18952g = glCreateProgram;
            if (glCreateProgram == 0) {
                aVar.a();
                throw new RuntimeException("failed creating glProgram");
            }
            aVar.k = GLES20.glGetAttribLocation(glCreateProgram, "aPosition");
            ki.b.c("glGetAttribLocation aPosition");
            if (aVar.k == i5) {
                throw new RuntimeException("Could not get attrib location for aPosition");
            }
            aVar.f18955l = GLES20.glGetAttribLocation(aVar.f18952g, "aTextureCoord");
            ki.b.c("glGetAttribLocation aTextureCoord");
            if (aVar.f18955l == i5) {
                throw new RuntimeException("Could not get attrib location for aTextureCoord");
            }
            aVar.f18953h = GLES20.glGetUniformLocation(aVar.f18952g, "uMVPMatrix");
            ki.b.c("glGetUniformLocation uMVPMatrix");
            if (aVar.f18953h == i5) {
                throw new RuntimeException("Could not get attrib location for uMVPMatrix");
            }
            aVar.f18954i = GLES20.glGetUniformLocation(aVar.f18952g, "uSTMatrix");
            ki.b.c("glGetUniformLocation uSTMatrix");
            if (aVar.f18954i == i5) {
                throw new RuntimeException("Could not get attrib location for uSTMatrix");
            }
            float[] copyOf = Arrays.copyOf(fArr3, fArr3.length);
            l lVar = aVar.a;
            float f16 = copyOf[0];
            boolean z5 = f16 == 0.0f;
            float abs = 1.0f / (z5 ? Math.abs(copyOf[4]) : Math.abs(f16));
            if (z5) {
                PointF pointF = (PointF) lVar.f7959e;
                f11 = pointF.x;
                f12 = pointF.y * abs;
            } else {
                PointF pointF2 = (PointF) lVar.f7959e;
                f11 = pointF2.x * abs;
                f12 = pointF2.y;
            }
            if (z5) {
                PointF pointF3 = (PointF) lVar.f7960i;
                f14 = (pointF3.x * 2.0f) - 1.0f;
                f13 = (1.0f - (pointF3.y * 2.0f)) * abs;
            } else {
                PointF pointF4 = (PointF) lVar.f7960i;
                float f17 = abs * ((pointF4.x * 2.0f) - 1.0f);
                f13 = 1.0f - (pointF4.y * 2.0f);
                f14 = f17;
            }
            float[] fArr4 = new float[16];
            Matrix.setIdentityM(fArr4, 0);
            Matrix.translateM(fArr4, 0, f14, f13, 0.0f);
            lVar.getClass();
            Matrix.rotateM(fArr4, 0, 0.0f, 0.0f, 0.0f, 1.0f);
            Matrix.scaleM(fArr4, 0, f11, f12, 1.0f);
            float[] fArr5 = new float[16];
            Matrix.multiplyMM(fArr5, 0, copyOf, 0, fArr4, 0);
            aVar.f18947b = fArr5;
            i5 = -1;
        }
    }

    @Override // wk.e
    public final void d(rk.a aVar, long j) {
        f fVar = this.f19870b;
        synchronized (fVar.f19878v) {
            do {
                if (fVar.f19879w) {
                    fVar.f19879w = false;
                } else {
                    try {
                        fVar.f19878v.wait(10000L);
                    } catch (InterruptedException e9) {
                        throw new RuntimeException(e9);
                    }
                }
            } while (fVar.f19879w);
            throw new RuntimeException("Surface frame wait timed out");
        }
        ki.b.c("before updateTexImage");
        fVar.f19875d.updateTexImage();
        ArrayList arrayList = this.f19872d;
        if (!this.f19874f) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                uk.a aVar2 = (uk.a) it.next();
                if (aVar2 instanceof uk.a) {
                    f fVar2 = this.f19870b;
                    int i5 = fVar2.f19877i;
                    float[] fArr = new float[16];
                    fVar2.f19875d.getTransformMatrix(fArr);
                    aVar2.j = i5;
                    aVar2.f18948c = fArr;
                }
            }
            this.f19874f = true;
        }
        GLES20.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        GLES20.glClear(16640);
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            uk.a aVar3 = (uk.a) it2.next();
            FloatBuffer floatBuffer = aVar3.f18949d;
            floatBuffer.position(0);
            GLES20.glVertexAttribPointer(aVar3.k, 3, 5126, false, 20, (Buffer) aVar3.f18949d);
            ki.b.c("glVertexAttribPointer maPosition");
            GLES20.glEnableVertexAttribArray(aVar3.k);
            ki.b.c("glEnableVertexAttribArray aPositionHandle");
            floatBuffer.position(3);
            GLES20.glVertexAttribPointer(aVar3.f18955l, 2, 5126, false, 20, (Buffer) aVar3.f18949d);
            ki.b.c("glVertexAttribPointer aTextureHandle");
            GLES20.glEnableVertexAttribArray(aVar3.f18955l);
            ki.b.c("glEnableVertexAttribArray aTextureHandle");
            ki.b.c("onDrawFrame start");
            GLES20.glUseProgram(aVar3.f18952g);
            ki.b.c("glUseProgram");
            GLES20.glActiveTexture(33984);
            GLES20.glBindTexture(36197, aVar3.j);
            GLES20.glUniformMatrix4fv(aVar3.f18953h, 1, false, aVar3.f18947b, 0);
            GLES20.glUniformMatrix4fv(aVar3.f18954i, 1, false, aVar3.f18948c, 0);
            GLES20.glDrawArrays(5, 0, 4);
            ki.b.c("glDrawArrays");
        }
        GLES20.glFinish();
        i iVar = this.f19871c;
        EGLExt.eglPresentationTimeANDROID((EGLDisplay) iVar.f7952d, (EGLSurface) iVar.f7954i, j);
        i iVar2 = this.f19871c;
        EGL14.eglSwapBuffers((EGLDisplay) iVar2.f7952d, (EGLSurface) iVar2.f7954i);
    }

    @Override // wk.e
    public final void release() {
        Iterator it = this.f19872d.iterator();
        while (it.hasNext()) {
            ((uk.a) it.next()).a();
        }
        f fVar = this.f19870b;
        Surface surface = fVar.f19876e;
        if (surface != null) {
            surface.release();
            fVar.f19876e = null;
        }
        i iVar = this.f19871c;
        EGLDisplay eGLDisplay = (EGLDisplay) iVar.f7952d;
        if (eGLDisplay != EGL14.EGL_NO_DISPLAY) {
            EGL14.eglDestroySurface(eGLDisplay, (EGLSurface) iVar.f7954i);
            EGL14.eglDestroyContext((EGLDisplay) iVar.f7952d, (EGLContext) iVar.f7953e);
            EGL14.eglReleaseThread();
            EGL14.eglTerminate((EGLDisplay) iVar.f7952d);
            iVar.f7952d = EGL14.EGL_NO_DISPLAY;
            iVar.f7953e = EGL14.EGL_NO_CONTEXT;
            iVar.f7954i = EGL14.EGL_NO_SURFACE;
        }
        Surface surface2 = (Surface) iVar.f7955v;
        if (surface2 != null) {
            surface2.release();
            iVar.f7955v = null;
        }
    }

    @Override // wk.e
    public final void c(MediaFormat mediaFormat, MediaFormat mediaFormat2) {
    }
}
