package le;

import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class b implements hc.g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final io.sentry.util.m H;

    /* renamed from: x, reason: collision with root package name */
    public static final b f13853x = new b(1, 2, 3, null);

    /* renamed from: y, reason: collision with root package name */
    public static final String f13854y;

    /* renamed from: d, reason: collision with root package name */
    public final int f13855d;

    /* renamed from: e, reason: collision with root package name */
    public final int f13856e;

    /* renamed from: i, reason: collision with root package name */
    public final int f13857i;

    /* renamed from: v, reason: collision with root package name */
    public final byte[] f13858v;

    /* renamed from: w, reason: collision with root package name */
    public int f13859w;

    static {
        int i5 = d0.a;
        f13854y = Integer.toString(0, 36);
        E = Integer.toString(1, 36);
        F = Integer.toString(2, 36);
        G = Integer.toString(3, 36);
        H = new io.sentry.util.m(22);
    }

    public b(int i5, int i6, int i10, byte[] bArr) {
        this.f13855d = i5;
        this.f13856e = i6;
        this.f13857i = i10;
        this.f13858v = bArr;
    }

    public static String a(int i5) {
        return i5 != -1 ? i5 != 10 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 6 ? i5 != 7 ? "Undefined color transfer" : "HLG" : "ST2084 PQ" : "SDR SMPTE 170M" : "sRGB" : "Linear" : "Gamma 2.2" : "Unset color transfer";
    }

    public static int b(int i5) {
        if (i5 == 1) {
            return 1;
        }
        if (i5 != 9) {
            return (i5 == 4 || i5 == 5 || i5 == 6 || i5 == 7) ? 2 : -1;
        }
        return 6;
    }

    public static int c(int i5) {
        if (i5 == 1) {
            return 3;
        }
        if (i5 == 4) {
            return 10;
        }
        if (i5 == 13) {
            return 2;
        }
        if (i5 == 16) {
            return 6;
        }
        if (i5 != 18) {
            return (i5 == 6 || i5 == 7) ? 3 : -1;
        }
        return 7;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && b.class == obj.getClass()) {
            b bVar = (b) obj;
            if (this.f13855d == bVar.f13855d && this.f13856e == bVar.f13856e && this.f13857i == bVar.f13857i && Arrays.equals(this.f13858v, bVar.f13858v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f13859w == 0) {
            this.f13859w = Arrays.hashCode(this.f13858v) + ((((((527 + this.f13855d) * 31) + this.f13856e) * 31) + this.f13857i) * 31);
        }
        return this.f13859w;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ColorInfo(");
        int i5 = this.f13855d;
        sb2.append(i5 != -1 ? i5 != 6 ? i5 != 1 ? i5 != 2 ? "Undefined color space" : "BT601" : "BT709" : "BT2020" : "Unset color space");
        sb2.append(", ");
        int i6 = this.f13856e;
        sb2.append(i6 != -1 ? i6 != 1 ? i6 != 2 ? "Undefined color range" : "Limited range" : "Full range" : "Unset color range");
        sb2.append(", ");
        sb2.append(a(this.f13857i));
        sb2.append(", ");
        return com.discord.chat.bridge.botuikit.a.l(sb2, this.f13858v != null, ")");
    }
}
