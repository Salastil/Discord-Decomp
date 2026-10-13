package iq;

import java.util.Map;

/* loaded from: classes3.dex */
public final class b0 implements Comparable, Map.Entry {

    /* renamed from: d, reason: collision with root package name */
    public final Comparable f12187d;

    /* renamed from: e, reason: collision with root package name */
    public Object f12188e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ y f12189i;

    public b0(y yVar, Comparable comparable, Object obj) {
        this.f12189i = yVar;
        this.f12187d = comparable;
        this.f12188e = obj;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f12187d.compareTo(((b0) obj).f12187d);
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (obj != this) {
            if (obj instanceof Map.Entry) {
                Map.Entry entry = (Map.Entry) obj;
                Object key = entry.getKey();
                Comparable comparable = this.f12187d;
                if (comparable == null ? key == null : comparable.equals(key)) {
                    Object obj2 = this.f12188e;
                    Object value = entry.getValue();
                    if (obj2 == null ? value == null : obj2.equals(value)) {
                    }
                }
            }
            return false;
        }
        return true;
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        return this.f12187d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f12188e;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Comparable comparable = this.f12187d;
        int hashCode = comparable == null ? 0 : comparable.hashCode();
        Object obj = this.f12188e;
        return (obj != null ? obj.hashCode() : 0) ^ hashCode;
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        this.f12189i.b();
        Object obj2 = this.f12188e;
        this.f12188e = obj;
        return obj2;
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f12187d);
        String valueOf2 = String.valueOf(this.f12188e);
        return a3.e.n(new StringBuilder(valueOf2.length() + valueOf.length() + 1), valueOf, "=", valueOf2);
    }
}
