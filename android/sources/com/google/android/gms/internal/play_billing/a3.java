package com.google.android.gms.internal.play_billing;

import java.util.AbstractMap;
import java.util.Collections;
import java.util.Map;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class a3 extends AbstractMap {

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ int f5687y = 0;

    /* renamed from: d, reason: collision with root package name */
    public Object[] f5688d;

    /* renamed from: e, reason: collision with root package name */
    public int f5689e;

    /* renamed from: i, reason: collision with root package name */
    public Map f5690i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f5691v;

    /* renamed from: w, reason: collision with root package name */
    public volatile androidx.datastore.preferences.protobuf.d1 f5692w;

    /* renamed from: x, reason: collision with root package name */
    public Map f5693x;

    public a3() {
        Map map = Collections.EMPTY_MAP;
        this.f5690i = map;
        this.f5693x = map;
    }

    public final Set a() {
        return this.f5690i.isEmpty() ? Collections.EMPTY_SET : this.f5690i.entrySet();
    }

    public final void b(Object obj) {
        f();
        d();
        f();
        if (this.f5688d == null) {
            this.f5688d = new Object[16];
        }
        if (this.f5689e == 16) {
            b3 b3Var = (b3) this.f5688d[15];
            this.f5689e = 15;
            SortedMap e9 = e();
            b3Var.getClass();
            e9.put(null, b3Var.f5706d);
        }
        Object[] objArr = this.f5688d;
        int length = objArr.length;
        System.arraycopy(objArr, 0, objArr, 1, 15);
        this.f5688d[0] = new b3(this, obj);
        this.f5689e++;
    }

    public final b3 c(int i5) {
        if (i5 < this.f5689e) {
            return (b3) this.f5688d[i5];
        }
        throw new ArrayIndexOutOfBoundsException(i5);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final void clear() {
        f();
        if (this.f5689e != 0) {
            this.f5688d = null;
            this.f5689e = 0;
        }
        if (this.f5690i.isEmpty()) {
            return;
        }
        this.f5690i.clear();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean containsKey(Object obj) {
        if (obj != null) {
            throw new ClassCastException();
        }
        d();
        return this.f5690i.containsKey(null);
    }

    public final void d() {
        int i5 = this.f5689e - 1;
        if (i5 >= 0) {
            ((b3) this.f5688d[i5]).getClass();
            throw null;
        }
        if (i5 < 0) {
            return;
        }
        ((b3) this.f5688d[i5 / 2]).getClass();
        throw null;
    }

    public final SortedMap e() {
        f();
        if (this.f5690i.isEmpty() && !(this.f5690i instanceof TreeMap)) {
            TreeMap treeMap = new TreeMap();
            this.f5690i = treeMap;
            this.f5693x = treeMap.descendingMap();
        }
        return (SortedMap) this.f5690i;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Set entrySet() {
        if (this.f5692w == null) {
            this.f5692w = new androidx.datastore.preferences.protobuf.d1(this, 1);
        }
        return this.f5692w;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a3)) {
            return super.equals(obj);
        }
        a3 a3Var = (a3) obj;
        int size = size();
        if (size == a3Var.size()) {
            int i5 = this.f5689e;
            if (i5 != a3Var.f5689e) {
                return entrySet().equals(a3Var.entrySet());
            }
            for (int i6 = 0; i6 < i5; i6++) {
                if (c(i6).equals(a3Var.c(i6))) {
                }
            }
            if (i5 != size) {
                return this.f5690i.equals(a3Var.f5690i);
            }
            return true;
        }
        return false;
    }

    public final void f() {
        if (this.f5691v) {
            throw new UnsupportedOperationException();
        }
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object get(Object obj) {
        if (obj != null) {
            throw new ClassCastException();
        }
        d();
        return this.f5690i.get(null);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final int hashCode() {
        int i5 = this.f5689e;
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            i6 += this.f5688d[i10].hashCode();
        }
        return this.f5690i.size() > 0 ? this.f5690i.hashCode() + i6 : i6;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final /* synthetic */ Object put(Object obj, Object obj2) {
        if (obj != null) {
            throw new ClassCastException();
        }
        b(obj2);
        return null;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final Object remove(Object obj) {
        f();
        if (obj != null) {
            throw new ClassCastException();
        }
        d();
        if (this.f5690i.isEmpty()) {
            return null;
        }
        return this.f5690i.remove(null);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public final int size() {
        return this.f5690i.size() + this.f5689e;
    }
}
