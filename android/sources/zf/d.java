package zf;

import w3.q;

/* loaded from: classes3.dex */
public final class d extends e {

    /* renamed from: i, reason: collision with root package name */
    public final transient int f21224i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f21225v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ e f21226w;

    public d(e eVar, int i5, int i6) {
        this.f21226w = eVar;
        this.f21224i = i5;
        this.f21225v = i6;
    }

    @Override // zf.a
    public final Object[] a() {
        return this.f21226w.a();
    }

    @Override // zf.a
    public final int b() {
        return this.f21226w.b() + this.f21224i;
    }

    @Override // zf.a
    public final int d() {
        return this.f21226w.b() + this.f21224i + this.f21225v;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        q.F(i5, this.f21225v);
        return this.f21226w.get(i5 + this.f21224i);
    }

    @Override // zf.e, java.util.List
    /* renamed from: i */
    public final e subList(int i5, int i6) {
        q.H(i5, i6, this.f21225v);
        int i10 = this.f21224i;
        return this.f21226w.subList(i5 + i10, i6 + i10);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f21225v;
    }
}
