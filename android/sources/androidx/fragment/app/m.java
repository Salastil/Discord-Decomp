package androidx.fragment.app;

import android.view.View;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class m {
    public final y1 a;

    public m(y1 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        this.a = operation;
    }

    public final boolean a() {
        a2 a2Var;
        y1 y1Var = this.a;
        View view = y1Var.f2125c.mView;
        a2 a2Var2 = a2.f1962e;
        if (view != null) {
            Intrinsics.checkNotNullParameter(view, "<this>");
            float alpha = view.getAlpha();
            a2Var = a2.f1964v;
            if (alpha != 0.0f || view.getVisibility() != 0) {
                int visibility = view.getVisibility();
                if (visibility == 0) {
                    a2Var = a2Var2;
                } else if (visibility != 4) {
                    if (visibility != 8) {
                        throw new IllegalArgumentException(k0.d.i(visibility, "Unknown visibility "));
                    }
                    a2Var = a2.f1963i;
                }
            }
        } else {
            a2Var = null;
        }
        a2 a2Var3 = y1Var.a;
        if (a2Var != a2Var3) {
            return (a2Var == a2Var2 || a2Var3 == a2Var2) ? false : true;
        }
        return true;
    }
}
