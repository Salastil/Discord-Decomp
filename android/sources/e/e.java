package e;

import android.app.Activity;
import android.content.pm.ShortcutInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.ext.SdkExtensions;
import android.provider.MediaStore;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.FrameLayout;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class e {
    public static int a() {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 < 33 && (i5 < 30 || SdkExtensions.getExtensionVersion(30) < 2)) {
            return Integer.MAX_VALUE;
        }
        return MediaStore.getPickImagesMaxLimit();
    }

    public static OnBackInvokedDispatcher b(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        OnBackInvokedDispatcher onBackInvokedDispatcher = activity.getOnBackInvokedDispatcher();
        Intrinsics.checkNotNullExpressionValue(onBackInvokedDispatcher, "activity.getOnBackInvokedDispatcher()");
        return onBackInvokedDispatcher;
    }

    public static Object c(Bundle bundle, String str, Class cls) {
        return bundle.getParcelable(str, cls);
    }

    public static ArrayList d(String str, Bundle bundle) {
        return bundle.getParcelableArrayList(str, Bundle.class);
    }

    public static String e(AccessibilityNodeInfo accessibilityNodeInfo) {
        return accessibilityNodeInfo.getUniqueId();
    }

    public static boolean f(AccessibilityNodeInfo accessibilityNodeInfo) {
        return accessibilityNodeInfo.isTextSelectable();
    }

    public static final boolean g(WeakReference weakReference, FrameLayout frameLayout) {
        Intrinsics.checkNotNullParameter(weakReference, "<this>");
        if (Build.VERSION.SDK_INT >= 33) {
            return weakReference.refersTo(frameLayout);
        }
        Object obj = weakReference.get();
        return obj != null && obj == frameLayout;
    }

    public static void h(Object dispatcher, Object callback) {
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        Intrinsics.checkNotNullParameter(callback, "callback");
        ((OnBackInvokedDispatcher) dispatcher).registerOnBackInvokedCallback(0, (OnBackInvokedCallback) callback);
    }

    public static void i(ShortcutInfo.Builder builder) {
        builder.setExcludedFromSurfaces(0);
    }

    public static void j(Object dispatcher, Object callback) {
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        Intrinsics.checkNotNullParameter(callback, "callback");
        ((OnBackInvokedDispatcher) dispatcher).unregisterOnBackInvokedCallback((OnBackInvokedCallback) callback);
    }
}
