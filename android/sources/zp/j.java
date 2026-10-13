package zp;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21359d;

    /* renamed from: e, reason: collision with root package name */
    public final String f21360e;

    /* renamed from: i, reason: collision with root package name */
    public final String f21361i;

    public /* synthetic */ j(String str, String str2, int i5) {
        this.f21359d = i5;
        this.f21360e = str;
        this.f21361i = str2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        p function = (p) obj;
        switch (this.f21359d) {
            case 0:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar = l.f21364b;
                String str = this.f21360e;
                function.a(str, dVar);
                d dVar2 = l.a;
                function.a(this.f21361i, dVar, dVar, dVar2, dVar2);
                function.b(str, dVar2);
                break;
            case 1:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar3 = l.f21364b;
                String str2 = this.f21360e;
                function.a(str2, dVar3);
                function.a(this.f21361i, dVar3, dVar3, dVar3);
                function.b(str2, dVar3);
                break;
            case 2:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar4 = l.f21364b;
                String str3 = this.f21360e;
                function.a(str3, dVar4);
                d dVar5 = l.f21365c;
                d dVar6 = l.a;
                function.a(this.f21361i, dVar4, dVar4, dVar5, dVar6);
                function.b(str3, dVar6);
                break;
            case 3:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar7 = l.f21364b;
                String str4 = this.f21360e;
                function.a(str4, dVar7);
                d dVar8 = l.f21365c;
                function.a(str4, dVar8);
                d dVar9 = l.a;
                function.a(this.f21361i, dVar7, dVar8, dVar8, dVar9);
                function.b(str4, dVar9);
                break;
            case 4:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                d dVar10 = l.f21365c;
                function.a(this.f21360e, dVar10);
                function.b(this.f21361i, l.f21364b, dVar10);
                break;
            default:
                Intrinsics.checkNotNullParameter(function, "$this$function");
                function.a(this.f21360e, l.a);
                function.b(this.f21361i, l.f21364b, l.f21365c);
                break;
        }
        return Unit.a;
    }
}
