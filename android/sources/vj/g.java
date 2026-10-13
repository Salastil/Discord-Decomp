package vj;

import com.google.zxing.Result;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Map;

/* loaded from: classes3.dex */
public final class g extends h {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final h[] f19435b;

    public g(Map map, int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                Collection collection = map == null ? null : (Collection) map.get(jj.c.f12786e);
                ArrayList arrayList = new ArrayList();
                if (collection != null) {
                    if (collection.contains(jj.a.E)) {
                        arrayList.add(new e(0));
                    } else if (collection.contains(jj.a.L)) {
                        arrayList.add(new e(3));
                    }
                    if (collection.contains(jj.a.f12783y)) {
                        arrayList.add(new e(2));
                    }
                    if (collection.contains(jj.a.M)) {
                        arrayList.add(new e(1));
                    }
                }
                if (arrayList.isEmpty()) {
                    arrayList.add(new e(0));
                    arrayList.add(new e(2));
                    arrayList.add(new e(1));
                }
                this.f19435b = (k[]) arrayList.toArray(new k[arrayList.size()]);
                break;
            default:
                Collection collection2 = map == null ? null : (Collection) map.get(jj.c.f12786e);
                boolean z5 = (map == null || map.get(jj.c.f12790x) == null) ? false : true;
                ArrayList arrayList2 = new ArrayList();
                if (collection2 != null) {
                    if (collection2.contains(jj.a.E) || collection2.contains(jj.a.L) || collection2.contains(jj.a.f12783y) || collection2.contains(jj.a.M)) {
                        arrayList2.add(new g(map, 1));
                    }
                    if (collection2.contains(jj.a.f12779i)) {
                        arrayList2.add(new c(z5));
                    }
                    if (collection2.contains(jj.a.f12780v)) {
                        arrayList2.add(new d());
                    }
                    if (collection2.contains(jj.a.f12781w)) {
                        arrayList2.add(new b());
                    }
                    if (collection2.contains(jj.a.F)) {
                        arrayList2.add(new f());
                    }
                    if (collection2.contains(jj.a.f12778e)) {
                        arrayList2.add(new a());
                    }
                    if (collection2.contains(jj.a.J)) {
                        arrayList2.add(new wj.e());
                    }
                    if (collection2.contains(jj.a.K)) {
                        arrayList2.add(new xj.c());
                    }
                }
                if (arrayList2.isEmpty()) {
                    arrayList2.add(new g(map, 1));
                    arrayList2.add(new c(false));
                    arrayList2.add(new a());
                    arrayList2.add(new d());
                    arrayList2.add(new b());
                    arrayList2.add(new f());
                    arrayList2.add(new wj.e());
                    arrayList2.add(new xj.c());
                }
                this.f19435b = (h[]) arrayList2.toArray(new h[arrayList2.size()]);
                break;
        }
    }

    @Override // vj.h
    public final Result b(int i5, nj.a aVar, Map map) {
        boolean z5;
        switch (this.a) {
            case 0:
                for (h hVar : this.f19435b) {
                    try {
                        return hVar.b(i5, aVar, map);
                    } catch (jj.j unused) {
                    }
                }
                throw jj.g.f12795i;
            default:
                int[] m5 = k.m(aVar);
                for (k kVar : (k[]) this.f19435b) {
                    try {
                        Result k = kVar.k(i5, aVar, m5, map);
                        boolean z6 = k.f6294d == jj.a.E && k.a.charAt(0) == '0';
                        Collection collection = map == null ? null : (Collection) map.get(jj.c.f12786e);
                        jj.a aVar2 = jj.a.L;
                        if (collection != null && !collection.contains(aVar2)) {
                            z5 = false;
                            if (!z6 && z5) {
                                Result result = new Result(k.a.substring(1), k.f6292b, k.f6293c, aVar2);
                                result.a(k.f6295e);
                                return result;
                            }
                        }
                        z5 = true;
                        return !z6 ? k : k;
                    } catch (jj.j unused2) {
                    }
                }
                throw jj.g.f12795i;
        }
    }

    @Override // vj.h, jj.i
    public final void reset() {
        switch (this.a) {
            case 0:
                for (h hVar : this.f19435b) {
                    hVar.reset();
                }
                break;
            default:
                for (k kVar : (k[]) this.f19435b) {
                    kVar.getClass();
                }
                break;
        }
    }
}
