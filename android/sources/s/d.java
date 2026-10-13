package s;

import java.lang.reflect.Array;
import java.util.Collection;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class d implements Collection {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ e f17670d;

    public d(e eVar) {
        this.f17670d = eVar;
    }

    @Override // java.util.Collection
    public final boolean add(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Collection
    public final boolean addAll(Collection collection) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Collection
    public final void clear() {
        this.f17670d.clear();
    }

    @Override // java.util.Collection
    public final boolean contains(Object obj) {
        return this.f17670d.a(obj) >= 0;
    }

    @Override // java.util.Collection
    public final boolean containsAll(Collection collection) {
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            if (!contains(it.next())) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.Collection
    public final boolean isEmpty() {
        return this.f17670d.isEmpty();
    }

    @Override // java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        return new a(this.f17670d, 1);
    }

    @Override // java.util.Collection
    public final boolean remove(Object obj) {
        e eVar = this.f17670d;
        int a = eVar.a(obj);
        if (a < 0) {
            return false;
        }
        eVar.g(a);
        return true;
    }

    @Override // java.util.Collection
    public final boolean removeAll(Collection collection) {
        e eVar = this.f17670d;
        int i5 = eVar.f1208i;
        int i6 = 0;
        boolean z5 = false;
        while (i6 < i5) {
            if (collection.contains(eVar.i(i6))) {
                eVar.g(i6);
                i6--;
                i5--;
                z5 = true;
            }
            i6++;
        }
        return z5;
    }

    @Override // java.util.Collection
    public final boolean retainAll(Collection collection) {
        e eVar = this.f17670d;
        int i5 = eVar.f1208i;
        int i6 = 0;
        boolean z5 = false;
        while (i6 < i5) {
            if (!collection.contains(eVar.i(i6))) {
                eVar.g(i6);
                i6--;
                i5--;
                z5 = true;
            }
            i6++;
        }
        return z5;
    }

    @Override // java.util.Collection
    public final int size() {
        return this.f17670d.f1208i;
    }

    @Override // java.util.Collection
    public final Object[] toArray() {
        e eVar = this.f17670d;
        int i5 = eVar.f1208i;
        Object[] objArr = new Object[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            objArr[i6] = eVar.i(i6);
        }
        return objArr;
    }

    @Override // java.util.Collection
    public final Object[] toArray(Object[] objArr) {
        e eVar = this.f17670d;
        int i5 = eVar.f1208i;
        if (objArr.length < i5) {
            objArr = (Object[]) Array.newInstance(objArr.getClass().getComponentType(), i5);
        }
        for (int i6 = 0; i6 < i5; i6++) {
            objArr[i6] = eVar.i(i6);
        }
        if (objArr.length > i5) {
            objArr[i5] = null;
        }
        return objArr;
    }
}
