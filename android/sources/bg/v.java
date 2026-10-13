package bg;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Map;
import java.util.NavigableMap;
import java.util.NavigableSet;
import java.util.Objects;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class v extends q implements NavigableMap {

    /* renamed from: x, reason: collision with root package name */
    public static final v f2995x;

    /* renamed from: i, reason: collision with root package name */
    public final transient d0 f2996i;

    /* renamed from: v, reason: collision with root package name */
    public final transient p f2997v;

    /* renamed from: w, reason: collision with root package name */
    public final transient v f2998w;

    static {
        d0 s2 = w.s(z.f3008e);
        l lVar = p.f2980e;
        f2995x = new v(s2, b0.f2933w, null);
    }

    public v(d0 d0Var, p pVar, v vVar) {
        this.f2996i = d0Var;
        this.f2997v = pVar;
        this.f2998w = vVar;
    }

    public static v b(TreeMap treeMap) {
        Set set;
        z zVar = z.f3008e;
        Comparator comparator = treeMap.comparator();
        int i5 = 1;
        boolean equals = comparator == null ? true : zVar.equals(comparator);
        Set entrySet = treeMap.entrySet();
        if (entrySet instanceof Collection) {
            set = entrySet;
        } else {
            Iterator it = entrySet.iterator();
            ArrayList arrayList = new ArrayList();
            it.getClass();
            while (it.hasNext()) {
                arrayList.add(it.next());
            }
            set = arrayList;
        }
        Map.Entry[] entryArr = (Map.Entry[]) set.toArray(q.f2983e);
        int length = entryArr.length;
        if (length == 0) {
            return c(zVar);
        }
        int i6 = 0;
        if (length == 1) {
            Map.Entry entry = entryArr[0];
            Objects.requireNonNull(entry);
            Object key = entry.getKey();
            Object value = entry.getValue();
            Object[] objArr = {key};
            for (int i10 = 0; i10 < 1; i10++) {
                if (objArr[i10] == null) {
                    throw new NullPointerException(k0.d.i(i10, "at index "));
                }
            }
            d0 d0Var = new d0(p.k(1, objArr), zVar);
            Object[] objArr2 = {value};
            while (i6 < 1) {
                if (objArr2[i6] == null) {
                    throw new NullPointerException(k0.d.i(i6, "at index "));
                }
                i6++;
            }
            return new v(d0Var, p.k(1, objArr2), null);
        }
        Object[] objArr3 = new Object[length];
        Object[] objArr4 = new Object[length];
        if (equals) {
            while (i6 < length) {
                Map.Entry entry2 = entryArr[i6];
                Objects.requireNonNull(entry2);
                Object key2 = entry2.getKey();
                Object value2 = entry2.getValue();
                b.f(key2, value2);
                objArr3[i6] = key2;
                objArr4[i6] = value2;
                i6++;
            }
        } else {
            Arrays.sort(entryArr, 0, length, new s(0));
            Map.Entry entry3 = entryArr[0];
            Objects.requireNonNull(entry3);
            Object key3 = entry3.getKey();
            objArr3[0] = key3;
            Object value3 = entry3.getValue();
            objArr4[0] = value3;
            b.f(objArr3[0], value3);
            while (i5 < length) {
                Map.Entry entry4 = entryArr[i5 - 1];
                Objects.requireNonNull(entry4);
                Map.Entry entry5 = entryArr[i5];
                Objects.requireNonNull(entry5);
                Object key4 = entry5.getKey();
                Object value4 = entry5.getValue();
                b.f(key4, value4);
                objArr3[i5] = key4;
                objArr4[i5] = value4;
                if (zVar.compare(key3, key4) == 0) {
                    throw new IllegalArgumentException(a3.e.l("Multiple entries with same key: ", String.valueOf(entry4), " and ", String.valueOf(entry5)));
                }
                i5++;
                key3 = key4;
            }
        }
        return new v(new d0(p.k(length, objArr3), zVar), p.k(length, objArr4), null);
    }

    public static v c(Comparator comparator) {
        if (z.f3008e.equals(comparator)) {
            return f2995x;
        }
        d0 s2 = w.s(comparator);
        l lVar = p.f2980e;
        return new v(s2, b0.f2933w, null);
    }

    @Override // java.util.NavigableMap
    public final Map.Entry ceilingEntry(Object obj) {
        return tailMap(obj, true).firstEntry();
    }

    @Override // java.util.NavigableMap
    public final Object ceilingKey(Object obj) {
        Map.Entry ceilingEntry = ceilingEntry(obj);
        if (ceilingEntry == null) {
            return null;
        }
        return ceilingEntry.getKey();
    }

    @Override // java.util.SortedMap
    public final Comparator comparator() {
        return this.f2996i.f3001v;
    }

    @Override // java.util.NavigableMap
    /* renamed from: d, reason: merged with bridge method [inline-methods] */
    public final v headMap(Object obj, boolean z5) {
        obj.getClass();
        return g(0, this.f2996i.u(obj, z5));
    }

    @Override // java.util.NavigableMap
    public final /* synthetic */ NavigableSet descendingKeySet() {
        return this.f2996i.descendingSet();
    }

    @Override // java.util.NavigableMap
    public final /* bridge */ /* synthetic */ NavigableMap descendingMap() {
        v vVar = this.f2998w;
        if (vVar != null) {
            return vVar;
        }
        boolean isEmpty = isEmpty();
        d0 d0Var = this.f2996i;
        if (!isEmpty) {
            return new v((d0) d0Var.descendingSet(), this.f2997v.i(), this);
        }
        Comparator comparator = d0Var.f3001v;
        return c((comparator instanceof a0 ? (a0) comparator : new j(comparator)).b());
    }

    @Override // java.util.NavigableMap
    /* renamed from: e, reason: merged with bridge method [inline-methods] */
    public final v subMap(Object obj, boolean z5, Object obj2, boolean z6) {
        obj.getClass();
        obj2.getClass();
        if (this.f2996i.f3001v.compare(obj, obj2) <= 0) {
            return headMap(obj2, z6).tailMap(obj, z5);
        }
        throw new IllegalArgumentException(b.d("expected fromKey <= toKey but %s > %s", obj, obj2));
    }

    @Override // java.util.NavigableMap
    /* renamed from: f, reason: merged with bridge method [inline-methods] */
    public final v tailMap(Object obj, boolean z5) {
        obj.getClass();
        return g(this.f2996i.v(obj, z5), this.f2997v.size());
    }

    @Override // java.util.NavigableMap
    public final Map.Entry firstEntry() {
        if (isEmpty()) {
            return null;
        }
        return (Map.Entry) entrySet().k().get(0);
    }

    @Override // java.util.SortedMap
    public final Object firstKey() {
        return this.f2996i.first();
    }

    @Override // java.util.NavigableMap
    public final Map.Entry floorEntry(Object obj) {
        return headMap(obj, true).lastEntry();
    }

    @Override // java.util.NavigableMap
    public final Object floorKey(Object obj) {
        Map.Entry floorEntry = floorEntry(obj);
        if (floorEntry == null) {
            return null;
        }
        return floorEntry.getKey();
    }

    public final v g(int i5, int i6) {
        p pVar = this.f2997v;
        if (i5 == 0) {
            if (i6 == pVar.size()) {
                return this;
            }
            i5 = 0;
        }
        d0 d0Var = this.f2996i;
        return i5 == i6 ? c(d0Var.f3001v) : new v(d0Var.w(i5, i6), pVar.subList(i5, i6), null);
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x000f, code lost:
    
        if (r4 < 0) goto L4;
     */
    @Override // bg.q, java.util.Map
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object get(Object obj) {
        int binarySearch;
        d0 d0Var = this.f2996i;
        if (obj != null) {
            try {
                binarySearch = Collections.binarySearch(d0Var.f2943x, obj, d0Var.f3001v);
            } catch (ClassCastException unused) {
            }
        }
        binarySearch = -1;
        if (binarySearch == -1) {
            return null;
        }
        return this.f2997v.get(binarySearch);
    }

    @Override // java.util.NavigableMap, java.util.SortedMap
    public final /* synthetic */ SortedMap headMap(Object obj) {
        return headMap(obj, false);
    }

    @Override // java.util.NavigableMap
    public final Map.Entry higherEntry(Object obj) {
        return tailMap(obj, false).firstEntry();
    }

    @Override // java.util.NavigableMap
    public final Object higherKey(Object obj) {
        Map.Entry higherEntry = higherEntry(obj);
        if (higherEntry == null) {
            return null;
        }
        return higherEntry.getKey();
    }

    @Override // java.util.Map, java.util.SortedMap
    public final /* synthetic */ Set keySet() {
        return this.f2996i;
    }

    @Override // java.util.NavigableMap
    public final Map.Entry lastEntry() {
        if (isEmpty()) {
            return null;
        }
        return (Map.Entry) entrySet().k().get(this.f2997v.size() - 1);
    }

    @Override // java.util.SortedMap
    public final Object lastKey() {
        return this.f2996i.last();
    }

    @Override // java.util.NavigableMap
    public final Map.Entry lowerEntry(Object obj) {
        return headMap(obj, false).lastEntry();
    }

    @Override // java.util.NavigableMap
    public final Object lowerKey(Object obj) {
        Map.Entry lowerEntry = lowerEntry(obj);
        if (lowerEntry == null) {
            return null;
        }
        return lowerEntry.getKey();
    }

    @Override // java.util.NavigableMap
    public final /* synthetic */ NavigableSet navigableKeySet() {
        return this.f2996i;
    }

    @Override // java.util.NavigableMap
    public final Map.Entry pollFirstEntry() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.NavigableMap
    public final Map.Entry pollLastEntry() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final int size() {
        return this.f2997v.size();
    }

    @Override // java.util.NavigableMap, java.util.SortedMap
    public final /* bridge */ /* synthetic */ SortedMap subMap(Object obj, Object obj2) {
        return subMap(obj, true, obj2, false);
    }

    @Override // java.util.NavigableMap, java.util.SortedMap
    public final /* synthetic */ SortedMap tailMap(Object obj) {
        return tailMap(obj, true);
    }

    @Override // java.util.Map, java.util.SortedMap
    public final /* synthetic */ Collection values() {
        return this.f2997v;
    }
}
