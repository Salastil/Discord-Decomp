package e2;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class g extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ androidx.fragment.app.s f7849d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e4.i f7850e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Function2 f7851i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(androidx.fragment.app.s sVar, e4.i iVar, Function2 function2) {
        super(1);
        this.f7849d = sVar;
        this.f7850e = iVar;
        this.f7851i = function2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit unit;
        Throwable th2 = (Throwable) obj;
        this.f7849d.invoke(th2);
        pr.h hVar = (pr.h) this.f7850e.f7954i;
        hVar.l(th2, false);
        do {
            Object a = pr.n.a(hVar.g());
            if (a == null) {
                unit = null;
            } else {
                this.f7851i.invoke(a, th2);
                unit = Unit.a;
            }
        } while (unit != null);
        return Unit.a;
    }
}
