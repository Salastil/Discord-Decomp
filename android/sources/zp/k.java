package zp;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21362d;

    /* renamed from: e, reason: collision with root package name */
    public final String f21363e;

    public /* synthetic */ k(String str, int i5) {
        this.f21362d = i5;
        this.f21363e = str;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        p function = (p) obj;
        switch (this.f21362d) {
            case 0:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                function.b(this.f21363e, l.f21364b);
                break;
            case 1:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar = l.f21364b;
                function.b(this.f21363e, dVar, dVar);
                break;
            case 2:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar2 = l.f21364b;
                function.a(this.f21363e, dVar2, dVar2);
                break;
            case 3:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                function.a(this.f21363e, l.f21364b);
                break;
            case 4:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                function.a(this.f21363e, l.f21364b);
                break;
            case 5:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                function.b(this.f21363e, l.f21364b);
                break;
            default:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                function.b(this.f21363e, l.f21364b);
                break;
        }
        return Unit.a;
    }
}
