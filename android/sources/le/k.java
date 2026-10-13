package le;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.opengl.EGL14;
import android.os.Handler;
import android.view.Surface;
import ke.d0;

/* loaded from: classes3.dex */
public final class k extends Surface {

    /* renamed from: v, reason: collision with root package name */
    public static int f13907v;

    /* renamed from: w, reason: collision with root package name */
    public static boolean f13908w;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f13909d;

    /* renamed from: e, reason: collision with root package name */
    public final j f13910e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f13911i;

    public k(j jVar, SurfaceTexture surfaceTexture, boolean z5) {
        super(surfaceTexture);
        this.f13910e = jVar;
        this.f13909d = z5;
    }

    public static int a(Context context) {
        String eglQueryString;
        String eglQueryString2;
        int i5 = d0.a;
        if (i5 >= 24 && ((i5 >= 26 || !("samsung".equals(d0.f13295c) || "XT1650".equals(d0.f13296d))) && ((i5 >= 26 || context.getPackageManager().hasSystemFeature("android.hardware.vr.high_performance")) && (eglQueryString = EGL14.eglQueryString(EGL14.eglGetDisplay(0), 12373)) != null && eglQueryString.contains("EGL_EXT_protected_content")))) {
            return (i5 >= 17 && (eglQueryString2 = EGL14.eglQueryString(EGL14.eglGetDisplay(0), 12373)) != null && eglQueryString2.contains("EGL_KHR_surfaceless_context")) ? 1 : 2;
        }
        return 0;
    }

    public static synchronized boolean h(Context context) {
        boolean z5;
        synchronized (k.class) {
            try {
                if (!f13908w) {
                    f13907v = a(context);
                    f13908w = true;
                }
                z5 = f13907v != 0;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return z5;
    }

    public static k i(Context context, boolean z5) {
        boolean z6 = false;
        ke.b.k(!z5 || h(context));
        j jVar = new j("ExoPlayer:PlaceholderSurface");
        int i5 = z5 ? f13907v : 0;
        jVar.start();
        Handler handler = new Handler(jVar.getLooper(), jVar);
        jVar.f13903e = handler;
        jVar.f13902d = new ke.e(handler);
        synchronized (jVar) {
            jVar.f13903e.obtainMessage(1, i5, 0).sendToTarget();
            while (jVar.f13906w == null && jVar.f13905v == null && jVar.f13904i == null) {
                try {
                    jVar.wait();
                } catch (InterruptedException unused) {
                    z6 = true;
                }
            }
        }
        if (z6) {
            Thread.currentThread().interrupt();
        }
        RuntimeException runtimeException = jVar.f13905v;
        if (runtimeException != null) {
            throw runtimeException;
        }
        Error error = jVar.f13904i;
        if (error != null) {
            throw error;
        }
        k kVar = jVar.f13906w;
        kVar.getClass();
        return kVar;
    }

    @Override // android.view.Surface
    public final void release() {
        super.release();
        synchronized (this.f13910e) {
            try {
                if (!this.f13911i) {
                    j jVar = this.f13910e;
                    jVar.f13903e.getClass();
                    jVar.f13903e.sendEmptyMessage(2);
                    this.f13911i = true;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
