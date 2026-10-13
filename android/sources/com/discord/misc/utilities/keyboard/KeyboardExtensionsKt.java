package com.discord.misc.utilities.keyboard;

import android.app.Activity;
import android.view.View;
import android.view.Window;
import androidx.core.view.WindowInsetsControllerCompat;
import com.discord.misc.utilities.activity.ActivityExtensionsKt;
import com.discord.misc.utilities.coroutines.MainImmediateScopeKt;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\n\u0010\u0000\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\u0003\u001a\u00020\u0001*\u00020\u0002\u001a\u0012\u0010\u0000\u001a\u00020\u0001*\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006\u001a\u0012\u0010\u0003\u001a\u00020\u0001*\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006\u001a\u0014\u0010\u0007\u001a\u00020\b*\u00020\u00062\u0006\u0010\t\u001a\u00020\u0004H\u0002¨\u0006\n"}, d2 = {"showKeyboard", "", "Landroid/app/Activity;", "hideKeyboard", "Landroid/view/View;", "window", "Landroid/view/Window;", "getInsetsController", "Landroidx/core/view/WindowInsetsControllerCompat;", "view", "misc_utilities_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class KeyboardExtensionsKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final WindowInsetsControllerCompat getInsetsController(Window window, View view) {
        WindowInsetsControllerCompat windowInsetsControllerCompat = new WindowInsetsControllerCompat(window, view);
        Intrinsics.checkNotNullExpressionValue(windowInsetsControllerCompat, "getInsetsController(...)");
        return windowInsetsControllerCompat;
    }

    public static final void hideKeyboard(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "<this>");
        View contentView = ActivityExtensionsKt.getContentView(activity);
        if (contentView != null) {
            Window window = activity.getWindow();
            Intrinsics.checkNotNullExpressionValue(window, "getWindow(...)");
            hideKeyboard(contentView, window);
        }
    }

    public static final void showKeyboard(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "<this>");
        View contentView = ActivityExtensionsKt.getContentView(activity);
        if (contentView != null) {
            Window window = activity.getWindow();
            Intrinsics.checkNotNullExpressionValue(window, "getWindow(...)");
            showKeyboard(contentView, window);
        }
    }

    public static final void hideKeyboard(@NotNull View view, @NotNull Window window) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Intrinsics.checkNotNullParameter(window, "window");
        x.t(MainImmediateScopeKt.MainImmediateScope(), null, new KeyboardExtensionsKt$hideKeyboard$1(window, view, null), 3);
    }

    public static final void showKeyboard(@NotNull View view, @NotNull Window window) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Intrinsics.checkNotNullParameter(window, "window");
        x.t(MainImmediateScopeKt.MainImmediateScope(), null, new KeyboardExtensionsKt$showKeyboard$1(window, view, null), 3);
    }
}
