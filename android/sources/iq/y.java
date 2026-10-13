package iq;

import androidx.datastore.preferences.protobuf.d1;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class y extends AbstractMap {

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ int f12250x = 0;

    /* renamed from: d, reason: collision with root package name */
    public final int f12251d;

    /* renamed from: e, reason: collision with root package name */
    public List f12252e = Collections.EMPTY_LIST;

    /* renamed from: i, reason: collision with root package name */
    public Map f12253i = Collections.EMPTY_MAP;

    /* renamed from: v, reason: collision with root package name */
    public boolean f12254v;

    /* renamed from: w, reason: collision with root package name */
    public volatile d1 f12255w;

    public y(int i5) {
        this.f12251d = i5;
    }

    public final int a(Comparable comparable) {
        int i5;
        int size = this.f12252e.size();
        int i6 = size - 1;
        if (i6 >= 0) {
            int compareTo = comparable.compareTo(((b0) this.f12252e.get(i6)).f12187d);
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
            int compareTo2 = comparable.compareTo(((b0) this.f12252e.get(i11)).f12187d);
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
        if (this.f12254v) {
            throw new UnsupportedOperationException();
        }
    }

    public final Iterable c() {
        return this.f12253i.isEmpty() ? a0.f12186b : this.f12253i.entrySet();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final void clear() {
        b();
        if (!this.f12252e.isEmpty()) {
            this.f12252e.clear();
        }
        if (this.f12253i.isEmpty()) {
            return;
        }
        this.f12253i.clear();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean containsKey(Object obj) {
        Comparable comparable = (Comparable) obj;
        return a(comparable) >= 0 || this.f12253i.containsKey(comparable);
    }

    public final SortedMap d() {
        b();
        if (this.f12253i.isEmpty() && !(this.f12253i instanceof TreeMap)) {
            this.f12253i = new TreeMap();
        }
        return (SortedMap) this.f12253i;
    }

    @Override // java.util.AbstractMap, java.util.Map
    /* renamed from: e, reason: merged with bridge method [inline-methods] */
    public final Object put(Comparable comparable, Object obj) {
        b();
        int a = a(comparable);
        if (a >= 0) {
            return ((b0) this.f12252e.get(a)).setValue(obj);
        }
        b();
        boolean isEmpty = this.f12252e.isEmpty();
        int i5 = this.f12251d;
        if (isEmpty && !(this.f12252e instanceof ArrayList)) {
            this.f12252e = new ArrayList(i5);
        }
        int i6 = -(a + 1);
        if (i6 >= i5) {
            return d().put(comparable, obj);
        }
        if (this.f12252e.size() == i5) {
            b0 b0Var = (b0) this.f12252e.remove(i5 - 1);
            d().put(b0Var.f12187d, b0Var.f12188e);
        }
        this.f12252e.add(i6, new b0(this, comparable, obj));
        return null;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Set entrySet() {
        if (this.f12255w == null) {
            this.f12255w = new d1(this, 2);
        }
        return this.f12255w;
    }

    public final Object f(int i5) {
        b();
        Object obj = ((b0) this.f12252e.remove(i5)).f12188e;
        if (!this.f12253i.isEmpty()) {
            Iterator it = d().entrySet().iterator();
            List list = this.f12252e;
            Map.Entry entry = (Map.Entry) it.next();
            list.add(new b0(this, (Comparable) entry.getKey(), entry.getValue()));
            it.remove();
        }
        return obj;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object get(Object obj) {
        Comparable comparable = (Comparable) obj;
        int a = a(comparable);
        return a >= 0 ? ((b0) this.f12252e.get(a)).f12188e : this.f12253i.get(comparable);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object remove(Object obj) {
        b();
        Comparable comparable = (Comparable) obj;
        int a = a(comparable);
        if (a >= 0) {
            return f(a);
        }
        if (this.f12253i.isEmpty()) {
            return null;
        }
        return this.f12253i.remove(comparable);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final int size() {
        return this.f12253i.size() + this.f12252e.size();
    }
}
