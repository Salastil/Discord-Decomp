package cp;

import java.lang.reflect.Type;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6929d;

    /* renamed from: e, reason: collision with root package name */
    public final r1 f6930e;

    public /* synthetic */ p1(r1 r1Var, int i5) {
        this.f6929d = i5;
        this.f6930e = r1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6929d) {
            case 0:
                r1 r1Var = this.f6930e;
                return r1Var.a(r1Var.f6947d);
            default:
                Type javaType = this.f6930e.getJavaType();
                Intrinsics.checkNotNull(javaType);
                return op.c.c(javaType);
        }
    }
}
