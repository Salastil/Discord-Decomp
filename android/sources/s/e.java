package s;

import androidx.collection.SimpleArrayMap;
import androidx.datastore.preferences.protobuf.d1;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class e extends SimpleArrayMap implements Map {

    /* renamed from: v, reason: collision with root package name */
    public d1 f17671v;

    /* renamed from: w, reason: collision with root package name */
    public b f17672w;

    /* renamed from: x, reason: collision with root package name */
    public d f17673x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(SimpleArrayMap map) {
        super(0);
        Intrinsics.checkNotNullParameter(map, "map");
        int i5 = map.f1208i;
        b(this.f1208i + i5);
        if (this.f1208i != 0) {
            for (int i6 = 0; i6 < i5; i6++) {
                put(map.f(i6), map.i(i6));
            }
        } else if (i5 > 0) {
            u.e(0, 0, map.f1206d, this.f1206d, i5);
            u.d(0, 0, i5 << 1, map.f1207e, this.f1207e);
            this.f1208i = i5;
        }
    }

    @Override // java.util.Map
    public final Set entrySet() {
        d1 d1Var = this.f17671v;
        if (d1Var != null) {
            return d1Var;
        }
        d1 d1Var2 = new d1(this, 3);
        this.f17671v = d1Var2;
        return d1Var2;
    }

    public final boolean j(Collection collection) {
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            if (!super.containsKey(it.next())) {
                return false;
            }
        }
        return true;
    }

    public final boolean k(Collection collection) {
        int i5 = this.f1208i;
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            super.remove(it.next());
        }
        return i5 != this.f1208i;
    }

    @Override // java.util.Map
    public final Set keySet() {
        b bVar = this.f17672w;
        if (bVar != null) {
            return bVar;
        }
        b bVar2 = new b(this);
        this.f17672w = bVar2;
        return bVar2;
    }

    public final boolean l(Collection collection) {
        int i5 = this.f1208i;
        for (int i6 = i5 - 1; i6 >= 0; i6--) {
            if (!collection.contains(f(i6))) {
                g(i6);
            }
        }
        return i5 != this.f1208i;
    }

    @Override // java.util.Map
    public final void putAll(Map map) {
        b(map.size() + this.f1208i);
        for (Map.Entry entry : map.entrySet()) {
            put(entry.getKey(), entry.getValue());
        }
    }

    @Override // java.util.Map
    public final Collection values() {
        d dVar = this.f17673x;
        if (dVar != null) {
            return dVar;
        }
        d dVar2 = new d(this);
        this.f17673x = dVar2;
        return dVar2;
    }
}
