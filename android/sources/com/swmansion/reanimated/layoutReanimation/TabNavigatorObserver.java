package com.swmansion.reanimated.layoutReanimation;

import android.content.Context;
import android.util.Log;
import android.view.View;
import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.x0;
import com.swmansion.reanimated.layoutReanimation.TabNavigatorObserver;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

/* loaded from: classes3.dex */
public class TabNavigatorObserver {
    private final Set<Integer> mFragmentsWithListenerRegistry = new HashSet();
    private final ReaLayoutAnimator mReaLayoutAnimator;

    public class FragmentLifecycleCallbacks extends x0 {
        private View firstScreen;
        private Method getActivityState;
        private Method getScreen;
        private final Set<Integer> screenTagsWithListener = new HashSet();
        private final List<View> nextTransition = new ArrayList();

        public FragmentLifecycleCallbacks(Fragment fragment) {
            if (ScreensHelper.isScreenFragment(fragment)) {
                try {
                    Method method = fragment.getClass().getMethod("getScreen", null);
                    this.getScreen = method;
                    View view = (View) method.invoke(fragment, null);
                    this.getActivityState = view.getClass().getMethod("getActivityState", null);
                    addScreenListener(view);
                } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException e9) {
                    Log.e("[Reanimated]", e9.getMessage() != null ? e9.getMessage() : "Unable to get screen activity state");
                }
            }
        }

        private void addScreenListener(View view) {
            if (this.screenTagsWithListener.contains(Integer.valueOf(view.getId()))) {
                return;
            }
            this.screenTagsWithListener.add(Integer.valueOf(view.getId()));
            view.addOnAttachStateChangeListener(TabNavigatorObserver.this.new OnAttachStateChangeListener());
            view.addOnLayoutChangeListener(new View.OnLayoutChangeListener() { // from class: com.swmansion.reanimated.layoutReanimation.c
                @Override // android.view.View.OnLayoutChangeListener
                public final void onLayoutChange(View view2, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
                    TabNavigatorObserver.FragmentLifecycleCallbacks.this.lambda$addScreenListener$0(view2, i5, i6, i10, i11, i12, i13, i14, i15);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public /* synthetic */ void lambda$addScreenListener$0(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
            if (this.nextTransition.isEmpty()) {
                return;
            }
            TabNavigatorObserver.this.mReaLayoutAnimator.getAnimationsManager().navigationTabChanged(this.nextTransition.get(0), this.nextTransition.get(1));
            this.nextTransition.clear();
        }

        /* JADX WARN: Removed duplicated region for block: B:21:0x004b  */
        /* JADX WARN: Removed duplicated region for block: B:24:0x0050  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private void onFragmentUpdate(Fragment fragment, boolean z5) {
            if (ScreensHelper.isScreenFragment(fragment)) {
                try {
                    View view = (View) this.getScreen.invoke(fragment, null);
                    if (this.getActivityState.invoke(view, null) == null) {
                        return;
                    }
                    addScreenListener(view);
                    View view2 = this.firstScreen;
                    if (view2 == null) {
                        this.firstScreen = view;
                        return;
                    }
                    if (z5) {
                        this.nextTransition.add(view2);
                        this.nextTransition.add(view);
                    } else {
                        this.nextTransition.add(view);
                        this.nextTransition.add(this.firstScreen);
                    }
                    this.firstScreen = null;
                } catch (IllegalAccessException e9) {
                    e = e9;
                    Log.e("[Reanimated]", e.getMessage() != null ? e.getMessage() : "Unable to get screen view");
                } catch (NullPointerException e10) {
                    e = e10;
                    Log.e("[Reanimated]", e.getMessage() != null ? e.getMessage() : "Unable to get screen view");
                } catch (InvocationTargetException e11) {
                    e = e11;
                    Log.e("[Reanimated]", e.getMessage() != null ? e.getMessage() : "Unable to get screen view");
                }
            }
        }

        @Override // androidx.fragment.app.x0
        public void onFragmentAttached(FragmentManager fragmentManager, Fragment fragment, Context context) {
            onFragmentUpdate(fragment, true);
        }

        @Override // androidx.fragment.app.x0
        public void onFragmentDetached(FragmentManager fragmentManager, Fragment fragment) {
            onFragmentUpdate(fragment, false);
        }
    }

    public class OnAttachStateChangeListener implements View.OnAttachStateChangeListener {
        public OnAttachStateChangeListener() {
        }

        @Override // android.view.View.OnAttachStateChangeListener
        public void onViewAttachedToWindow(@NonNull View view) {
        }

        @Override // android.view.View.OnAttachStateChangeListener
        public void onViewDetachedFromWindow(@NonNull View view) {
            TabNavigatorObserver.this.mReaLayoutAnimator.getAnimationsManager().visitNativeTreeAndMakeSnapshot(view);
        }
    }

    public TabNavigatorObserver(ReaLayoutAnimator reaLayoutAnimator) {
        this.mReaLayoutAnimator = reaLayoutAnimator;
    }

    public void handleScreenContainerUpdate(View view) {
        try {
            Fragment fragment = (Fragment) view.getClass().getMethod("getFragment", null).invoke(view, null);
            int id2 = fragment.getId();
            if (this.mFragmentsWithListenerRegistry.contains(Integer.valueOf(id2))) {
                return;
            }
            this.mFragmentsWithListenerRegistry.add(Integer.valueOf(id2));
            fragment.getParentFragmentManager().W(new FragmentLifecycleCallbacks(fragment));
        } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException e9) {
            Log.e("[Reanimated]", e9.getMessage() != null ? e9.getMessage() : "Unable to get screen fragment");
        }
    }
}
