package jj;

import com.google.zxing.Result;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Map;

/* loaded from: classes3.dex */
public final class f implements i {
    public Map a;

    /* renamed from: b, reason: collision with root package name */
    public i[] f12794b;

    @Override // jj.i
    public final Result a(e4.e eVar, Map map) {
        c(map);
        return b(eVar);
    }

    public final Result b(e4.e eVar) {
        i[] iVarArr = this.f12794b;
        if (iVarArr != null) {
            for (i iVar : iVarArr) {
                try {
                    return iVar.a(eVar, this.a);
                } catch (j unused) {
                }
            }
        }
        throw g.f12795i;
    }

    public final void c(Map map) {
        this.a = map;
        boolean z5 = map != null && map.containsKey(c.f12787i);
        Collection collection = map == null ? null : (Collection) map.get(c.f12786e);
        ArrayList arrayList = new ArrayList();
        if (collection != null) {
            boolean z6 = collection.contains(a.L) || collection.contains(a.M) || collection.contains(a.E) || collection.contains(a.f12783y) || collection.contains(a.f12778e) || collection.contains(a.f12779i) || collection.contains(a.f12780v) || collection.contains(a.f12781w) || collection.contains(a.F) || collection.contains(a.J) || collection.contains(a.K);
            if (z6 && !z5) {
                arrayList.add(new vj.g(map, 0));
            }
            if (collection.contains(a.I)) {
                arrayList.add(new dk.a());
            }
            if (collection.contains(a.f12782x)) {
                arrayList.add(new qj.a());
            }
            if (collection.contains(a.f12777d)) {
                arrayList.add(new kj.b(0));
            }
            if (collection.contains(a.H)) {
                arrayList.add(new kj.b(1));
            }
            if (collection.contains(a.G)) {
                arrayList.add(new tj.a());
            }
            if (z6 && z5) {
                arrayList.add(new vj.g(map, 0));
            }
        }
        if (arrayList.isEmpty()) {
            if (!z5) {
                arrayList.add(new vj.g(map, 0));
            }
            arrayList.add(new dk.a());
            arrayList.add(new qj.a());
            arrayList.add(new kj.b(0));
            arrayList.add(new kj.b(1));
            arrayList.add(new tj.a());
            if (z5) {
                arrayList.add(new vj.g(map, 0));
            }
        }
        this.f12794b = (i[]) arrayList.toArray(new i[arrayList.size()]);
    }

    @Override // jj.i
    public final void reset() {
        i[] iVarArr = this.f12794b;
        if (iVarArr != null) {
            for (i iVar : iVarArr) {
                iVar.reset();
            }
        }
    }
}
