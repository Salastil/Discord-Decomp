package gp;

import fp.p;
import ip.f0;
import ip.o0;
import ip.q;
import ip.t0;
import ip.z;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import lp.p0;
import rq.n;
import rq.o;
import yq.c1;

/* loaded from: classes3.dex */
public final class c extends lp.b {
    public static final hq.b I;
    public static final hq.b J;
    public final int E;
    public final b F;
    public final e G;
    public final List H;

    /* renamed from: w, reason: collision with root package name */
    public final xq.l f9423w;

    /* renamed from: x, reason: collision with root package name */
    public final f0 f9424x;

    /* renamed from: y, reason: collision with root package name */
    public final k f9425y;

    static {
        hq.c cVar = p.f8915l;
        hq.e e9 = hq.e.e("Function");
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        I = new hq.b(cVar, e9);
        hq.c cVar2 = p.f8914i;
        hq.e e10 = hq.e.e("KFunction");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        J = new hq.b(cVar2, e10);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(xq.l storageManager, vq.c containingDeclaration, k functionTypeKind, int i5) {
        super(storageManager, functionTypeKind.a(i5));
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(functionTypeKind, "functionTypeKind");
        this.f9423w = storageManager;
        this.f9424x = containingDeclaration;
        this.f9425y = functionTypeKind;
        this.E = i5;
        this.F = new b(this);
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(this, "containingClass");
        this.G = new e(storageManager, this);
        ArrayList arrayList = new ArrayList();
        IntRange intRange = new IntRange(1, i5, 1);
        ArrayList arrayList2 = new ArrayList(d0.l(intRange, 10));
        Iterator it = intRange.iterator();
        while (((yo.b) it).f20994i) {
            int nextInt = ((r0) it).nextInt();
            arrayList.add(p0.F0(this, c1.f21014v, hq.e.e("P" + nextInt), arrayList.size(), this.f9423w));
            arrayList2.add(Unit.a);
        }
        arrayList.add(p0.F0(this, c1.f21015w, hq.e.e("R"), arrayList.size(), this.f9423w));
        this.H = CollectionsKt.i0(arrayList);
        wi.d dVar = d.f9426d;
        k functionTypeKind2 = this.f9425y;
        dVar.getClass();
        Intrinsics.checkNotNullParameter(functionTypeKind2, "functionTypeKind");
        if (Intrinsics.areEqual(functionTypeKind2, g.f9428c) || Intrinsics.areEqual(functionTypeKind2, j.f9431c) || Intrinsics.areEqual(functionTypeKind2, h.f9429c)) {
            return;
        }
        Intrinsics.areEqual(functionTypeKind2, i.f9430c);
    }

    @Override // ip.j
    public final boolean A() {
        return false;
    }

    @Override // ip.f
    public final /* bridge */ /* synthetic */ lp.h G() {
        return null;
    }

    @Override // ip.f
    public final /* bridge */ /* synthetic */ o H() {
        return n.f17557b;
    }

    @Override // ip.f
    public final /* bridge */ /* synthetic */ ip.f J() {
        return null;
    }

    @Override // ip.f
    public final ip.g b() {
        return ip.g.f12139e;
    }

    @Override // ip.m
    public final o0 d() {
        ip.p0 NO_SOURCE = o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        return NO_SOURCE;
    }

    @Override // ip.f, ip.y
    public final z e() {
        return z.f12183w;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return jp.g.a;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        ip.p PUBLIC = q.f12159e;
        Intrinsics.checkNotNullExpressionValue(PUBLIC, "PUBLIC");
        return PUBLIC;
    }

    @Override // ip.l
    public final ip.l h() {
        return this.f9424x;
    }

    @Override // ip.f
    public final t0 i0() {
        return null;
    }

    @Override // ip.y
    public final boolean isExternal() {
        return false;
    }

    @Override // ip.f
    public final boolean isInline() {
        return false;
    }

    @Override // ip.f
    public final boolean isValue() {
        return false;
    }

    @Override // ip.f, ip.j
    public final List l() {
        return this.H;
    }

    @Override // ip.i
    public final yq.p0 n() {
        return this.F;
    }

    @Override // ip.f
    public final boolean o() {
        return false;
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // lp.z
    public final o p(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return this.G;
    }

    @Override // ip.f
    public final Collection q() {
        return m0.f13512d;
    }

    @Override // ip.f
    public final boolean s0() {
        return false;
    }

    @Override // ip.f
    public final boolean t() {
        return false;
    }

    public final String toString() {
        String b10 = getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return b10;
    }

    @Override // ip.f
    public final Collection x() {
        return m0.f13512d;
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }
}
