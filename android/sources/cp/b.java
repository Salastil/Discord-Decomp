package cp;

import java.lang.reflect.Method;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* loaded from: classes3.dex */
public final class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6880d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f6874e = new b(0);

    /* renamed from: i, reason: collision with root package name */
    public static final b f6875i = new b(1);

    /* renamed from: v, reason: collision with root package name */
    public static final b f6876v = new b(2);

    /* renamed from: w, reason: collision with root package name */
    public static final b f6877w = new b(3);

    /* renamed from: x, reason: collision with root package name */
    public static final b f6878x = new b(4);

    /* renamed from: y, reason: collision with root package name */
    public static final b f6879y = new b(5);
    public static final b E = new b(6);
    public static final b F = new b(7);
    public static final b G = new b(8);
    public static final b H = new b(9);
    public static final b I = new b(10);
    public static final b J = new b(11);

    public /* synthetic */ b(int i5) {
        this.f6880d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f6880d) {
            case 0:
                Class it = (Class) obj;
                e4.c cVar = c.a;
                Intrinsics.checkNotNullParameter(it, "it");
                return new b0(it);
            case 1:
                Class it2 = (Class) obj;
                e4.c cVar2 = c.a;
                Intrinsics.checkNotNullParameter(it2, "it");
                return new v0(it2);
            case 2:
                Class it3 = (Class) obj;
                e4.c cVar3 = c.a;
                Intrinsics.checkNotNullParameter(it3, "it");
                b0 a = c.a(it3);
                kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
                return com.facebook.imagepipeline.nativecode.b.j(a, m0Var, false, m0Var);
            case 3:
                Class it4 = (Class) obj;
                e4.c cVar4 = c.a;
                Intrinsics.checkNotNullParameter(it4, "it");
                b0 a10 = c.a(it4);
                kotlin.collections.m0 m0Var2 = kotlin.collections.m0.f13512d;
                return com.facebook.imagepipeline.nativecode.b.j(a10, m0Var2, true, m0Var2);
            case 4:
                e4.c cVar5 = c.a;
                Intrinsics.checkNotNullParameter((Class) obj, "it");
                return new ConcurrentHashMap();
            case 5:
                Class<?> returnType = ((Method) obj).getReturnType();
                Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
                return op.c.b(returnType);
            case 6:
                Class cls = (Class) obj;
                Intrinsics.checkNotNull(cls);
                return op.c.b(cls);
            case 7:
                ip.m0 descriptor = (ip.m0) obj;
                Regex regex = h0.f6904d;
                Intrinsics.checkNotNullParameter(descriptor, "descriptor");
                return jq.f.f13048c.v(descriptor) + " | " + a2.b(descriptor).d();
            case 8:
                ip.v descriptor2 = (ip.v) obj;
                Regex regex2 = h0.f6904d;
                Intrinsics.checkNotNullParameter(descriptor2, "descriptor");
                return jq.f.f13048c.v(descriptor2) + " | " + a2.c(descriptor2).d();
            case 9:
                jq.h hVar = z1.a;
                yq.y type = ((lp.r0) obj).getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                return z1.d(type);
            case 10:
                jq.h hVar2 = z1.a;
                yq.y type2 = ((lp.r0) obj).getType();
                Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                return z1.d(type2);
            default:
                Class cls2 = (Class) obj;
                Intrinsics.checkNotNull(cls2);
                return op.c.b(cls2);
        }
    }
}
