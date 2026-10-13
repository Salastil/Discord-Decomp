package ng;

import android.os.Bundle;
import android.view.View;
import android.widget.ScrollView;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.google.android.material.appbar.AppBarLayout$BaseBehavior;

/* loaded from: classes3.dex */
public final class c extends androidx.core.view.b {
    public final /* synthetic */ g a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CoordinatorLayout f15431b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ AppBarLayout$BaseBehavior f15432c;

    public c(CoordinatorLayout coordinatorLayout, AppBarLayout$BaseBehavior appBarLayout$BaseBehavior, g gVar) {
        this.f15432c = appBarLayout$BaseBehavior;
        this.a = gVar;
        this.f15431b = coordinatorLayout;
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        accessibilityNodeInfoCompat.o(ScrollView.class.getName());
        g gVar = this.a;
        if (gVar.getTotalScrollRange() == 0) {
            return;
        }
        CoordinatorLayout coordinatorLayout = this.f15431b;
        AppBarLayout$BaseBehavior appBarLayout$BaseBehavior = this.f15432c;
        View y5 = AppBarLayout$BaseBehavior.y(appBarLayout$BaseBehavior, coordinatorLayout);
        if (y5 == null) {
            return;
        }
        appBarLayout$BaseBehavior.getClass();
        int childCount = gVar.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            if (((e) gVar.getChildAt(i5).getLayoutParams()).a != 0) {
                if (appBarLayout$BaseBehavior.B() != (-gVar.getTotalScrollRange())) {
                    accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1557i);
                    accessibilityNodeInfoCompat.y(true);
                }
                if (appBarLayout$BaseBehavior.B() != 0) {
                    if (!y5.canScrollVertically(-1)) {
                        accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.j);
                        accessibilityNodeInfoCompat.y(true);
                        return;
                    } else {
                        if ((-gVar.getDownNestedPreScrollRange()) != 0) {
                            accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.j);
                            accessibilityNodeInfoCompat.y(true);
                            return;
                        }
                        return;
                    }
                }
                return;
            }
        }
    }

    @Override // androidx.core.view.b
    public final boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
        g gVar = this.a;
        if (i5 == 4096) {
            gVar.setExpanded(false);
            return true;
        }
        if (i5 != 8192) {
            return super.performAccessibilityAction(view, i5, bundle);
        }
        AppBarLayout$BaseBehavior appBarLayout$BaseBehavior = this.f15432c;
        if (appBarLayout$BaseBehavior.B() != 0) {
            CoordinatorLayout coordinatorLayout = this.f15431b;
            View y5 = AppBarLayout$BaseBehavior.y(appBarLayout$BaseBehavior, coordinatorLayout);
            if (!y5.canScrollVertically(-1)) {
                gVar.setExpanded(true);
                return true;
            }
            int i6 = -gVar.getDownNestedPreScrollRange();
            if (i6 != 0) {
                appBarLayout$BaseBehavior.o(coordinatorLayout, this.a, y5, 0, i6, new int[]{0, 0}, 1);
                return true;
            }
        }
        return false;
    }
}
