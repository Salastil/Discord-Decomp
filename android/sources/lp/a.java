package lp;

import java.util.List;
import kotlin.jvm.functions.Function0;
import yq.z0;

/* loaded from: classes3.dex */
public final class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14121d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b f14122e;

    public /* synthetic */ a(b bVar, int i5) {
        this.f14121d = i5;
        this.f14122e = bVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int i5 = this.f14121d;
        b bVar = this.f14122e;
        switch (i5) {
            case 0:
                rq.o n02 = bVar.n0();
                aq.a aVar = new aq.a(5, this);
                ar.i iVar = z0.a;
                if (ar.l.f(bVar)) {
                    return ar.l.c(ar.k.H, bVar.toString());
                }
                yq.p0 n6 = bVar.n();
                if (n6 == null) {
                    z0.a(12);
                    throw null;
                }
                if (n02 == null) {
                    z0.a(13);
                    throw null;
                }
                List d6 = z0.d(n6.getParameters());
                yq.k0.f21045e.getClass();
                return yq.c.w(yq.k0.f21046i, n6, d6, false, n02, aVar);
            case 1:
                return new rq.i(bVar.n0());
            default:
                return new u(bVar);
        }
    }
}
