package bg;

import java.io.Serializable;
import java.util.Map;

/* loaded from: classes3.dex */
public abstract class q implements Map, Serializable {

    /* renamed from: e, reason: collision with root package name */
    public static final Map.Entry[] f2983e = new Map.Entry[0];

    /* renamed from: d, reason: collision with root package name */
    public transient r f2984d;

    @Override // java.util.Map
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public final r entrySet() {
        r rVar = this.f2984d;
        if (rVar == null) {
            v vVar = (v) this;
            rVar = vVar.isEmpty() ? c0.G : new u(vVar);
            this.f2984d = rVar;
        }
        return rVar;
    }

    @Override // java.util.Map
    public final void clear() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final boolean containsKey(Object obj) {
        return get(obj) != null;
    }

    @Override // java.util.Map
    public final boolean containsValue(Object obj) {
        return ((v) this).f2997v.contains(obj);
    }

    @Override // java.util.Map
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Map) {
            return ((v) this).entrySet().equals(((Map) obj).entrySet());
        }
        return false;
    }

    @Override // java.util.Map
    public abstract Object get(Object obj);

    @Override // java.util.Map
    public final Object getOrDefault(Object obj, Object obj2) {
        Object obj3 = get(obj);
        return obj3 != null ? obj3 : obj2;
    }

    @Override // java.util.Map
    public final int hashCode() {
        return b.b(entrySet());
    }

    @Override // java.util.Map
    public final boolean isEmpty() {
        return ((v) this).size() == 0;
    }

    @Override // java.util.Map
    public final Object put(Object obj, Object obj2) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final void putAll(Map map) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final Object remove(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final String toString() {
        v vVar = (v) this;
        int size = vVar.size();
        if (size < 0) {
            throw new IllegalArgumentException(k0.d.i(size, "size cannot be negative but was: "));
        }
        StringBuilder sb2 = new StringBuilder((int) Math.min(size * 8, 1073741824L));
        sb2.append('{');
        boolean z5 = true;
        for (Map.Entry entry : vVar.entrySet()) {
            if (!z5) {
                sb2.append(", ");
            }
            sb2.append(entry.getKey());
            sb2.append('=');
            sb2.append(entry.getValue());
            z5 = false;
        }
        sb2.append('}');
        return sb2.toString();
    }
}
