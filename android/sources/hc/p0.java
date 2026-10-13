package hc;

import android.net.Uri;
import java.util.Arrays;
import java.util.List;

/* loaded from: classes3.dex */
public final class p0 implements g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final String I;
    public static final String J;
    public static final String K;
    public static final hb.a L;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f9833d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9834e;

    /* renamed from: i, reason: collision with root package name */
    public final n0 f9835i;

    /* renamed from: v, reason: collision with root package name */
    public final i0 f9836v;

    /* renamed from: w, reason: collision with root package name */
    public final List f9837w;

    /* renamed from: x, reason: collision with root package name */
    public final String f9838x;

    /* renamed from: y, reason: collision with root package name */
    public final fi.e0 f9839y;

    static {
        int i5 = ke.d0.a;
        E = Integer.toString(0, 36);
        F = Integer.toString(1, 36);
        G = Integer.toString(2, 36);
        H = Integer.toString(3, 36);
        I = Integer.toString(4, 36);
        J = Integer.toString(5, 36);
        K = Integer.toString(6, 36);
        L = new hb.a(15);
    }

    public p0(Uri uri, String str, n0 n0Var, i0 i0Var, List list, String str2, fi.e0 e0Var) {
        this.f9833d = uri;
        this.f9834e = str;
        this.f9835i = n0Var;
        this.f9836v = i0Var;
        this.f9837w = list;
        this.f9838x = str2;
        this.f9839y = e0Var;
        fi.c0 c0Var = fi.e0.f8656e;
        fi.p.c(4, "initialCapacity");
        Object[] objArr = new Object[4];
        int i5 = 0;
        int i6 = 0;
        boolean z5 = false;
        while (i5 < e0Var.size()) {
            t0 t0Var = (t0) e0Var.get(i5);
            s0 s0Var = new s0();
            s0Var.f9865d = t0Var.f9878d;
            s0Var.a = t0Var.f9879e;
            s0Var.f9866e = t0Var.f9880i;
            s0Var.f9863b = t0Var.f9881v;
            s0Var.f9864c = t0Var.f9882w;
            s0Var.f9867f = t0Var.f9883x;
            s0Var.f9868g = t0Var.f9884y;
            r0 r0Var = new r0(s0Var);
            int i10 = i6 + 1;
            if (objArr.length < i10) {
                objArr = Arrays.copyOf(objArr, fi.y.d(objArr.length, i10));
            } else if (z5) {
                objArr = (Object[]) objArr.clone();
            } else {
                objArr[i6] = r0Var;
                i5++;
                i6++;
            }
            z5 = false;
            objArr[i6] = r0Var;
            i5++;
            i6++;
        }
        fi.e0.j(i6, objArr);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p0)) {
            return false;
        }
        p0 p0Var = (p0) obj;
        return this.f9833d.equals(p0Var.f9833d) && ke.d0.a(this.f9834e, p0Var.f9834e) && ke.d0.a(this.f9835i, p0Var.f9835i) && ke.d0.a(this.f9836v, p0Var.f9836v) && this.f9837w.equals(p0Var.f9837w) && ke.d0.a(this.f9838x, p0Var.f9838x) && this.f9839y.equals(p0Var.f9839y);
    }

    public final int hashCode() {
        int hashCode = this.f9833d.hashCode() * 31;
        String str = this.f9834e;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        n0 n0Var = this.f9835i;
        int hashCode3 = (hashCode2 + (n0Var == null ? 0 : n0Var.hashCode())) * 31;
        i0 i0Var = this.f9836v;
        int hashCode4 = (this.f9837w.hashCode() + ((hashCode3 + (i0Var == null ? 0 : i0Var.hashCode())) * 31)) * 31;
        String str2 = this.f9838x;
        return (this.f9839y.hashCode() + ((hashCode4 + (str2 != null ? str2.hashCode() : 0)) * 31)) * 31;
    }
}
