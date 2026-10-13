package zf;

import w3.q;

/* loaded from: classes3.dex */
public final class c extends e {

    /* renamed from: i, reason: collision with root package name */
    public final transient e f21223i;

    public c(e eVar) {
        this.f21223i = eVar;
    }

    @Override // zf.e, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        return this.f21223i.contains(obj);
    }

    @Override // java.util.List
    public final Object get(int i5) {
        e eVar = this.f21223i;
        q.F(i5, eVar.size());
        return eVar.get((eVar.size() - 1) - i5);
    }

    @Override // zf.e
    public final e h() {
        return this.f21223i;
    }

    @Override // zf.e, java.util.List
    /* renamed from: i, reason: merged with bridge method [inline-methods] */
    public final e subList(int i5, int i6) {
        e eVar = this.f21223i;
        q.H(i5, i6, eVar.size());
        return eVar.subList(eVar.size() - i6, eVar.size() - i5).h();
    }

    @Override // zf.e, java.util.List
    public final int indexOf(Object obj) {
        int lastIndexOf = this.f21223i.lastIndexOf(obj);
        if (lastIndexOf >= 0) {
            return (r0.size() - 1) - lastIndexOf;
        }
        return -1;
    }

    @Override // zf.e, java.util.List
    public final int lastIndexOf(Object obj) {
        int indexOf = this.f21223i.indexOf(obj);
        if (indexOf >= 0) {
            return (r0.size() - 1) - indexOf;
        }
        return -1;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f21223i.size();
    }
}
