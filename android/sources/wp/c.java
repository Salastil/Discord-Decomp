package wp;

import ip.i;
import ip.s0;
import k2.r;
import kotlin.jvm.functions.Function0;
import op.p;
import yq.p0;

/* loaded from: classes3.dex */
public final class c implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final r f19983d;

    /* renamed from: e, reason: collision with root package name */
    public final s0 f19984e;

    /* renamed from: i, reason: collision with root package name */
    public final a f19985i;

    /* renamed from: v, reason: collision with root package name */
    public final p0 f19986v;

    /* renamed from: w, reason: collision with root package name */
    public final p f19987w;

    public c(r rVar, s0 s0Var, a aVar, p0 p0Var, p pVar) {
        this.f19983d = rVar;
        this.f19984e = s0Var;
        this.f19985i = aVar;
        this.f19986v = p0Var;
        this.f19987w = pVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) this.f19983d.f13144v;
        i a = this.f19986v.a();
        return cVar.K(this.f19984e, a.a(a.a(this.f19985i, null, false, null, a != null ? a.k() : null, 31), null, this.f19987w.d(), null, null, 59));
    }
}
