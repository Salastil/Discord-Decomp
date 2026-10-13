package cp;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class s0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6953d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final v0 f6954e;

    /* renamed from: i, reason: collision with root package name */
    public final t0 f6955i;

    public s0(t0 t0Var, v0 v0Var) {
        this.f6955i = t0Var;
        this.f6954e = v0Var;
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0040, code lost:
    
        if (((bq.a) r0.f636d) == bq.a.F) goto L12;
     */
    @Override // kotlin.jvm.functions.Function0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke() {
        String str;
        switch (this.f6953d) {
            case 0:
                w1 w1Var = this.f6955i.f6963c;
                KProperty kProperty = t0.f6962h[0];
                np.b bVar = (np.b) w1Var.invoke();
                if (bVar != null) {
                    aj.a aVar = bVar.f15583b;
                    str = (String) aVar.f634b;
                    break;
                }
                str = null;
                if (str == null || str.length() <= 0) {
                    return null;
                }
                return this.f6954e.f6974e.getClassLoader().loadClass(kotlin.text.x.m(str, '/', '.'));
            default:
                w1 w1Var2 = this.f6955i.f6964d;
                KProperty kProperty2 = t0.f6962h[1];
                Object invoke = w1Var2.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
                return this.f6954e.g((rq.o) invoke, f0.f6897d);
        }
    }

    public s0(v0 v0Var, t0 t0Var) {
        this.f6954e = v0Var;
        this.f6955i = t0Var;
    }
}
