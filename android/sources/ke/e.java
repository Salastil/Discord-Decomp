package ke;

import android.graphics.SurfaceTexture;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.os.Handler;

/* loaded from: classes3.dex */
public final class e implements SurfaceTexture.OnFrameAvailableListener, Runnable {

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f13306y = {12352, 4, 12324, 8, 12323, 8, 12322, 8, 12321, 8, 12325, 0, 12327, 12344, 12339, 4, 12344};

    /* renamed from: d, reason: collision with root package name */
    public final Handler f13307d;

    /* renamed from: e, reason: collision with root package name */
    public final int[] f13308e = new int[1];

    /* renamed from: i, reason: collision with root package name */
    public EGLDisplay f13309i;

    /* renamed from: v, reason: collision with root package name */
    public EGLContext f13310v;

    /* renamed from: w, reason: collision with root package name */
    public EGLSurface f13311w;

    /* renamed from: x, reason: collision with root package name */
    public SurfaceTexture f13312x;

    public e(Handler handler) {
        this.f13307d = handler;
    }

    @Override // android.graphics.SurfaceTexture.OnFrameAvailableListener
    public final void onFrameAvailable(SurfaceTexture surfaceTexture) {
        this.f13307d.post(this);
    }

    @Override // java.lang.Runnable
    public final void run() {
        SurfaceTexture surfaceTexture = this.f13312x;
        if (surfaceTexture != null) {
            try {
                surfaceTexture.updateTexImage();
            } catch (RuntimeException unused) {
            }
        }
    }
}
