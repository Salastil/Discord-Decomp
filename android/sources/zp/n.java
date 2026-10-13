package zp;

import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.u;
import yq.b1;
import yq.y;

/* loaded from: classes3.dex */
public final class n implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final n f21370e = new n(0);

    /* renamed from: i, reason: collision with root package name */
    public static final n f21371i = new n(1);

    /* renamed from: v, reason: collision with root package name */
    public static final n f21372v = new n(2);

    /* renamed from: w, reason: collision with root package name */
    public static final n f21373w = new n(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21374d;

    public /* synthetic */ n(int i5) {
        this.f21374d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f21374d) {
            case 0:
                ip.d it = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                u W = it.W();
                Intrinsics.checkNotNull(W);
                y type = W.getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                return type;
            case 1:
                ip.d it2 = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                y returnType = it2.getReturnType();
                Intrinsics.checkNotNull(returnType);
                return returnType;
            case 2:
                b1 it3 = (b1) obj;
                Intrinsics.checkNotNullParameter(it3, "it");
                return Boolean.valueOf(it3 instanceof wp.h);
            case 3:
                ip.i a = ((b1) obj).r0().a();
                if (a == null) {
                    return Boolean.FALSE;
                }
                hq.e name = a.getName();
                hq.c cVar = hp.d.f10152f;
                return Boolean.valueOf(Intrinsics.areEqual(name, cVar.a.f()) && Intrinsics.areEqual(oq.e.c(a), cVar));
            default:
                p function = (p) obj;
                Intrinsics.checkNotNullParameter(function, "$this$function");
                Intrinsics.checkNotNullParameter("Spliterator", StackTraceHelper.NAME_KEY);
                d dVar = l.f21364b;
                function.b("java/util/Spliterator", dVar, dVar);
                return Unit.a;
        }
    }
}
