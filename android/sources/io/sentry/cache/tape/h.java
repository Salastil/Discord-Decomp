package io.sentry.cache.tape;

import java.io.IOException;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class h implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public int f11451d = 0;

    /* renamed from: e, reason: collision with root package name */
    public long f11452e;

    /* renamed from: i, reason: collision with root package name */
    public int f11453i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ i f11454v;

    public h(i iVar) {
        this.f11454v = iVar;
        this.f11452e = iVar.f11459w.a;
        this.f11453i = iVar.E;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        i iVar = this.f11454v;
        if (iVar.G) {
            throw new IllegalStateException("closed");
        }
        if (iVar.E == this.f11453i) {
            return this.f11451d != iVar.f11458v;
        }
        throw new ConcurrentModificationException();
    }

    @Override // java.util.Iterator
    public final Object next() {
        byte[] bArr = i.H;
        i iVar = this.f11454v;
        if (iVar.G) {
            throw new IllegalStateException("closed");
        }
        if (iVar.E != this.f11453i) {
            throw new ConcurrentModificationException();
        }
        int i5 = iVar.f11458v;
        if (i5 == 0) {
            throw new NoSuchElementException();
        }
        if (this.f11451d >= i5) {
            throw new NoSuchElementException();
        }
        try {
            g x5 = iVar.x(this.f11452e);
            int i6 = x5.f11450b;
            long j = x5.a;
            byte[] bArr2 = new byte[i6];
            long j5 = j + 4;
            long n02 = iVar.n0(j5);
            this.f11452e = n02;
            if (!iVar.l0(n02, bArr2, i6)) {
                this.f11451d = iVar.f11458v;
                return bArr;
            }
            this.f11452e = iVar.n0(j5 + i6);
            this.f11451d++;
            return bArr2;
        } catch (IOException e9) {
            throw e9;
        } catch (OutOfMemoryError unused) {
            iVar.j0();
            this.f11451d = iVar.f11458v;
            return bArr;
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        i iVar = this.f11454v;
        if (iVar.E != this.f11453i) {
            throw new ConcurrentModificationException();
        }
        if (iVar.f11458v == 0) {
            throw new NoSuchElementException();
        }
        if (this.f11451d != 1) {
            throw new UnsupportedOperationException("Removal is only permitted from the head.");
        }
        iVar.d0(1);
        this.f11453i = iVar.E;
        this.f11451d--;
    }
}
