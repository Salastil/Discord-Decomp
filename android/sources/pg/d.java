package pg;

import android.view.View;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import androidx.core.view.s0;
import com.google.android.material.behavior.SwipeDismissBehavior;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class d implements AccessibilityViewCommand {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ SwipeDismissBehavior f16396d;

    public d(SwipeDismissBehavior swipeDismissBehavior) {
        this.f16396d = swipeDismissBehavior;
    }

    @Override // androidx.core.view.accessibility.AccessibilityViewCommand
    public final boolean c(View view, AccessibilityViewCommand.CommandArguments commandArguments) {
        SwipeDismissBehavior swipeDismissBehavior = this.f16396d;
        if (!swipeDismissBehavior.w(view)) {
            return false;
        }
        boolean z5 = view.getLayoutDirection() == 1;
        int i5 = swipeDismissBehavior.f5949d;
        int width = (!(i5 == 0 && z5) && (i5 != 1 || z5)) ? view.getWidth() : -view.getWidth();
        WeakHashMap weakHashMap = s0.a;
        view.offsetLeftAndRight(width);
        view.setAlpha(0.0f);
        return true;
    }
}
