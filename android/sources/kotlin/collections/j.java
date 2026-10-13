package kotlin.collections;

import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class j implements Map, KMappedMarker {

    /* renamed from: i, reason: collision with root package name */
    @NotNull
    public static final g f13508i = new g(null);

    /* renamed from: d, reason: collision with root package name */
    public volatile w.c f13509d;

    /* renamed from: e, reason: collision with root package name */
    public volatile i f13510e;

    public abstract Set a();

    public Set b() {
        if (this.f13509d == null) {
            this.f13509d = new w.c(this, 2);
        }
        w.c cVar = this.f13509d;
        Intrinsics.checkNotNull(cVar);
        return cVar;
    }

    public int c() {
        return ((a) a()).a();
    }

    @Override // java.util.Map
    public final void clear() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.Map
    public boolean containsKey(Object obj) {
        return e(obj) != null;
    }

    @Override // java.util.Map
    public boolean containsValue(Object obj) {
        Set a = a();
        if (a.isEmpty()) {
            return false;
        }
        Iterator it = a.iterator();
        while (it.hasNext()) {
            if (Intrinsics.areEqual(((Map.Entry) it.next()).getValue(), obj)) {
                return true;
            }
        }
        return false;
    }

    public Collection d() {
        if (this.f13510e == null) {
            this.f13510e = new i(0, this);
        }
        i iVar = this.f13510e;
        Intrinsics.checkNotNull(iVar);
        return iVar;
    }

    public final Map.Entry e(Object obj) {
        Object obj2;
        Iterator it = a().iterator();
        while (true) {
            if (!it.hasNext()) {
                obj2 = null;
                break;
            }
            obj2 = it.next();
            if (Intrinsics.areEqual(((Map.Entry) obj2).getKey(), obj)) {
                break;
            }
        }
        return (Map.Entry) obj2;
    }

    @Override // java.util.Map
    public final /* bridge */ Set entrySet() {
        return a();
    }

    @Override // java.util.Map
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Map)) {
            return false;
        }
        Map map = (Map) obj;
        if (c() != map.size()) {
            return false;
        }
        Set<Map.Entry> entrySet = map.entrySet();
        if ((entrySet instanceof Collection) && entrySet.isEmpty()) {
            return true;
        }
        for (Map.Entry entry : entrySet) {
            if (entry == null) {
                return false;
            }
            Object key = entry.getKey();
            Object value = entry.getValue();
            Intrinsics.checkNotNull(this, "null cannot be cast to non-null type kotlin.collections.Map<K of kotlin.collections.MapsKt__MapsKt.get, V of kotlin.collections.MapsKt__MapsKt.get>");
            Object obj2 = get(key);
            if (!Intrinsics.areEqual(value, obj2)) {
                return false;
            }
            if (obj2 == null) {
                Intrinsics.checkNotNull(this, "null cannot be cast to non-null type kotlin.collections.Map<K of kotlin.collections.MapsKt__MapsKt.containsKey, *>");
                if (!containsKey(key)) {
                    return false;
                }
            }
        }
        return true;
    }

    @Override // java.util.Map
    public Object get(Object obj) {
        Map.Entry e9 = e(obj);
        if (e9 != null) {
            return e9.getValue();
        }
        return null;
    }

    @Override // java.util.Map
    public final int hashCode() {
        return a().hashCode();
    }

    @Override // java.util.Map
    public final boolean isEmpty() {
        return c() == 0;
    }

    @Override // java.util.Map
    public final /* bridge */ Set keySet() {
        return b();
    }

    @Override // java.util.Map
    public final Object put(Object obj, Object obj2) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.Map
    public final void putAll(Map map) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.Map
    public final Object remove(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.Map
    public final /* bridge */ int size() {
        return c();
    }

    public final String toString() {
        return CollectionsKt.O(a(), ", ", "{", "}", new com.facebook.react.runtime.r(6, this), 24);
    }

    @Override // java.util.Map
    public final /* bridge */ Collection values() {
        return d();
    }
}
