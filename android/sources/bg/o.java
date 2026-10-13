package bg;

/* loaded from: classes3.dex */
public final class o extends p {

    /* renamed from: i, reason: collision with root package name */
    public final transient int f2976i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f2977v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ p f2978w;

    public o(p pVar, int i5, int i6) {
        this.f2978w = pVar;
        this.f2976i = i5;
        this.f2977v = i6;
    }

    @Override // bg.k
    public final int b() {
        return this.f2978w.d() + this.f2976i + this.f2977v;
    }

    @Override // bg.k
    public final int d() {
        return this.f2978w.d() + this.f2976i;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        b.e(i5, this.f2977v);
        return this.f2978w.get(i5 + this.f2976i);
    }

    @Override // bg.k
    public final Object[] h() {
        return this.f2978w.h();
    }

    @Override // bg.p, java.util.List
    /* renamed from: j */
    public final p subList(int i5, int i6) {
        b.m(i5, i6, this.f2977v);
        int i10 = this.f2976i;
        return this.f2978w.subList(i5 + i10, i6 + i10);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f2977v;
    }
}
