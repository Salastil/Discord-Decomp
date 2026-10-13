package com.facebook.react.fabric;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4945d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ViewTransitionSnapshotManager f4946e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f4947i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f4948v;

    public /* synthetic */ d(ViewTransitionSnapshotManager viewTransitionSnapshotManager, int i5, int i6, int i10) {
        this.f4945d = i10;
        this.f4946e = viewTransitionSnapshotManager;
        this.f4947i = i5;
        this.f4948v = i6;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4945d) {
            case 0:
                ViewTransitionSnapshotManager.setViewSnapshot$lambda$5(this.f4946e, this.f4947i, this.f4948v);
                break;
            default:
                ViewTransitionSnapshotManager.captureViewSnapshot$lambda$1(this.f4946e, this.f4947i, this.f4948v);
                break;
        }
    }
}
