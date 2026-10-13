package k0;

import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import ys.l;

/* loaded from: classes.dex */
public final class e implements k, Iterable, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashMap f13105d = new LinkedHashMap();

    public final void a(j key, String str) {
        Intrinsics.checkNotNullParameter(key, "key");
        this.f13105d.put(key, str);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof e) {
            return Intrinsics.areEqual(this.f13105d, ((e) obj).f13105d);
        }
        return false;
    }

    public final int hashCode() {
        return Boolean.hashCode(false) + d.d(this.f13105d.hashCode() * 31, 31, false);
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return this.f13105d.entrySet().iterator();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        String str = "";
        for (Map.Entry entry : this.f13105d.entrySet()) {
            j jVar = (j) entry.getKey();
            Object value = entry.getValue();
            sb2.append(str);
            sb2.append(jVar.a);
            sb2.append(" : ");
            sb2.append(value);
            str = ", ";
        }
        return l.x(this) + "{ " + ((Object) sb2) + " }";
    }
}
