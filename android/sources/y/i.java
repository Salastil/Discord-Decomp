package y;

import k2.r;
import kotlin.jvm.functions.Function1;
import s.o;

/* loaded from: classes.dex */
public final class i extends b {

    /* renamed from: i, reason: collision with root package name */
    public final b f20590i;
    public final boolean j;
    public final Function1 k;

    /* renamed from: l, reason: collision with root package name */
    public final Function1 f20591l;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public i(b bVar, Function1 function1, boolean z5, boolean z6) {
        super(0L, f.c(function1, (bVar == null || (r0 = bVar.c()) == null) ? f.f20588h.f20565d : r0, z5), (bVar == null || (r5 = bVar.g()) == null) ? f.f20588h.f20566e : r5);
        Function1 g6;
        Function1 c6;
        r rVar = f.a;
        this.f20590i = bVar;
        this.j = z6;
        this.k = this.f20565d;
        this.f20591l = this.f20566e;
        x.c.a();
    }

    @Override // y.c
    public final void a() {
        b bVar;
        if (!this.j || (bVar = this.f20590i) == null) {
            return;
        }
        bVar.a();
    }

    @Override // y.c
    public final e b() {
        return m().b();
    }

    @Override // y.b, y.c
    public final Function1 c() {
        return this.k;
    }

    @Override // y.b, y.c
    public final boolean d() {
        return m().d();
    }

    @Override // y.c
    public final long e() {
        return m().e();
    }

    @Override // y.b, y.c
    public final int f() {
        return m().f();
    }

    @Override // y.b, y.c
    public final Function1 g() {
        return this.f20591l;
    }

    @Override // y.b, y.c
    public final void h(g gVar) {
        m().h(gVar);
    }

    @Override // y.b, y.c
    public final void i(int i5) {
        m().i(i5);
    }

    @Override // y.b
    public final o j() {
        return m().j();
    }

    @Override // y.b
    /* renamed from: k */
    public final Function1 c() {
        return this.k;
    }

    @Override // y.b
    public final void l(o oVar) {
        throw new UnsupportedOperationException();
    }

    public final b m() {
        b bVar = this.f20590i;
        return bVar == null ? f.f20588h : bVar;
    }
}
