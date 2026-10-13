package fi;

import java.util.Map;

/* loaded from: classes3.dex */
public final class t0 extends h0 {

    /* renamed from: v, reason: collision with root package name */
    public final transient w0 f8718v;

    /* renamed from: w, reason: collision with root package name */
    public final transient Object[] f8719w;

    /* renamed from: x, reason: collision with root package name */
    public final transient int f8720x;

    public t0(w0 w0Var, Object[] objArr, int i5) {
        this.f8718v = w0Var;
        this.f8719w = objArr;
        this.f8720x = i5;
    }

    @Override // fi.z
    public final int b(int i5, Object[] objArr) {
        return a().b(i5, objArr);
    }

    @Override // fi.z, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj instanceof Map.Entry) {
            Map.Entry entry = (Map.Entry) obj;
            Object key = entry.getKey();
            Object value = entry.getValue();
            if (value != null && value.equals(this.f8718v.get(key))) {
                return true;
            }
        }
        return false;
    }

    @Override // fi.z
    public final boolean i() {
        return true;
    }

    @Override // fi.h0
    public final e0 n() {
        return new s0(this);
    }

    @Override // fi.h0
    /* renamed from: p */
    public final e1 iterator() {
        return a().listIterator(0);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f8720x;
    }
}
