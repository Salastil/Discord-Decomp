package fi;

import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class q implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public int f8696d;

    /* renamed from: e, reason: collision with root package name */
    public int f8697e;

    /* renamed from: i, reason: collision with root package name */
    public int f8698i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ t f8699v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f8700w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ t f8701x;

    public q(t tVar, int i5) {
        this.f8700w = i5;
        this.f8701x = tVar;
        this.f8699v = tVar;
        this.f8696d = tVar.f8715w;
        this.f8697e = tVar.isEmpty() ? -1 : 0;
        this.f8698i = -1;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f8697e >= 0;
    }

    @Override // java.util.Iterator
    public final Object next() {
        Object obj;
        t tVar = this.f8699v;
        if (tVar.f8715w != this.f8696d) {
            throw new ConcurrentModificationException();
        }
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f8697e;
        this.f8698i = i5;
        switch (this.f8700w) {
            case 0:
                obj = this.f8701x.i()[i5];
                break;
            case 1:
                obj = new s(this.f8701x, i5);
                break;
            default:
                obj = this.f8701x.j()[i5];
                break;
        }
        int i6 = this.f8697e + 1;
        if (i6 >= tVar.f8716x) {
            i6 = -1;
        }
        this.f8697e = i6;
        return obj;
    }

    @Override // java.util.Iterator
    public final void remove() {
        t tVar = this.f8699v;
        int i5 = tVar.f8715w;
        int i6 = this.f8696d;
        if (i5 != i6) {
            throw new ConcurrentModificationException();
        }
        int i10 = this.f8698i;
        if (!(i10 >= 0)) {
            throw new IllegalStateException("no calls to next() since the last call to remove()");
        }
        this.f8696d = i6 + 32;
        tVar.remove(tVar.i()[i10]);
        this.f8697e--;
        this.f8698i = -1;
    }
}
