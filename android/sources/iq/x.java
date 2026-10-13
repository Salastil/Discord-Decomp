package iq;

import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class x extends d {
    public static final int[] E;

    /* renamed from: e, reason: collision with root package name */
    public final int f12244e;

    /* renamed from: i, reason: collision with root package name */
    public final d f12245i;

    /* renamed from: v, reason: collision with root package name */
    public final d f12246v;

    /* renamed from: w, reason: collision with root package name */
    public final int f12247w;

    /* renamed from: x, reason: collision with root package name */
    public final int f12248x;

    /* renamed from: y, reason: collision with root package name */
    public int f12249y = 0;

    static {
        ArrayList arrayList = new ArrayList();
        int i5 = 1;
        int i6 = 1;
        while (i5 > 0) {
            arrayList.add(Integer.valueOf(i5));
            int i10 = i6 + i5;
            i6 = i5;
            i5 = i10;
        }
        arrayList.add(Integer.MAX_VALUE);
        E = new int[arrayList.size()];
        int i11 = 0;
        while (true) {
            int[] iArr = E;
            if (i11 >= iArr.length) {
                return;
            }
            iArr[i11] = ((Integer) arrayList.get(i11)).intValue();
            i11++;
        }
    }

    public x(d dVar, d dVar2) {
        this.f12245i = dVar;
        this.f12246v = dVar2;
        int size = dVar.size();
        this.f12247w = size;
        this.f12244e = dVar2.size() + size;
        this.f12248x = Math.max(dVar.h(), dVar2.h()) + 1;
    }

    @Override // iq.d
    public final void e(int i5, int i6, int i10, byte[] bArr) {
        int i11 = i5 + i10;
        d dVar = this.f12245i;
        int i12 = this.f12247w;
        if (i11 <= i12) {
            dVar.e(i5, i6, i10, bArr);
            return;
        }
        d dVar2 = this.f12246v;
        if (i5 >= i12) {
            dVar2.e(i5 - i12, i6, i10, bArr);
            return;
        }
        int i13 = i12 - i5;
        dVar.e(i5, i6, i13, bArr);
        dVar2.e(0, i6 + i13, i10 - i13, bArr);
    }

    public final boolean equals(Object obj) {
        int p3;
        if (obj == this) {
            return true;
        }
        if (obj instanceof d) {
            d dVar = (d) obj;
            int size = dVar.size();
            int i5 = this.f12244e;
            if (i5 == size) {
                if (i5 == 0) {
                    return true;
                }
                if (this.f12249y == 0 || (p3 = dVar.p()) == 0 || this.f12249y == p3) {
                    io.sentry.cache.tape.d dVar2 = new io.sentry.cache.tape.d(this);
                    t a = dVar2.a();
                    io.sentry.cache.tape.d dVar3 = new io.sentry.cache.tape.d(dVar);
                    t a10 = dVar3.a();
                    int i6 = 0;
                    int i10 = 0;
                    int i11 = 0;
                    while (true) {
                        int length = a.f12239e.length - i6;
                        int length2 = a10.f12239e.length - i10;
                        int min = Math.min(length, length2);
                        if (!(i6 == 0 ? a.w(a10, i10, min) : a10.w(a, i6, min))) {
                            break;
                        }
                        i11 += min;
                        if (i11 >= i5) {
                            if (i11 == i5) {
                                return true;
                            }
                            throw new IllegalStateException();
                        }
                        if (min == length) {
                            a = dVar2.a();
                            i6 = 0;
                        } else {
                            i6 += min;
                        }
                        if (min == length2) {
                            a10 = dVar3.a();
                            i10 = 0;
                        } else {
                            i10 += min;
                        }
                    }
                }
            }
        }
        return false;
    }

    @Override // iq.d
    public final int h() {
        return this.f12248x;
    }

    public final int hashCode() {
        int i5 = this.f12249y;
        if (i5 == 0) {
            int i6 = this.f12244e;
            i5 = m(i6, 0, i6);
            if (i5 == 0) {
                i5 = 1;
            }
            this.f12249y = i5;
        }
        return i5;
    }

    @Override // iq.d
    public final boolean i() {
        return this.f12244e >= E[this.f12248x];
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new w(this);
    }

    @Override // iq.d
    public final boolean j() {
        int n6 = this.f12245i.n(0, 0, this.f12247w);
        d dVar = this.f12246v;
        return dVar.n(n6, 0, dVar.size()) == 0;
    }

    @Override // iq.d
    public final int m(int i5, int i6, int i10) {
        int i11 = i6 + i10;
        d dVar = this.f12245i;
        int i12 = this.f12247w;
        if (i11 <= i12) {
            return dVar.m(i5, i6, i10);
        }
        d dVar2 = this.f12246v;
        if (i6 >= i12) {
            return dVar2.m(i5, i6 - i12, i10);
        }
        int i13 = i12 - i6;
        return dVar2.m(dVar.m(i5, i6, i13), 0, i10 - i13);
    }

    @Override // iq.d
    public final int n(int i5, int i6, int i10) {
        int i11 = i6 + i10;
        d dVar = this.f12245i;
        int i12 = this.f12247w;
        if (i11 <= i12) {
            return dVar.n(i5, i6, i10);
        }
        d dVar2 = this.f12246v;
        if (i6 >= i12) {
            return dVar2.n(i5, i6 - i12, i10);
        }
        int i13 = i12 - i6;
        return dVar2.n(dVar.n(i5, i6, i13), 0, i10 - i13);
    }

    @Override // iq.d
    public final int p() {
        return this.f12249y;
    }

    @Override // iq.d
    public final String s() {
        byte[] bArr;
        int i5 = this.f12244e;
        if (i5 == 0) {
            bArr = p.a;
        } else {
            byte[] bArr2 = new byte[i5];
            e(0, 0, i5, bArr2);
            bArr = bArr2;
        }
        return new String(bArr, "UTF-8");
    }

    @Override // iq.d
    public final int size() {
        return this.f12244e;
    }

    @Override // iq.d
    public final void v(OutputStream outputStream, int i5, int i6) {
        int i10 = i5 + i6;
        d dVar = this.f12245i;
        int i11 = this.f12247w;
        if (i10 <= i11) {
            dVar.v(outputStream, i5, i6);
            return;
        }
        d dVar2 = this.f12246v;
        if (i5 >= i11) {
            dVar2.v(outputStream, i5 - i11, i6);
            return;
        }
        int i12 = i11 - i5;
        dVar.v(outputStream, i5, i12);
        dVar2.v(outputStream, 0, i6 - i12);
    }
}
