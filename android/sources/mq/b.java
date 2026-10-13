package mq;

import ip.a0;
import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class b extends g {

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f14573b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(List value, Function1 computeType) {
        super(value);
        Intrinsics.checkNotNullParameter(value, "value");
        Intrinsics.checkNotNullParameter(computeType, "computeType");
        this.f14573b = computeType;
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        Intrinsics.checkNotNullParameter(module, "module");
        yq.y yVar = (yq.y) this.f14573b.invoke(module);
        if (!fp.i.z(yVar)) {
            ip.i a = yVar.r0().a();
            if (a != null && fp.i.s(a) != null) {
                return yVar;
            }
            if (!fp.i.C(yVar, fp.o.W.a) && !fp.i.C(yVar, fp.o.X.a) && !fp.i.C(yVar, fp.o.Y.a)) {
                fp.i.C(yVar, fp.o.Z.a);
            }
        }
        return yVar;
    }
}
