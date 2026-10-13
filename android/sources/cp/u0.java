package cp;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class u0 extends FunctionReferenceImpl implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public static final u0 f6972d = new u0(2, uq.t.class, "loadProperty", "loadProperty(Lorg/jetbrains/kotlin/metadata/ProtoBuf$Property;)Lorg/jetbrains/kotlin/descriptors/PropertyDescriptor;", 0);

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        uq.t p02 = (uq.t) obj;
        cq.i0 p12 = (cq.i0) obj2;
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        return p02.f(p12);
    }
}
