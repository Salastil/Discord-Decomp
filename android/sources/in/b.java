package in;

import android.os.Build;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import androidx.core.view.v0;
import androidx.core.view.w0;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b {
    public final hn.a a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f10968b;

    public b(hn.a bottomNavigationView, ArrayList tabsScreenFragments) {
        Intrinsics.checkNotNullParameter(bottomNavigationView, "bottomNavigationView");
        Intrinsics.checkNotNullParameter(tabsScreenFragments, "tabsScreenFragments");
        this.a = bottomNavigationView;
        this.f10968b = tabsScreenFragments;
    }

    public final void a(MenuItem menuItem, kn.b tabsScreen) {
        Object obj;
        Intrinsics.checkNotNullParameter(menuItem, "menuItem");
        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
        if (Build.VERSION.SDK_INT >= 26) {
            menuItem.setContentDescription(tabsScreen.getTabBarItemAccessibilityLabel());
        }
        int itemId = menuItem.getItemId();
        ViewGroup menuViewGroup = this.a.getMenuViewGroup();
        Intrinsics.checkNotNullExpressionValue(menuViewGroup, "getMenuViewGroup(...)");
        Iterator it = new v0(menuViewGroup).iterator();
        while (true) {
            w0 w0Var = (w0) it;
            if (!w0Var.hasNext()) {
                obj = null;
                break;
            } else {
                obj = w0Var.next();
                if (((View) obj).getId() == itemId) {
                    break;
                }
            }
        }
        View view = (View) obj;
        if (view != null) {
            view.setTag(tabsScreen.getTabBarItemTestID());
        }
    }
}
