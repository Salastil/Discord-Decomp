package androidx.core.view;

import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.PathInterpolator;
import com.discord.R;
import java.util.List;

/* loaded from: classes.dex */
public final class h1 extends l1 {

    /* renamed from: e, reason: collision with root package name */
    public static final PathInterpolator f1596e = new PathInterpolator(0.0f, 1.1f, 0.0f, 1.0f);

    /* renamed from: f, reason: collision with root package name */
    public static final q2.a f1597f = new q2.a(0);

    /* renamed from: g, reason: collision with root package name */
    public static final DecelerateInterpolator f1598g = new DecelerateInterpolator(1.5f);

    /* renamed from: h, reason: collision with root package name */
    public static final AccelerateInterpolator f1599h = new AccelerateInterpolator(1.5f);

    public static void e(View view, m1 m1Var) {
        d1 j = j(view);
        if (j != null) {
            j.onEnd(m1Var);
            if (j.getDispatchMode() == 0) {
                return;
            }
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                e(viewGroup.getChildAt(i5), m1Var);
            }
        }
    }

    public static void f(View view, m1 m1Var, WindowInsetsCompat windowInsetsCompat, boolean z5) {
        d1 j = j(view);
        if (j != null) {
            j.mDispachedInsets = windowInsetsCompat;
            if (!z5) {
                j.onPrepare(m1Var);
                z5 = j.getDispatchMode() == 0;
            }
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                f(viewGroup.getChildAt(i5), m1Var, windowInsetsCompat, z5);
            }
        }
    }

    public static void g(View view, WindowInsetsCompat windowInsetsCompat, List list) {
        d1 j = j(view);
        if (j != null) {
            windowInsetsCompat = j.onProgress(windowInsetsCompat, list);
            if (j.getDispatchMode() == 0) {
                return;
            }
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                g(viewGroup.getChildAt(i5), windowInsetsCompat, list);
            }
        }
    }

    public static void h(View view, m1 m1Var, c1 c1Var) {
        d1 j = j(view);
        if (j != null) {
            j.onStart(m1Var, c1Var);
            if (j.getDispatchMode() == 0) {
                return;
            }
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                h(viewGroup.getChildAt(i5), m1Var, c1Var);
            }
        }
    }

    public static WindowInsets i(View view, WindowInsets windowInsets) {
        return view.getTag(R.id.tag_on_apply_window_listener) != null ? windowInsets : view.onApplyWindowInsets(windowInsets);
    }

    public static d1 j(View view) {
        Object tag = view.getTag(R.id.tag_window_insets_animation_callback);
        if (tag instanceof g1) {
            return ((g1) tag).a;
        }
        return null;
    }
}
