package w;

import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes.dex */
public final class a implements Map.Entry, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final Object f19585d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f19586e;

    public a(Object obj, Object obj2) {
        this.f19585d = obj;
        this.f19586e = obj2;
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        Map.Entry entry = obj instanceof Map.Entry ? (Map.Entry) obj : null;
        return entry != null && Intrinsics.areEqual(entry.getKey(), this.f19585d) && Intrinsics.areEqual(entry.getValue(), this.f19586e);
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        return this.f19585d;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f19586e;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Object obj = this.f19585d;
        int hashCode = obj != null ? obj.hashCode() : 0;
        Object obj2 = this.f19586e;
        return (obj2 != null ? obj2.hashCode() : 0) ^ hashCode;
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f19585d);
        sb2.append('=');
        sb2.append(this.f19586e);
        return sb2.toString();
    }
}
