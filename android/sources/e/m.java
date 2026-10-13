package e;

import android.view.View;
import android.view.Window;
import androidx.core.view.WindowInsetsControllerCompat;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public class m extends l {
    @Override // e.k, e4.f
    public void J(@NotNull v statusBarStyle, @NotNull v navigationBarStyle, @NotNull Window window, @NotNull View view, boolean z5, boolean z6) {
        Intrinsics.checkNotNullParameter(statusBarStyle, "statusBarStyle");
        Intrinsics.checkNotNullParameter(navigationBarStyle, "navigationBarStyle");
        Intrinsics.checkNotNullParameter(window, "window");
        Intrinsics.checkNotNullParameter(view, "view");
        ah.d.k(window, false);
        statusBarStyle.getClass();
        window.setStatusBarColor(0);
        navigationBarStyle.getClass();
        window.setNavigationBarColor(0);
        window.setStatusBarContrastEnforced(false);
        window.setNavigationBarContrastEnforced(navigationBarStyle.a == 0);
        WindowInsetsControllerCompat windowInsetsControllerCompat = new WindowInsetsControllerCompat(window, view);
        windowInsetsControllerCompat.c(!z5);
        windowInsetsControllerCompat.b(true ^ z6);
    }
}
