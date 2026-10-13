package kq;

import ip.f0;
import ip.o0;
import ip.s0;
import ip.y;
import java.util.Collection;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import lp.c0;
import yq.p0;

/* loaded from: classes3.dex */
public final class c implements zq.c {
    public static final c a = new c();

    public static /* synthetic */ void b(int i5) {
        Object[] objArr = new Object[3];
        if (i5 != 1) {
            objArr[0] = "a";
        } else {
            objArr[0] = "b";
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/OverridingUtil$1";
        objArr[2] = "equals";
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }

    public static o0 e(ip.b bVar) {
        while (bVar instanceof ip.d) {
            ip.d dVar = (ip.d) bVar;
            if (dVar.b() != ip.c.f12124e) {
                break;
            }
            Collection i5 = dVar.i();
            Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
            bVar = (ip.d) CollectionsKt.a0(i5);
            if (bVar == null) {
                return null;
            }
        }
        return bVar.d();
    }

    @Override // zq.c
    public boolean a(p0 p0Var, p0 p0Var2) {
        if (p0Var == null) {
            b(0);
            throw null;
        }
        if (p0Var2 != null) {
            return p0Var.equals(p0Var2);
        }
        b(1);
        throw null;
    }

    public boolean c(ip.l lVar, ip.l lVar2, boolean z5) {
        if ((lVar instanceof ip.f) && (lVar2 instanceof ip.f)) {
            return Intrinsics.areEqual(((ip.f) lVar).n(), ((ip.f) lVar2).n());
        }
        if ((lVar instanceof s0) && (lVar2 instanceof s0)) {
            return d((s0) lVar, (s0) lVar2, z5, a.f13615d);
        }
        if (!(lVar instanceof ip.b) || !(lVar2 instanceof ip.b)) {
            return ((lVar instanceof f0) && (lVar2 instanceof f0)) ? Intrinsics.areEqual(((c0) ((f0) lVar)).f14132x, ((c0) ((f0) lVar2)).f14132x) : Intrinsics.areEqual(lVar, lVar2);
        }
        ip.b a10 = (ip.b) lVar;
        ip.b b10 = (ip.b) lVar2;
        Intrinsics.checkNotNullParameter(a10, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        zq.f kotlinTypeRefiner = zq.f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        if (!Intrinsics.areEqual(a10, b10)) {
            if (Intrinsics.areEqual(a10.getName(), b10.getName()) && ((!(a10 instanceof y) || !(b10 instanceof y) || ((y) a10).z() == ((y) b10).z()) && ((!Intrinsics.areEqual(a10.h(), b10.h()) || (z5 && Intrinsics.areEqual(e(a10), e(b10)))) && !e.o(a10) && !e.o(b10)))) {
                ip.l h6 = a10.h();
                ip.l h7 = b10.h();
                if (((h6 instanceof ip.d) || (h7 instanceof ip.d)) ? false : c(h6, h7, z5)) {
                    hc.b bVar = new hc.b();
                    bVar.f9624b = z5;
                    bVar.a = a10;
                    bVar.f9625c = b10;
                    n nVar = new n(bVar);
                    Intrinsics.checkNotNullExpressionValue(nVar, "create(...)");
                    l b11 = nVar.m(a10, b10, null, true).b();
                    l lVar3 = l.f13626d;
                    if (b11 != lVar3 || nVar.m(b10, a10, null, true).b() != lVar3) {
                    }
                }
            }
            return false;
        }
        return true;
    }

    public boolean d(s0 a10, s0 b10, boolean z5, Function2 equivalentCallables) {
        Intrinsics.checkNotNullParameter(a10, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        Intrinsics.checkNotNullParameter(equivalentCallables, "equivalentCallables");
        if (Intrinsics.areEqual(a10, b10)) {
            return true;
        }
        if (Intrinsics.areEqual(a10.h(), b10.h())) {
            return false;
        }
        ip.l h6 = a10.h();
        ip.l h7 = b10.h();
        return (((h6 instanceof ip.d) || (h7 instanceof ip.d)) ? ((Boolean) equivalentCallables.invoke(h6, h7)).booleanValue() : c(h6, h7, z5)) && a10.getIndex() == b10.getIndex();
    }
}
