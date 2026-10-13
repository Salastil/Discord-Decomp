package hc;

import android.util.Pair;
import com.google.android.exoplayer2.source.MediaLoadData;

/* loaded from: classes3.dex */
public final /* synthetic */ class b1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9632d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ io.sentry.internal.debugmeta.c f9633e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Pair f9634i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ MediaLoadData f9635v;

    public /* synthetic */ b1(io.sentry.internal.debugmeta.c cVar, Pair pair, MediaLoadData mediaLoadData, int i5) {
        this.f9632d = i5;
        this.f9633e = cVar;
        this.f9634i = pair;
        this.f9635v = mediaLoadData;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f9632d) {
            case 0:
                ic.a aVar = (ic.a) ((f1) this.f9633e.f11623i).f9700i;
                Pair pair = this.f9634i;
                ((ic.u) aVar).h(((Integer) pair.first).intValue(), (nd.s) pair.second, this.f9635v);
                break;
            default:
                ic.a aVar2 = (ic.a) ((f1) this.f9633e.f11623i).f9700i;
                Pair pair2 = this.f9634i;
                int intValue = ((Integer) pair2.first).intValue();
                nd.s sVar = (nd.s) pair2.second;
                sVar.getClass();
                ((ic.u) aVar2).z(intValue, sVar, this.f9635v);
                break;
        }
    }
}
