package com.swmansion.reanimated;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6662d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ DrawPassDetector f6663e;

    public /* synthetic */ a(DrawPassDetector drawPassDetector, int i5) {
        this.f6662d = i5;
        this.f6663e = drawPassDetector;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f6662d) {
            case 0:
                this.f6663e.lambda$new$0();
                break;
            default:
                this.f6663e.invalidateOnUiThread();
                break;
        }
    }
}
