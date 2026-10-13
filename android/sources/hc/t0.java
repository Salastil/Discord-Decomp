package hc;

import android.net.Uri;

/* loaded from: classes3.dex */
public class t0 implements g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final String I;
    public static final String J;
    public static final String K;
    public static final hb.a L;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f9878d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9879e;

    /* renamed from: i, reason: collision with root package name */
    public final String f9880i;

    /* renamed from: v, reason: collision with root package name */
    public final int f9881v;

    /* renamed from: w, reason: collision with root package name */
    public final int f9882w;

    /* renamed from: x, reason: collision with root package name */
    public final String f9883x;

    /* renamed from: y, reason: collision with root package name */
    public final String f9884y;

    static {
        int i5 = ke.d0.a;
        E = Integer.toString(0, 36);
        F = Integer.toString(1, 36);
        G = Integer.toString(2, 36);
        H = Integer.toString(3, 36);
        I = Integer.toString(4, 36);
        J = Integer.toString(5, 36);
        K = Integer.toString(6, 36);
        L = new hb.a(17);
    }

    public t0(s0 s0Var) {
        this.f9878d = (Uri) s0Var.f9865d;
        this.f9879e = s0Var.a;
        this.f9880i = (String) s0Var.f9866e;
        this.f9881v = s0Var.f9863b;
        this.f9882w = s0Var.f9864c;
        this.f9883x = (String) s0Var.f9867f;
        this.f9884y = (String) s0Var.f9868g;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof t0)) {
            return false;
        }
        t0 t0Var = (t0) obj;
        return this.f9878d.equals(t0Var.f9878d) && ke.d0.a(this.f9879e, t0Var.f9879e) && ke.d0.a(this.f9880i, t0Var.f9880i) && this.f9881v == t0Var.f9881v && this.f9882w == t0Var.f9882w && ke.d0.a(this.f9883x, t0Var.f9883x) && ke.d0.a(this.f9884y, t0Var.f9884y);
    }

    public final int hashCode() {
        int hashCode = this.f9878d.hashCode() * 31;
        String str = this.f9879e;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.f9880i;
        int hashCode3 = (((((hashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31) + this.f9881v) * 31) + this.f9882w) * 31;
        String str3 = this.f9883x;
        int hashCode4 = (hashCode3 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.f9884y;
        return hashCode4 + (str4 != null ? str4.hashCode() : 0);
    }
}
