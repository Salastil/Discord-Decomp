package lq;

import ip.i;
import java.util.Collection;
import java.util.List;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.s0;
import yq.y;
import zq.j;

/* loaded from: classes3.dex */
public final class c implements b {
    public final s0 a;

    /* renamed from: b, reason: collision with root package name */
    public j f14207b;

    public c(s0 projection) {
        Intrinsics.checkNotNullParameter(projection, "projection");
        this.a = projection;
        projection.a();
        c1 c1Var = c1.f21013i;
    }

    @Override // yq.p0
    public final /* bridge */ /* synthetic */ i a() {
        return null;
    }

    @Override // yq.p0
    public final Collection b() {
        s0 s0Var = this.a;
        y b10 = s0Var.a() == c1.f21015w ? s0Var.b() : g().p();
        Intrinsics.checkNotNull(b10);
        return b0.c(b10);
    }

    @Override // yq.p0
    public final boolean c() {
        return false;
    }

    @Override // lq.b
    public final s0 d() {
        return this.a;
    }

    @Override // yq.p0
    public final fp.i g() {
        fp.i g6 = this.a.b().r0().g();
        Intrinsics.checkNotNullExpressionValue(g6, "getBuiltIns(...)");
        return g6;
    }

    @Override // yq.p0
    public final List getParameters() {
        return m0.f13512d;
    }

    public final String toString() {
        return "CapturedTypeConstructor(" + this.a + ')';
    }
}
