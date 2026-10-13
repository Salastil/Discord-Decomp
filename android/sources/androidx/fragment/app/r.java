package androidx.fragment.app;

import android.transition.Transition;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class r extends m {

    /* renamed from: b, reason: collision with root package name */
    public final Object f2092b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f2093c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f2094d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r(y1 operation, boolean z5, boolean z6) {
        super(operation);
        Intrinsics.checkNotNullParameter(operation, "operation");
        Fragment fragment = operation.f2125c;
        a2 a2Var = operation.a;
        a2 a2Var2 = a2.f1962e;
        this.f2092b = a2Var == a2Var2 ? z5 ? fragment.getReenterTransition() : fragment.getEnterTransition() : z5 ? fragment.getReturnTransition() : fragment.getExitTransition();
        this.f2093c = operation.a == a2Var2 ? z5 ? fragment.getAllowReturnTransitionOverlap() : fragment.getAllowEnterTransitionOverlap() : true;
        this.f2094d = z6 ? z5 ? fragment.getSharedElementReturnTransition() : fragment.getSharedElementEnterTransition() : null;
    }

    public final u1 b() {
        Object obj = this.f2092b;
        u1 c6 = c(obj);
        Object obj2 = this.f2094d;
        u1 c8 = c(obj2);
        if (c6 == null || c8 == null || c6 == c8) {
            return c6 == null ? c8 : c6;
        }
        throw new IllegalArgumentException(("Mixing framework transitions and AndroidX transitions is not allowed. Fragment " + this.a.f2125c + " returned Transition " + obj + " which uses a different Transition  type than its shared element transition " + obj2).toString());
    }

    public final u1 c(Object obj) {
        if (obj == null) {
            return null;
        }
        s1 s1Var = n1.a;
        if (obj instanceof Transition) {
            return s1Var;
        }
        u1 u1Var = n1.f2061b;
        if (u1Var != null && u1Var.g(obj)) {
            return u1Var;
        }
        throw new IllegalArgumentException("Transition " + obj + " for fragment " + this.a.f2125c + " is not a valid framework Transition or AndroidX Transition");
    }
}
