package kr;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class d implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13636d;

    /* renamed from: e, reason: collision with root package name */
    public final Iterator f13637e;

    /* renamed from: i, reason: collision with root package name */
    public int f13638i;

    /* renamed from: v, reason: collision with root package name */
    public Object f13639v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Sequence f13640w;

    public d(g gVar) {
        this.f13636d = 1;
        this.f13640w = gVar;
        this.f13637e = gVar.a.iterator();
        this.f13638i = -1;
    }

    public void a() {
        Object next;
        g gVar = (g) this.f13640w;
        do {
            Iterator it = this.f13637e;
            if (!it.hasNext()) {
                this.f13638i = 0;
                return;
            }
            next = it.next();
        } while (((Boolean) gVar.f13644c.invoke(next)).booleanValue() != gVar.f13643b);
        this.f13639v = next;
        this.f13638i = 1;
    }

    public void b() {
        Iterator it = this.f13637e;
        if (it.hasNext()) {
            Object next = it.next();
            if (((Boolean) ((e) this.f13640w).f13642c.invoke(next)).booleanValue()) {
                this.f13638i = 1;
                this.f13639v = next;
                return;
            }
        }
        this.f13638i = 0;
    }

    public void c() {
        Object next;
        do {
            Iterator it = this.f13637e;
            if (!it.hasNext()) {
                this.f13638i = 0;
                return;
            }
            next = it.next();
        } while (((Boolean) ((e) this.f13640w).f13642c.invoke(next)).booleanValue());
        this.f13639v = next;
        this.f13638i = 1;
    }

    public boolean d() {
        Iterator it;
        Iterator it2 = (Iterator) this.f13639v;
        if (it2 != null && it2.hasNext()) {
            this.f13638i = 1;
            return true;
        }
        do {
            Iterator it3 = this.f13637e;
            if (!it3.hasNext()) {
                this.f13638i = 2;
                this.f13639v = null;
                return false;
            }
            Object next = it3.next();
            h hVar = (h) this.f13640w;
            it = (Iterator) hVar.f13646c.invoke(hVar.f13645b.invoke(next));
        } while (!it.hasNext());
        this.f13639v = it;
        this.f13638i = 1;
        return true;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f13636d) {
            case 0:
                if (this.f13638i == -1) {
                    c();
                }
                return this.f13638i == 1 || this.f13637e.hasNext();
            case 1:
                if (this.f13638i == -1) {
                    a();
                }
                return this.f13638i == 1;
            case 2:
                int i5 = this.f13638i;
                if (i5 == 1) {
                    return true;
                }
                if (i5 == 2) {
                    return false;
                }
                return d();
            default:
                if (this.f13638i == -1) {
                    b();
                }
                return this.f13638i == 1;
        }
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f13636d) {
            case 0:
                if (this.f13638i == -1) {
                    c();
                }
                if (this.f13638i != 1) {
                    return this.f13637e.next();
                }
                Object obj = this.f13639v;
                this.f13639v = null;
                this.f13638i = 0;
                return obj;
            case 1:
                if (this.f13638i == -1) {
                    a();
                }
                if (this.f13638i == 0) {
                    throw new NoSuchElementException();
                }
                Object obj2 = this.f13639v;
                this.f13639v = null;
                this.f13638i = -1;
                return obj2;
            case 2:
                int i5 = this.f13638i;
                if (i5 == 2) {
                    throw new NoSuchElementException();
                }
                if (i5 == 0 && !d()) {
                    throw new NoSuchElementException();
                }
                this.f13638i = 0;
                Iterator it = (Iterator) this.f13639v;
                Intrinsics.checkNotNull(it);
                return it.next();
            default:
                if (this.f13638i == -1) {
                    b();
                }
                if (this.f13638i == 0) {
                    throw new NoSuchElementException();
                }
                Object obj3 = this.f13639v;
                this.f13639v = null;
                this.f13638i = -1;
                return obj3;
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f13636d) {
            case 0:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            case 1:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            case 2:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            default:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
        }
    }

    public d(h hVar) {
        this.f13636d = 2;
        this.f13640w = hVar;
        this.f13637e = hVar.a.iterator();
    }

    public d(e eVar, byte b10) {
        this.f13636d = 3;
        this.f13640w = eVar;
        this.f13637e = ((Sequence) eVar.f13641b).iterator();
        this.f13638i = -1;
    }

    public d(e eVar) {
        this.f13636d = 0;
        this.f13640w = eVar;
        this.f13637e = ((Sequence) eVar.f13641b).iterator();
        this.f13638i = -1;
    }
}
