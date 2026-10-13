package op;

import java.lang.reflect.Field;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class l extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final l f16167d = new l(1, t.class, "<init>", "<init>(Ljava/lang/reflect/Field;)V", 0);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Field p02 = (Field) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new t(p02);
    }
}
