package um;

import android.content.Context;
import android.content.ContextWrapper;
import android.view.ViewParent;
import android.widget.FrameLayout;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.FragmentManager;
import com.facebook.react.ReactRootView;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a {
    public static FragmentManager a(FrameLayout view) {
        boolean z5;
        boolean z6;
        Intrinsics.checkNotNullParameter(view, "view");
        FrameLayout frameLayout = view;
        while (true) {
            z5 = frameLayout instanceof ReactRootView;
            if (z5 || (frameLayout instanceof qm.a) || frameLayout.getParent() == null) {
                break;
            }
            ViewParent parent = frameLayout.getParent();
            Intrinsics.checkNotNullExpressionValue(parent, "getParent(...)");
            frameLayout = parent;
        }
        if (frameLayout instanceof qm.a) {
            Fragment associatedFragment = ((qm.a) frameLayout).getAssociatedFragment();
            if (associatedFragment != null) {
                return associatedFragment.getChildFragmentManager();
            }
            throw new IllegalStateException(("[RNScreens] Parent fragment providing view " + frameLayout + " returned nullish fragment").toString());
        }
        if (!z5) {
            throw new IllegalStateException("[RNScreens] Expected parent to be a ReactRootView, instead found: ".concat(frameLayout.getClass().getName()).toString());
        }
        ReactRootView reactRootView = (ReactRootView) frameLayout;
        Context context = reactRootView.getContext();
        while (true) {
            z6 = context instanceof FragmentActivity;
            if (z6 || !(context instanceof ContextWrapper)) {
                break;
            }
            context = ((ContextWrapper) context).getBaseContext();
        }
        if (!z6) {
            throw new IllegalStateException("[RNScreens] In order to use react-native-screens components your app's activity need to extend ReactActivity");
        }
        FragmentActivity fragmentActivity = (FragmentActivity) context;
        if (fragmentActivity.getSupportFragmentManager().f1915c.f().isEmpty()) {
            return fragmentActivity.getSupportFragmentManager();
        }
        try {
            return FragmentManager.C(reactRootView).getChildFragmentManager();
        } catch (IllegalStateException unused) {
            return fragmentActivity.getSupportFragmentManager();
        }
    }
}
