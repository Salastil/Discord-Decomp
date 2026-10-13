package di;

/* loaded from: classes3.dex */
public final class h extends i {

    /* renamed from: i, reason: collision with root package name */
    public final transient int f7585i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f7586v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ i f7587w;

    public h(i iVar, int i5, int i6) {
        this.f7587w = iVar;
        this.f7585i = i5;
        this.f7586v = i6;
    }

    @Override // di.f
    public final int b() {
        return this.f7587w.d() + this.f7585i + this.f7586v;
    }

    @Override // di.f
    public final int d() {
        return this.f7587w.d() + this.f7585i;
    }

    @Override // di.f
    public final Object[] e() {
        return this.f7587w.e();
    }

    @Override // java.util.List
    public final Object get(int i5) {
        w3.q.d(i5, this.f7586v);
        return this.f7587w.get(i5 + this.f7585i);
    }

    @Override // di.i, java.util.List
    /* renamed from: h */
    public final i subList(int i5, int i6) {
        w3.q.e(i5, i6, this.f7586v);
        int i10 = this.f7585i;
        return this.f7587w.subList(i5 + i10, i6 + i10);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f7586v;
    }
}
