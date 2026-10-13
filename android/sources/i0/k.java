package i0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class k {
    public static final f0 a(j requireCoordinator, int i5) {
        Intrinsics.checkNotNullParameter(requireCoordinator, "$this$requireCoordinator");
        f0 f0Var = ((z.e) requireCoordinator).a.f21120f;
        Intrinsics.checkNotNull(f0Var);
        f0Var.F();
        return f0Var;
    }

    public static final u b(j jVar) {
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        f0 f0Var = ((z.e) jVar).a.f21120f;
        if (f0Var != null) {
            return f0Var.E;
        }
        throw new IllegalStateException("Cannot obtain node coordinator. Is the Modifier.Node attached?");
    }

    public static final void c(j jVar) {
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        b(jVar).getClass();
        throw new IllegalStateException("Required value was null.");
    }
}
