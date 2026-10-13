package fi;

/* loaded from: classes3.dex */
public final class u0 extends h0 {

    /* renamed from: v, reason: collision with root package name */
    public final transient w0 f8722v;

    /* renamed from: w, reason: collision with root package name */
    public final transient v0 f8723w;

    public u0(w0 w0Var, v0 v0Var) {
        this.f8722v = w0Var;
        this.f8723w = v0Var;
    }

    @Override // fi.h0, fi.z
    public final e0 a() {
        return this.f8723w;
    }

    @Override // fi.z
    public final int b(int i5, Object[] objArr) {
        return this.f8723w.b(i5, objArr);
    }

    @Override // fi.z, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f8722v.get(obj) != null;
    }

    @Override // fi.z
    public final boolean i() {
        return true;
    }

    @Override // fi.h0
    /* renamed from: p */
    public final e1 iterator() {
        return this.f8723w.listIterator(0);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f8722v.f8734x;
    }
}
