package io.sentry.android.replay.screenshot;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11390d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ CanvasStrategy f11391e;

    public /* synthetic */ b(CanvasStrategy canvasStrategy, int i5) {
        this.f11390d = i5;
        this.f11391e = canvasStrategy;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11390d) {
            case 0:
                CanvasStrategy.pictureRenderTask$lambda$3(this.f11391e);
                break;
            default:
                CanvasStrategy.close$lambda$6(this.f11391e);
                break;
        }
    }
}
