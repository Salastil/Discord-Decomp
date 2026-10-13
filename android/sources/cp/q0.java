package cp;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class q0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6933d;

    /* renamed from: e, reason: collision with root package name */
    public final v0 f6934e;

    public /* synthetic */ q0(v0 v0Var, int i5) {
        this.f6933d = i5;
        this.f6934e = v0Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6933d) {
            case 0:
                return new t0(this.f6934e);
            default:
                return com.facebook.imagepipeline.nativecode.c.m(this.f6934e.f6974e);
        }
    }
}
