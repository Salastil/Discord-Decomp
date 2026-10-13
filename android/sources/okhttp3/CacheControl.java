package okhttp3;

import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class CacheControl {

    /* renamed from: n, reason: collision with root package name */
    public static final /* synthetic */ int f16004n = 0;
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f16005b;

    /* renamed from: c, reason: collision with root package name */
    public final int f16006c;

    /* renamed from: d, reason: collision with root package name */
    public final int f16007d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f16008e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f16009f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f16010g;

    /* renamed from: h, reason: collision with root package name */
    public final int f16011h;

    /* renamed from: i, reason: collision with root package name */
    public final int f16012i;
    public final boolean j;
    public final boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final boolean f16013l;

    /* renamed from: m, reason: collision with root package name */
    public String f16014m;

    static {
        TimeUnit timeUnit = TimeUnit.SECONDS;
        Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
        timeUnit.toSeconds(Integer.MAX_VALUE);
    }

    public CacheControl(boolean z5, boolean z6, int i5, int i6, boolean z7, boolean z8, boolean z10, int i10, int i11, boolean z11, boolean z12, boolean z13, String str) {
        this.a = z5;
        this.f16005b = z6;
        this.f16006c = i5;
        this.f16007d = i6;
        this.f16008e = z7;
        this.f16009f = z8;
        this.f16010g = z10;
        this.f16011h = i10;
        this.f16012i = i11;
        this.j = z11;
        this.k = z12;
        this.f16013l = z13;
        this.f16014m = str;
    }

    public final String toString() {
        String str = this.f16014m;
        if (str != null) {
            return str;
        }
        StringBuilder sb2 = new StringBuilder();
        if (this.a) {
            sb2.append("no-cache, ");
        }
        if (this.f16005b) {
            sb2.append("no-store, ");
        }
        int i5 = this.f16006c;
        if (i5 != -1) {
            sb2.append("max-age=");
            sb2.append(i5);
            sb2.append(", ");
        }
        int i6 = this.f16007d;
        if (i6 != -1) {
            sb2.append("s-maxage=");
            sb2.append(i6);
            sb2.append(", ");
        }
        if (this.f16008e) {
            sb2.append("private, ");
        }
        if (this.f16009f) {
            sb2.append("public, ");
        }
        if (this.f16010g) {
            sb2.append("must-revalidate, ");
        }
        int i10 = this.f16011h;
        if (i10 != -1) {
            sb2.append("max-stale=");
            sb2.append(i10);
            sb2.append(", ");
        }
        int i11 = this.f16012i;
        if (i11 != -1) {
            sb2.append("min-fresh=");
            sb2.append(i11);
            sb2.append(", ");
        }
        if (this.j) {
            sb2.append("only-if-cached, ");
        }
        if (this.k) {
            sb2.append("no-transform, ");
        }
        if (this.f16013l) {
            sb2.append("immutable, ");
        }
        if (sb2.length() == 0) {
            return "";
        }
        sb2.delete(sb2.length() - 2, sb2.length());
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
        this.f16014m = sb3;
        return sb3;
    }
}
