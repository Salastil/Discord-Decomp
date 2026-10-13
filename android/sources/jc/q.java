package jc;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.decoder.DecoderCounters;

/* loaded from: classes3.dex */
public final /* synthetic */ class q implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12605d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e4.c f12606e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ DecoderCounters f12607i;

    public /* synthetic */ q(e4.c cVar, DecoderCounters decoderCounters, int i5) {
        this.f12605d = i5;
        this.f12606e = cVar;
        this.f12607i = decoderCounters;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f12605d) {
            case 0:
                e4.c cVar = this.f12606e;
                DecoderCounters decoderCounters = this.f12607i;
                hc.w wVar = (hc.w) cVar.f7940i;
                int i5 = ke.d0.a;
                ic.u uVar = (ic.u) wVar.f9929d.f5368q;
                AnalyticsListener$EventTime j = uVar.j();
                uVar.k(j, 1007, new ic.n(j, decoderCounters, 3));
                break;
            default:
                e4.c cVar2 = this.f12606e;
                DecoderCounters decoderCounters2 = this.f12607i;
                synchronized (decoderCounters2) {
                }
                hc.w wVar2 = (hc.w) cVar2.f7940i;
                int i6 = ke.d0.a;
                ic.u uVar2 = (ic.u) wVar2.f9929d.f5368q;
                AnalyticsListener$EventTime g6 = uVar2.g((nd.s) uVar2.f10546v.f1145w);
                uVar2.k(g6, 1013, new ic.n(g6, decoderCounters2, 1));
                break;
        }
    }
}
