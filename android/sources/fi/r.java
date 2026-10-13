package fi;

import java.util.AbstractSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class r extends AbstractSet {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8702d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ t f8703e;

    public /* synthetic */ r(t tVar, int i5) {
        this.f8702d = i5;
        this.f8703e = tVar;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final void clear() {
        switch (this.f8702d) {
            case 0:
                this.f8703e.clear();
                break;
            default:
                this.f8703e.clear();
                break;
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        switch (this.f8702d) {
            case 0:
                t tVar = this.f8703e;
                Map b10 = tVar.b();
                if (b10 != null) {
                    return b10.entrySet().contains(obj);
                }
                if (obj instanceof Map.Entry) {
                    Map.Entry entry = (Map.Entry) obj;
                    int d6 = tVar.d(entry.getKey());
                    if (d6 != -1 && w3.q.j(tVar.j()[d6], entry.getValue())) {
                        return true;
                    }
                }
                return false;
            default:
                return this.f8703e.containsKey(obj);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        switch (this.f8702d) {
            case 0:
                t tVar = this.f8703e;
                Map b10 = tVar.b();
                return b10 != null ? b10.entrySet().iterator() : new q(tVar, 1);
            default:
                t tVar2 = this.f8703e;
                Map b11 = tVar2.b();
                return b11 != null ? b11.keySet().iterator() : new q(tVar2, 0);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean remove(Object obj) {
        switch (this.f8702d) {
            case 0:
                t tVar = this.f8703e;
                Map b10 = tVar.b();
                if (b10 != null) {
                    return b10.entrySet().remove(obj);
                }
                if (obj instanceof Map.Entry) {
                    Map.Entry entry = (Map.Entry) obj;
                    if (!tVar.f()) {
                        int c6 = tVar.c();
                        Object key = entry.getKey();
                        Object value = entry.getValue();
                        Object obj2 = tVar.f8711d;
                        Objects.requireNonNull(obj2);
                        int n6 = p.n(key, value, c6, obj2, tVar.h(), tVar.i(), tVar.j());
                        if (n6 != -1) {
                            tVar.e(n6, c6);
                            tVar.f8716x--;
                            tVar.f8715w += 32;
                            return true;
                        }
                    }
                }
                return false;
            default:
                t tVar2 = this.f8703e;
                Map b11 = tVar2.b();
                return b11 != null ? b11.keySet().remove(obj) : tVar2.g(obj) != t.G;
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        switch (this.f8702d) {
        }
        return this.f8703e.size();
    }
}
