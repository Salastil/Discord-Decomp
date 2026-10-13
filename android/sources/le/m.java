package le;

import android.content.Context;
import android.opengl.GLSurfaceView;

/* loaded from: classes3.dex */
public final class m extends GLSurfaceView implements n {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ int f13919e = 0;

    /* renamed from: d, reason: collision with root package name */
    public final l f13920d;

    public m(Context context) {
        super(context, null);
        l lVar = new l(this);
        this.f13920d = lVar;
        setPreserveEGLContextOnPause(true);
        setEGLContextClientVersion(2);
        setRenderer(lVar);
        setRenderMode(0);
    }

    public void setOutputBuffer(mc.h hVar) {
        l lVar = this.f13920d;
        if (lVar.f13917x.getAndSet(hVar) != null) {
            throw new ClassCastException();
        }
        lVar.f13912d.requestRender();
    }

    @Deprecated
    public n getVideoDecoderOutputBufferRenderer() {
        return this;
    }
}
