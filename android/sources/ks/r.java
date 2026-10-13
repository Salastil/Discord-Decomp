package ks;

import java.lang.ref.ReferenceQueue;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import net.time4j.u0;

/* loaded from: classes3.dex */
public final class r implements Comparator, g {
    public static final CopyOnWriteArrayList F = new CopyOnWriteArrayList();
    public static final ReferenceQueue G = new ReferenceQueue();
    public final l8.a E;

    /* renamed from: d, reason: collision with root package name */
    public final Class f13682d;

    /* renamed from: e, reason: collision with root package name */
    public final Map f13683e;

    /* renamed from: i, reason: collision with root package name */
    public final List f13684i;

    /* renamed from: v, reason: collision with root package name */
    public final Map f13685v;

    /* renamed from: w, reason: collision with root package name */
    public final Map f13686w;

    /* renamed from: x, reason: collision with root package name */
    public final Map f13687x;

    /* renamed from: y, reason: collision with root package name */
    public final s f13688y;

    public r(Class cls, g gVar, HashMap hashMap, HashMap hashMap2, HashMap hashMap3, HashMap hashMap4, ArrayList arrayList, HashMap hashMap5, s sVar, s sVar2, l8.a aVar, bg.s sVar3) {
        if (gVar == null) {
            throw new NullPointerException("Missing chronological merger.");
        }
        this.f13682d = cls;
        Map unmodifiableMap = Collections.unmodifiableMap(hashMap);
        this.f13683e = unmodifiableMap;
        this.f13684i = Collections.unmodifiableList(arrayList);
        HashMap hashMap6 = new HashMap();
        for (d dVar : unmodifiableMap.keySet()) {
            if (dVar.getType() == Integer.class) {
                Object obj = this.f13683e.get(dVar);
                if (obj instanceof u0) {
                    hashMap6.put(dVar, (u0) obj);
                }
            }
        }
        this.f13685v = Collections.unmodifiableMap(hashMap6);
        this.f13686w = Collections.unmodifiableMap(hashMap2);
        Collections.unmodifiableMap(hashMap3);
        Collections.unmodifiableMap(hashMap4);
        this.f13687x = Collections.unmodifiableMap(hashMap5);
        this.f13688y = sVar;
        this.E = aVar;
        new q(cls, sVar, sVar2);
        if (sVar3 == null) {
            ArrayList arrayList2 = new ArrayList(hashMap2.keySet());
            Collections.sort(arrayList2, new o(0, hashMap3));
            arrayList2.get(0);
        }
    }

    public final Object b(d dVar) {
        if (dVar == null) {
            throw new NullPointerException("Missing element.");
        }
        Map map = this.f13687x;
        Object obj = map.get(dVar);
        if (obj == null && (dVar instanceof a)) {
            obj = map.get(((a) dVar).j());
        }
        if (obj != null) {
            return obj;
        }
        throw new f("Base unit not found for: " + dVar.name());
    }

    public final l8.a c() {
        l8.a aVar = this.E;
        if (aVar != null) {
            return aVar;
        }
        throw new f("Calendar system is not available.");
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return ((s) obj).i((s) obj2);
    }

    public final j d(d dVar) {
        if (dVar == null) {
            throw new NullPointerException("Missing chronological element.");
        }
        j jVar = (j) this.f13683e.get(dVar);
        if (jVar != null) {
            return jVar;
        }
        j jVar2 = null;
        if ((dVar instanceof a) && e.class.isAssignableFrom(this.f13682d)) {
            a aVar = (a) a.class.cast(dVar);
            String k = aVar.k(this);
            if (k != null) {
                throw new m(k);
            }
            jVar2 = aVar.f(this);
        }
        if (jVar2 != null) {
            return jVar2;
        }
        throw new m("Cannot find any rule for chronological element \"" + dVar.name() + "\" in: " + this.f13682d.getName());
    }

    public final boolean e(d dVar) {
        return dVar != null && this.f13683e.containsKey(dVar);
    }
}
