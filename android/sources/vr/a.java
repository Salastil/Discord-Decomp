package vr;

import jc.b0;
import kotlin.Unit;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import nr.x;

/* loaded from: classes3.dex */
public final /* synthetic */ class a extends FunctionReferenceImpl implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public static final a f19543d = new a(3, b.class, "register", "register(Lkotlinx/coroutines/selects/SelectInstance;Ljava/lang/Object;)V", 0);

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        b bVar = (b) obj;
        f fVar = (f) obj2;
        long j = bVar.a;
        if (j <= 0) {
            ((e) fVar).f19561w = Unit.a;
        } else {
            b0 b0Var = new b0(25, fVar, bVar);
            Intrinsics.checkNotNull(fVar, "null cannot be cast to non-null type kotlinx.coroutines.selects.SelectImplementation<*>");
            e eVar = (e) fVar;
            CoroutineContext coroutineContext = eVar.f19557d;
            eVar.f19559i = x.n(coroutineContext).Q(j, b0Var, coroutineContext);
        }
        return Unit.a;
    }
}
