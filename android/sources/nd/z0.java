package nd;

import com.google.android.exoplayer2.Format;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class z0 implements hc.g {
    public static final n1.k E;

    /* renamed from: x, reason: collision with root package name */
    public static final String f15206x;

    /* renamed from: y, reason: collision with root package name */
    public static final String f15207y;

    /* renamed from: d, reason: collision with root package name */
    public final int f15208d;

    /* renamed from: e, reason: collision with root package name */
    public final String f15209e;

    /* renamed from: i, reason: collision with root package name */
    public final int f15210i;

    /* renamed from: v, reason: collision with root package name */
    public final Format[] f15211v;

    /* renamed from: w, reason: collision with root package name */
    public int f15212w;

    static {
        int i5 = ke.d0.a;
        f15206x = Integer.toString(0, 36);
        f15207y = Integer.toString(1, 36);
        E = new n1.k(8);
    }

    public z0(String str, Format... formatArr) {
        ke.b.g(formatArr.length > 0);
        this.f15209e = str;
        this.f15211v = formatArr;
        this.f15208d = formatArr.length;
        int h6 = ke.o.h(formatArr[0].I);
        this.f15210i = h6 == -1 ? ke.o.h(formatArr[0].H) : h6;
        String str2 = formatArr[0].f5229i;
        str2 = (str2 == null || str2.equals("und")) ? "" : str2;
        int i5 = formatArr[0].f5231w | 16384;
        for (int i6 = 1; i6 < formatArr.length; i6++) {
            String str3 = formatArr[i6].f5229i;
            if (!str2.equals((str3 == null || str3.equals("und")) ? "" : str3)) {
                b("languages", formatArr[0].f5229i, formatArr[i6].f5229i, i6);
                return;
            } else {
                if (i5 != (formatArr[i6].f5231w | 16384)) {
                    b("role flags", Integer.toBinaryString(formatArr[0].f5231w), Integer.toBinaryString(formatArr[i6].f5231w), i6);
                    return;
                }
            }
        }
    }

    public static void b(String str, String str2, String str3, int i5) {
        StringBuilder t5 = a3.e.t("Different ", str, " combined in one TrackGroup: '", str2, "' (track 0) and '");
        t5.append(str3);
        t5.append("' (track ");
        t5.append(i5);
        t5.append(")");
        ke.b.s("TrackGroup", "", new IllegalStateException(t5.toString()));
    }

    public final int a(Format format) {
        int i5 = 0;
        while (true) {
            Format[] formatArr = this.f15211v;
            if (i5 >= formatArr.length) {
                return -1;
            }
            if (format == formatArr[i5]) {
                return i5;
            }
            i5++;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && z0.class == obj.getClass()) {
            z0 z0Var = (z0) obj;
            if (this.f15209e.equals(z0Var.f15209e) && Arrays.equals(this.f15211v, z0Var.f15211v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f15212w == 0) {
            this.f15212w = a3.e.d(527, 31, this.f15209e) + Arrays.hashCode(this.f15211v);
        }
        return this.f15212w;
    }
}
