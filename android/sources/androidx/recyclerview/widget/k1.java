package androidx.recyclerview.widget;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public abstract class k1 {
    public static int a(RecyclerView.State state, OrientationHelper orientationHelper, View view, View view2, RecyclerView.LayoutManager layoutManager, boolean z5) {
        if (layoutManager.getChildCount() == 0 || state.b() == 0 || view == null || view2 == null) {
            return 0;
        }
        if (!z5) {
            return Math.abs(layoutManager.getPosition(view) - layoutManager.getPosition(view2)) + 1;
        }
        return Math.min(orientationHelper.l(), orientationHelper.b(view2) - orientationHelper.e(view));
    }

    public static int b(RecyclerView.State state, OrientationHelper orientationHelper, View view, View view2, RecyclerView.LayoutManager layoutManager, boolean z5, boolean z6) {
        if (layoutManager.getChildCount() == 0 || state.b() == 0 || view == null || view2 == null) {
            return 0;
        }
        int max = z6 ? Math.max(0, (state.b() - Math.max(layoutManager.getPosition(view), layoutManager.getPosition(view2))) - 1) : Math.max(0, Math.min(layoutManager.getPosition(view), layoutManager.getPosition(view2)));
        if (z5) {
            return Math.round((max * (Math.abs(orientationHelper.b(view2) - orientationHelper.e(view)) / (Math.abs(layoutManager.getPosition(view) - layoutManager.getPosition(view2)) + 1))) + (orientationHelper.k() - orientationHelper.e(view)));
        }
        return max;
    }

    public static int c(RecyclerView.State state, OrientationHelper orientationHelper, View view, View view2, RecyclerView.LayoutManager layoutManager, boolean z5) {
        if (layoutManager.getChildCount() == 0 || state.b() == 0 || view == null || view2 == null) {
            return 0;
        }
        if (!z5) {
            return state.b();
        }
        return (int) (((orientationHelper.b(view2) - orientationHelper.e(view)) / (Math.abs(layoutManager.getPosition(view) - layoutManager.getPosition(view2)) + 1)) * state.b());
    }
}
