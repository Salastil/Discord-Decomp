package ie;

import android.net.Uri;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class p {
    public final Uri a;

    /* renamed from: b, reason: collision with root package name */
    public final long f10711b;

    /* renamed from: c, reason: collision with root package name */
    public final int f10712c;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f10713d;

    /* renamed from: e, reason: collision with root package name */
    public final Map f10714e;

    /* renamed from: f, reason: collision with root package name */
    public final long f10715f;

    /* renamed from: g, reason: collision with root package name */
    public final long f10716g;

    /* renamed from: h, reason: collision with root package name */
    public final String f10717h;

    /* renamed from: i, reason: collision with root package name */
    public final int f10718i;

    static {
        hc.e0.a("goog.exo.datasource");
    }

    public p(Uri uri, long j, int i5, byte[] bArr, Map map, long j5, long j7, String str, int i6) {
        ke.b.g(j + j5 >= 0);
        ke.b.g(j5 >= 0);
        ke.b.g(j7 > 0 || j7 == -1);
        this.a = uri;
        this.f10711b = j;
        this.f10712c = i5;
        this.f10713d = (bArr == null || bArr.length == 0) ? null : bArr;
        this.f10714e = Collections.unmodifiableMap(new HashMap(map));
        this.f10715f = j5;
        this.f10716g = j7;
        this.f10717h = str;
        this.f10718i = i6;
    }

    public static String b(int i5) {
        if (i5 == 1) {
            return "GET";
        }
        if (i5 == 2) {
            return "POST";
        }
        if (i5 == 3) {
            return "HEAD";
        }
        throw new IllegalStateException();
    }

    public final o a() {
        o oVar = new o();
        oVar.a = this.a;
        oVar.f10703b = this.f10711b;
        oVar.f10704c = this.f10712c;
        oVar.f10705d = this.f10713d;
        oVar.f10706e = this.f10714e;
        oVar.f10707f = this.f10715f;
        oVar.f10708g = this.f10716g;
        oVar.f10709h = this.f10717h;
        oVar.f10710i = this.f10718i;
        return oVar;
    }

    public final p c(long j) {
        long j5 = this.f10716g;
        return d(j, j5 != -1 ? j5 - j : -1L);
    }

    public final p d(long j, long j5) {
        if (j == 0 && this.f10716g == j5) {
            return this;
        }
        return new p(this.a, this.f10711b, this.f10712c, this.f10713d, this.f10714e, this.f10715f + j, j5, this.f10717h, this.f10718i);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("DataSpec[");
        sb2.append(b(this.f10712c));
        sb2.append(" ");
        sb2.append(this.a);
        sb2.append(", ");
        sb2.append(this.f10715f);
        sb2.append(", ");
        sb2.append(this.f10716g);
        sb2.append(", ");
        sb2.append(this.f10717h);
        sb2.append(", ");
        return k0.d.m(sb2, this.f10718i, "]");
    }
}
