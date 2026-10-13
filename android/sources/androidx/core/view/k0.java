package androidx.core.view;

import android.view.View;
import android.view.WindowInsets;

/* loaded from: classes.dex */
public abstract class k0 {
    public static WindowInsetsCompat a(View view) {
        WindowInsets rootWindowInsets = view.getRootWindowInsets();
        if (rootWindowInsets == null) {
            return null;
        }
        WindowInsetsCompat g6 = WindowInsetsCompat.g(null, rootWindowInsets);
        c2 c2Var = g6.a;
        c2Var.r(g6);
        c2Var.d(view.getRootView());
        return g6;
    }

    public static void b(View view, int i5, int i6) {
        view.setScrollIndicators(i5, i6);
    }
}
