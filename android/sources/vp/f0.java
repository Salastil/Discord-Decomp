package vp;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.x0;
import yq.z0;

/* loaded from: classes3.dex */
public final class f0 extends lp.c {
    public final e4.i I;
    public final op.b0 J;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public f0(e4.i c6, op.b0 javaTypeParameter, int i5, ip.m containingDeclaration) {
        super(r2, containingDeclaration, r4, r5, c1.f21013i, false, i5, ((up.a) c6.f7952d).f18977m);
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(javaTypeParameter, "javaTypeParameter");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        xq.o oVar = ((up.a) c6.f7952d).a;
        up.c cVar = new up.c(c6, javaTypeParameter, false);
        hq.e e9 = hq.e.e(javaTypeParameter.a.getName());
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        this.I = c6;
        this.J = javaTypeParameter;
    }

    @Override // lp.g
    public final List B0(List bounds) {
        zp.o oVar;
        yq.y yVar;
        yq.y a;
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        e4.i context = this.I;
        zp.o oVar2 = ((up.a) context.f7952d).f18982r;
        oVar2.getClass();
        Intrinsics.checkNotNullParameter(this, "typeParameter");
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        Intrinsics.checkNotNullParameter(context, "context");
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(bounds, 10));
        Iterator it = bounds.iterator();
        while (it.hasNext()) {
            yq.y yVar2 = (yq.y) it.next();
            zp.n predicate = zp.n.f21372v;
            Intrinsics.checkNotNullParameter(yVar2, "<this>");
            Intrinsics.checkNotNullParameter(predicate, "predicate");
            if (z0.c(yVar2, predicate, null)) {
                oVar = oVar2;
                yVar = yVar2;
            } else {
                oVar = oVar2;
                yVar = yVar2;
                a = oVar.a(new g3.a((jp.a) this, false, context, rp.a.f17423x, false), yVar, m0.f13512d, null, false);
                if (a != null) {
                    arrayList.add(a);
                    oVar2 = oVar;
                }
            }
            a = yVar;
            arrayList.add(a);
            oVar2 = oVar;
        }
        return arrayList;
    }

    @Override // lp.g
    public final void C0(yq.y type) {
        Intrinsics.checkNotNullParameter(type, "type");
    }

    @Override // lp.g
    public final List D0() {
        Type[] bounds = this.J.a.getBounds();
        Intrinsics.checkNotNullExpressionValue(bounds, "getBounds(...)");
        ArrayList arrayList = new ArrayList(bounds.length);
        for (Type type : bounds) {
            arrayList.add(new op.p(type));
        }
        op.p pVar = (op.p) CollectionsKt.b0(arrayList);
        List list = arrayList;
        if (Intrinsics.areEqual(pVar != null ? pVar.a : null, Object.class)) {
            list = m0.f13512d;
        }
        boolean isEmpty = list.isEmpty();
        e4.i iVar = this.I;
        if (isEmpty) {
            yq.c0 e9 = ((up.a) iVar.f7952d).f18979o.g().e();
            Intrinsics.checkNotNullExpressionValue(e9, "getAnyType(...)");
            yq.c0 p3 = ((up.a) iVar.f7952d).f18979o.g().p();
            Intrinsics.checkNotNullExpressionValue(p3, "getNullableAnyType(...)");
            return kotlin.collections.b0.c(yq.c.e(e9, p3));
        }
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList2.add(((k2.r) iVar.f7955v).O((op.p) it.next(), nf.e.D(x0.f21081e, false, this, 3)));
        }
        return arrayList2;
    }
}
