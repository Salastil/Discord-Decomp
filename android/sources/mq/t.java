package mq;

import ip.a0;
import kotlin.collections.b0;
import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.k0;

/* loaded from: classes3.dex */
public final class t extends g {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public t(f value) {
        super(value);
        Intrinsics.checkNotNullParameter(value, "value");
        r value2 = new r(value);
        Intrinsics.checkNotNullParameter(value2, "value");
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        yq.y yVar;
        Intrinsics.checkNotNullParameter(module, "module");
        k0.f21045e.getClass();
        k0 k0Var = k0.f21046i;
        fp.i g6 = module.g();
        g6.getClass();
        ip.f j = g6.j(fp.o.Q.g());
        Intrinsics.checkNotNullExpressionValue(j, "getKClass(...)");
        Intrinsics.checkNotNullParameter(module, "module");
        Object obj = this.a;
        s sVar = (s) obj;
        if (sVar instanceof q) {
            yVar = ((q) obj).a;
        } else {
            if (!(sVar instanceof r)) {
                throw new fo.n();
            }
            f fVar = ((r) obj).a;
            hq.b bVar = fVar.a;
            int i5 = fVar.f14575b;
            ip.f j5 = nf.e.j(module, bVar);
            if (j5 == null) {
                yVar = ar.l.c(ar.k.f2686v, bVar.toString(), String.valueOf(i5));
            } else {
                c0 k = j5.k();
                Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
                b1 U = com.facebook.imagepipeline.nativecode.c.U(k);
                for (int i6 = 0; i6 < i5; i6++) {
                    fp.i g10 = module.g();
                    c1 c1Var = c1.f21013i;
                    U = g10.h(U);
                    Intrinsics.checkNotNullExpressionValue(U, "getArrayType(...)");
                }
                yVar = U;
            }
        }
        return yq.c.s(k0Var, j, b0.c(new h0(yVar)));
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public t(hq.b classId, int i5) {
        this(new f(classId, i5));
        Intrinsics.checkNotNullParameter(classId, "classId");
    }
}
