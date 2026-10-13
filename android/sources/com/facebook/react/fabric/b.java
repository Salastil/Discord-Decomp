package com.facebook.react.fabric;

import com.facebook.react.fabric.FabricUIManager;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4943d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4944e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f4943d = i5;
        this.f4944e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4943d) {
            case 0:
                ((FabricUIManager.MountItemDispatchListener) this.f4944e).lambda$didMountItems$0();
                break;
            default:
                ViewTransitionSnapshotManager.clearPendingSnapshots$lambda$6((ViewTransitionSnapshotManager) this.f4944e);
                break;
        }
    }
}
