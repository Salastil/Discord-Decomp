package cp;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6914d;

    /* renamed from: e, reason: collision with root package name */
    public final l1 f6915e;

    public /* synthetic */ k1(l1 l1Var, int i5) {
        this.f6914d = i5;
        this.f6915e = l1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6914d) {
            case 0:
                l1 l1Var = this.f6915e;
                lp.j0 getter = l1Var.j().e().getGetter();
                if (getter != null) {
                    return getter;
                }
                lp.j0 x5 = m3.n.x(l1Var.j().e(), jp.g.a);
                Intrinsics.checkNotNullExpressionValue(x5, "createDefaultGetter(...)");
                return x5;
            default:
                return zo.c0.d(this.f6915e, true);
        }
    }
}
