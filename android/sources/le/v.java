package le;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import hc.w;
import ke.d0;

/* loaded from: classes3.dex */
public final /* synthetic */ class v implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13946d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e4.l f13947e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ DecoderCounters f13948i;

    public /* synthetic */ v(e4.l lVar, DecoderCounters decoderCounters, int i5) {
        this.f13946d = i5;
        this.f13947e = lVar;
        this.f13948i = decoderCounters;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f13946d) {
            case 0:
                e4.l lVar = this.f13947e;
                DecoderCounters decoderCounters = this.f13948i;
                synchronized (decoderCounters) {
                }
                w wVar = (w) lVar.f7960i;
                int i5 = d0.a;
                com.google.android.exoplayer2.d dVar = wVar.f9929d;
                ic.u uVar = (ic.u) dVar.f5368q;
                AnalyticsListener$EventTime g6 = uVar.g((nd.s) uVar.f10546v.f1145w);
                uVar.k(g6, 1020, new ic.n(g6, decoderCounters, 2));
                dVar.N = null;
                break;
            default:
                e4.l lVar2 = this.f13947e;
                DecoderCounters decoderCounters2 = this.f13948i;
                w wVar2 = (w) lVar2.f7960i;
                int i6 = d0.a;
                ic.u uVar2 = (ic.u) wVar2.f9929d.f5368q;
                AnalyticsListener$EventTime j = uVar2.j();
                uVar2.k(j, 1015, new ic.n(j, decoderCounters2, 0));
                break;
        }
    }
}
