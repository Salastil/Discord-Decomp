package fi;

import java.io.Serializable;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.NavigableMap;
import java.util.SortedMap;

/* loaded from: classes3.dex */
public final class n0 extends o implements Serializable {

    /* renamed from: v, reason: collision with root package name */
    public transient Map f8687v;

    /* renamed from: w, reason: collision with root package name */
    public transient int f8688w;

    /* renamed from: x, reason: collision with root package name */
    public transient m0 f8689x;

    @Override // fi.o
    public final d a() {
        d dVar = this.f8692i;
        if (dVar != null) {
            return dVar;
        }
        Map map = this.f8687v;
        d fVar = map instanceof NavigableMap ? new f(this, (NavigableMap) map) : map instanceof SortedMap ? new i(this, (SortedMap) map) : new d(this, map);
        this.f8692i = fVar;
        return fVar;
    }

    public final void b() {
        Map map = this.f8687v;
        Iterator it = map.values().iterator();
        while (it.hasNext()) {
            ((Collection) it.next()).clear();
        }
        map.clear();
        this.f8688w = 0;
    }
}
