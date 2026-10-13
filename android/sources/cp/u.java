package cp;

import java.io.ByteArrayInputStream;
import java.lang.reflect.Type;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class u implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6968d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f6969e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f6970i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f6971v;

    public /* synthetic */ u(Object obj, Object obj2, Object obj3, int i5) {
        this.f6968d = i5;
        this.f6969e = obj;
        this.f6970i = obj2;
        this.f6971v = obj3;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6968d) {
            case 0:
                yq.y yVar = (yq.y) this.f6969e;
                x xVar = (x) this.f6970i;
                b0 b0Var = (b0) this.f6971v;
                ip.i a = yVar.r0().a();
                if (!(a instanceof ip.f)) {
                    throw new u1("Supertype not a class: " + a);
                }
                Class k = c2.k((ip.f) a);
                if (k == null) {
                    throw new u1("Unsupported superclass of " + xVar + ": " + a);
                }
                Class cls = b0Var.f6882e;
                if (Intrinsics.areEqual(cls.getSuperclass(), k)) {
                    Type genericSuperclass = cls.getGenericSuperclass();
                    Intrinsics.checkNotNull(genericSuperclass);
                    return genericSuperclass;
                }
                Class<?>[] interfaces = cls.getInterfaces();
                Intrinsics.checkNotNullExpressionValue(interfaces, "getInterfaces(...)");
                int w5 = kotlin.collections.x.w(k, interfaces);
                if (w5 >= 0) {
                    Type type = cls.getGenericInterfaces()[w5];
                    Intrinsics.checkNotNull(type);
                    return type;
                }
                throw new u1("No superclass of " + xVar + " in Java reflection for " + a);
            case 1:
                return new lp.f((lp.g) this.f6971v, (xq.o) this.f6969e, (ip.p0) this.f6970i);
            default:
                return ((iq.b) ((iq.v) this.f6969e)).b((ByteArrayInputStream) this.f6970i, ((uq.j) ((wq.p) this.f6971v).f20028b.f3398e).f19028p);
        }
    }

    public u(lp.g gVar, xq.o oVar, ip.p0 p0Var) {
        this.f6968d = 1;
        this.f6971v = gVar;
        this.f6969e = oVar;
        this.f6970i = p0Var;
    }
}
