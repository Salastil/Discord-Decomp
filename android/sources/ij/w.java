package ij;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class w extends c implements x, RandomAccess {

    /* renamed from: e, reason: collision with root package name */
    public final List f10930e;

    static {
        new w();
    }

    public w(ArrayList arrayList) {
        super(true);
        this.f10930e = arrayList;
    }

    @Override // ij.x
    public final void C(g gVar) {
        a();
        this.f10930e.add(gVar);
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        a();
        this.f10930e.add(i5, (String) obj);
        ((AbstractList) this).modCount++;
    }

    @Override // ij.c, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection collection) {
        return addAll(this.f10930e.size(), collection);
    }

    @Override // ij.x
    public final List c() {
        return Collections.unmodifiableList(this.f10930e);
    }

    @Override // ij.c, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        a();
        this.f10930e.clear();
        ((AbstractList) this).modCount++;
    }

    @Override // ij.x
    public final x f() {
        return this.f10843d ? new x0(this) : this;
    }

    @Override // ij.s
    public final s g(int i5) {
        List list = this.f10930e;
        if (i5 < list.size()) {
            throw new IllegalArgumentException();
        }
        ArrayList arrayList = new ArrayList(i5);
        arrayList.addAll(list);
        return new w(arrayList);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        List list = this.f10930e;
        Object obj = list.get(i5);
        if (obj instanceof String) {
            return (String) obj;
        }
        if (!(obj instanceof g)) {
            byte[] bArr = (byte[]) obj;
            String str = new String(bArr, t.a);
            if (e1.a.y(bArr, 0, bArr.length) == 0) {
                list.set(i5, str);
            }
            return str;
        }
        g gVar = (g) obj;
        String str2 = gVar.size() == 0 ? "" : new String(gVar.f10861e, gVar.e(), gVar.size(), t.a);
        int e9 = gVar.e();
        if (e1.a.y(gVar.f10861e, e9, gVar.size() + e9) == 0) {
            list.set(i5, str2);
        }
        return str2;
    }

    @Override // ij.c, java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        a();
        Object remove = this.f10930e.remove(i5);
        ((AbstractList) this).modCount++;
        if (remove instanceof String) {
            return (String) remove;
        }
        if (!(remove instanceof g)) {
            return new String((byte[]) remove, t.a);
        }
        g gVar = (g) remove;
        return gVar.size() == 0 ? "" : new String(gVar.f10861e, gVar.e(), gVar.size(), t.a);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        a();
        Object obj2 = this.f10930e.set(i5, (String) obj);
        if (obj2 instanceof String) {
            return (String) obj2;
        }
        if (!(obj2 instanceof g)) {
            return new String((byte[]) obj2, t.a);
        }
        g gVar = (g) obj2;
        return gVar.size() == 0 ? "" : new String(gVar.f10861e, gVar.e(), gVar.size(), t.a);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f10930e.size();
    }

    public w() {
        super(false);
        this.f10930e = Collections.EMPTY_LIST;
    }

    @Override // ij.c, java.util.AbstractList, java.util.List
    public final boolean addAll(int i5, Collection collection) {
        a();
        if (collection instanceof x) {
            collection = ((x) collection).c();
        }
        boolean addAll = this.f10930e.addAll(i5, collection);
        ((AbstractList) this).modCount++;
        return addAll;
    }

    public w(int i5) {
        this(new ArrayList(i5));
    }
}
