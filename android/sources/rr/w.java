package rr;

import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final /* synthetic */ class w extends FunctionReferenceImpl implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public static final w f17626d = new w(3, FlowCollector.class, "emit", "emit(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", 0);

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        return ((FlowCollector) obj).emit(obj2, (Continuation) obj3);
    }
}
