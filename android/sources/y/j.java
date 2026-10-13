package y;

import k2.r;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final class j extends c {

    /* renamed from: d, reason: collision with root package name */
    public final c f20592d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f20593e;

    /* renamed from: f, reason: collision with root package name */
    public final Function1 f20594f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(c cVar, Function1 function1, boolean z5) {
        super(0L, e.f20577w);
        Function1 c6;
        r rVar = f.a;
        this.f20592d = cVar;
        this.f20593e = z5;
        this.f20594f = f.c(function1, (cVar == null || (c6 = cVar.c()) == null) ? f.f20588h.f20565d : c6, false);
        x.c.a();
    }

    @Override // y.c
    public final void a() {
        c cVar;
        if (!this.f20593e || (cVar = this.f20592d) == null) {
            return;
        }
        cVar.a();
    }

    @Override // y.c
    public final e b() {
        return j().b();
    }

    @Override // y.c
    public final Function1 c() {
        return this.f20594f;
    }

    @Override // y.c
    public final boolean d() {
        return j().d();
    }

    @Override // y.c
    public final long e() {
        return j().e();
    }

    @Override // y.c
    public final Function1 g() {
        return null;
    }

    @Override // y.c
    public final void h(g gVar) {
        j().h(gVar);
    }

    public final c j() {
        c cVar = this.f20592d;
        return cVar == null ? f.f20588h : cVar;
    }
}
