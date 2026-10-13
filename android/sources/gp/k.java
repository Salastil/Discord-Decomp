package gp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class k {
    public final hq.c a;

    /* renamed from: b, reason: collision with root package name */
    public final String f9432b;

    public k(hq.c packageFqName, String classNamePrefix) {
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(classNamePrefix, "classNamePrefix");
        this.a = packageFqName;
        this.f9432b = classNamePrefix;
    }

    public final hq.e a(int i5) {
        hq.e e9 = hq.e.e(this.f9432b + i5);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return e9;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.a);
        sb2.append('.');
        return s4.h.h(sb2, this.f9432b, 'N');
    }
}
