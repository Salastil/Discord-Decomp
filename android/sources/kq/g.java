package kq;

import ip.b0;
import ip.m0;
import ip.t0;
import ip.v0;
import ip.w;
import kotlin.jvm.internal.Intrinsics;
import lp.j0;
import yq.c0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public abstract class g {
    public static final /* synthetic */ int a = 0;

    static {
        hq.c topLevelFqName = new hq.c("kotlin.jvm.JvmInline");
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        hq.c packageFqName = topLevelFqName.b();
        hq.e topLevelName = topLevelFqName.a.f();
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(topLevelName, "topLevelName");
        hq.c cVar = hq.c.f10203c;
        hq.c relativeClassName = tn.g.C(topLevelName);
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(relativeClassName, "relativeClassName");
        relativeClassName.a.c();
    }

    public static final boolean a(ip.d dVar) {
        t0 i02;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        if (!(dVar instanceof j0)) {
            return false;
        }
        m0 B0 = ((j0) dVar).B0();
        Intrinsics.checkNotNullExpressionValue(B0, "getCorrespondingProperty(...)");
        Intrinsics.checkNotNullParameter(B0, "<this>");
        if (B0.W() != null) {
            return false;
        }
        ip.l h6 = B0.h();
        ip.f fVar = h6 instanceof ip.f ? (ip.f) h6 : null;
        if (fVar == null || (i02 = fVar.i0()) == null) {
            return false;
        }
        hq.e name = B0.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        return i02.a(name);
    }

    public static final boolean b(ip.l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        return (lVar instanceof ip.f) && (((ip.f) lVar).i0() instanceof w);
    }

    public static final boolean c(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        ip.i a10 = yVar.r0().a();
        if (a10 != null) {
            return b(a10);
        }
        return false;
    }

    public static final boolean d(ip.l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        return (lVar instanceof ip.f) && (((ip.f) lVar).i0() instanceof b0);
    }

    public static final boolean e(v0 v0Var) {
        Intrinsics.checkNotNullParameter(v0Var, "<this>");
        if (v0Var.W() != null) {
            return false;
        }
        ip.l h6 = v0Var.h();
        hq.e eVar = null;
        ip.f fVar = h6 instanceof ip.f ? (ip.f) h6 : null;
        if (fVar != null) {
            int i5 = oq.e.a;
            t0 i02 = fVar.i0();
            w wVar = i02 instanceof w ? (w) i02 : null;
            if (wVar != null) {
                eVar = wVar.a;
            }
        }
        return Intrinsics.areEqual(eVar, v0Var.getName());
    }

    public static final boolean f(ip.l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        return b(lVar) || d(lVar);
    }

    public static final boolean g(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        ip.i a10 = yVar.r0().a();
        if (a10 != null) {
            return f(a10);
        }
        return false;
    }

    public static final boolean h(y receiver) {
        Intrinsics.checkNotNullParameter(receiver, "<this>");
        ip.i a10 = receiver.r0().a();
        if (a10 == null || !d(a10)) {
            return false;
        }
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return !z0.e(receiver);
    }

    public static final c0 i(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        ip.i a10 = yVar.r0().a();
        ip.f fVar = a10 instanceof ip.f ? (ip.f) a10 : null;
        if (fVar != null) {
            int i5 = oq.e.a;
            t0 i02 = fVar.i0();
            w wVar = i02 instanceof w ? (w) i02 : null;
            if (wVar != null) {
                return (c0) wVar.f12175b;
            }
        }
        return null;
    }
}
