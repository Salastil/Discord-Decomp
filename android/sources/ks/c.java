package ks;

/* loaded from: classes3.dex */
public abstract class c extends s {
    public int m(c cVar) {
        long o6 = o();
        long o7 = cVar.o();
        if (o6 < o7) {
            return -1;
        }
        return o6 == o7 ? 0 : 1;
    }

    @Override // ks.s
    /* renamed from: n, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final int i(c cVar) {
        if (j().f13682d == cVar.j().f13682d) {
            return m(cVar);
        }
        throw new ClassCastException("Cannot compare different types of dates, use instance of EpochDays as comparator instead.");
    }

    public long o() {
        return j().c().n(this);
    }

    public final boolean p(c cVar) {
        return m(cVar) > 0;
    }
}
