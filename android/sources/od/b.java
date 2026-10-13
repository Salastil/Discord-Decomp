package od;

import android.net.Uri;
import hc.g;
import java.util.Arrays;
import ke.d0;
import n1.k;

/* loaded from: classes3.dex */
public final class b implements g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final k I;

    /* renamed from: x, reason: collision with root package name */
    public static final b f15830x = new b(new a[0], 0, -9223372036854775807L, 0);

    /* renamed from: y, reason: collision with root package name */
    public static final a f15831y;

    /* renamed from: d, reason: collision with root package name */
    public final int f15832d;

    /* renamed from: e, reason: collision with root package name */
    public final long f15833e;

    /* renamed from: i, reason: collision with root package name */
    public final long f15834i;

    /* renamed from: v, reason: collision with root package name */
    public final int f15835v;

    /* renamed from: w, reason: collision with root package name */
    public final a[] f15836w;

    static {
        a aVar = new a(0L, -1, -1, new int[0], new Uri[0], new long[0], 0L, false);
        int[] iArr = aVar.f15827w;
        int length = iArr.length;
        int max = Math.max(0, length);
        int[] copyOf = Arrays.copyOf(iArr, max);
        Arrays.fill(copyOf, length, max, 0);
        long[] jArr = aVar.f15828x;
        int length2 = jArr.length;
        int max2 = Math.max(0, length2);
        long[] copyOf2 = Arrays.copyOf(jArr, max2);
        Arrays.fill(copyOf2, length2, max2, -9223372036854775807L);
        f15831y = new a(aVar.f15823d, 0, aVar.f15825i, copyOf, (Uri[]) Arrays.copyOf(aVar.f15826v, 0), copyOf2, aVar.f15829y, aVar.E);
        int i5 = d0.a;
        E = Integer.toString(1, 36);
        F = Integer.toString(2, 36);
        G = Integer.toString(3, 36);
        H = Integer.toString(4, 36);
        I = new k(11);
    }

    public b(a[] aVarArr, long j, long j5, int i5) {
        this.f15833e = j;
        this.f15834i = j5;
        this.f15832d = aVarArr.length + i5;
        this.f15836w = aVarArr;
        this.f15835v = i5;
    }

    public final a a(int i5) {
        int i6 = this.f15835v;
        return i5 < i6 ? f15831y : this.f15836w[i5 - i6];
    }

    public final boolean b(int i5) {
        if (i5 != this.f15832d - 1) {
            return false;
        }
        a a = a(i5);
        return a.E && a.f15823d == Long.MIN_VALUE && a.f15824e == -1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || b.class != obj.getClass()) {
            return false;
        }
        b bVar = (b) obj;
        int i5 = d0.a;
        return this.f15832d == bVar.f15832d && this.f15833e == bVar.f15833e && this.f15834i == bVar.f15834i && this.f15835v == bVar.f15835v && Arrays.equals(this.f15836w, bVar.f15836w);
    }

    public final int hashCode() {
        return (((((((this.f15832d * 961) + ((int) this.f15833e)) * 31) + ((int) this.f15834i)) * 31) + this.f15835v) * 31) + Arrays.hashCode(this.f15836w);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("AdPlaybackState(adsId=null, adResumePositionUs=");
        sb2.append(this.f15833e);
        sb2.append(", adGroups=[");
        int i5 = 0;
        while (true) {
            a[] aVarArr = this.f15836w;
            if (i5 >= aVarArr.length) {
                sb2.append("])");
                return sb2.toString();
            }
            sb2.append("adGroup(timeUs=");
            sb2.append(aVarArr[i5].f15823d);
            sb2.append(", ads=[");
            for (int i6 = 0; i6 < aVarArr[i5].f15827w.length; i6++) {
                sb2.append("ad(state=");
                int i10 = aVarArr[i5].f15827w[i6];
                if (i10 == 0) {
                    sb2.append('_');
                } else if (i10 == 1) {
                    sb2.append('R');
                } else if (i10 == 2) {
                    sb2.append('S');
                } else if (i10 == 3) {
                    sb2.append('P');
                } else if (i10 != 4) {
                    sb2.append('?');
                } else {
                    sb2.append('!');
                }
                sb2.append(", durationUs=");
                sb2.append(aVarArr[i5].f15828x[i6]);
                sb2.append(')');
                if (i6 < aVarArr[i5].f15827w.length - 1) {
                    sb2.append(", ");
                }
            }
            sb2.append("])");
            if (i5 < aVarArr.length - 1) {
                sb2.append(", ");
            }
            i5++;
        }
    }
}
