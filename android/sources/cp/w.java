package cp;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6976d;

    /* renamed from: e, reason: collision with root package name */
    public final x f6977e;

    /* renamed from: i, reason: collision with root package name */
    public final b0 f6978i;

    public /* synthetic */ w(x xVar, b0 b0Var, int i5) {
        this.f6976d = i5;
        this.f6977e = xVar;
        this.f6978i = b0Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Field declaredField;
        int i5 = this.f6976d;
        b0 b0Var = this.f6978i;
        x xVar = this.f6977e;
        switch (i5) {
            case 0:
                Class cls = b0Var.f6882e;
                ip.f a = xVar.a();
                if (a.b() != ip.g.f12143x) {
                    return null;
                }
                if (a.o()) {
                    fp.d dVar = fp.d.a;
                    if (!nf.e.t(a)) {
                        declaredField = cls.getEnclosingClass().getDeclaredField(a.getName().b());
                        Object obj = declaredField.get(null);
                        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type T of kotlin.reflect.jvm.internal.KClassImpl");
                        return obj;
                    }
                }
                declaredField = cls.getDeclaredField("INSTANCE");
                Object obj2 = declaredField.get(null);
                Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type T of kotlin.reflect.jvm.internal.KClassImpl");
                return obj2;
            case 1:
                List<ip.s0> l6 = xVar.a().l();
                Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(l6, 10));
                for (ip.s0 s0Var : l6) {
                    Intrinsics.checkNotNull(s0Var);
                    arrayList.add(new s1(b0Var, s0Var));
                }
                return arrayList;
            default:
                Collection<yq.y> b10 = xVar.a().n().b();
                Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
                ArrayList arrayList2 = new ArrayList(b10.size());
                for (yq.y yVar : b10) {
                    Intrinsics.checkNotNull(yVar);
                    arrayList2.add(new r1(yVar, new u(yVar, xVar, b0Var, 0)));
                }
                ip.f a10 = xVar.a();
                if (a10 == null) {
                    fp.i.a(107);
                    throw null;
                }
                hq.e eVar = fp.i.f8859e;
                if (!fp.i.b(a10, fp.o.a) && !fp.i.b(a10, fp.o.f8878b)) {
                    if (!arrayList2.isEmpty()) {
                        Iterator it = arrayList2.iterator();
                        while (it.hasNext()) {
                            ip.g b11 = kq.e.c(((r1) it.next()).f6947d).b();
                            Intrinsics.checkNotNullExpressionValue(b11, "getKind(...)");
                            if (b11 == ip.g.f12139e || b11 == ip.g.f12142w) {
                            }
                        }
                    }
                    yq.c0 e9 = oq.e.e(xVar.a()).e();
                    Intrinsics.checkNotNullExpressionValue(e9, "getAnyType(...)");
                    arrayList2.add(new r1(e9, v.f6973d));
                }
                return ir.n.e(arrayList2);
        }
    }
}
