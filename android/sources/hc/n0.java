package hc;

import android.net.Uri;
import java.util.Arrays;
import java.util.UUID;

/* loaded from: classes3.dex */
public final class n0 implements g {
    public static final String F;
    public static final String G;
    public static final String H;
    public static final String I;
    public static final String J;
    public static final String K;
    public static final String L;
    public static final String M;
    public static final hb.a N;
    public final byte[] E;

    /* renamed from: d, reason: collision with root package name */
    public final UUID f9811d;

    /* renamed from: e, reason: collision with root package name */
    public final Uri f9812e;

    /* renamed from: i, reason: collision with root package name */
    public final fi.w0 f9813i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9814v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f9815w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f9816x;

    /* renamed from: y, reason: collision with root package name */
    public final fi.e0 f9817y;

    static {
        int i5 = ke.d0.a;
        F = Integer.toString(0, 36);
        G = Integer.toString(1, 36);
        H = Integer.toString(2, 36);
        I = Integer.toString(3, 36);
        J = Integer.toString(4, 36);
        K = Integer.toString(5, 36);
        L = Integer.toString(6, 36);
        M = Integer.toString(7, 36);
        N = new hb.a(13);
    }

    public n0(m0 m0Var) {
        ke.b.k((m0Var.f9789f && m0Var.f9785b == null) ? false : true);
        UUID uuid = m0Var.a;
        uuid.getClass();
        this.f9811d = uuid;
        this.f9812e = m0Var.f9785b;
        this.f9813i = m0Var.f9786c;
        this.f9814v = m0Var.f9787d;
        this.f9816x = m0Var.f9789f;
        this.f9815w = m0Var.f9788e;
        this.f9817y = m0Var.f9790g;
        byte[] bArr = m0Var.f9791h;
        this.E = bArr != null ? Arrays.copyOf(bArr, bArr.length) : null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n0)) {
            return false;
        }
        n0 n0Var = (n0) obj;
        return this.f9811d.equals(n0Var.f9811d) && ke.d0.a(this.f9812e, n0Var.f9812e) && ke.d0.a(this.f9813i, n0Var.f9813i) && this.f9814v == n0Var.f9814v && this.f9816x == n0Var.f9816x && this.f9815w == n0Var.f9815w && this.f9817y.equals(n0Var.f9817y) && Arrays.equals(this.E, n0Var.E);
    }

    public final int hashCode() {
        int hashCode = this.f9811d.hashCode() * 31;
        Uri uri = this.f9812e;
        return Arrays.hashCode(this.E) + ((this.f9817y.hashCode() + ((((((((this.f9813i.hashCode() + ((hashCode + (uri != null ? uri.hashCode() : 0)) * 31)) * 31) + (this.f9814v ? 1 : 0)) * 31) + (this.f9816x ? 1 : 0)) * 31) + (this.f9815w ? 1 : 0)) * 31)) * 31);
    }
}
