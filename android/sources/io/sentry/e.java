package io.sentry;

import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class e implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public int f11525d;

    /* renamed from: e, reason: collision with root package name */
    public int f11526e = -1;

    /* renamed from: i, reason: collision with root package name */
    public boolean f11527i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ f f11528v;

    public e(f fVar) {
        this.f11528v = fVar;
        this.f11525d = fVar.f11537e;
        this.f11527i = fVar.f11539v;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f11527i || this.f11525d != this.f11528v.f11538i;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        this.f11527i = false;
        int i5 = this.f11525d;
        this.f11526e = i5;
        int i6 = i5 + 1;
        f fVar = this.f11528v;
        this.f11525d = i6 < fVar.f11540w ? i6 : 0;
        return fVar.f11536d[i5];
    }

    @Override // java.util.Iterator
    public final void remove() {
        int i5;
        f fVar = this.f11528v;
        int i6 = fVar.f11540w;
        Object[] objArr = fVar.f11536d;
        int i10 = this.f11526e;
        if (i10 == -1) {
            throw new IllegalStateException();
        }
        int i11 = fVar.f11537e;
        if (i10 == i11) {
            fVar.remove();
            this.f11526e = -1;
            return;
        }
        int i12 = i10 + 1;
        if (i11 >= i10 || i12 >= (i5 = fVar.f11538i)) {
            while (i12 != fVar.f11538i) {
                if (i12 >= i6) {
                    objArr[i12 - 1] = objArr[0];
                } else {
                    int i13 = i12 - 1;
                    if (i13 < 0) {
                        i13 = i6 - 1;
                    }
                    objArr[i13] = objArr[i12];
                    i12++;
                    if (i12 >= i6) {
                    }
                }
                i12 = 0;
            }
        } else {
            System.arraycopy(objArr, i12, objArr, i10, i5 - i12);
        }
        this.f11526e = -1;
        int i14 = fVar.f11538i - 1;
        if (i14 < 0) {
            i14 = i6 - 1;
        }
        fVar.f11538i = i14;
        objArr[i14] = null;
        fVar.f11539v = false;
        int i15 = this.f11525d - 1;
        if (i15 < 0) {
            i15 = i6 - 1;
        }
        this.f11525d = i15;
    }
}
