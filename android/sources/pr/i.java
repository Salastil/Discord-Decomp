package pr;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class i extends FunctionReferenceImpl implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public static final i f16489d = new i(2, j.class, "createSegment", "createSegment(JLkotlinx/coroutines/channels/ChannelSegment;)Lkotlinx/coroutines/channels/ChannelSegment;", 1);

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        long longValue = ((Number) obj).longValue();
        o oVar = (o) obj2;
        o oVar2 = j.a;
        h hVar = oVar.f16508w;
        Intrinsics.checkNotNull(hVar);
        return new o(longValue, oVar, hVar, 0);
    }
}
