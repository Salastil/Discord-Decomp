package iq;

import java.io.UnsupportedEncodingException;
import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class r extends AbstractList implements RandomAccess, s {

    /* renamed from: e, reason: collision with root package name */
    public static final d0 f12237e = new d0(new r());

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f12238d;

    public r() {
        this.f12238d = new ArrayList();
    }

    @Override // iq.s
    public final void A(t tVar) {
        this.f12238d.add(tVar);
        ((AbstractList) this).modCount++;
    }

    @Override // iq.s
    public final d P(int i5) {
        d tVar;
        ArrayList arrayList = this.f12238d;
        Object obj = arrayList.get(i5);
        if (obj instanceof d) {
            tVar = (d) obj;
        } else if (obj instanceof String) {
            try {
                tVar = new t(((String) obj).getBytes("UTF-8"));
            } catch (UnsupportedEncodingException e9) {
                throw new RuntimeException("UTF-8 not supported?", e9);
            }
        } else {
            byte[] bArr = (byte[]) obj;
            int length = bArr.length;
            byte[] bArr2 = new byte[length];
            System.arraycopy(bArr, 0, bArr2, 0, length);
            tVar = new t(bArr2);
        }
        if (tVar != obj) {
            arrayList.set(i5, tVar);
        }
        return tVar;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        this.f12238d.add(i5, (String) obj);
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection collection) {
        return addAll(this.f12238d.size(), collection);
    }

    @Override // iq.s
    public final List c() {
        return Collections.unmodifiableList(this.f12238d);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        this.f12238d.clear();
        ((AbstractList) this).modCount++;
    }

    @Override // iq.s
    public final d0 f() {
        return new d0(this);
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        ArrayList arrayList = this.f12238d;
        Object obj = arrayList.get(i5);
        if (obj instanceof String) {
            return (String) obj;
        }
        if (obj instanceof d) {
            d dVar = (d) obj;
            String u5 = dVar.u();
            if (dVar.j()) {
                arrayList.set(i5, u5);
            }
            return u5;
        }
        byte[] bArr = (byte[]) obj;
        byte[] bArr2 = p.a;
        try {
            String str = new String(bArr, "UTF-8");
            if (a0.c(bArr, 0, bArr.length) == 0) {
                arrayList.set(i5, str);
            }
            return str;
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException("UTF-8 not supported?", e9);
        }
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        Object remove = this.f12238d.remove(i5);
        ((AbstractList) this).modCount++;
        if (remove instanceof String) {
            return (String) remove;
        }
        if (remove instanceof d) {
            return ((d) remove).u();
        }
        byte[] bArr = (byte[]) remove;
        byte[] bArr2 = p.a;
        try {
            return new String(bArr, "UTF-8");
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException("UTF-8 not supported?", e9);
        }
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        Object obj2 = this.f12238d.set(i5, (String) obj);
        if (obj2 instanceof String) {
            return (String) obj2;
        }
        if (obj2 instanceof d) {
            return ((d) obj2).u();
        }
        byte[] bArr = (byte[]) obj2;
        byte[] bArr2 = p.a;
        try {
            return new String(bArr, "UTF-8");
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException("UTF-8 not supported?", e9);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f12238d.size();
    }

    public r(s sVar) {
        this.f12238d = new ArrayList(sVar.size());
        addAll(sVar);
    }

    @Override // java.util.AbstractList, java.util.List
    public final boolean addAll(int i5, Collection collection) {
        if (collection instanceof s) {
            collection = ((s) collection).c();
        }
        boolean addAll = this.f12238d.addAll(i5, collection);
        ((AbstractList) this).modCount++;
        return addAll;
    }
}
