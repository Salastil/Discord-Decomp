package wd;

import android.graphics.Bitmap;
import android.text.Layout;
import android.text.Spanned;
import android.text.SpannedString;
import android.text.TextUtils;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class b implements hc.g {
    public static final b O = new b("", null, null, null, -3.4028235E38f, Integer.MIN_VALUE, Integer.MIN_VALUE, -3.4028235E38f, Integer.MIN_VALUE, Integer.MIN_VALUE, -3.4028235E38f, -3.4028235E38f, -3.4028235E38f, false, -16777216, Integer.MIN_VALUE, 0.0f);
    public static final String P;
    public static final String Q;
    public static final String R;
    public static final String S;
    public static final String T;
    public static final String U;
    public static final String V;
    public static final String W;
    public static final String X;
    public static final String Y;
    public static final String Z;
    public static final String a0;

    /* renamed from: b0, reason: collision with root package name */
    public static final String f19796b0;

    /* renamed from: c0, reason: collision with root package name */
    public static final String f19797c0;

    /* renamed from: d0, reason: collision with root package name */
    public static final String f19798d0;

    /* renamed from: e0, reason: collision with root package name */
    public static final String f19799e0;

    /* renamed from: f0, reason: collision with root package name */
    public static final String f19800f0;

    /* renamed from: g0, reason: collision with root package name */
    public static final u3.e f19801g0;
    public final float E;
    public final int F;
    public final float G;
    public final float H;
    public final boolean I;
    public final int J;
    public final int K;
    public final float L;
    public final int M;
    public final float N;

    /* renamed from: d, reason: collision with root package name */
    public final CharSequence f19802d;

    /* renamed from: e, reason: collision with root package name */
    public final Layout.Alignment f19803e;

    /* renamed from: i, reason: collision with root package name */
    public final Layout.Alignment f19804i;

    /* renamed from: v, reason: collision with root package name */
    public final Bitmap f19805v;

    /* renamed from: w, reason: collision with root package name */
    public final float f19806w;

    /* renamed from: x, reason: collision with root package name */
    public final int f19807x;

    /* renamed from: y, reason: collision with root package name */
    public final int f19808y;

    static {
        int i5 = d0.a;
        P = Integer.toString(0, 36);
        Q = Integer.toString(1, 36);
        R = Integer.toString(2, 36);
        S = Integer.toString(3, 36);
        T = Integer.toString(4, 36);
        U = Integer.toString(5, 36);
        V = Integer.toString(6, 36);
        W = Integer.toString(7, 36);
        X = Integer.toString(8, 36);
        Y = Integer.toString(9, 36);
        Z = Integer.toString(10, 36);
        a0 = Integer.toString(11, 36);
        f19796b0 = Integer.toString(12, 36);
        f19797c0 = Integer.toString(13, 36);
        f19798d0 = Integer.toString(14, 36);
        f19799e0 = Integer.toString(15, 36);
        f19800f0 = Integer.toString(16, 36);
        f19801g0 = new u3.e();
    }

    public b(CharSequence charSequence, Layout.Alignment alignment, Layout.Alignment alignment2, Bitmap bitmap, float f2, int i5, int i6, float f10, int i10, int i11, float f11, float f12, float f13, boolean z5, int i12, int i13, float f14) {
        if (charSequence == null) {
            bitmap.getClass();
        } else {
            ke.b.g(bitmap == null);
        }
        if (charSequence instanceof Spanned) {
            this.f19802d = SpannedString.valueOf(charSequence);
        } else if (charSequence != null) {
            this.f19802d = charSequence.toString();
        } else {
            this.f19802d = null;
        }
        this.f19803e = alignment;
        this.f19804i = alignment2;
        this.f19805v = bitmap;
        this.f19806w = f2;
        this.f19807x = i5;
        this.f19808y = i6;
        this.E = f10;
        this.F = i10;
        this.G = f12;
        this.H = f13;
        this.I = z5;
        this.J = i12;
        this.K = i11;
        this.L = f11;
        this.M = i13;
        this.N = f14;
    }

    public final a a() {
        a aVar = new a();
        aVar.a = this.f19802d;
        aVar.f19782b = this.f19805v;
        aVar.f19783c = this.f19803e;
        aVar.f19784d = this.f19804i;
        aVar.f19785e = this.f19806w;
        aVar.f19786f = this.f19807x;
        aVar.f19787g = this.f19808y;
        aVar.f19788h = this.E;
        aVar.f19789i = this.F;
        aVar.j = this.K;
        aVar.k = this.L;
        aVar.f19790l = this.G;
        aVar.f19791m = this.H;
        aVar.f19792n = this.I;
        aVar.f19793o = this.J;
        aVar.f19794p = this.M;
        aVar.f19795q = this.N;
        return aVar;
    }

    public final boolean equals(Object obj) {
        Bitmap bitmap;
        if (this == obj) {
            return true;
        }
        if (obj != null && b.class == obj.getClass()) {
            b bVar = (b) obj;
            Bitmap bitmap2 = bVar.f19805v;
            if (TextUtils.equals(this.f19802d, bVar.f19802d) && this.f19803e == bVar.f19803e && this.f19804i == bVar.f19804i && ((bitmap = this.f19805v) != null ? !(bitmap2 == null || !bitmap.sameAs(bitmap2)) : bitmap2 == null) && this.f19806w == bVar.f19806w && this.f19807x == bVar.f19807x && this.f19808y == bVar.f19808y && this.E == bVar.E && this.F == bVar.F && this.G == bVar.G && this.H == bVar.H && this.I == bVar.I && this.J == bVar.J && this.K == bVar.K && this.L == bVar.L && this.M == bVar.M && this.N == bVar.N) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f19802d, this.f19803e, this.f19804i, this.f19805v, Float.valueOf(this.f19806w), Integer.valueOf(this.f19807x), Integer.valueOf(this.f19808y), Float.valueOf(this.E), Integer.valueOf(this.F), Float.valueOf(this.G), Float.valueOf(this.H), Boolean.valueOf(this.I), Integer.valueOf(this.J), Integer.valueOf(this.K), Float.valueOf(this.L), Integer.valueOf(this.M), Float.valueOf(this.N)});
    }
}
