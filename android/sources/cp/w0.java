package cp;

import java.lang.reflect.Type;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public final class w0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6979d;

    /* renamed from: e, reason: collision with root package name */
    public final y0 f6980e;

    public /* synthetic */ w0(y0 y0Var, int i5) {
        this.f6979d = i5;
        this.f6980e = y0Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        x0 x0Var;
        List c02;
        switch (this.f6979d) {
            case 0:
                return c2.d(this.f6980e.a());
            default:
                y0 y0Var = this.f6980e;
                ip.k0 a = y0Var.a();
                int i5 = y0Var.f6999e;
                r rVar = y0Var.f6998d;
                if ((a instanceof lp.u) && Intrinsics.areEqual(c2.g(rVar.e()), a) && rVar.e().b() == ip.c.f12124e) {
                    ip.l h6 = rVar.e().h();
                    Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                    Class k = c2.k((ip.f) h6);
                    if (k != null) {
                        return k;
                    }
                    throw new u1("Cannot determine receiver Java type of inherited declaration: " + a);
                }
                dp.g b10 = rVar.b();
                if (b10 instanceof dp.c0) {
                    if (rVar.h()) {
                        dp.c0 c0Var = (dp.c0) b10;
                        IntRange d6 = c0Var.d(i5 + 1);
                        int i6 = c0Var.d(0).f13546e + 1;
                        c02 = CollectionsKt.c0(c0Var.f7648b.a(), new IntRange(d6.f13545d - i6, d6.f13546e - i6, 1));
                    } else {
                        dp.c0 c0Var2 = (dp.c0) b10;
                        c02 = CollectionsKt.c0(c0Var2.f7648b.a(), c0Var2.d(i5));
                    }
                    Type[] typeArr = (Type[]) c02.toArray(new Type[0]);
                    Type[] typeArr2 = (Type[]) Arrays.copyOf(typeArr, typeArr.length);
                    int length = typeArr2.length;
                    if (length == 0) {
                        throw new so.a("Expected at least 1 type for compound type");
                    }
                    if (length == 1) {
                        return (Type) kotlin.collections.x.D(typeArr2);
                    }
                    x0Var = new x0(typeArr2);
                } else {
                    if (!(b10 instanceof dp.b0)) {
                        return (Type) b10.a().get(i5);
                    }
                    Class[] clsArr = (Class[]) ((Collection) ((dp.b0) b10).f7640d.get(i5)).toArray(new Class[0]);
                    Type[] typeArr3 = (Type[]) Arrays.copyOf(clsArr, clsArr.length);
                    int length2 = typeArr3.length;
                    if (length2 == 0) {
                        throw new so.a("Expected at least 1 type for compound type");
                    }
                    if (length2 == 1) {
                        return (Type) kotlin.collections.x.D(typeArr3);
                    }
                    x0Var = new x0(typeArr3);
                }
                return x0Var;
        }
    }
}
