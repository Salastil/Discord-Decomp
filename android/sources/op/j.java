package op;

import java.lang.reflect.Constructor;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class j extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final j f16165d = new j(1, q.class, "<init>", "<init>(Ljava/lang/reflect/Constructor;)V", 0);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Constructor p02 = (Constructor) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new q(p02);
    }
}
