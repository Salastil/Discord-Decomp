package zq;

import java.util.Collection;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import yq.s0;
import yq.y;

/* loaded from: classes3.dex */
public final class j implements lq.b {
    public final s0 a;

    /* renamed from: b, reason: collision with root package name */
    public Function0 f21391b;

    /* renamed from: c, reason: collision with root package name */
    public final j f21392c;

    /* renamed from: d, reason: collision with root package name */
    public final ip.s0 f21393d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f21394e;

    public j(s0 projection, Function0 function0, j jVar, ip.s0 s0Var) {
        Intrinsics.checkNotNullParameter(projection, "projection");
        this.a = projection;
        this.f21391b = function0;
        this.f21392c = jVar;
        this.f21393d = s0Var;
        this.f21394e = fo.l.b(fo.m.f8827e, new i(0, this));
    }

    @Override // yq.p0
    public final ip.i a() {
        return null;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // yq.p0
    public final Collection b() {
        List list = (List) this.f21394e.getValue();
        return list == null ? m0.f13512d : list;
    }

    @Override // yq.p0
    public final boolean c() {
        return false;
    }

    @Override // lq.b
    public final s0 d() {
        return this.a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(j.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type org.jetbrains.kotlin.types.checker.NewCapturedTypeConstructor");
        j jVar = (j) obj;
        j jVar2 = this.f21392c;
        if (jVar2 == null) {
            jVar2 = this;
        }
        j jVar3 = jVar.f21392c;
        if (jVar3 != null) {
            obj = jVar3;
        }
        return jVar2 == obj;
    }

    @Override // yq.p0
    public final fp.i g() {
        y b10 = this.a.b();
        Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
        return com.facebook.imagepipeline.nativecode.c.v(b10);
    }

    @Override // yq.p0
    public final List getParameters() {
        return m0.f13512d;
    }

    public final int hashCode() {
        j jVar = this.f21392c;
        return jVar != null ? jVar.hashCode() : super.hashCode();
    }

    public final String toString() {
        return "CapturedType(" + this.a + ')';
    }

    public /* synthetic */ j(s0 s0Var, wq.e eVar, ip.s0 s0Var2, int i5) {
        this(s0Var, (i5 & 2) != 0 ? null : eVar, (j) null, (i5 & 8) != 0 ? null : s0Var2);
    }
}
