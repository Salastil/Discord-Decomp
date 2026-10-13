package vp;

import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19483d;

    /* renamed from: e, reason: collision with root package name */
    public final f f19484e;

    public /* synthetic */ e(f fVar, int i5) {
        this.f19483d = i5;
        this.f19484e = fVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19483d) {
            case 0:
                return op.c.a(com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(this.f19484e.f19486b.a))).a();
            case 1:
                f fVar = this.f19484e;
                hq.c topLevelFqName = fVar.a();
                op.d dVar = fVar.f19486b;
                e4.i iVar = fVar.a;
                if (topLevelFqName == null) {
                    return ar.l.c(ar.k.f2683b0, dVar.toString());
                }
                up.a aVar = (up.a) iVar.f7952d;
                ip.a0 a0Var = aVar.f18979o;
                ip.f b10 = hp.e.b(topLevelFqName, a0Var.g());
                if (b10 == null) {
                    op.n javaClass = new op.n(com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(dVar.a)));
                    qd.f fVar2 = aVar.k;
                    fVar2.getClass();
                    Intrinsics.checkNotNullParameter(javaClass, "javaClass");
                    ha.l lVar = (ha.l) fVar2.f16831e;
                    if (lVar == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("resolver");
                        lVar = null;
                    }
                    b10 = lVar.Z(javaClass);
                    if (b10 == null) {
                        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
                        b10 = nf.e.l(a0Var, new hq.b(topLevelFqName.b(), topLevelFqName.a.f()), aVar.f18970d.c().f19024l);
                    }
                }
                return b10.k();
            default:
                f fVar3 = this.f19484e;
                ArrayList b11 = fVar3.f19486b.b();
                ArrayList arrayList = new ArrayList();
                Iterator it = b11.iterator();
                while (it.hasNext()) {
                    yp.a aVar2 = (yp.a) it.next();
                    hq.e eVar = ((op.e) aVar2).a;
                    if (eVar == null) {
                        eVar = rp.y.f17495b;
                    }
                    mq.g c6 = fVar3.c(aVar2);
                    Pair pair = c6 != null ? new Pair(eVar, c6) : null;
                    if (pair != null) {
                        arrayList.add(pair);
                    }
                }
                return v0.m(arrayList);
        }
    }
}
