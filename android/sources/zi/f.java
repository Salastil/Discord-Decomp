package zi;

/* loaded from: classes3.dex */
public final class f implements i {
    public final j a;

    /* renamed from: b, reason: collision with root package name */
    public final jg.g f21263b;

    public f(j jVar, jg.g gVar) {
        this.a = jVar;
        this.f21263b = gVar;
    }

    @Override // zi.i
    public final boolean a(Exception exc) {
        this.f21263b.c(exc);
        return true;
    }

    @Override // zi.i
    public final boolean b(aj.b bVar) {
        if (bVar.f641b != 4 || this.a.a(bVar)) {
            return false;
        }
        String str = bVar.f642c;
        if (str == null) {
            throw new NullPointerException("Null token");
        }
        this.f21263b.b(new a(bVar.f644e, bVar.f645f, str));
        return true;
    }
}
