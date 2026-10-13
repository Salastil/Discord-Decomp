package bs;

import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class v0 implements Map.Entry, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final Object f3243d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f3244e;

    public v0(Object obj, Object obj2) {
        this.f3243d = obj;
        this.f3244e = obj2;
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof v0)) {
            return false;
        }
        v0 v0Var = (v0) obj;
        return Intrinsics.areEqual(this.f3243d, v0Var.f3243d) && Intrinsics.areEqual(this.f3244e, v0Var.f3244e);
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        return this.f3243d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f3244e;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Object obj = this.f3243d;
        int hashCode = (obj == null ? 0 : obj.hashCode()) * 31;
        Object obj2 = this.f3244e;
        return hashCode + (obj2 != null ? obj2.hashCode() : 0);
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    public final String toString() {
        return "MapEntry(key=" + this.f3243d + ", value=" + this.f3244e + ')';
    }
}
