package hc;

import android.net.Uri;

/* loaded from: classes3.dex */
public final class q0 implements g {

    /* renamed from: i, reason: collision with root package name */
    public static final q0 f9843i = new q0(new e4.r(10, false));

    /* renamed from: v, reason: collision with root package name */
    public static final String f9844v;

    /* renamed from: w, reason: collision with root package name */
    public static final String f9845w;

    /* renamed from: x, reason: collision with root package name */
    public static final String f9846x;

    /* renamed from: y, reason: collision with root package name */
    public static final hb.a f9847y;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f9848d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9849e;

    static {
        int i5 = ke.d0.a;
        f9844v = Integer.toString(0, 36);
        f9845w = Integer.toString(1, 36);
        f9846x = Integer.toString(2, 36);
        f9847y = new hb.a(16);
    }

    public q0(e4.r rVar) {
        this.f9848d = (Uri) rVar.f8000e;
        this.f9849e = (String) rVar.f8001i;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof q0)) {
            return false;
        }
        q0 q0Var = (q0) obj;
        return ke.d0.a(this.f9848d, q0Var.f9848d) && ke.d0.a(this.f9849e, q0Var.f9849e);
    }

    public final int hashCode() {
        Uri uri = this.f9848d;
        int hashCode = (uri == null ? 0 : uri.hashCode()) * 31;
        String str = this.f9849e;
        return hashCode + (str != null ? str.hashCode() : 0);
    }
}
