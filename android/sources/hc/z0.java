package hc;

import android.util.Pair;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;

/* loaded from: classes3.dex */
public final /* synthetic */ class z0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9943d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ io.sentry.internal.debugmeta.c f9944e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Pair f9945i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ LoadEventInfo f9946v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ MediaLoadData f9947w;

    public /* synthetic */ z0(io.sentry.internal.debugmeta.c cVar, Pair pair, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, int i5) {
        this.f9943d = i5;
        this.f9944e = cVar;
        this.f9945i = pair;
        this.f9946v = loadEventInfo;
        this.f9947w = mediaLoadData;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f9943d) {
            case 0:
                ic.a aVar = (ic.a) ((f1) this.f9944e.f11623i).f9700i;
                Pair pair = this.f9945i;
                ((ic.u) aVar).y(((Integer) pair.first).intValue(), (nd.s) pair.second, this.f9946v, this.f9947w);
                break;
            case 1:
                ic.a aVar2 = (ic.a) ((f1) this.f9944e.f11623i).f9700i;
                Pair pair2 = this.f9945i;
                ((ic.u) aVar2).b(((Integer) pair2.first).intValue(), (nd.s) pair2.second, this.f9946v, this.f9947w);
                break;
            default:
                ic.a aVar3 = (ic.a) ((f1) this.f9944e.f11623i).f9700i;
                Pair pair3 = this.f9945i;
                ((ic.u) aVar3).f(((Integer) pair3.first).intValue(), (nd.s) pair3.second, this.f9946v, this.f9947w);
                break;
        }
    }
}
