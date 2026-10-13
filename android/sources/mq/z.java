package mq;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class z extends p {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14583b = 0;

    public z(byte b10) {
        super(Byte.valueOf(b10));
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        c0 k;
        c0 k5;
        c0 k7;
        c0 k10;
        switch (this.f14583b) {
            case 0:
                Intrinsics.checkNotNullParameter(module, "module");
                ip.f j = nf.e.j(module, fp.o.S);
                return (j == null || (k = j.k()) == null) ? ar.l.c(ar.k.W, "UByte") : k;
            case 1:
                Intrinsics.checkNotNullParameter(module, "module");
                ip.f j5 = nf.e.j(module, fp.o.U);
                return (j5 == null || (k5 = j5.k()) == null) ? ar.l.c(ar.k.W, "UInt") : k5;
            case 2:
                Intrinsics.checkNotNullParameter(module, "module");
                ip.f j7 = nf.e.j(module, fp.o.V);
                return (j7 == null || (k7 = j7.k()) == null) ? ar.l.c(ar.k.W, "ULong") : k7;
            default:
                Intrinsics.checkNotNullParameter(module, "module");
                ip.f j10 = nf.e.j(module, fp.o.T);
                return (j10 == null || (k10 = j10.k()) == null) ? ar.l.c(ar.k.W, "UShort") : k10;
        }
    }

    @Override // mq.g
    public final String toString() {
        switch (this.f14583b) {
            case 0:
                return ((Number) this.a).intValue() + ".toUByte()";
            case 1:
                return ((Number) this.a).intValue() + ".toUInt()";
            case 2:
                return ((Number) this.a).longValue() + ".toULong()";
            default:
                return ((Number) this.a).intValue() + ".toUShort()";
        }
    }

    public z(short s2) {
        super(Short.valueOf(s2));
    }

    public z(int i5) {
        super(Integer.valueOf(i5));
    }

    public z(long j) {
        super(Long.valueOf(j));
    }
}
