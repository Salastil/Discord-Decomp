package androidx.datastore.preferences.protobuf;

import com.google.android.gms.internal.play_billing.a3;
import java.util.AbstractSet;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes.dex */
public class d1 extends AbstractSet {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1734d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Map f1735e;

    public /* synthetic */ d1(Map map, int i5) {
        this.f1734d = i5;
        this.f1735e = map;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public boolean add(Object obj) {
        switch (this.f1734d) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                if (contains(entry)) {
                    return false;
                }
                ((y0) this.f1735e).f((Comparable) entry.getKey(), entry.getValue());
                return true;
            case 1:
                Map.Entry entry2 = (Map.Entry) obj;
                if (contains(entry2)) {
                    return false;
                }
                a3 a3Var = (a3) this.f1735e;
                if (entry2.getKey() != null) {
                    throw new ClassCastException();
                }
                a3Var.b(entry2.getValue());
                return true;
            case 2:
                Map.Entry entry3 = (Map.Entry) obj;
                if (contains(entry3)) {
                    return false;
                }
                ((iq.y) this.f1735e).put((Comparable) entry3.getKey(), entry3.getValue());
                return true;
            default:
                return super.add(obj);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public void clear() {
        switch (this.f1734d) {
            case 0:
                ((y0) this.f1735e).clear();
                break;
            case 1:
                ((a3) this.f1735e).clear();
                break;
            case 2:
                ((iq.y) this.f1735e).clear();
                break;
            default:
                super.clear();
                break;
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public boolean contains(Object obj) {
        switch (this.f1734d) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                Object obj2 = ((y0) this.f1735e).get(entry.getKey());
                Object value = entry.getValue();
                return obj2 == value || (obj2 != null && obj2.equals(value));
            case 1:
                Map.Entry entry2 = (Map.Entry) obj;
                Object obj3 = ((a3) this.f1735e).get(entry2.getKey());
                Object value2 = entry2.getValue();
                if (obj3 != value2) {
                    return obj3 != null && obj3.equals(value2);
                }
                return true;
            case 2:
                Map.Entry entry3 = (Map.Entry) obj;
                Object obj4 = ((iq.y) this.f1735e).get(entry3.getKey());
                Object value3 = entry3.getValue();
                return obj4 == value3 || (obj4 != null && obj4.equals(value3));
            default:
                return super.contains(obj);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public Iterator iterator() {
        switch (this.f1734d) {
            case 0:
                return new c1((y0) this.f1735e, 0);
            case 1:
                return new c1((a3) this.f1735e);
            case 2:
                return new c1((iq.y) this.f1735e, 2);
            default:
                return new s.c((s.e) this.f1735e);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public boolean remove(Object obj) {
        switch (this.f1734d) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                if (!contains(entry)) {
                    return false;
                }
                ((y0) this.f1735e).remove(entry.getKey());
                return true;
            case 1:
                Map.Entry entry2 = (Map.Entry) obj;
                if (!contains(entry2)) {
                    return false;
                }
                ((a3) this.f1735e).remove(entry2.getKey());
                return true;
            case 2:
                Map.Entry entry3 = (Map.Entry) obj;
                if (!contains(entry3)) {
                    return false;
                }
                ((iq.y) this.f1735e).remove(entry3.getKey());
                return true;
            default:
                return super.remove(obj);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final int size() {
        switch (this.f1734d) {
            case 0:
                return ((y0) this.f1735e).size();
            case 1:
                return ((a3) this.f1735e).size();
            case 2:
                return ((iq.y) this.f1735e).size();
            default:
                return ((s.e) this.f1735e).f1208i;
        }
    }
}
