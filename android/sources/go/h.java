package go;

import java.util.ConcurrentModificationException;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableMap;

/* loaded from: classes3.dex */
public final class h implements Map.Entry, KMutableMap.Entry {

    /* renamed from: d, reason: collision with root package name */
    public final i f9405d;

    /* renamed from: e, reason: collision with root package name */
    public final int f9406e;

    /* renamed from: i, reason: collision with root package name */
    public final int f9407i;

    public h(i map, int i5) {
        Intrinsics.checkNotNullParameter(map, "map");
        this.f9405d = map;
        this.f9406e = i5;
        this.f9407i = map.E;
    }

    public final void a() {
        if (this.f9405d.E != this.f9407i) {
            throw new ConcurrentModificationException("The backing map has been modified after this entry was obtained.");
        }
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (!(obj instanceof Map.Entry)) {
            return false;
        }
        Map.Entry entry = (Map.Entry) obj;
        return Intrinsics.areEqual(entry.getKey(), getKey()) && Intrinsics.areEqual(entry.getValue(), getValue());
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        a();
        return this.f9405d.f9408d[this.f9406e];
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        a();
        Object[] objArr = this.f9405d.f9409e;
        Intrinsics.checkNotNull(objArr);
        return objArr[this.f9406e];
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Object key = getKey();
        int hashCode = key != null ? key.hashCode() : 0;
        Object value = getValue();
        return hashCode ^ (value != null ? value.hashCode() : 0);
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        a();
        i iVar = this.f9405d;
        iVar.c();
        Object[] objArr = iVar.f9409e;
        if (objArr == null) {
            int length = iVar.f9408d.length;
            if (length < 0) {
                throw new IllegalArgumentException("capacity must be non-negative.");
            }
            objArr = new Object[length];
            iVar.f9409e = objArr;
        }
        int i5 = this.f9406e;
        Object obj2 = objArr[i5];
        objArr[i5] = obj;
        return obj2;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(getKey());
        sb2.append('=');
        sb2.append(getValue());
        return sb2.toString();
    }
}
