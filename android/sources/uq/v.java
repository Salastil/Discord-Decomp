package uq;

import ip.o0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends a3.r {

    /* renamed from: e, reason: collision with root package name */
    public final hq.c f19068e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(hq.c fqName, eq.g nameResolver, a4.i typeTable, o0 o0Var) {
        super(nameResolver, typeTable, o0Var);
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        this.f19068e = fqName;
    }

    @Override // a3.r
    public final hq.c d() {
        return this.f19068e;
    }
}
