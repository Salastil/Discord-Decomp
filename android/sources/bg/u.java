package bg;

import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class u extends r {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ v f2994v;

    public u(v vVar) {
        this.f2994v = vVar;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        if (obj instanceof Map.Entry) {
            Map.Entry entry = (Map.Entry) obj;
            Object obj2 = this.f2994v.get(entry.getKey());
            if (obj2 != null && obj2.equals(entry.getValue())) {
                return true;
            }
        }
        return false;
    }

    @Override // bg.k
    public final h0 e() {
        return k().listIterator(0);
    }

    @Override // bg.r, java.util.Collection, java.util.Set
    public final int hashCode() {
        return b.b(this.f2994v.entrySet());
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final /* synthetic */ Iterator iterator() {
        return k().listIterator(0);
    }

    @Override // bg.r
    public final p m() {
        return new t(this);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        return this.f2994v.f2997v.size();
    }
}
