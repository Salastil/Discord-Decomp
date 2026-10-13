package hc;

import java.io.IOException;

/* loaded from: classes3.dex */
public class g1 extends IOException {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f9707d;

    /* renamed from: e, reason: collision with root package name */
    public final int f9708e;

    public g1(String str, Throwable th2, boolean z5, int i5) {
        super(str, th2);
        this.f9707d = z5;
        this.f9708e = i5;
    }

    public static g1 a(String str, RuntimeException runtimeException) {
        return new g1(str, runtimeException, true, 1);
    }

    public static g1 b(String str, Exception exc) {
        return new g1(str, exc, true, 4);
    }

    public static g1 c(String str) {
        return new g1(str, null, false, 1);
    }

    @Override // java.lang.Throwable
    public final String getMessage() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.getMessage());
        sb2.append("{contentIsMalformed=");
        sb2.append(this.f9707d);
        sb2.append(", dataType=");
        return k0.d.m(sb2, this.f9708e, "}");
    }
}
