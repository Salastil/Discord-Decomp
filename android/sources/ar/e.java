package ar;

import a5.n;
import fo.u;
import ip.a0;
import ip.j0;
import java.util.Collection;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e implements a0 {

    /* renamed from: d, reason: collision with root package name */
    public static final e f2662d = new e();

    /* renamed from: e, reason: collision with root package name */
    public static final hq.e f2663e;

    /* renamed from: i, reason: collision with root package name */
    public static final m0 f2664i;

    /* renamed from: v, reason: collision with root package name */
    public static final u f2665v;

    static {
        b[] bVarArr = b.f2660d;
        hq.e g6 = hq.e.g("<Error module>");
        Intrinsics.checkNotNullExpressionValue(g6, "special(...)");
        f2663e = g6;
        f2664i = m0.f13512d;
        f2665v = fo.l.a(d.f2661d);
    }

    @Override // ip.a0
    public final boolean B(a0 targetModule) {
        Intrinsics.checkNotNullParameter(targetModule, "targetModule");
        return false;
    }

    @Override // ip.a0
    public final j0 D(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        throw new IllegalStateException("Should not be called!");
    }

    @Override // ip.a0
    public final List c0() {
        return f2664i;
    }

    @Override // ip.a0
    public final Object d0(n capability) {
        Intrinsics.checkNotNullParameter(capability, "capability");
        return null;
    }

    @Override // ip.l
    public final Object e0(ip.n visitor, Object obj) {
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        return null;
    }

    @Override // ip.a0
    public final Collection f(hq.c fqName, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return m0.f13512d;
    }

    @Override // ip.a0
    public final fp.i g() {
        return (fp.i) f2665v.getValue();
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return jp.g.a;
    }

    @Override // ip.l
    public final hq.e getName() {
        return f2663e;
    }

    @Override // ip.l
    public final ip.l h() {
        return null;
    }

    @Override // ip.l
    public final ip.l a() {
        return this;
    }
}
