package uq;

import ip.o0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class u extends a3.r {

    /* renamed from: e, reason: collision with root package name */
    public final cq.k f19063e;

    /* renamed from: f, reason: collision with root package name */
    public final u f19064f;

    /* renamed from: g, reason: collision with root package name */
    public final hq.b f19065g;

    /* renamed from: h, reason: collision with root package name */
    public final cq.j f19066h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f19067i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(cq.k classProto, eq.g nameResolver, a4.i typeTable, o0 o0Var, u uVar) {
        super(nameResolver, typeTable, o0Var);
        Intrinsics.checkNotNullParameter(classProto, "classProto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        this.f19063e = classProto;
        this.f19064f = uVar;
        this.f19065g = nt.a.r(nameResolver, classProto.f7148w);
        cq.j jVar = (cq.j) eq.e.f8197f.g(classProto.f7147v);
        this.f19066h = jVar == null ? cq.j.CLASS : jVar;
        this.f19067i = s4.h.m(eq.e.f8198g, classProto.f7147v, "get(...)");
        Intrinsics.checkNotNullExpressionValue(eq.e.f8199h.g(classProto.f7147v), "get(...)");
    }

    @Override // a3.r
    public final hq.c d() {
        return this.f19065g.a();
    }
}
