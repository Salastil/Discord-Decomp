package ee;

import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import android.text.style.TypefaceSpan;
import android.text.style.UnderlineSpan;
import java.nio.charset.Charset;
import java.util.List;
import ke.d0;
import ke.w;
import s4.h;
import wd.d;
import wd.e;
import wd.g;

/* loaded from: classes3.dex */
public final class a extends d {

    /* renamed from: m, reason: collision with root package name */
    public final w f8074m = new w();

    /* renamed from: n, reason: collision with root package name */
    public final boolean f8075n;

    /* renamed from: o, reason: collision with root package name */
    public final int f8076o;

    /* renamed from: p, reason: collision with root package name */
    public final int f8077p;

    /* renamed from: q, reason: collision with root package name */
    public final String f8078q;

    /* renamed from: r, reason: collision with root package name */
    public final float f8079r;

    /* renamed from: s, reason: collision with root package name */
    public final int f8080s;

    public a(List list) {
        if (list.size() != 1 || (((byte[]) list.get(0)).length != 48 && ((byte[]) list.get(0)).length != 53)) {
            this.f8076o = 0;
            this.f8077p = -1;
            this.f8078q = "sans-serif";
            this.f8075n = false;
            this.f8079r = 0.85f;
            this.f8080s = -1;
            return;
        }
        byte[] bArr = (byte[]) list.get(0);
        this.f8076o = bArr[24];
        this.f8077p = ((bArr[26] & 255) << 24) | ((bArr[27] & 255) << 16) | ((bArr[28] & 255) << 8) | (bArr[29] & 255);
        this.f8078q = "Serif".equals(new String(bArr, 43, bArr.length - 43, ei.d.f8100c)) ? "serif" : "sans-serif";
        int i5 = bArr[25] * 20;
        this.f8080s = i5;
        boolean z5 = (bArr[0] & 32) != 0;
        this.f8075n = z5;
        if (z5) {
            this.f8079r = d0.h(((bArr[11] & 255) | ((bArr[10] & 255) << 8)) / i5, 0.0f, 0.95f);
        } else {
            this.f8079r = 0.85f;
        }
    }

    public static void h(SpannableStringBuilder spannableStringBuilder, int i5, int i6, int i10, int i11, int i12) {
        if (i5 != i6) {
            spannableStringBuilder.setSpan(new ForegroundColorSpan((i5 >>> 8) | ((i5 & 255) << 24)), i10, i11, i12 | 33);
        }
    }

    public static void i(SpannableStringBuilder spannableStringBuilder, int i5, int i6, int i10, int i11, int i12) {
        if (i5 != i6) {
            int i13 = i12 | 33;
            boolean z5 = (i5 & 1) != 0;
            boolean z6 = (i5 & 2) != 0;
            if (z5) {
                if (z6) {
                    spannableStringBuilder.setSpan(new StyleSpan(3), i10, i11, i13);
                } else {
                    spannableStringBuilder.setSpan(new StyleSpan(1), i10, i11, i13);
                }
            } else if (z6) {
                spannableStringBuilder.setSpan(new StyleSpan(2), i10, i11, i13);
            }
            boolean z7 = (i5 & 4) != 0;
            if (z7) {
                spannableStringBuilder.setSpan(new UnderlineSpan(), i10, i11, i13);
            }
            if (z7 || z5 || z6) {
                return;
            }
            spannableStringBuilder.setSpan(new StyleSpan(0), i10, i11, i13);
        }
    }

    @Override // wd.d
    public final e e(byte[] bArr, int i5, boolean z5) {
        String s2;
        w wVar = this.f8074m;
        wVar.D(bArr, i5);
        int i6 = 2;
        if (wVar.a() < 2) {
            throw new g("Unexpected subtitle format.");
        }
        int z6 = wVar.z();
        if (z6 == 0) {
            s2 = "";
        } else {
            int i10 = wVar.f13363b;
            Charset B = wVar.B();
            int i11 = z6 - (wVar.f13363b - i10);
            if (B == null) {
                B = ei.d.f8100c;
            }
            s2 = wVar.s(i11, B);
        }
        if (s2.isEmpty()) {
            return b.f8081e;
        }
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(s2);
        i(spannableStringBuilder, this.f8076o, 0, 0, spannableStringBuilder.length(), 16711680);
        h(spannableStringBuilder, this.f8077p, -1, 0, spannableStringBuilder.length(), 16711680);
        int length = spannableStringBuilder.length();
        int i12 = 0;
        String str = this.f8078q;
        if (str != "sans-serif") {
            spannableStringBuilder.setSpan(new TypefaceSpan(str), 0, length, 16711713);
        }
        float f2 = this.f8079r;
        while (wVar.a() >= 8) {
            int i13 = wVar.f13363b;
            int g6 = wVar.g();
            int g10 = wVar.g();
            if (g10 == 1937013100) {
                if (wVar.a() < i6) {
                    throw new g("Unexpected subtitle format.");
                }
                int z7 = wVar.z();
                int i14 = i12;
                while (i14 < z7) {
                    if (wVar.a() < 12) {
                        throw new g("Unexpected subtitle format.");
                    }
                    int z8 = wVar.z();
                    int z10 = wVar.z();
                    wVar.G(i6);
                    int u5 = wVar.u();
                    wVar.G(1);
                    int g11 = wVar.g();
                    if (z10 > spannableStringBuilder.length()) {
                        StringBuilder r5 = a3.e.r(z10, "Truncating styl end (", ") to cueText.length() (");
                        r5.append(spannableStringBuilder.length());
                        r5.append(").");
                        ke.b.N("Tx3gDecoder", r5.toString());
                        z10 = spannableStringBuilder.length();
                    }
                    int i15 = z10;
                    if (z8 >= i15) {
                        ke.b.N("Tx3gDecoder", h.d(z8, "Ignoring styl with start (", i15, ") >= end (", ")."));
                    } else {
                        i(spannableStringBuilder, u5, this.f8076o, z8, i15, 0);
                        h(spannableStringBuilder, g11, this.f8077p, z8, i15, 0);
                    }
                    i14++;
                    i6 = 2;
                }
            } else if (g10 == 1952608120 && this.f8075n) {
                i6 = 2;
                if (wVar.a() < 2) {
                    throw new g("Unexpected subtitle format.");
                }
                f2 = d0.h(wVar.z() / this.f8080s, 0.0f, 0.95f);
            } else {
                i6 = 2;
            }
            wVar.F(i13 + g6);
            i12 = 0;
        }
        return new b(new wd.b(spannableStringBuilder, null, null, null, f2, 0, 0, -3.4028235E38f, Integer.MIN_VALUE, Integer.MIN_VALUE, -3.4028235E38f, -3.4028235E38f, -3.4028235E38f, false, -16777216, Integer.MIN_VALUE, 0.0f));
    }
}
