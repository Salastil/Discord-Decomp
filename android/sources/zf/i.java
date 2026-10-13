package zf;

import a5.h0;
import java.util.Iterator;
import java.util.NoSuchElementException;
import w3.q;

/* loaded from: classes3.dex */
public final class i implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public String f21231d;

    /* renamed from: i, reason: collision with root package name */
    public final String f21233i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f21234v;

    /* renamed from: x, reason: collision with root package name */
    public int f21236x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ h f21237y;

    /* renamed from: e, reason: collision with root package name */
    public int f21232e = 2;

    /* renamed from: w, reason: collision with root package name */
    public int f21235w = 0;

    public i(h0 h0Var, String str, h hVar) {
        this.f21237y = hVar;
        h0Var.getClass();
        this.f21234v = h0Var.f175e;
        this.f21236x = Integer.MAX_VALUE;
        this.f21233i = str;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        int i5;
        String str;
        int i6;
        int i10 = this.f21232e;
        if (i10 == 4) {
            throw new IllegalStateException();
        }
        int i11 = i10 - 1;
        String str2 = null;
        if (i10 == 0) {
            throw null;
        }
        if (i11 == 0) {
            return true;
        }
        if (i11 != 2) {
            this.f21232e = 4;
            int i12 = this.f21235w;
            while (true) {
                i5 = this.f21235w;
                if (i5 == -1) {
                    this.f21232e = 3;
                    break;
                }
                str = this.f21233i;
                int length = str.length();
                q.G(i5, length);
                while (true) {
                    if (i5 >= length) {
                        i5 = -1;
                        break;
                    }
                    if (str.charAt(i5) == this.f21237y.a) {
                        break;
                    }
                    i5++;
                }
                if (i5 == -1) {
                    i5 = str.length();
                    this.f21235w = -1;
                    i6 = -1;
                } else {
                    i6 = i5 + 1;
                    this.f21235w = i6;
                }
                if (i6 == i12) {
                    int i13 = i6 + 1;
                    this.f21235w = i13;
                    if (i13 > str.length()) {
                        this.f21235w = -1;
                    }
                } else {
                    if (i12 < i5) {
                        str.charAt(i12);
                    }
                    if (i12 < i5) {
                        str.charAt(i5 - 1);
                    }
                    if (!this.f21234v || i12 != i5) {
                        break;
                    }
                    i12 = this.f21235w;
                }
            }
            int i14 = this.f21236x;
            if (i14 == 1) {
                i5 = str.length();
                this.f21235w = -1;
                if (i5 > i12) {
                    str.charAt(i5 - 1);
                }
            } else {
                this.f21236x = i14 - 1;
            }
            str2 = str.subSequence(i12, i5).toString();
            this.f21231d = str2;
            if (this.f21232e != 3) {
                this.f21232e = 1;
                return true;
            }
        }
        return false;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        this.f21232e = 2;
        String str = this.f21231d;
        this.f21231d = null;
        return str;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
