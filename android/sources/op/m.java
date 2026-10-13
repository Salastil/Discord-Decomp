package op;

import java.lang.reflect.Method;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class m extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final m f16168d = new m(1, w.class, "<init>", "<init>(Ljava/lang/reflect/Method;)V", 0);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Method p02 = (Method) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new w(p02);
    }
}
