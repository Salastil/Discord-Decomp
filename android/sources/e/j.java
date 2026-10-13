package e;

import android.view.View;
import android.view.Window;
import androidx.core.view.WindowInsetsControllerCompat;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class j extends e4.f {
    @Override // e4.f
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
        new WindowInsetsControllerCompat(window, view).c(!z5);
    }
}
