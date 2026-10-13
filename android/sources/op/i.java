package op;

import java.lang.reflect.Member;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class i extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final i f16164d = new i(1, Member.class, "isSynthetic", "isSynthetic()Z", 0);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Member p02 = (Member) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return Boolean.valueOf(p02.isSynthetic());
    }
}
