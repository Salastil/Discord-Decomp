package go;

import java.util.AbstractList;
import java.util.ConcurrentModificationException;
import java.util.ListIterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableListIterator;

/* loaded from: classes3.dex */
public final class b implements ListIterator, KMutableListIterator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9389d = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f9390e;

    /* renamed from: i, reason: collision with root package name */
    public int f9391i;

    /* renamed from: v, reason: collision with root package name */
    public int f9392v;

    /* renamed from: w, reason: collision with root package name */
    public final kotlin.collections.l f9393w;

    public b(e list, int i5) {
        int i6;
        Intrinsics.checkNotNullParameter(list, "list");
        this.f9393w = list;
        this.f9390e = i5;
        this.f9391i = -1;
        i6 = ((AbstractList) list).modCount;
        this.f9392v = i6;
    }

    public void a() {
        int i5;
        i5 = ((AbstractList) ((c) this.f9393w).f9398w).modCount;
        if (i5 != this.f9392v) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        int i5;
        int i6;
        switch (this.f9389d) {
            case 0:
                a();
                c cVar = (c) this.f9393w;
                int i10 = this.f9390e;
                this.f9390e = i10 + 1;
                cVar.add(i10, obj);
                this.f9391i = -1;
                i5 = ((AbstractList) cVar).modCount;
                this.f9392v = i5;
                break;
            default:
                b();
                e eVar = (e) this.f9393w;
                int i11 = this.f9390e;
                this.f9390e = i11 + 1;
                eVar.add(i11, obj);
                this.f9391i = -1;
                i6 = ((AbstractList) eVar).modCount;
                this.f9392v = i6;
                break;
        }
    }

    public void b() {
        int i5;
        i5 = ((AbstractList) ((e) this.f9393w)).modCount;
        if (i5 != this.f9392v) {
            throw new ConcurrentModificationException();
        }
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final boolean hasNext() {
        switch (this.f9389d) {
            case 0:
                if (this.f9390e < ((c) this.f9393w).f9396i) {
                }
                break;
            default:
                if (this.f9390e < ((e) this.f9393w).f9402e) {
                }
                break;
        }
        return false;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        switch (this.f9389d) {
            case 0:
                if (this.f9390e > 0) {
                }
                break;
            default:
                if (this.f9390e > 0) {
                }
                break;
        }
        return false;
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final Object next() {
        switch (this.f9389d) {
            case 0:
                a();
                int i5 = this.f9390e;
                c cVar = (c) this.f9393w;
                if (i5 >= cVar.f9396i) {
                    throw new NoSuchElementException();
                }
                this.f9390e = i5 + 1;
                this.f9391i = i5;
                return cVar.f9394d[cVar.f9395e + i5];
            default:
                b();
                int i6 = this.f9390e;
                e eVar = (e) this.f9393w;
                if (i6 >= eVar.f9402e) {
                    throw new NoSuchElementException();
                }
                this.f9390e = i6 + 1;
                this.f9391i = i6;
                return eVar.f9401d[i6];
        }
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        switch (this.f9389d) {
        }
        return this.f9390e;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        switch (this.f9389d) {
            case 0:
                a();
                int i5 = this.f9390e;
                if (i5 <= 0) {
                    throw new NoSuchElementException();
                }
                int i6 = i5 - 1;
                this.f9390e = i6;
                this.f9391i = i6;
                c cVar = (c) this.f9393w;
                return cVar.f9394d[cVar.f9395e + i6];
            default:
                b();
                int i10 = this.f9390e;
                if (i10 <= 0) {
                    throw new NoSuchElementException();
                }
                int i11 = i10 - 1;
                this.f9390e = i11;
                this.f9391i = i11;
                return ((e) this.f9393w).f9401d[i11];
        }
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        int i5;
        switch (this.f9389d) {
            case 0:
                i5 = this.f9390e;
                break;
            default:
                i5 = this.f9390e;
                break;
        }
        return i5 - 1;
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final void remove() {
        int i5;
        int i6;
        switch (this.f9389d) {
            case 0:
                c cVar = (c) this.f9393w;
                a();
                int i10 = this.f9391i;
                if (i10 == -1) {
                    throw new IllegalStateException("Call next() or previous() before removing element from the iterator.");
                }
                cVar.b(i10);
                this.f9390e = this.f9391i;
                this.f9391i = -1;
                i5 = ((AbstractList) cVar).modCount;
                this.f9392v = i5;
                return;
            default:
                e eVar = (e) this.f9393w;
                b();
                int i11 = this.f9391i;
                if (i11 == -1) {
                    throw new IllegalStateException("Call next() or previous() before removing element from the iterator.");
                }
                eVar.b(i11);
                this.f9390e = this.f9391i;
                this.f9391i = -1;
                i6 = ((AbstractList) eVar).modCount;
                this.f9392v = i6;
                return;
        }
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        switch (this.f9389d) {
            case 0:
                a();
                int i5 = this.f9391i;
                if (i5 == -1) {
                    throw new IllegalStateException("Call next() or previous() before replacing element from the iterator.");
                }
                ((c) this.f9393w).set(i5, obj);
                return;
            default:
                b();
                int i6 = this.f9391i;
                if (i6 == -1) {
                    throw new IllegalStateException("Call next() or previous() before replacing element from the iterator.");
                }
                ((e) this.f9393w).set(i6, obj);
                return;
        }
    }

    public b(c list, int i5) {
        int i6;
        Intrinsics.checkNotNullParameter(list, "list");
        this.f9393w = list;
        this.f9390e = i5;
        this.f9391i = -1;
        i6 = ((AbstractList) list).modCount;
        this.f9392v = i6;
    }
}
