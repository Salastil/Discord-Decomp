package zi;

/* loaded from: classes3.dex */
public final class g implements i {
    public final jg.g a;

    public g(jg.g gVar) {
        this.a = gVar;
    }

    @Override // zi.i
    public final boolean a(Exception exc) {
        return false;
    }

    @Override // zi.i
    public final boolean b(aj.b bVar) {
        int i5 = bVar.f641b;
        if (i5 != 3 && i5 != 4 && i5 != 5) {
            return false;
        }
        this.a.d(bVar.a);
        return true;
    }
}
