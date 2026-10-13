package ei;

import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class i implements Iterator {

    /* renamed from: e, reason: collision with root package name */
    public String f8106e;

    /* renamed from: i, reason: collision with root package name */
    public final CharSequence f8107i;

    /* renamed from: v, reason: collision with root package name */
    public final a f8108v;

    /* renamed from: x, reason: collision with root package name */
    public int f8110x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ ve.i f8111y;

    /* renamed from: d, reason: collision with root package name */
    public int f8105d = 2;

    /* renamed from: w, reason: collision with root package name */
    public int f8109w = 0;

    public i(ve.i iVar, a1.d dVar, CharSequence charSequence) {
        this.f8111y = iVar;
        this.f8108v = (a) dVar.f15i;
        this.f8110x = dVar.f14e;
        this.f8107i = charSequence;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        String str;
        a aVar;
        int i5 = this.f8105d;
        if (i5 == 4) {
            throw new IllegalStateException();
        }
        int b10 = f0.e.b(i5);
        if (b10 == 0) {
            return true;
        }
        if (b10 == 2) {
            return false;
        }
        this.f8105d = 4;
        int i6 = this.f8109w;
        while (true) {
            int i10 = this.f8109w;
            if (i10 == -1) {
                this.f8105d = 3;
                str = null;
                break;
            }
            b bVar = (b) this.f8111y.f19405d;
            CharSequence charSequence = this.f8107i;
            int length = charSequence.length();
            ys.d.t(i10, length);
            while (true) {
                if (i10 >= length) {
                    i10 = -1;
                    break;
                }
                if (bVar.a(charSequence.charAt(i10))) {
                    break;
                }
                i10++;
            }
            if (i10 == -1) {
                i10 = charSequence.length();
                this.f8109w = -1;
            } else {
                this.f8109w = i10 + 1;
            }
            int i11 = this.f8109w;
            if (i11 == i6) {
                int i12 = i11 + 1;
                this.f8109w = i12;
                if (i12 > charSequence.length()) {
                    this.f8109w = -1;
                }
            } else {
                while (true) {
                    aVar = this.f8108v;
                    if (i6 >= i10 || !aVar.a(charSequence.charAt(i6))) {
                        break;
                    }
                    i6++;
                }
                while (i10 > i6 && aVar.a(charSequence.charAt(i10 - 1))) {
                    i10--;
                }
                int i13 = this.f8110x;
                if (i13 == 1) {
                    i10 = charSequence.length();
                    this.f8109w = -1;
                    while (i10 > i6 && aVar.a(charSequence.charAt(i10 - 1))) {
                        i10--;
                    }
                } else {
                    this.f8110x = i13 - 1;
                }
                str = charSequence.subSequence(i6, i10).toString();
            }
        }
        this.f8106e = str;
        if (this.f8105d == 3) {
            return false;
        }
        this.f8105d = 1;
        return true;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        this.f8105d = 2;
        String str = this.f8106e;
        this.f8106e = null;
        return str;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
