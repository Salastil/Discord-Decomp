package od;

import android.net.Uri;
import hc.g;
import java.util.Arrays;
import ke.d0;
import n1.k;

/* loaded from: classes3.dex */
public final class a implements g {
    public static final String F;
    public static final String G;
    public static final String H;
    public static final String I;
    public static final String J;
    public static final String K;
    public static final String L;
    public static final String M;
    public static final k N;
    public final boolean E;

    /* renamed from: d, reason: collision with root package name */
    public final long f15823d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15824e;

    /* renamed from: i, reason: collision with root package name */
    public final int f15825i;

    /* renamed from: v, reason: collision with root package name */
    public final Uri[] f15826v;

    /* renamed from: w, reason: collision with root package name */
    public final int[] f15827w;

    /* renamed from: x, reason: collision with root package name */
    public final long[] f15828x;

    /* renamed from: y, reason: collision with root package name */
    public final long f15829y;

    static {
        int i5 = d0.a;
        F = Integer.toString(0, 36);
        G = Integer.toString(1, 36);
        H = Integer.toString(2, 36);
        I = Integer.toString(3, 36);
        J = Integer.toString(4, 36);
        K = Integer.toString(5, 36);
        L = Integer.toString(6, 36);
        M = Integer.toString(7, 36);
        N = new k(12);
    }

    public a(long j, int i5, int i6, int[] iArr, Uri[] uriArr, long[] jArr, long j5, boolean z5) {
        ke.b.g(iArr.length == uriArr.length);
        this.f15823d = j;
        this.f15824e = i5;
        this.f15825i = i6;
        this.f15827w = iArr;
        this.f15826v = uriArr;
        this.f15828x = jArr;
        this.f15829y = j5;
        this.E = z5;
    }

    public final int a(int i5) {
        int i6;
        int i10 = i5 + 1;
        while (true) {
            int[] iArr = this.f15827w;
            if (i10 >= iArr.length || this.E || (i6 = iArr[i10]) == 0 || i6 == 1) {
                break;
            }
            i10++;
        }
        return i10;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && a.class == obj.getClass()) {
            a aVar = (a) obj;
            if (this.f15823d == aVar.f15823d && this.f15824e == aVar.f15824e && this.f15825i == aVar.f15825i && Arrays.equals(this.f15826v, aVar.f15826v) && Arrays.equals(this.f15827w, aVar.f15827w) && Arrays.equals(this.f15828x, aVar.f15828x) && this.f15829y == aVar.f15829y && this.E == aVar.E) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = ((this.f15824e * 31) + this.f15825i) * 31;
        long j = this.f15823d;
        int hashCode = (Arrays.hashCode(this.f15828x) + ((Arrays.hashCode(this.f15827w) + ((((i5 + ((int) (j ^ (j >>> 32)))) * 31) + Arrays.hashCode(this.f15826v)) * 31)) * 31)) * 31;
        long j5 = this.f15829y;
        return ((hashCode + ((int) (j5 ^ (j5 >>> 32)))) * 31) + (this.E ? 1 : 0);
    }
}
