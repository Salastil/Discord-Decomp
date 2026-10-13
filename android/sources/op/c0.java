package op;

import java.lang.annotation.Annotation;
import java.util.Collection;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c0 extends r implements yp.b {
    public final a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final Annotation[] f16156b;

    /* renamed from: c, reason: collision with root package name */
    public final String f16157c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f16158d;

    public c0(a0 type, Annotation[] reflectAnnotations, String str, boolean z5) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(reflectAnnotations, "reflectAnnotations");
        this.a = type;
        this.f16156b = reflectAnnotations;
        this.f16157c = str;
        this.f16158d = z5;
    }

    @Override // yp.b
    public final d a(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return nf.e.i(this.f16156b, fqName);
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        return nf.e.m(this.f16156b);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(c0.class, sb2, ": ");
        sb2.append(this.f16158d ? "vararg " : "");
        String str = this.f16157c;
        sb2.append(str != null ? hq.e.d(str) : null);
        sb2.append(": ");
        sb2.append(this.a);
        return sb2.toString();
    }
}
