package wk;

import android.graphics.SurfaceTexture;
import android.opengl.GLES20;
import android.view.Surface;

/* loaded from: classes3.dex */
public final class f implements SurfaceTexture.OnFrameAvailableListener {

    /* renamed from: d, reason: collision with root package name */
    public final SurfaceTexture f19875d;

    /* renamed from: e, reason: collision with root package name */
    public Surface f19876e;

    /* renamed from: i, reason: collision with root package name */
    public final int f19877i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f19878v = new Object();

    /* renamed from: w, reason: collision with root package name */
    public boolean f19879w;

    public f(int i5, int i6) {
        int[] iArr = new int[1];
        GLES20.glGenTextures(1, iArr, 0);
        int i10 = iArr[0];
        GLES20.glBindTexture(36197, i10);
        ki.b.c("glBindTexture textureID");
        GLES20.glTexParameterf(36197, 10241, 9729.0f);
        GLES20.glTexParameterf(36197, 10240, 9729.0f);
        GLES20.glTexParameteri(36197, 10242, 33071);
        GLES20.glTexParameteri(36197, 10243, 33071);
        ki.b.c("glTexParameter");
        this.f19877i = i10;
        SurfaceTexture surfaceTexture = new SurfaceTexture(i10);
        this.f19875d = surfaceTexture;
        if (i5 != -1 && i6 != -1) {
            surfaceTexture.setDefaultBufferSize(i5, i6);
        }
        this.f19876e = new Surface(surfaceTexture);
        surfaceTexture.setOnFrameAvailableListener(this);
    }

    @Override // android.graphics.SurfaceTexture.OnFrameAvailableListener
    public final void onFrameAvailable(SurfaceTexture surfaceTexture) {
        synchronized (this.f19878v) {
            try {
                if (this.f19879w) {
                    throw new RuntimeException("frameAvailable already set, frame could be dropped");
                }
                this.f19879w = true;
                this.f19878v.notifyAll();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
