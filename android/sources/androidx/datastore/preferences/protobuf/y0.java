package androidx.datastore.preferences.protobuf;

import java.util.AbstractMap;
import java.util.AbstractSet;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;

/* loaded from: classes.dex */
public final class y0 extends AbstractMap {

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ int f1844y = 0;

    /* renamed from: d, reason: collision with root package name */
    public final int f1845d;

    /* renamed from: e, reason: collision with root package name */
    public List f1846e = Collections.EMPTY_LIST;

    /* renamed from: i, reason: collision with root package name */
    public Map f1847i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f1848v;

    /* renamed from: w, reason: collision with root package name */
    public volatile d1 f1849w;

    /* renamed from: x, reason: collision with root package name */
    public Map f1850x;

    public y0(int i5) {
        this.f1845d = i5;
        Map map = Collections.EMPTY_MAP;
        this.f1847i = map;
        this.f1850x = map;
    }

    public final int a(Comparable comparable) {
        int i5;
        int size = this.f1846e.size();
        int i6 = size - 1;
        if (i6 >= 0) {
            int compareTo = comparable.compareTo(((b1) this.f1846e.get(i6)).f1720d);
            if (compareTo > 0) {
                i5 = size + 1;
                return -i5;
            }
            if (compareTo == 0) {
                return i6;
            }
        }
        int i10 = 0;
        while (i10 <= i6) {
            int i11 = (i10 + i6) / 2;
            int compareTo2 = comparable.compareTo(((b1) this.f1846e.get(i11)).f1720d);
            if (compareTo2 < 0) {
                i6 = i11 - 1;
            } else {
                if (compareTo2 <= 0) {
                    return i11;
                }
                i10 = i11 + 1;
            }
        }
        i5 = i10 + 1;
        return -i5;
    }

    public final void b() {
        if (this.f1848v) {
            throw new UnsupportedOperationException();
        }
    }

    public final Map.Entry c(int i5) {
        return (Map.Entry) this.f1846e.get(i5);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final void clear() {
        b();
        if (!this.f1846e.isEmpty()) {
            this.f1846e.clear();
        }
        if (this.f1847i.isEmpty()) {
            return;
        }
        this.f1847i.clear();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean containsKey(Object obj) {
        Comparable comparable = (Comparable) obj;
        return a(comparable) >= 0 || this.f1847i.containsKey(comparable);
    }

    public final Iterable d() {
        return this.f1847i.isEmpty() ? m0.f1775b : this.f1847i.entrySet();
    }

    public final SortedMap e() {
        b();
        if (this.f1847i.isEmpty() && !(this.f1847i instanceof TreeMap)) {
            TreeMap treeMap = new TreeMap();
            this.f1847i = treeMap;
            this.f1850x = treeMap.descendingMap();
        }
        return (SortedMap) this.f1847i;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Set entrySet() {
        if (this.f1849w == null) {
            this.f1849w = new d1(this, 0);
        }
        return this.f1849w;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof y0)) {
            return super.equals(obj);
        }
        y0 y0Var = (y0) obj;
        int size = size();
        if (size == y0Var.size()) {
            int size2 = this.f1846e.size();
            if (size2 != y0Var.f1846e.size()) {
                return ((AbstractSet) entrySet()).equals(y0Var.entrySet());
            }
            for (int i5 = 0; i5 < size2; i5++) {
                if (c(i5).equals(y0Var.c(i5))) {
                }
            }
            if (size2 != size) {
                return this.f1847i.equals(y0Var.f1847i);
            }
            return true;
        }
        return false;
    }

    public final Object f(Comparable comparable, Object obj) {
        b();
        int a = a(comparable);
        if (a >= 0) {
            return ((b1) this.f1846e.get(a)).setValue(obj);
        }
        b();
        boolean isEmpty = this.f1846e.isEmpty();
        int i5 = this.f1845d;
        if (isEmpty && !(this.f1846e instanceof ArrayList)) {
            this.f1846e = new ArrayList(i5);
        }
        int i6 = -(a + 1);
        if (i6 >= i5) {
            return e().put(comparable, obj);
        }
        if (this.f1846e.size() == i5) {
            b1 b1Var = (b1) this.f1846e.remove(i5 - 1);
            e().put(b1Var.f1720d, b1Var.f1721e);
        }
        this.f1846e.add(i6, new b1(this, comparable, obj));
        return null;
    }

    public final Object g(int i5) {
        b();
        Object obj = ((b1) this.f1846e.remove(i5)).f1721e;
        if (!this.f1847i.isEmpty()) {
            Iterator it = e().entrySet().iterator();
            List list = this.f1846e;
            Map.Entry entry = (Map.Entry) it.next();
            list.add(new b1(this, (Comparable) entry.getKey(), entry.getValue()));
            it.remove();
        }
        return obj;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object get(Object obj) {
        Comparable comparable = (Comparable) obj;
        int a = a(comparable);
        return a >= 0 ? ((b1) this.f1846e.get(a)).f1721e : this.f1847i.get(comparable);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final int hashCode() {
        int size = this.f1846e.size();
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += ((b1) this.f1846e.get(i6)).hashCode();
        }
        return this.f1847i.size() > 0 ? this.f1847i.hashCode() + i5 : i5;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final /* synthetic */ Object put(Object obj, Object obj2) {
        if (obj == null) {
            return f(null, obj2);
        }
        throw new ClassCastException();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object remove(Object obj) {
        b();
        Comparable comparable = (Comparable) obj;
        int a = a(comparable);
        if (a >= 0) {
            return g(a);
        }
        if (this.f1847i.isEmpty()) {
            return null;
        }
        return this.f1847i.remove(comparable);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final int size() {
        return this.f1847i.size() + this.f1846e.size();
    }
}
