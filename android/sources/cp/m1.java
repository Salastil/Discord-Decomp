package cp;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6921d;

    /* renamed from: e, reason: collision with root package name */
    public final n1 f6922e;

    public /* synthetic */ m1(n1 n1Var, int i5) {
        this.f6921d = i5;
        this.f6922e = n1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6921d) {
            case 0:
                n1 n1Var = this.f6922e;
                lp.k0 setter = n1Var.j().e().getSetter();
                if (setter != null) {
                    return setter;
                }
                lp.k0 y5 = m3.n.y(n1Var.j().e(), jp.g.a);
                Intrinsics.checkNotNullExpressionValue(y5, "createDefaultSetter(...)");
                return y5;
            default:
                return zo.c0.d(this.f6922e, false);
        }
    }
}
