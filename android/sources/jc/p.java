package jc;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class p implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12598d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e4.c f12599e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Exception f12600i;

    public /* synthetic */ p(e4.c cVar, Exception exc, int i5) {
        this.f12598d = i5;
        this.f12599e = cVar;
        this.f12600i = exc;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f12598d;
        Exception exc = this.f12600i;
        e4.c cVar = this.f12599e;
        switch (i5) {
            case 0:
                hc.w wVar = (hc.w) cVar.f7940i;
                int i6 = ke.d0.a;
                ic.u uVar = (ic.u) wVar.f9929d.f5368q;
                AnalyticsListener$EventTime j = uVar.j();
                uVar.k(j, 1029, new ic.r(j, exc, 3));
                break;
            default:
                hc.w wVar2 = (hc.w) cVar.f7940i;
                int i10 = ke.d0.a;
                ic.u uVar2 = (ic.u) wVar2.f9929d.f5368q;
                AnalyticsListener$EventTime j5 = uVar2.j();
                uVar2.k(j5, 1014, new ic.r(j5, exc, 0));
                break;
        }
    }
}
