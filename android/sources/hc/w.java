package hc;

import android.graphics.SurfaceTexture;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.TextureView;

/* loaded from: classes3.dex */
public final class w implements SurfaceHolder.Callback, TextureView.SurfaceTextureListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ com.google.android.exoplayer2.d f9929d;

    public w(com.google.android.exoplayer2.d dVar) {
        this.f9929d = dVar;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i5, int i6) {
        Surface surface = new Surface(surfaceTexture);
        com.google.android.exoplayer2.d dVar = this.f9929d;
        dVar.r0(surface);
        dVar.Q = surface;
        dVar.l0(i5, i6);
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
        com.google.android.exoplayer2.d dVar = this.f9929d;
        dVar.r0(null);
        dVar.l0(0, 0);
        return true;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i5, int i6) {
        this.f9929d.l0(i5, i6);
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceChanged(SurfaceHolder surfaceHolder, int i5, int i6, int i10) {
        this.f9929d.l0(i6, i10);
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceCreated(SurfaceHolder surfaceHolder) {
        com.google.android.exoplayer2.d dVar = this.f9929d;
        if (dVar.T) {
            dVar.r0(surfaceHolder.getSurface());
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceDestroyed(SurfaceHolder surfaceHolder) {
        com.google.android.exoplayer2.d dVar = this.f9929d;
        if (dVar.T) {
            dVar.r0(null);
        }
        dVar.l0(0, 0);
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
    }
}
