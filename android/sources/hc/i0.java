package hc;

import android.net.Uri;

/* loaded from: classes3.dex */
public final class i0 implements g {

    /* renamed from: e, reason: collision with root package name */
    public static final String f9728e;

    /* renamed from: i, reason: collision with root package name */
    public static final hb.a f9729i;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f9730d;

    static {
        int i5 = ke.d0.a;
        f9728e = Integer.toString(0, 36);
        f9729i = new hb.a(11);
    }

    public i0(u4.c cVar) {
        this.f9730d = (Uri) cVar.f18811d;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i0) || !this.f9730d.equals(((i0) obj).f9730d)) {
            return false;
        }
        int i5 = ke.d0.a;
        return true;
    }

    public final int hashCode() {
        return this.f9730d.hashCode() * 31;
    }
}
