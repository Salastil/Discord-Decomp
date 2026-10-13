package cp;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class f1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6900d;

    /* renamed from: e, reason: collision with root package name */
    public final h1 f6901e;

    public /* synthetic */ f1(h1 h1Var, int i5) {
        this.f6900d = i5;
        this.f6901e = h1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6900d) {
            case 0:
                return new g1(this.f6901e);
            default:
                return this.f6901e.i();
        }
    }
}
