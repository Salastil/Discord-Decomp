package aq;

import cq.e0;
import ip.f0;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.c1;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f {

    /* renamed from: b, reason: collision with root package name */
    public static final Set f2628b = c1.b(bq.a.f3138w);

    /* renamed from: c, reason: collision with root package name */
    public static final Set f2629c;

    /* renamed from: d, reason: collision with root package name */
    public static final eq.f f2630d;

    /* renamed from: e, reason: collision with root package name */
    public static final eq.f f2631e;
    public uq.j a;

    static {
        bq.a[] elements = {bq.a.f3139x, bq.a.F};
        Intrinsics.checkNotNullParameter(elements, "elements");
        f2629c = x.J(elements);
        new eq.f(1, 1, 2);
        f2630d = new eq.f(1, 1, 11);
        f2631e = new eq.f(1, 1, 13);
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x0025, code lost:
    
        if (aq.f.f2629c.contains((bq.a) r0.f636d) != false) goto L11;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final wq.q a(f0 descriptor, np.b kotlinClass) {
        String[] strArr;
        Pair pair;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
        aj.a aVar = kotlinClass.f15583b;
        String[] strArr2 = (String[]) aVar.f638f;
        if (strArr2 == null) {
            strArr2 = (String[]) aVar.f639g;
        }
        if (strArr2 != null) {
        }
        strArr2 = null;
        if (strArr2 != null && (strArr = (String[]) kotlinClass.f15583b.f640h) != null) {
            try {
                try {
                    pair = gq.g.h(strArr2, strArr);
                } catch (iq.q e9) {
                    throw new IllegalStateException("Could not read data from " + kotlinClass.a(), e9);
                }
            } catch (Throwable th2) {
                c().f19017c.getClass();
                if (((eq.f) kotlinClass.f15583b.f637e).b(e())) {
                    throw th2;
                }
                pair = null;
            }
            if (pair != null) {
                gq.f fVar = (gq.f) pair.f13474d;
                e0 e0Var = (e0) pair.f13475e;
                d(kotlinClass);
                f(kotlinClass);
                h hVar = new h(kotlinClass, e0Var, fVar, b(kotlinClass));
                return new wq.q(descriptor, e0Var, fVar, (eq.f) kotlinClass.f15583b.f637e, hVar, c(), "scope for " + hVar + " in " + descriptor, e.f2627d);
            }
        }
        return null;
    }

    public final wq.j b(np.b bVar) {
        c().f19017c.getClass();
        int i5 = bVar.f15583b.f635c;
        return ((i5 & 16) == 0 || (i5 & 32) != 0) ? wq.j.f20011d : wq.j.f20012e;
    }

    public final uq.j c() {
        uq.j jVar = this.a;
        if (jVar != null) {
            return jVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("components");
        return null;
    }

    public final uq.o d(np.b bVar) {
        c().f19017c.getClass();
        if (((eq.f) bVar.f15583b.f637e).b(e())) {
            return null;
        }
        eq.f fVar = (eq.f) bVar.f15583b.f637e;
        eq.f fVar2 = eq.f.f8216g;
        eq.f e9 = e();
        eq.f e10 = e();
        boolean z5 = fVar.f8218f;
        e10.getClass();
        eq.f fVar3 = z5 ? fVar2 : eq.f.f8217h;
        int i5 = fVar3.f8186b;
        int i6 = e10.f8186b;
        if (i5 > i6 || (i5 >= i6 && fVar3.f8187c > e10.f8187c)) {
            e10 = fVar3;
        }
        return new uq.o(fVar, fVar2, e9, e10, bVar.a(), op.c.a(bVar.a));
    }

    public final eq.f e() {
        c().f19017c.getClass();
        return eq.f.f8216g;
    }

    public final boolean f(np.b bVar) {
        c().f19017c.getClass();
        c().f19017c.getClass();
        aj.a aVar = bVar.f15583b;
        return (aVar.f635c & 2) != 0 && Intrinsics.areEqual((eq.f) aVar.f637e, f2630d);
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x0020, code lost:
    
        if (aq.f.f2628b.contains((bq.a) r1.f636d) != false) goto L11;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final uq.e g(np.b kotlinClass) {
        Pair pair;
        Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
        aj.a aVar = kotlinClass.f15583b;
        String[] strArr = (String[]) aVar.f638f;
        if (strArr == null) {
            strArr = (String[]) aVar.f639g;
        }
        if (strArr != null) {
        }
        strArr = null;
        if (strArr != null) {
            String[] strArr2 = (String[]) aVar.f640h;
            try {
            } catch (Throwable th2) {
                c().f19017c.getClass();
                if (((eq.f) aVar.f637e).b(e())) {
                    throw th2;
                }
                pair = null;
            }
            if (strArr2 != null) {
                try {
                    pair = gq.g.f(strArr, strArr2);
                    if (pair != null) {
                        gq.f fVar = (gq.f) pair.f13474d;
                        cq.k kVar = (cq.k) pair.f13475e;
                        d(kotlinClass);
                        f(kotlinClass);
                        return new uq.e(fVar, kVar, (eq.f) aVar.f637e, new p(kotlinClass, b(kotlinClass)));
                    }
                } catch (iq.q e9) {
                    throw new IllegalStateException("Could not read data from " + kotlinClass.a(), e9);
                }
            }
        }
        return null;
    }
}
