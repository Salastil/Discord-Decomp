package me;

import android.graphics.SurfaceTexture;
import android.opengl.GLES20;
import android.opengl.GLSurfaceView;
import android.opengl.Matrix;
import android.util.Log;
import com.google.android.gms.internal.play_billing.w1;
import java.nio.Buffer;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;
import jc.b0;

/* loaded from: classes3.dex */
public final class j implements GLSurfaceView.Renderer, c {
    public float E;
    public final /* synthetic */ k H;

    /* renamed from: d, reason: collision with root package name */
    public final i f14472d;

    /* renamed from: v, reason: collision with root package name */
    public final float[] f14475v;

    /* renamed from: w, reason: collision with root package name */
    public final float[] f14476w;

    /* renamed from: x, reason: collision with root package name */
    public final float[] f14477x;

    /* renamed from: y, reason: collision with root package name */
    public float f14478y;

    /* renamed from: e, reason: collision with root package name */
    public final float[] f14473e = new float[16];

    /* renamed from: i, reason: collision with root package name */
    public final float[] f14474i = new float[16];
    public final float[] F = new float[16];
    public final float[] G = new float[16];

    public j(k kVar, i iVar) {
        this.H = kVar;
        float[] fArr = new float[16];
        this.f14475v = fArr;
        float[] fArr2 = new float[16];
        this.f14476w = fArr2;
        float[] fArr3 = new float[16];
        this.f14477x = fArr3;
        this.f14472d = iVar;
        Matrix.setIdentityM(fArr, 0);
        Matrix.setIdentityM(fArr2, 0);
        Matrix.setIdentityM(fArr3, 0);
        this.E = 3.1415927f;
    }

    @Override // me.c
    public final synchronized void a(float f2, float[] fArr) {
        float[] fArr2 = this.f14475v;
        System.arraycopy(fArr, 0, fArr2, 0, fArr2.length);
        float f10 = -f2;
        this.E = f10;
        Matrix.setRotateM(this.f14476w, 0, -this.f14478y, (float) Math.cos(f10), (float) Math.sin(this.E), 0.0f);
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public final void onDrawFrame(GL10 gl10) {
        Object n6;
        Object n10;
        Object n11;
        float[] fArr;
        synchronized (this) {
            Matrix.multiplyMM(this.G, 0, this.f14475v, 0, this.f14477x, 0);
            Matrix.multiplyMM(this.F, 0, this.f14476w, 0, this.G, 0);
        }
        Matrix.multiplyMM(this.f14474i, 0, this.f14473e, 0, this.F, 0);
        i iVar = this.f14472d;
        float[] fArr2 = this.f14474i;
        GLES20.glClear(16384);
        try {
            ke.b.h();
        } catch (ke.h e9) {
            ke.b.s("SceneRenderer", "Failed to draw a frame", e9);
        }
        if (iVar.f14465d.compareAndSet(true, false)) {
            SurfaceTexture surfaceTexture = iVar.G;
            surfaceTexture.getClass();
            surfaceTexture.updateTexImage();
            try {
                ke.b.h();
            } catch (ke.h e10) {
                ke.b.s("SceneRenderer", "Failed to draw a frame", e10);
            }
            if (iVar.f14466e.compareAndSet(true, false)) {
                Matrix.setIdentityM(iVar.f14471y, 0);
            }
            long timestamp = iVar.G.getTimestamp();
            w1 w1Var = iVar.f14469w;
            synchronized (w1Var) {
                n6 = w1Var.n(timestamp, false);
            }
            Long l6 = (Long) n6;
            if (l6 != null) {
                a3.f fVar = iVar.f14468v;
                float[] fArr3 = iVar.f14471y;
                long longValue = l6.longValue();
                w1 w1Var2 = (w1) fVar.f58d;
                synchronized (w1Var2) {
                    n11 = w1Var2.n(longValue, true);
                }
                float[] fArr4 = (float[]) n11;
                if (fArr4 != null) {
                    float[] fArr5 = (float[]) fVar.f57c;
                    float f2 = fArr4[0];
                    float f10 = -fArr4[1];
                    float f11 = -fArr4[2];
                    float length = Matrix.length(f2, f10, f11);
                    if (length != 0.0f) {
                        fArr = fArr3;
                        Matrix.setRotateM(fArr5, 0, (float) Math.toDegrees(length), f2 / length, f10 / length, f11 / length);
                    } else {
                        fArr = fArr3;
                        Matrix.setIdentityM(fArr5, 0);
                    }
                    if (!fVar.a) {
                        a3.f.e((float[]) fVar.f56b, (float[]) fVar.f57c);
                        fVar.a = true;
                    }
                    Matrix.multiplyMM(fArr, 0, (float[]) fVar.f56b, 0, (float[]) fVar.f57c, 0);
                }
            }
            w1 w1Var3 = iVar.f14470x;
            synchronized (w1Var3) {
                n10 = w1Var3.n(timestamp, true);
            }
            f fVar2 = (f) n10;
            if (fVar2 != null) {
                g gVar = iVar.f14467i;
                gVar.getClass();
                if (g.b(fVar2)) {
                    gVar.a = fVar2.f14454c;
                    w1 w1Var4 = fVar2.a.a[0];
                    w1 w1Var5 = new w1();
                    float[] fArr6 = (float[]) w1Var4.f5868v;
                    w1Var5.f5866e = fArr6.length / 3;
                    w1Var5.f5868v = ke.b.p(fArr6);
                    w1Var5.f5865d = ke.b.p((float[]) w1Var4.f5865d);
                    int i5 = w1Var4.f5867i;
                    if (i5 == 1) {
                        w1Var5.f5867i = 5;
                    } else if (i5 != 2) {
                        w1Var5.f5867i = 4;
                    } else {
                        w1Var5.f5867i = 6;
                    }
                    gVar.f14457b = w1Var5;
                    if (!fVar2.f14455d) {
                        w1 w1Var6 = fVar2.f14453b.a[0];
                        float[] fArr7 = (float[]) w1Var6.f5868v;
                        int length2 = fArr7.length;
                        ke.b.p(fArr7);
                        ke.b.p((float[]) w1Var6.f5865d);
                    }
                }
            }
        }
        Matrix.multiplyMM(iVar.E, 0, fArr2, 0, iVar.f14471y, 0);
        g gVar2 = iVar.f14467i;
        int i6 = iVar.F;
        float[] fArr8 = iVar.E;
        w1 w1Var7 = gVar2.f14457b;
        if (w1Var7 == null) {
            return;
        }
        int i10 = gVar2.a;
        GLES20.glUniformMatrix3fv(gVar2.f14460e, 1, false, i10 == 1 ? g.j : i10 == 2 ? g.k : g.f14456i, 0);
        GLES20.glUniformMatrix4fv(gVar2.f14459d, 1, false, fArr8, 0);
        GLES20.glActiveTexture(33984);
        GLES20.glBindTexture(36197, i6);
        GLES20.glUniform1i(gVar2.f14463h, 0);
        try {
            ke.b.h();
        } catch (ke.h e11) {
            Log.e("ProjectionRenderer", "Failed to bind uniforms", e11);
        }
        GLES20.glVertexAttribPointer(gVar2.f14461f, 3, 5126, false, 12, (Buffer) w1Var7.f5868v);
        try {
            ke.b.h();
        } catch (ke.h e12) {
            Log.e("ProjectionRenderer", "Failed to load position data", e12);
        }
        GLES20.glVertexAttribPointer(gVar2.f14462g, 2, 5126, false, 8, (Buffer) w1Var7.f5865d);
        try {
            ke.b.h();
        } catch (ke.h e13) {
            Log.e("ProjectionRenderer", "Failed to load texture data", e13);
        }
        GLES20.glDrawArrays(w1Var7.f5867i, 0, w1Var7.f5866e);
        try {
            ke.b.h();
        } catch (ke.h e14) {
            Log.e("ProjectionRenderer", "Failed to render", e14);
        }
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public final void onSurfaceChanged(GL10 gl10, int i5, int i6) {
        GLES20.glViewport(0, 0, i5, i6);
        float f2 = i5 / i6;
        Matrix.perspectiveM(this.f14473e, 0, f2 > 1.0f ? (float) (Math.toDegrees(Math.atan(Math.tan(Math.toRadians(45.0d)) / f2)) * 2.0d) : 90.0f, f2, 0.1f, 100.0f);
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public final synchronized void onSurfaceCreated(GL10 gl10, EGLConfig eGLConfig) {
        k kVar = this.H;
        kVar.f14483w.post(new b0(5, kVar, this.f14472d.c()));
    }
}
