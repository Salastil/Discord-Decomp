package cp;

import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class s implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6951d;

    /* renamed from: e, reason: collision with root package name */
    public final b0 f6952e;

    public /* synthetic */ s(b0 b0Var, int i5) {
        this.f6951d = i5;
        this.f6952e = b0Var;
    }

    /* JADX WARN: Type inference failed for: r3v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int i5 = this.f6951d;
        b0 b0Var = this.f6952e;
        switch (i5) {
            case 0:
                return new x(b0Var);
            case 1:
                int i6 = b0.f6881v;
                hq.b o6 = b0Var.o();
                Class cls = b0Var.f6882e;
                w1 w1Var = ((x) b0Var.f6883i.getValue()).a;
                KProperty kProperty = e0.f6895b[0];
                Object invoke = w1Var.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
                np.e eVar = (np.e) invoke;
                ip.f b10 = (o6.f10202c && cls.isAnnotationPresent(Metadata.class)) ? eVar.a.b(o6) : nf.e.j(eVar.a.f19016b, o6);
                if (b10 != null) {
                    return b10;
                }
                if (cls.isSynthetic()) {
                    return b0.n(o6, eVar);
                }
                np.b m5 = com.facebook.imagepipeline.nativecode.c.m(cls);
                bq.a aVar = m5 != null ? (bq.a) m5.f15583b.f636d : null;
                switch (aVar == null ? -1 : y.a[aVar.ordinal()]) {
                    case -1:
                    case 6:
                        throw new u1("Unresolved class: " + cls + " (kind = " + aVar + ')');
                    case 0:
                    default:
                        throw new fo.n();
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        return b0.n(o6, eVar);
                    case 5:
                        throw new u1("Unknown class: " + cls + " (kind = " + aVar + ')');
                }
            case 2:
                return b0Var.g(b0Var.getDescriptor().k().N(), f0.f6897d);
            case 3:
                rq.o H = b0Var.getDescriptor().H();
                Intrinsics.checkNotNullExpressionValue(H, "getStaticScope(...)");
                return b0Var.g(H, f0.f6897d);
            case 4:
                return b0Var.g(b0Var.getDescriptor().k().N(), f0.f6898e);
            case 5:
                rq.o H2 = b0Var.getDescriptor().H();
                Intrinsics.checkNotNullExpressionValue(H2, "getStaticScope(...)");
                return b0Var.g(H2, f0.f6898e);
            case 6:
                Class cls2 = b0Var.f6882e;
                if (cls2.isAnonymousClass()) {
                    return null;
                }
                hq.b o7 = b0Var.o();
                if (!o7.f10202c) {
                    String b11 = o7.f().b();
                    Intrinsics.checkNotNullExpressionValue(b11, "asString(...)");
                    return b11;
                }
                String simpleName = cls2.getSimpleName();
                Method enclosingMethod = cls2.getEnclosingMethod();
                if (enclosingMethod != null) {
                    Intrinsics.checkNotNull(simpleName);
                    return StringsKt.V(simpleName, enclosingMethod.getName() + '$');
                }
                Constructor<?> enclosingConstructor = cls2.getEnclosingConstructor();
                if (enclosingConstructor == null) {
                    Intrinsics.checkNotNull(simpleName);
                    return StringsKt.U('$', simpleName, simpleName);
                }
                Intrinsics.checkNotNull(simpleName);
                return StringsKt.V(simpleName, enclosingConstructor.getName() + '$');
            case 7:
                if (b0Var.f6882e.isAnonymousClass()) {
                    return null;
                }
                hq.b o10 = b0Var.o();
                if (o10.f10202c) {
                    return null;
                }
                return o10.a().a.a;
            default:
                Collection d6 = b0Var.d();
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(d6, 10));
                Iterator it = d6.iterator();
                while (it.hasNext()) {
                    arrayList.add(new j0(b0Var, (ip.k) it.next()));
                }
                return arrayList;
        }
    }

    public s(b0 b0Var, x xVar) {
        this.f6951d = 6;
        this.f6952e = b0Var;
    }
}
