package bp;

import cq.a0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import uq.t;

/* loaded from: classes3.dex */
public final /* synthetic */ class a extends FunctionReferenceImpl implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public static final a f3134d = new a(2, t.class, "loadFunction", "loadFunction(Lorg/jetbrains/kotlin/metadata/ProtoBuf$Function;)Lorg/jetbrains/kotlin/descriptors/SimpleFunctionDescriptor;", 0);

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        t p02 = (t) obj;
        a0 p12 = (a0) obj2;
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        return p02.e(p12);
    }
}
