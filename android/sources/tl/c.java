package tl;

import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Rect;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import androidx.core.view.m1;
import bm.f;
import com.discord.R;
import com.facebook.react.bridge.ReactContext;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c {
    public static final int[] a = new int[2];

    public static final void a(f fVar, Rect rect) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        Intrinsics.checkNotNullParameter(rect, "rect");
        if (!fVar.isAttachedToWindow()) {
            Intrinsics.checkNotNullParameter("Can not copy bounds as view is not attached to window", "message");
            return;
        }
        rect.set(0, 0, fVar.getWidth(), fVar.getHeight());
        int[] iArr = a;
        fVar.getLocationInWindow(iArr);
        rect.offset(iArr[0], iArr[1]);
    }

    public static final ViewGroup b(ReactContext reactContext) {
        Window window;
        View decorView;
        View rootView;
        Intrinsics.checkNotNullParameter(reactContext, "<this>");
        Activity currentActivity = reactContext.getCurrentActivity();
        if (currentActivity == null || (window = currentActivity.getWindow()) == null || (decorView = window.getDecorView()) == null || (rootView = decorView.getRootView()) == null) {
            return null;
        }
        return (ViewGroup) rootView.findViewById(R.id.action_bar_root);
    }

    public static final double c(float f2) {
        return f2 / Resources.getSystem().getDisplayMetrics().density;
    }

    public static final int d(ReactContext reactContext) {
        Window window;
        WindowManager.LayoutParams attributes;
        Intrinsics.checkNotNullParameter(reactContext, "<this>");
        Activity currentActivity = reactContext.getCurrentActivity();
        if (currentActivity == null || (window = currentActivity.getWindow()) == null || (attributes = window.getAttributes()) == null) {
            return 0;
        }
        return attributes.softInputMode;
    }

    public static final boolean e(m1 m1Var) {
        Intrinsics.checkNotNullParameter(m1Var, "<this>");
        return (m1Var.a.c() & 8) != 0;
    }
}
