package androidx.core.view;

import android.view.View;
import android.view.WindowInsets;
import android.view.WindowInsetsController;

/* loaded from: classes.dex */
public abstract class o0 {
    public static WindowInsets a(View view, WindowInsets windowInsets) {
        return view.dispatchApplyWindowInsets(windowInsets);
    }

    public static CharSequence b(View view) {
        return view.getStateDescription();
    }

    public static WindowInsetsControllerCompat c(View view) {
        WindowInsetsController windowInsetsController = view.getWindowInsetsController();
        if (windowInsetsController != null) {
            return new WindowInsetsControllerCompat(windowInsetsController);
        }
        return null;
    }

    public static void d(View view, int i5) {
        view.setImportantForContentCapture(i5);
    }

    public static void e(View view, CharSequence charSequence) {
        view.setStateDescription(charSequence);
    }
}
