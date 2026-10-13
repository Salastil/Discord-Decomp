package ip;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public final class e0 extends lp.i {
    public final ArrayList E;
    public final yq.l F;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f12136y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e0(xq.l storageManager, h container, hq.e name, boolean z5, int i5) {
        super(storageManager, container, name, o0.f12151g);
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(name, "name");
        this.f12136y = z5;
        IntRange i6 = yo.j.i(0, i5);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(i6, 10));
        Iterator it = i6.iterator();
        while (((yo.b) it).f20994i) {
            int nextInt = ((kotlin.collections.r0) it).nextInt();
            arrayList.add(lp.p0.F0(this, yq.c1.f21013i, hq.e.e("T" + nextInt), nextInt, storageManager));
        }
        this.E = arrayList;
        this.F = new yq.l(this, ta.a.m(this), kotlin.collections.c1.b(oq.e.j(this).g().e()), storageManager);
    }

    @Override // ip.j
    public final boolean A() {
        return this.f12136y;
    }

    @Override // ip.f
    public final lp.h G() {
        return null;
    }

    @Override // ip.f
    public final /* bridge */ /* synthetic */ rq.o H() {
        return rq.n.f17557b;
    }

    @Override // ip.f
    public final f J() {
        return null;
    }

    @Override // ip.f
    public final g b() {
        return g.f12138d;
    }

    @Override // ip.f, ip.y
    public final z e() {
        return z.f12180e;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return jp.g.a;
    }

    @Override // ip.f, ip.y
    public final p getVisibility() {
        p PUBLIC = q.f12159e;
        Intrinsics.checkNotNullExpressionValue(PUBLIC, "PUBLIC");
        return PUBLIC;
    }

    @Override // ip.f
    public final t0 i0() {
        return null;
    }

    @Override // lp.i, ip.y
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
        return this.E;
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
    public final rq.o p(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return rq.n.f17557b;
    }

    @Override // ip.f
    public final Collection q() {
        return kotlin.collections.o0.f13515d;
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
        return "class " + getName() + " (not found)";
    }

    @Override // ip.f
    public final Collection x() {
        return kotlin.collections.m0.f13512d;
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }
}
