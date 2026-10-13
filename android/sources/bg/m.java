package bg;

/* loaded from: classes3.dex */
public final class m extends p {

    /* renamed from: i, reason: collision with root package name */
    public final transient p f2965i;

    public m(p pVar) {
        this.f2965i = pVar;
    }

    @Override // bg.p, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        return this.f2965i.contains(obj);
    }

    @Override // java.util.List
    public final Object get(int i5) {
        p pVar = this.f2965i;
        b.e(i5, pVar.size());
        return pVar.get((pVar.size() - 1) - i5);
    }

    @Override // bg.p
    public final p i() {
        return this.f2965i;
    }

    @Override // bg.p, java.util.List
    public final int indexOf(Object obj) {
        int lastIndexOf = this.f2965i.lastIndexOf(obj);
        if (lastIndexOf >= 0) {
            return (r0.size() - 1) - lastIndexOf;
        }
        return -1;
    }

    @Override // bg.p, java.util.List
    /* renamed from: j */
    public final p subList(int i5, int i6) {
        p pVar = this.f2965i;
        b.m(i5, i6, pVar.size());
        return pVar.subList(pVar.size() - i6, pVar.size() - i5).i();
    }

    @Override // bg.p, java.util.List
    public final int lastIndexOf(Object obj) {
        int indexOf = this.f2965i.indexOf(obj);
        if (indexOf >= 0) {
            return (r0.size() - 1) - indexOf;
        }
        return -1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f2965i.size();
    }
}
