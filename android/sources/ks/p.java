package ks;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* loaded from: classes3.dex */
public final class p {
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f13672b;

    /* renamed from: c, reason: collision with root package name */
    public final g f13673c;

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f13674d = new HashMap();

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f13675e = new ArrayList();

    /* renamed from: f, reason: collision with root package name */
    public final HashMap f13676f;

    /* renamed from: g, reason: collision with root package name */
    public final HashMap f13677g;

    /* renamed from: h, reason: collision with root package name */
    public final HashMap f13678h;

    /* renamed from: i, reason: collision with root package name */
    public final HashMap f13679i;
    public final s j;
    public final s k;

    /* renamed from: l, reason: collision with root package name */
    public final l8.a f13680l;

    /* renamed from: m, reason: collision with root package name */
    public bg.s f13681m;

    public p(Class cls, Class cls2, g gVar, s sVar, s sVar2, l8.a aVar) {
        this.a = cls2;
        this.f13672b = cls2.getName().startsWith("net.time4j.");
        this.f13673c = gVar;
        this.f13681m = null;
        if (sVar == null) {
            throw new NullPointerException("Missing minimum of range.");
        }
        if (sVar2 == null) {
            throw new NullPointerException("Missing maximum of range.");
        }
        if (c.class.isAssignableFrom(cls2) && aVar == null) {
            throw new NullPointerException("Missing calendar system.");
        }
        this.f13676f = new HashMap();
        this.f13677g = new HashMap();
        this.f13678h = new HashMap();
        this.f13679i = new HashMap();
        this.j = sVar;
        this.k = sVar2;
        this.f13680l = aVar;
        this.f13681m = null;
    }

    public final void a(d dVar, j jVar, Object obj) {
        if (obj == null) {
            throw new NullPointerException("Missing base unit.");
        }
        b(dVar, jVar);
        this.f13679i.put(dVar, obj);
    }

    public final void b(d dVar, j jVar) {
        boolean z5 = this.f13672b;
        HashMap hashMap = this.f13674d;
        if (!z5) {
            if (dVar == null) {
                throw new NullPointerException("Static initialization problem: Check if given element statically refer to any chronology causing premature class loading.");
            }
            String name = dVar.name();
            for (d dVar2 : hashMap.keySet()) {
                if (dVar2.equals(dVar) || dVar2.name().equals(name)) {
                    throw new IllegalArgumentException(a3.e.k("Element duplicate found: ", name));
                }
            }
        }
        hashMap.put(dVar, jVar);
    }

    public final void c(js.b bVar) {
        if (bVar == null) {
            throw new NullPointerException("Missing chronological extension.");
        }
        ArrayList arrayList = this.f13675e;
        if (arrayList.contains(bVar)) {
            return;
        }
        arrayList.add(bVar);
    }

    public final void d(Enum r82, u uVar, double d6, Set set) {
        if (r82 == null) {
            throw new NullPointerException("Missing time unit.");
        }
        boolean z5 = this.f13672b;
        HashMap hashMap = this.f13676f;
        if (!z5) {
            Iterator it = hashMap.keySet().iterator();
            while (it.hasNext()) {
                if (it.next().equals(r82)) {
                    throw new IllegalArgumentException("Unit duplicate found: " + r82.toString());
                }
            }
            String name = ((Enum) Enum.class.cast(r82)).name();
            for (Object obj : hashMap.keySet()) {
                if ((obj instanceof Enum) && ((Enum) Enum.class.cast(obj)).name().equals(name)) {
                    throw new IllegalArgumentException(a3.e.k("Unit duplicate found: ", name));
                }
            }
        }
        Iterator it2 = set.iterator();
        while (it2.hasNext()) {
            if (it2.next() == null) {
                throw new NullPointerException("Found convertible unit which is null.");
            }
        }
        if (Double.isNaN(d6)) {
            throw new IllegalArgumentException("Not a number: " + d6);
        }
        if (Double.isInfinite(d6)) {
            throw new IllegalArgumentException("Infinite: " + d6);
        }
        hashMap.put(r82, uVar);
        this.f13677g.put(r82, Double.valueOf(d6));
        HashSet hashSet = new HashSet(set);
        hashSet.remove(r82);
        this.f13678h.put(r82, hashSet);
    }

    public final r e() {
        HashMap hashMap = this.f13676f;
        if (hashMap.isEmpty()) {
            throw new IllegalStateException("No time unit was registered.");
        }
        r rVar = new r(this.a, this.f13673c, this.f13674d, hashMap, this.f13677g, this.f13678h, this.f13675e, this.f13679i, this.j, this.k, this.f13680l, this.f13681m);
        r.F.add(new i(rVar, r.G));
        return rVar;
    }
}
