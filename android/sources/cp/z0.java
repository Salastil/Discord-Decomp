package cp;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class z0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7002d;

    /* renamed from: e, reason: collision with root package name */
    public final b1 f7003e;

    public /* synthetic */ z0(b1 b1Var, int i5) {
        this.f7002d = i5;
        this.f7003e = b1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f7002d) {
            case 0:
                return new a1(this.f7003e);
            default:
                b1 b1Var = this.f7003e;
                return b1Var.j(b1Var.i(), null, null);
        }
    }
}
