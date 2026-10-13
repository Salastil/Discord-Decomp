package lp;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q0 extends r0 {
    public final fo.u J;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q0(ip.b containingDeclaration, r0 r0Var, int i5, jp.h annotations, hq.e name, yq.y outType, boolean z5, boolean z6, boolean z7, yq.y yVar, ip.o0 source, Function0 destructuringVariables) {
        super(containingDeclaration, r0Var, i5, annotations, name, outType, z5, z6, z7, yVar, source);
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(outType, "outType");
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(destructuringVariables, "destructuringVariables");
        this.J = fo.l.a(destructuringVariables);
    }

    @Override // lp.r0
    public final r0 B0(gp.f newOwner, hq.e newName, int i5) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(newName, "newName");
        jp.h annotations = getAnnotations();
        Intrinsics.checkNotNullExpressionValue(annotations, "<get-annotations>(...)");
        yq.y type = getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        boolean C0 = C0();
        ip.p0 NO_SOURCE = ip.o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        return new q0(newOwner, null, i5, annotations, newName, type, C0, this.F, this.G, this.H, NO_SOURCE, new cp.d0(14, this));
    }
}
