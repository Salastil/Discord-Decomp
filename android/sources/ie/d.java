package ie;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10657d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f10658e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ long f10659i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ long f10660v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f10661w;

    public /* synthetic */ d(Object obj, int i5, long j, long j5, int i6) {
        this.f10657d = i6;
        this.f10661w = obj;
        this.f10658e = i5;
        this.f10659i = j;
        this.f10660v = j5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f10657d;
        Object obj = this.f10661w;
        switch (i5) {
            case 0:
                ((e) obj).f10664b.a(this.f10658e, this.f10659i, this.f10660v);
                break;
            default:
                hc.w wVar = (hc.w) ((e4.c) obj).f7940i;
                int i6 = ke.d0.a;
                ic.u uVar = (ic.u) wVar.f9929d.f5368q;
                AnalyticsListener$EventTime j = uVar.j();
                uVar.k(j, 1011, new ic.f(j, this.f10658e, this.f10659i, this.f10660v, 0));
                break;
        }
    }
}
