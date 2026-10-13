package com.facebook.react.devsupport;

/* loaded from: classes3.dex */
public final /* synthetic */ class r implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4938d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ LogBoxModule f4939e;

    public /* synthetic */ r(LogBoxModule logBoxModule, int i5) {
        this.f4938d = i5;
        this.f4939e = logBoxModule;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4938d) {
            case 0:
                LogBoxModule.hide$lambda$1(this.f4939e);
                break;
            case 1:
                LogBoxModule.invalidate$lambda$2(this.f4939e);
                break;
            default:
                LogBoxModule.show$lambda$0(this.f4939e);
                break;
        }
    }
}
