package com.facebook.react.devsupport.perfmonitor;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4933d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ PerfMonitorOverlayManager f4934e;

    public /* synthetic */ a(PerfMonitorOverlayManager perfMonitorOverlayManager, int i5) {
        this.f4933d = i5;
        this.f4934e = perfMonitorOverlayManager;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4933d) {
            case 0:
                PerfMonitorOverlayManager.onPerfIssueAdded$lambda$5(this.f4934e);
                break;
            case 1:
                PerfMonitorOverlayManager.onPerfIssueAdded$lambda$7(this.f4934e);
                break;
            case 2:
                PerfMonitorOverlayManager.onPerfIssueAdded$lambda$7$lambda$6(this.f4934e);
                break;
            case 3:
                PerfMonitorOverlayManager.disable$lambda$1(this.f4934e);
                break;
            default:
                PerfMonitorOverlayManager.enable$lambda$0(this.f4934e);
                break;
        }
    }
}
