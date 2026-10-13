package hc;

import android.util.Pair;

/* loaded from: classes3.dex */
public final /* synthetic */ class a1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9621d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ io.sentry.internal.debugmeta.c f9622e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Pair f9623i;

    public /* synthetic */ a1(io.sentry.internal.debugmeta.c cVar, Pair pair, int i5) {
        this.f9621d = i5;
        this.f9622e = cVar;
        this.f9623i = pair;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f9621d) {
            case 0:
                ic.a aVar = (ic.a) ((f1) this.f9622e.f11623i).f9700i;
                Pair pair = this.f9623i;
                ((ic.u) aVar).C(((Integer) pair.first).intValue(), (nd.s) pair.second);
                break;
            case 1:
                ic.a aVar2 = (ic.a) ((f1) this.f9622e.f11623i).f9700i;
                Pair pair2 = this.f9623i;
                ((ic.u) aVar2).s(((Integer) pair2.first).intValue(), (nd.s) pair2.second);
                break;
            default:
                ic.a aVar3 = (ic.a) ((f1) this.f9622e.f11623i).f9700i;
                Pair pair3 = this.f9623i;
                ((ic.u) aVar3).r(((Integer) pair3.first).intValue(), (nd.s) pair3.second);
                break;
        }
    }
}
