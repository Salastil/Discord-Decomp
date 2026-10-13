package fi;

/* loaded from: classes3.dex */
public final class d1 extends h0 {

    /* renamed from: v, reason: collision with root package name */
    public final transient Object f8653v;

    public d1(Object obj) {
        obj.getClass();
        this.f8653v = obj;
    }

    @Override // fi.h0, fi.z
    public final e0 a() {
        return e0.s(this.f8653v);
    }

    @Override // fi.z
    public final int b(int i5, Object[] objArr) {
        objArr[i5] = this.f8653v;
        return i5 + 1;
    }

    @Override // fi.z, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f8653v.equals(obj);
    }

    @Override // fi.h0, java.util.Collection, java.util.Set
    public final int hashCode() {
        return this.f8653v.hashCode();
    }

    @Override // fi.z
    public final boolean i() {
        return false;
    }

    @Override // fi.h0
    /* renamed from: p */
    public final e1 iterator() {
        return new j0(this.f8653v);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return 1;
    }

    @Override // java.util.AbstractCollection
    public final String toString() {
        String obj = this.f8653v.toString();
        StringBuilder sb2 = new StringBuilder(String.valueOf(obj).length() + 2);
        sb2.append('[');
        sb2.append(obj);
        sb2.append(']');
        return sb2.toString();
    }
}
