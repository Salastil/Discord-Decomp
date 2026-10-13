package oq;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;

/* loaded from: classes3.dex */
public final /* synthetic */ class c extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final c f16178d = new c(1, r0.class, "declaresDefaultValue", "declaresDefaultValue()Z", 0);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        r0 p02 = (r0) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return Boolean.valueOf(p02.C0());
    }
}
