package app.rive.runtime.kotlin.renderers;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2614d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Renderer f2615e;

    public /* synthetic */ a(Renderer renderer, int i5) {
        this.f2614d = i5;
        this.f2615e = renderer;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2614d) {
            case 0:
                Renderer.removeFrameCallback$lambda$4(this.f2615e);
                break;
            default:
                Renderer.scheduleFrame$lambda$3(this.f2615e);
                break;
        }
    }
}
