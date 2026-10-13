package le;

import android.graphics.SurfaceTexture;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES20;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import java.util.Locale;
import ke.d0;

/* loaded from: classes3.dex */
public final class j extends HandlerThread implements Handler.Callback {

    /* renamed from: d, reason: collision with root package name */
    public ke.e f13902d;

    /* renamed from: e, reason: collision with root package name */
    public Handler f13903e;

    /* renamed from: i, reason: collision with root package name */
    public Error f13904i;

    /* renamed from: v, reason: collision with root package name */
    public RuntimeException f13905v;

    /* renamed from: w, reason: collision with root package name */
    public k f13906w;

    public final void a(int i5) {
        EGLSurface eglCreatePbufferSurface;
        this.f13902d.getClass();
        ke.e eVar = this.f13902d;
        int[] iArr = eVar.f13308e;
        EGLDisplay eglGetDisplay = EGL14.eglGetDisplay(0);
        ke.b.i("eglGetDisplay failed", eglGetDisplay != null);
        int[] iArr2 = new int[2];
        ke.b.i("eglInitialize failed", EGL14.eglInitialize(eglGetDisplay, iArr2, 0, iArr2, 1));
        eVar.f13309i = eglGetDisplay;
        EGLConfig[] eGLConfigArr = new EGLConfig[1];
        int[] iArr3 = new int[1];
        boolean eglChooseConfig = EGL14.eglChooseConfig(eglGetDisplay, ke.e.f13306y, 0, eGLConfigArr, 0, 1, iArr3, 0);
        boolean z5 = eglChooseConfig && iArr3[0] > 0 && eGLConfigArr[0] != null;
        Object[] objArr = {Boolean.valueOf(eglChooseConfig), Integer.valueOf(iArr3[0]), eGLConfigArr[0]};
        int i6 = d0.a;
        ke.b.i(String.format(Locale.US, "eglChooseConfig failed: success=%b, numConfigs[0]=%d, configs[0]=%s", objArr), z5);
        EGLConfig eGLConfig = eGLConfigArr[0];
        EGLContext eglCreateContext = EGL14.eglCreateContext(eVar.f13309i, eGLConfig, EGL14.EGL_NO_CONTEXT, i5 == 0 ? new int[]{12440, 2, 12344} : new int[]{12440, 2, 12992, 1, 12344}, 0);
        ke.b.i("eglCreateContext failed", eglCreateContext != null);
        eVar.f13310v = eglCreateContext;
        EGLDisplay eGLDisplay = eVar.f13309i;
        if (i5 == 1) {
            eglCreatePbufferSurface = EGL14.EGL_NO_SURFACE;
        } else {
            eglCreatePbufferSurface = EGL14.eglCreatePbufferSurface(eGLDisplay, eGLConfig, i5 == 2 ? new int[]{12375, 1, 12374, 1, 12992, 1, 12344} : new int[]{12375, 1, 12374, 1, 12344}, 0);
            ke.b.i("eglCreatePbufferSurface failed", eglCreatePbufferSurface != null);
        }
        ke.b.i("eglMakeCurrent failed", EGL14.eglMakeCurrent(eGLDisplay, eglCreatePbufferSurface, eglCreatePbufferSurface, eglCreateContext));
        eVar.f13311w = eglCreatePbufferSurface;
        GLES20.glGenTextures(1, iArr, 0);
        ke.b.h();
        SurfaceTexture surfaceTexture = new SurfaceTexture(iArr[0]);
        eVar.f13312x = surfaceTexture;
        surfaceTexture.setOnFrameAvailableListener(eVar);
        SurfaceTexture surfaceTexture2 = this.f13902d.f13312x;
        surfaceTexture2.getClass();
        this.f13906w = new k(this, surfaceTexture2, i5 != 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void b() {
        this.f13902d.getClass();
        ke.e eVar = this.f13902d;
        eVar.f13307d.removeCallbacks(eVar);
        try {
            SurfaceTexture surfaceTexture = eVar.f13312x;
            if (surfaceTexture != null) {
                surfaceTexture.release();
                GLES20.glDeleteTextures(1, eVar.f13308e, 0);
            }
        } finally {
            EGLDisplay eGLDisplay = eVar.f13309i;
            if (eGLDisplay != null && !eGLDisplay.equals(EGL14.EGL_NO_DISPLAY)) {
                EGLDisplay eGLDisplay2 = eVar.f13309i;
                EGLSurface eGLSurface = EGL14.EGL_NO_SURFACE;
                EGL14.eglMakeCurrent(eGLDisplay2, eGLSurface, eGLSurface, EGL14.EGL_NO_CONTEXT);
            }
            EGLSurface eGLSurface2 = eVar.f13311w;
            if (eGLSurface2 != null && !eGLSurface2.equals(EGL14.EGL_NO_SURFACE)) {
                EGL14.eglDestroySurface(eVar.f13309i, eVar.f13311w);
            }
            EGLContext eGLContext = eVar.f13310v;
            if (eGLContext != null) {
                EGL14.eglDestroyContext(eVar.f13309i, eGLContext);
            }
            if (d0.a >= 19) {
                EGL14.eglReleaseThread();
            }
            EGLDisplay eGLDisplay3 = eVar.f13309i;
            if (eGLDisplay3 != null && !eGLDisplay3.equals(EGL14.EGL_NO_DISPLAY)) {
                EGL14.eglTerminate(eVar.f13309i);
            }
            eVar.f13309i = null;
            eVar.f13310v = null;
            eVar.f13311w = null;
            eVar.f13312x = null;
        }
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        int i5 = message.what;
        try {
            if (i5 == 1) {
                try {
                    a(message.arg1);
                    synchronized (this) {
                        notify();
                    }
                    return true;
                } catch (Error e9) {
                    ke.b.s("PlaceholderSurface", "Failed to initialize placeholder surface", e9);
                    this.f13904i = e9;
                    synchronized (this) {
                        notify();
                    }
                } catch (RuntimeException e10) {
                    ke.b.s("PlaceholderSurface", "Failed to initialize placeholder surface", e10);
                    this.f13905v = e10;
                    synchronized (this) {
                        notify();
                    }
                } catch (ke.h e11) {
                    ke.b.s("PlaceholderSurface", "Failed to initialize placeholder surface", e11);
                    this.f13905v = new IllegalStateException(e11);
                    synchronized (this) {
                        notify();
                    }
                }
            } else if (i5 == 2) {
                try {
                    b();
                    return true;
                } catch (Throwable th2) {
                    try {
                        ke.b.s("PlaceholderSurface", "Failed to release placeholder surface", th2);
                        return true;
                    } finally {
                        quit();
                    }
                }
            }
            return true;
        } catch (Throwable th3) {
            synchronized (this) {
                notify();
                throw th3;
            }
        }
    }
}
