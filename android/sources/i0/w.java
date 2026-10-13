package i0;

import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class w {
    public static final m0.c a = new m0.c();

    public static final int a(a0 a0Var, g0.f fVar) {
        long j;
        a0 u5 = a0Var.u();
        if (u5 == null) {
            throw new IllegalStateException(("Child of " + a0Var + " cannot be null when calculating alignment line").toString());
        }
        if (((Map) ((com.google.firebase.messaging.p) a0Var.x()).f6253c).containsKey(fVar)) {
            Integer num = (Integer) ((Map) ((com.google.firebase.messaging.p) a0Var.x()).f6253c).get(fVar);
            if (num != null) {
                return num.intValue();
            }
        } else {
            int s2 = u5.s(fVar);
            if (s2 != Integer.MIN_VALUE) {
                u5.f10379x = true;
                a0Var.f10380y = true;
                a0Var.B();
                u5.f10379x = false;
                a0Var.f10380y = false;
                if (fVar instanceof g0.f) {
                    long z5 = u5.z();
                    int i5 = m0.d.f14312b;
                    j = z5 & 4294967295L;
                } else {
                    long z6 = u5.z();
                    int i6 = m0.d.f14312b;
                    j = z6 >> 32;
                }
                return s2 + ((int) j);
            }
        }
        return Integer.MIN_VALUE;
    }

    public static final int b(int[] iArr) {
        return Math.min(iArr[2] - iArr[0], iArr[3] - iArr[1]);
    }

    public static final void c(c cVar) {
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        if (cVar.a.f21122h) {
            k.a(cVar, 1).H();
        }
    }

    public static final void d(u uVar) {
        Intrinsics.checkNotNullParameter(uVar, "<this>");
        uVar.getClass();
        throw new IllegalStateException("LayoutNode should be attached to an owner");
    }
}
