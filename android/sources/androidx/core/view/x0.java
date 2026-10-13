package androidx.core.view;

import android.view.View;
import android.view.ViewGroup;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final class x0 extends lo.g implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public int f1653e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f1654i;

    /* renamed from: v, reason: collision with root package name */
    final /* synthetic */ View f1655v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x0(View view, Continuation continuation) {
        super(2, continuation);
        this.f1655v = view;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        x0 x0Var = new x0(this.f1655v, continuation);
        x0Var.f1654i = obj;
        return x0Var;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((x0) create((kr.k) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f1653e;
        if (i5 == 0) {
            ki.b.R(obj);
            kr.k kVar = (kr.k) this.f1654i;
            View view = this.f1655v;
            this.f1654i = kVar;
            this.f1653e = 1;
            kVar.a(view, this);
            return aVar;
        }
        if (i5 == 1) {
            kr.k kVar2 = (kr.k) this.f1654i;
            ki.b.R(obj);
            View view2 = this.f1655v;
            if (view2 instanceof ViewGroup) {
                this.f1654i = null;
                this.f1653e = 2;
                kVar2.getClass();
                Object b10 = kVar2.b(new a0(new w0((ViewGroup) view2)), this);
                if (b10 != aVar) {
                    b10 = Unit.a;
                }
                if (b10 == aVar) {
                    return aVar;
                }
            }
        } else {
            if (i5 != 2) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }
}
