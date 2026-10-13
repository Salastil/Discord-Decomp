package bd;

import java.util.NoSuchElementException;
import ke.w;

/* loaded from: classes3.dex */
public final class e implements yc.d {

    /* renamed from: v, reason: collision with root package name */
    public int f2804v;

    /* renamed from: d, reason: collision with root package name */
    public int f2801d = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f2802e = -1;

    /* renamed from: i, reason: collision with root package name */
    public int f2803i = 0;

    /* renamed from: w, reason: collision with root package name */
    public Object f2805w = new int[16];

    public e() {
        this.f2804v = r0.length - 1;
    }

    @Override // yc.d
    public int a() {
        return -1;
    }

    @Override // yc.d
    public int b() {
        return this.f2801d;
    }

    @Override // yc.d
    public int c() {
        w wVar = (w) this.f2805w;
        int i5 = this.f2802e;
        if (i5 == 8) {
            return wVar.u();
        }
        if (i5 == 16) {
            return wVar.z();
        }
        int i6 = this.f2803i;
        this.f2803i = i6 + 1;
        if (i6 % 2 != 0) {
            return this.f2804v & 15;
        }
        int u5 = wVar.u();
        this.f2804v = u5;
        return (u5 & 240) >> 4;
    }

    public void d(int i5) {
        int i6 = this.f2803i;
        int[] iArr = (int[]) this.f2805w;
        if (i6 == iArr.length) {
            int length = iArr.length << 1;
            if (length < 0) {
                throw new IllegalStateException();
            }
            int[] iArr2 = new int[length];
            int length2 = iArr.length;
            int i10 = this.f2801d;
            int i11 = length2 - i10;
            System.arraycopy(iArr, i10, iArr2, 0, i11);
            System.arraycopy((int[]) this.f2805w, 0, iArr2, i11, i10);
            this.f2801d = 0;
            this.f2802e = this.f2803i - 1;
            this.f2805w = iArr2;
            this.f2804v = length - 1;
        }
        int i12 = (this.f2802e + 1) & this.f2804v;
        this.f2802e = i12;
        ((int[]) this.f2805w)[i12] = i5;
        this.f2803i++;
    }

    public int e() {
        int i5 = this.f2803i;
        if (i5 == 0) {
            throw new NoSuchElementException();
        }
        int[] iArr = (int[]) this.f2805w;
        int i6 = this.f2801d;
        int i10 = iArr[i6];
        this.f2801d = (i6 + 1) & this.f2804v;
        this.f2803i = i5 - 1;
        return i10;
    }
}
