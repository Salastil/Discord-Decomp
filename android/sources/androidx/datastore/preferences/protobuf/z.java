package androidx.datastore.preferences.protobuf;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

/* loaded from: classes.dex */
public final class z extends b implements a0, RandomAccess {

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f1851e;

    static {
        new z(10).f1718d = false;
    }

    public z(int i5) {
        this(new ArrayList(i5));
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final Object R(int i5) {
        return this.f1851e.get(i5);
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        a();
        this.f1851e.add(i5, (String) obj);
        ((AbstractList) this).modCount++;
    }

    @Override // androidx.datastore.preferences.protobuf.b, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection collection) {
        return addAll(this.f1851e.size(), collection);
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final List c() {
        return Collections.unmodifiableList(this.f1851e);
    }

    @Override // androidx.datastore.preferences.protobuf.b, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        a();
        this.f1851e.clear();
        ((AbstractList) this).modCount++;
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final a0 f() {
        return this.f1718d ? new i1(this) : this;
    }

    @Override // androidx.datastore.preferences.protobuf.u
    public final u g(int i5) {
        ArrayList arrayList = this.f1851e;
        if (i5 < arrayList.size()) {
            throw new IllegalArgumentException();
        }
        ArrayList arrayList2 = new ArrayList(i5);
        arrayList2.addAll(arrayList);
        return new z(arrayList2);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        ArrayList arrayList = this.f1851e;
        Object obj = arrayList.get(i5);
        if (obj instanceof String) {
            return (String) obj;
        }
        if (!(obj instanceof f)) {
            byte[] bArr = (byte[]) obj;
            String str = new String(bArr, v.a);
            if (q1.a.i(bArr, 0, bArr.length) == 0) {
                arrayList.set(i5, str);
            }
            return str;
        }
        f fVar = (f) obj;
        String str2 = fVar.size() == 0 ? "" : new String(fVar.f1744e, fVar.b(), fVar.size(), v.a);
        int b10 = fVar.b();
        if (q1.a.i(fVar.f1744e, b10, fVar.size() + b10) == 0) {
            arrayList.set(i5, str2);
        }
        return str2;
    }

    @Override // androidx.datastore.preferences.protobuf.a0
    public final void q(f fVar) {
        a();
        this.f1851e.add(fVar);
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        a();
        Object remove = this.f1851e.remove(i5);
        ((AbstractList) this).modCount++;
        if (remove instanceof String) {
            return (String) remove;
        }
        if (!(remove instanceof f)) {
            return new String((byte[]) remove, v.a);
        }
        f fVar = (f) remove;
        return fVar.size() == 0 ? "" : new String(fVar.f1744e, fVar.b(), fVar.size(), v.a);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        a();
        Object obj2 = this.f1851e.set(i5, (String) obj);
        if (obj2 instanceof String) {
            return (String) obj2;
        }
        if (!(obj2 instanceof f)) {
            return new String((byte[]) obj2, v.a);
        }
        f fVar = (f) obj2;
        return fVar.size() == 0 ? "" : new String(fVar.f1744e, fVar.b(), fVar.size(), v.a);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1851e.size();
    }

    public z(ArrayList arrayList) {
        this.f1851e = arrayList;
    }

    @Override // androidx.datastore.preferences.protobuf.b, java.util.AbstractList, java.util.List
    public final boolean addAll(int i5, Collection collection) {
        a();
        if (collection instanceof a0) {
            collection = ((a0) collection).c();
        }
        boolean addAll = this.f1851e.addAll(i5, collection);
        ((AbstractList) this).modCount++;
        return addAll;
    }
}
