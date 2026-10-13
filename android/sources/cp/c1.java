package cp;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class c1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6888d;

    /* renamed from: e, reason: collision with root package name */
    public final e1 f6889e;

    public /* synthetic */ c1(e1 e1Var, int i5) {
        this.f6888d = i5;
        this.f6889e = e1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6888d) {
            case 0:
                return new d1(this.f6889e);
            default:
                return this.f6889e.i();
        }
    }
}
