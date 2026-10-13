package com.swmansion.rnscreens;

import android.content.Context;
import android.content.ContextWrapper;
import android.view.Choreographer;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.inputmethod.InputMethodManager;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;
import com.facebook.react.ReactRootView;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.modules.core.ReactChoreographer;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.swmansion.rnscreens.Screen;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public class ScreenContainer extends ViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ int f6697d = 0;
    protected FragmentManager fragmentManager;
    private boolean isAttached;
    private boolean isLayoutEnqueued;

    @NotNull
    private final Choreographer.FrameCallback layoutCallback;
    private boolean needsUpdate;
    private ScreenFragmentWrapper parentScreenWrapper;

    @NotNull
    protected final ArrayList<ScreenFragmentWrapper> screenWrappers;

    public ScreenContainer(Context context) {
        super(context);
        this.screenWrappers = new ArrayList<>();
        this.layoutCallback = new c(this, 1);
    }

    private final void setFragmentManager(FragmentManager fragmentManager) {
        this.fragmentManager = fragmentManager;
        performUpdatesNow();
    }

    public final void a() {
        this.needsUpdate = true;
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.uimanager.ThemedReactContext");
        ((ThemedReactContext) context).getReactApplicationContext().runOnUiQueueThread(new com.google.firebase.messaging.s(4, this));
    }

    public ScreenFragmentWrapper adapt(Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        return new v(screen);
    }

    public final void addScreen(@NotNull Screen screen, int i5) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        ScreenFragmentWrapper adapt = adapt(screen);
        screen.setFragmentWrapper(adapt);
        this.screenWrappers.add(i5, adapt);
        screen.setContainer(this);
        a();
    }

    public final void attachBelowTop() {
        if (this.screenWrappers.size() < 2) {
            throw new RuntimeException("[RNScreens] Unable to run transition for less than 2 screens.");
        }
        FragmentTransaction createTransaction = createTransaction();
        Screen topScreen = getTopScreen();
        Intrinsics.checkNotNull(topScreen, "null cannot be cast to non-null type com.swmansion.rnscreens.Screen");
        Fragment fragment = topScreen.getFragment();
        Intrinsics.checkNotNull(fragment, "null cannot be cast to non-null type androidx.fragment.app.Fragment");
        createTransaction.g(fragment);
        createTransaction.f(getId(), ((ScreenFragmentWrapper) k0.d.f(2, this.screenWrappers)).g(), null, 1);
        Fragment fragment2 = topScreen.getFragment();
        Intrinsics.checkNotNull(fragment2, "null cannot be cast to non-null type androidx.fragment.app.Fragment");
        createTransaction.f(getId(), fragment2, null, 1);
        createTransaction.d();
    }

    @NotNull
    public final FragmentTransaction createTransaction() {
        FragmentManager fragmentManager = this.fragmentManager;
        if (fragmentManager == null) {
            throw new IllegalArgumentException("fragment manager is null when creating transaction");
        }
        androidx.fragment.app.a aVar = new androidx.fragment.app.a(fragmentManager);
        aVar.f1949p = true;
        Intrinsics.checkNotNullExpressionValue(aVar, "setReorderingAllowed(...)");
        return aVar;
    }

    public final void detachBelowTop() {
        if (this.screenWrappers.size() < 2) {
            throw new RuntimeException("[RNScreens] Unable to run transition for less than 2 screens.");
        }
        FragmentTransaction createTransaction = createTransaction();
        createTransaction.g(((ScreenFragmentWrapper) k0.d.f(2, this.screenWrappers)).g());
        createTransaction.d();
    }

    @NotNull
    public final Screen getScreenAt(int i5) {
        return this.screenWrappers.get(i5).a();
    }

    public final int getScreenCount() {
        return this.screenWrappers.size();
    }

    @NotNull
    public final ScreenFragmentWrapper getScreenFragmentWrapperAt(int i5) {
        ScreenFragmentWrapper screenFragmentWrapper = this.screenWrappers.get(i5);
        Intrinsics.checkNotNullExpressionValue(screenFragmentWrapper, "get(...)");
        return screenFragmentWrapper;
    }

    public Screen getTopScreen() {
        Object obj;
        Iterator<T> it = this.screenWrappers.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (((ScreenFragmentWrapper) obj).a().getActivityState() == Screen.ActivityState.f6680i) {
                break;
            }
        }
        ScreenFragmentWrapper screenFragmentWrapper = (ScreenFragmentWrapper) obj;
        if (screenFragmentWrapper != null) {
            return screenFragmentWrapper.a();
        }
        return null;
    }

    public boolean hasScreen(ScreenFragmentWrapper screenFragmentWrapper) {
        return CollectionsKt.E(this.screenWrappers, screenFragmentWrapper);
    }

    public final boolean isNested() {
        return this.parentScreenWrapper != null;
    }

    public void notifyContainerUpdate() {
        ScreenFragmentWrapper fragmentWrapper;
        Screen topScreen = getTopScreen();
        if (topScreen == null || (fragmentWrapper = topScreen.getFragmentWrapper()) == null) {
            return;
        }
        fragmentWrapper.m();
    }

    public final void notifyScreenDetached(@NotNull Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        if (getContext() instanceof ReactContext) {
            int surfaceId = UIManagerHelper.getSurfaceId(getContext());
            Context context = getContext();
            Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
            EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, screen.getId());
            if (eventDispatcherForReactTag != null) {
                eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, screen.getId(), 6));
            }
        }
    }

    public final void notifyTopDetached() {
        Screen topScreen = getTopScreen();
        Intrinsics.checkNotNull(topScreen, "null cannot be cast to non-null type com.swmansion.rnscreens.Screen");
        if (getContext() instanceof ReactContext) {
            int surfaceId = UIManagerHelper.getSurfaceId(getContext());
            Context context = getContext();
            Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
            EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, topScreen.getId());
            if (eventDispatcherForReactTag != null) {
                eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, topScreen.getId(), 6));
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        boolean z5;
        boolean z6;
        FragmentManager supportFragmentManager;
        Unit unit;
        super.onAttachedToWindow();
        this.isAttached = true;
        ViewParent viewParent = this;
        while (true) {
            z5 = viewParent instanceof ReactRootView;
            if (z5 || (viewParent instanceof qm.a) || viewParent.getParent() == null) {
                break;
            }
            viewParent = viewParent.getParent();
            Intrinsics.checkNotNullExpressionValue(viewParent, "getParent(...)");
        }
        if (viewParent instanceof Screen) {
            ScreenFragmentWrapper fragmentWrapper = ((Screen) viewParent).getFragmentWrapper();
            if (fragmentWrapper != null) {
                this.parentScreenWrapper = fragmentWrapper;
                fragmentWrapper.l(this);
                FragmentManager childFragmentManager = fragmentWrapper.g().getChildFragmentManager();
                Intrinsics.checkNotNullExpressionValue(childFragmentManager, "getChildFragmentManager(...)");
                setFragmentManager(childFragmentManager);
                unit = Unit.a;
            } else {
                unit = null;
            }
            if (unit == null) {
                throw new IllegalStateException("Parent Screen does not have its Fragment attached");
            }
            return;
        }
        if (viewParent instanceof qm.a) {
            Fragment associatedFragment = ((qm.a) viewParent).getAssociatedFragment();
            if (associatedFragment != null) {
                FragmentManager childFragmentManager2 = associatedFragment.getChildFragmentManager();
                Intrinsics.checkNotNullExpressionValue(childFragmentManager2, "getChildFragmentManager(...)");
                setFragmentManager(childFragmentManager2);
                return;
            } else {
                throw new IllegalStateException(("[RNScreens] Parent " + viewParent + " returned nullish fragment").toString());
            }
        }
        if (!z5) {
            throw new IllegalStateException("ScreenContainer is not attached under ReactRootView");
        }
        ReactRootView reactRootView = (ReactRootView) viewParent;
        Context context = reactRootView.getContext();
        while (true) {
            z6 = context instanceof FragmentActivity;
            if (z6 || !(context instanceof ContextWrapper)) {
                break;
            } else {
                context = ((ContextWrapper) context).getBaseContext();
            }
        }
        if (!z6) {
            throw new IllegalStateException("In order to use RNScreens components your app's activity need to extend ReactActivity");
        }
        FragmentActivity fragmentActivity = (FragmentActivity) context;
        if (fragmentActivity.getSupportFragmentManager().f1915c.f().isEmpty()) {
            supportFragmentManager = fragmentActivity.getSupportFragmentManager();
            Intrinsics.checkNotNull(supportFragmentManager);
        } else {
            try {
                supportFragmentManager = FragmentManager.C(reactRootView).getChildFragmentManager();
                Intrinsics.checkNotNull(supportFragmentManager);
            } catch (IllegalStateException unused) {
                supportFragmentManager = fragmentActivity.getSupportFragmentManager();
                Intrinsics.checkNotNull(supportFragmentManager);
            }
        }
        setFragmentManager(supportFragmentManager);
    }

    public final void onChildUpdate() {
        performUpdatesNow();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        FragmentManager fragmentManager = this.fragmentManager;
        if (fragmentManager != null && !fragmentManager.J) {
            androidx.fragment.app.a aVar = new androidx.fragment.app.a(fragmentManager);
            Intrinsics.checkNotNullExpressionValue(aVar, "beginTransaction(...)");
            boolean z5 = false;
            for (Fragment fragment : fragmentManager.f1915c.f()) {
                if ((fragment instanceof v) && ((v) fragment).a().getContainer() == this) {
                    aVar.g(fragment);
                    z5 = true;
                }
            }
            if (z5) {
                aVar.d();
            }
            fragmentManager.z(true);
            fragmentManager.G();
        }
        ScreenFragmentWrapper screenFragmentWrapper = this.parentScreenWrapper;
        if (screenFragmentWrapper != null) {
            screenFragmentWrapper.c(this);
        }
        this.parentScreenWrapper = null;
        super.onDetachedFromWindow();
        this.isAttached = false;
        for (int childCount = getChildCount() - 1; -1 < childCount; childCount--) {
            removeViewAt(childCount);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int childCount = getChildCount();
        for (int i12 = 0; i12 < childCount; i12++) {
            getChildAt(i12).layout(0, 0, getWidth(), getHeight());
        }
    }

    @Override // android.view.View
    public void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        int childCount = getChildCount();
        for (int i10 = 0; i10 < childCount; i10++) {
            getChildAt(i10).measure(i5, i6);
        }
    }

    public void onUpdate() {
        FragmentTransaction createTransaction = createTransaction();
        FragmentManager fragmentManager = this.fragmentManager;
        if (fragmentManager == null) {
            throw new IllegalArgumentException("fragment manager is null when performing update in ScreenContainer");
        }
        HashSet hashSet = new HashSet(fragmentManager.f1915c.f());
        Iterator<ScreenFragmentWrapper> it = this.screenWrappers.iterator();
        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
        while (it.hasNext()) {
            ScreenFragmentWrapper next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
            ScreenFragmentWrapper screenFragmentWrapper = next;
            if (screenFragmentWrapper.a().getActivityState() == Screen.ActivityState.f6678d && screenFragmentWrapper.g().isAdded()) {
                createTransaction.g(screenFragmentWrapper.g());
            }
            hashSet.remove(screenFragmentWrapper.g());
        }
        boolean z5 = false;
        if (!hashSet.isEmpty()) {
            for (Fragment fragment : (Fragment[]) hashSet.toArray(new Fragment[0])) {
                if ((fragment instanceof v) && ((v) fragment).a().getContainer() == null) {
                    createTransaction.g(fragment);
                }
            }
        }
        boolean z6 = getTopScreen() == null;
        ArrayList arrayList = new ArrayList();
        Iterator<ScreenFragmentWrapper> it2 = this.screenWrappers.iterator();
        Intrinsics.checkNotNullExpressionValue(it2, "iterator(...)");
        while (it2.hasNext()) {
            ScreenFragmentWrapper next2 = it2.next();
            Intrinsics.checkNotNullExpressionValue(next2, "next(...)");
            ScreenFragmentWrapper screenFragmentWrapper2 = next2;
            screenFragmentWrapper2.a().setTransitioning(z6);
            if (screenFragmentWrapper2.a().getActivityState() != Screen.ActivityState.f6678d) {
                if (screenFragmentWrapper2.g().isAdded()) {
                    if (z5) {
                        createTransaction.g(screenFragmentWrapper2.g());
                        arrayList.add(screenFragmentWrapper2);
                    }
                } else if (z5) {
                    arrayList.add(screenFragmentWrapper2);
                } else {
                    createTransaction.f(getId(), screenFragmentWrapper2.g(), null, 1);
                    z5 = true;
                }
            }
        }
        Iterator it3 = arrayList.iterator();
        Intrinsics.checkNotNullExpressionValue(it3, "iterator(...)");
        while (it3.hasNext()) {
            Object next3 = it3.next();
            Intrinsics.checkNotNullExpressionValue(next3, "next(...)");
            createTransaction.f(getId(), ((ScreenFragmentWrapper) next3).g(), null, 1);
        }
        createTransaction.d();
    }

    public final void performUpdates() {
        FragmentManager fragmentManager;
        if (!this.needsUpdate || !this.isAttached || (fragmentManager = this.fragmentManager) == null || fragmentManager.J) {
            return;
        }
        this.needsUpdate = false;
        onUpdate();
        notifyContainerUpdate();
    }

    public final void performUpdatesNow() {
        this.needsUpdate = true;
        performUpdates();
    }

    public void removeAllScreens() {
        Iterator<ScreenFragmentWrapper> it = this.screenWrappers.iterator();
        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
        while (it.hasNext()) {
            ScreenFragmentWrapper next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
            next.a().setContainer(null);
        }
        this.screenWrappers.clear();
        a();
    }

    public void removeScreenAt(int i5) {
        this.screenWrappers.get(i5).a().setContainer(null);
        this.screenWrappers.remove(i5);
        a();
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public void removeView(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (view == getFocusedChild()) {
            Object systemService = getContext().getSystemService("input_method");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.inputmethod.InputMethodManager");
            ((InputMethodManager) systemService).hideSoftInputFromWindow(getWindowToken(), 2);
        }
        super.removeView(view);
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        super.requestLayout();
        if (this.isLayoutEnqueued || this.layoutCallback == null) {
            return;
        }
        this.isLayoutEnqueued = true;
        ReactChoreographer.INSTANCE.getInstance().postFrameCallback(ReactChoreographer.CallbackType.NATIVE_ANIMATED_MODULE, this.layoutCallback);
    }
}
