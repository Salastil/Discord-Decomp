package p;

import java.util.Map;

/* loaded from: classes.dex */
public final class c implements Map.Entry {

    /* renamed from: d, reason: collision with root package name */
    public final Object f16249d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f16250e;

    /* renamed from: i, reason: collision with root package name */
    public c f16251i;

    /* renamed from: v, reason: collision with root package name */
    public c f16252v;

    public c(Object obj, Object obj2) {
        this.f16249d = obj;
        this.f16250e = obj2;
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.f16249d.equals(cVar.f16249d) && this.f16250e.equals(cVar.f16250e);
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        return this.f16249d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f16250e;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        return this.f16249d.hashCode() ^ this.f16250e.hashCode();
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        throw new UnsupportedOperationException("An entry modification is not supported");
    }

    public final String toString() {
        return this.f16249d + "=" + this.f16250e;
    }
}
