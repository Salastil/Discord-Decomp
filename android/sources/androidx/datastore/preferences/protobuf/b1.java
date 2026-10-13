package androidx.datastore.preferences.protobuf;

import java.util.Map;

/* loaded from: classes.dex */
public final class b1 implements Map.Entry, Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final Comparable f1720d;

    /* renamed from: e, reason: collision with root package name */
    public Object f1721e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ y0 f1722i;

    public b1(y0 y0Var, Comparable comparable, Object obj) {
        this.f1722i = y0Var;
        this.f1720d = comparable;
        this.f1721e = obj;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f1720d.compareTo(((b1) obj).f1720d);
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (obj != this) {
            if (obj instanceof Map.Entry) {
                Map.Entry entry = (Map.Entry) obj;
                Object key = entry.getKey();
                Comparable comparable = this.f1720d;
                if (comparable == null ? key == null : comparable.equals(key)) {
                    Object obj2 = this.f1721e;
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
        return this.f1720d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f1721e;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Comparable comparable = this.f1720d;
        int hashCode = comparable == null ? 0 : comparable.hashCode();
        Object obj = this.f1721e;
        return (obj != null ? obj.hashCode() : 0) ^ hashCode;
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        this.f1722i.b();
        Object obj2 = this.f1721e;
        this.f1721e = obj;
        return obj2;
    }

    public final String toString() {
        return this.f1720d + "=" + this.f1721e;
    }
}
