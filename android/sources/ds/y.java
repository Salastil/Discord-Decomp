package ds;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function3;
import kotlinx.serialization.json.JsonElement;

/* loaded from: classes3.dex */
public final class y extends lo.g implements Function3 {

    /* renamed from: e, reason: collision with root package name */
    public int f7751e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ fo.b f7752i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ a5.a0 f7753v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public y(a5.a0 a0Var, Continuation continuation) {
        super(3, continuation);
        this.f7753v = a0Var;
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        y yVar = new y(this.f7753v, (Continuation) obj3);
        yVar.f7752i = (fo.b) obj;
        return yVar.invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        a5.a0 a0Var = this.f7753v;
        a aVar = (a) a0Var.f125i;
        ko.a aVar2 = ko.a.f13464d;
        int i5 = this.f7751e;
        if (i5 == 0) {
            ki.b.R(obj);
            fo.b bVar = this.f7752i;
            byte y5 = aVar.y();
            if (y5 == 1) {
                return a0Var.A(true);
            }
            if (y5 == 0) {
                return a0Var.A(false);
            }
            if (y5 != 6) {
                if (y5 == 8) {
                    return a0Var.y();
                }
                a.q(aVar, "Can't begin reading element, unexpected token", 0, null, 6);
                throw null;
            }
            this.f7751e = 1;
            obj = a5.a0.c(a0Var, bVar, this);
            if (obj == aVar2) {
                return aVar2;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return (JsonElement) obj;
    }
}
