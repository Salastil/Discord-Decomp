package com.swmansion.reanimated.layoutReanimation;

import android.app.Activity;
import android.graphics.Point;
import android.graphics.Rect;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import com.facebook.react.bridge.JavaOnlyMap;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableNativeArray;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.IViewManagerWithChildren;
import com.facebook.react.uimanager.IllegalViewOperationException;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.uimanager.ViewManager;
import com.facebook.react.views.modal.ReactModalHostManager;
import com.swmansion.reanimated.Utils;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenStackViewManager;
import com.swmansion.rnscreens.ScreenViewManager;
import com.swmansion.worklets.AndroidUIScheduler;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import s4.h;

/* loaded from: classes3.dex */
public class AnimationsManager implements ViewHierarchyObserver {
    private ReactContext mContext;
    private NativeMethodsHolder mNativeMethodsHolder;
    private ReanimatedNativeHierarchyManager mReanimatedNativeHierarchyManager;
    private UIManager mUIManager;
    private WeakReference<AndroidUIScheduler> mWeakAndroidUIScheduler = new WeakReference<>(null);
    private final HashSet<Integer> mEnteringViews = new HashSet<>();
    private final HashMap<Integer, Rect> mEnteringViewTargetValues = new HashMap<>();
    private HashMap<Integer, View> mExitingViews = new HashMap<>();
    private HashMap<Integer, Integer> mExitingSubviewCountMap = new HashMap<>();
    private HashSet<Integer> mAncestorsToRemove = new HashSet<>();
    private HashMap<Integer, Runnable> mCallbacks = new HashMap<>();
    private boolean isInvalidated = false;
    private final SharedTransitionManager mSharedTransitionManager = new SharedTransitionManager(this);

    public AnimationsManager(ReactContext reactContext, UIManager uIManager) {
        this.mContext = reactContext;
        this.mUIManager = uIManager;
    }

    private static void addProp(WritableMap writableMap, String str, Object obj) {
        if (obj == null) {
            writableMap.putNull(str);
            return;
        }
        if (obj instanceof Double) {
            writableMap.putDouble(str, ((Double) obj).doubleValue());
            return;
        }
        if (obj instanceof Integer) {
            writableMap.putInt(str, ((Integer) obj).intValue());
            return;
        }
        if (obj instanceof Number) {
            writableMap.putDouble(str, ((Number) obj).doubleValue());
            return;
        }
        if (obj instanceof Boolean) {
            writableMap.putBoolean(str, ((Boolean) obj).booleanValue());
            return;
        }
        if (obj instanceof String) {
            writableMap.putString(str, (String) obj);
        } else if (obj instanceof ReadableArray) {
            writableMap.putArray(str, (ReadableArray) obj);
        } else {
            if (!(obj instanceof ReadableMap)) {
                throw new IllegalStateException("[Reanimated] Unknown type of animated value for Layout Animations.");
            }
            writableMap.putMap(str, (ReadableMap) obj);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void checkDuplicateSharedTag(View view) {
        int id2 = view.getId();
        ViewParent viewParent = view.getParent();
        while (viewParent != 0 && !viewParent.getClass().getSimpleName().equals(Screen.TAG)) {
            viewParent = viewParent.getParent();
        }
        if (viewParent != 0) {
            this.mNativeMethodsHolder.checkDuplicateSharedTag(id2, ((View) viewParent).getId());
        }
    }

    private static Point convertScreenLocationToViewCoordinates(Point point, View view) {
        int[] iArr = {0, 0};
        if (view != null) {
            view.getLocationOnScreen(iArr);
        }
        return new Point(point.x - iArr[0], point.y - iArr[1]);
    }

    private void maybeDropAncestors(View view) {
        Object parent = view.getParent();
        if (parent instanceof View) {
            View view2 = (View) parent;
            while (view2 != null && !(view2 instanceof RootView)) {
                View view3 = (View) view2.getParent();
                int id2 = view2.getId();
                int intValue = this.mExitingSubviewCountMap.get(Integer.valueOf(id2)) != null ? r2.intValue() - 1 : 0;
                Integer valueOf = Integer.valueOf(intValue);
                if (intValue <= 0) {
                    if (this.mAncestorsToRemove.contains(Integer.valueOf(id2))) {
                        this.mAncestorsToRemove.remove(Integer.valueOf(id2));
                        if (!this.mExitingViews.containsKey(Integer.valueOf(id2))) {
                            removeView(view2, (ViewGroup) view3);
                        }
                    }
                    this.mExitingSubviewCountMap.remove(Integer.valueOf(id2));
                } else {
                    this.mExitingSubviewCountMap.put(Integer.valueOf(id2), valueOf);
                }
                view2 = view3;
            }
        }
    }

    private void registerExitingAncestors(View view) {
        for (View view2 = (View) view.getParent(); view2 != null && !(view2 instanceof RootView); view2 = (View) view2.getParent()) {
            int id2 = view2.getId();
            Integer num = this.mExitingSubviewCountMap.get(Integer.valueOf(id2));
            int i5 = 1;
            if (num != null) {
                i5 = 1 + num.intValue();
            }
            this.mExitingSubviewCountMap.put(Integer.valueOf(id2), Integer.valueOf(i5));
        }
    }

    private boolean removeOrAnimateExitRecursive(View view, boolean z5, boolean z6) {
        boolean z7;
        int id2 = view.getId();
        ViewManager resolveViewManager = resolveViewManager(id2);
        if (resolveViewManager != null) {
            String name = resolveViewManager.getName();
            if (name.equals(ReactModalHostManager.REACT_CLASS) || name.equals(ScreenViewManager.REACT_CLASS) || name.equals(ScreenStackViewManager.REACT_CLASS)) {
                cancelAnimationsRecursive(view);
                return false;
            }
        }
        boolean shouldAnimateExiting = shouldAnimateExiting(id2, z6);
        boolean z8 = shouldAnimateExiting && (hasAnimationForTag(id2, 2) || this.mExitingViews.containsKey(Integer.valueOf(id2)));
        boolean z10 = z5 && !z8;
        if (hasAnimationForTag(id2, 4)) {
            this.mSharedTransitionManager.notifyAboutRemovedView(view);
            this.mSharedTransitionManager.makeSnapshot(view);
        }
        ArrayList arrayList = new ArrayList();
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            z7 = false;
            for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
                View childAt = viewGroup.getChildAt(childCount);
                if (removeOrAnimateExitRecursive(childAt, z10, shouldAnimateExiting)) {
                    z7 = true;
                } else if (z10 && childAt.getId() != -1) {
                    arrayList.add(childAt);
                }
            }
        } else {
            z7 = false;
        }
        boolean z11 = z8 || z7;
        if (z8) {
            HashMap<String, Object> prepareDataForAnimationWorklet = prepareDataForAnimationWorklet(new Snapshot(view, this.mReanimatedNativeHierarchyManager).toCurrentMap(), false);
            if (!this.mExitingViews.containsKey(Integer.valueOf(id2))) {
                this.mExitingViews.put(Integer.valueOf(id2), view);
                registerExitingAncestors(view);
                this.mNativeMethodsHolder.startAnimation(id2, 2, prepareDataForAnimationWorklet);
            }
        }
        this.mNativeMethodsHolder.clearAnimationConfig(id2);
        if (!z11) {
            return false;
        }
        if (z7) {
            if (id2 == -1) {
                cancelAnimationsRecursive(view);
                return false;
            }
            this.mAncestorsToRemove.add(Integer.valueOf(id2));
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            removeView((View) it.next(), (ViewGroup) view);
        }
        return true;
    }

    private void removeView(View view, ViewGroup viewGroup) {
        int id2 = view.getId();
        if (this.mCallbacks.containsKey(Integer.valueOf(id2))) {
            Runnable runnable = this.mCallbacks.get(Integer.valueOf(id2));
            this.mCallbacks.remove(Integer.valueOf(id2));
            if (runnable != null) {
                runnable.run();
            }
        } else {
            this.mReanimatedNativeHierarchyManager.publicDropView(view);
        }
        if (viewGroup == null || viewGroup.indexOfChild(view) == -1) {
            return;
        }
        viewGroup.removeView(view);
    }

    private ViewManager resolveViewManager(int i5) {
        try {
            return this.mReanimatedNativeHierarchyManager.resolveViewManager(i5);
        } catch (Exception unused) {
            return null;
        }
    }

    public void cancelAnimationsInSubviews(View view) {
        cancelAnimationsRecursive(view);
        clearAnimationConfigRecursive(view);
    }

    public void cancelAnimationsRecursive(View view) {
        if (this.mExitingViews.containsKey(Integer.valueOf(view.getId()))) {
            endLayoutAnimation(view.getId(), true);
        } else if ((view instanceof ViewGroup) && this.mExitingSubviewCountMap.containsKey(Integer.valueOf(view.getId()))) {
            cancelAnimationsInSubviews((ViewGroup) view);
        }
    }

    public void clearAnimationConfigRecursive(View view) {
        this.mNativeMethodsHolder.clearAnimationConfig(view.getId());
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                clearAnimationConfigRecursive(viewGroup.getChildAt(i5));
            }
        }
    }

    public void endLayoutAnimation(int i5, boolean z5) {
        View resolveView = resolveView(i5);
        if (resolveView == null) {
            return;
        }
        Rect rect = this.mEnteringViewTargetValues.get(Integer.valueOf(i5));
        if (!z5 && this.mEnteringViews.contains(Integer.valueOf(i5)) && rect != null) {
            resolveView.layout(rect.left, rect.top, rect.right, rect.bottom);
        }
        this.mEnteringViews.remove(Integer.valueOf(i5));
        this.mEnteringViewTargetValues.remove(Integer.valueOf(i5));
        if (z5) {
            if ((resolveView instanceof ViewGroup) && this.mAncestorsToRemove.contains(Integer.valueOf(i5))) {
                cancelAnimationsInSubviews((ViewGroup) resolveView);
            }
            this.mExitingViews.remove(Integer.valueOf(i5));
            maybeDropAncestors(resolveView);
            removeView(resolveView, (ViewGroup) resolveView.getParent());
        }
        this.mSharedTransitionManager.finishSharedAnimation(i5);
    }

    public ReactContext getContext() {
        return this.mContext;
    }

    public ReanimatedNativeHierarchyManager getReanimatedNativeHierarchyManager() {
        return this.mReanimatedNativeHierarchyManager;
    }

    public boolean hasAnimationForTag(int i5, int i6) {
        NativeMethodsHolder nativeMethodsHolder = this.mNativeMethodsHolder;
        return nativeMethodsHolder != null && nativeMethodsHolder.hasAnimation(i5, i6);
    }

    public void invalidate() {
        this.isInvalidated = true;
        this.mNativeMethodsHolder = null;
        this.mContext = null;
        this.mUIManager = null;
        this.mExitingViews = null;
        this.mExitingSubviewCountMap = null;
        this.mAncestorsToRemove = null;
        this.mCallbacks = null;
    }

    public boolean isLayoutAnimationEnabled() {
        NativeMethodsHolder nativeMethodsHolder = this.mNativeMethodsHolder;
        return nativeMethodsHolder != null && nativeMethodsHolder.isLayoutAnimationEnabled();
    }

    public void makeSnapshotOfTopScreenViews(ViewGroup viewGroup) {
        this.mSharedTransitionManager.doSnapshotForTopScreenViews(viewGroup);
    }

    public void maybeRegisterSharedView(View view) {
        if (hasAnimationForTag(view.getId(), 4)) {
            this.mSharedTransitionManager.notifyAboutNewView(view);
        }
    }

    public void navigationTabChanged(View view, View view2) {
        this.mSharedTransitionManager.navigationTabChanged(view, view2);
    }

    public void notifyAboutScreenWillDisappear() {
        this.mSharedTransitionManager.onScreenWillDisappear();
    }

    public void notifyAboutViewsRemoval(int[] iArr) {
        this.mSharedTransitionManager.onViewsRemoval(iArr);
    }

    @Override // com.swmansion.reanimated.layoutReanimation.ViewHierarchyObserver
    public void onViewCreate(View view, ViewGroup viewGroup, Snapshot snapshot) {
        AndroidUIScheduler androidUIScheduler;
        if (this.isInvalidated) {
            return;
        }
        maybeRegisterSharedView(view);
        if (hasAnimationForTag(view.getId(), 1) && (androidUIScheduler = this.mWeakAndroidUIScheduler.get()) != null) {
            androidUIScheduler.triggerUI();
            int id2 = view.getId();
            HashMap<String, Object> targetMap = snapshot.toTargetMap();
            if (targetMap != null) {
                this.mNativeMethodsHolder.startAnimation(id2, 1, prepareDataForAnimationWorklet(targetMap, true));
                this.mEnteringViews.add(Integer.valueOf(id2));
            }
        }
    }

    @Override // com.swmansion.reanimated.layoutReanimation.ViewHierarchyObserver
    public void onViewRemoval(View view, ViewGroup viewGroup, Runnable runnable) {
        if (this.isInvalidated) {
            return;
        }
        this.mCallbacks.put(Integer.valueOf(view.getId()), runnable);
        if (removeOrAnimateExitRecursive(view, true, true)) {
            return;
        }
        removeView(view, viewGroup);
    }

    @Override // com.swmansion.reanimated.layoutReanimation.ViewHierarchyObserver
    public void onViewUpdate(View view, Snapshot snapshot, Snapshot snapshot2) {
        if (this.isInvalidated) {
            return;
        }
        int id2 = view.getId();
        if (!hasAnimationForTag(id2, 3)) {
            if (this.mEnteringViews.contains(Integer.valueOf(id2))) {
                HashMap<Integer, Rect> hashMap = this.mEnteringViewTargetValues;
                Integer valueOf = Integer.valueOf(id2);
                int i5 = snapshot2.originX;
                int i6 = snapshot2.originY;
                hashMap.put(valueOf, new Rect(i5, i6, snapshot2.width + i5, snapshot2.height + i6));
                int i10 = snapshot.originX;
                int i11 = snapshot.originY;
                view.layout(i10, i11, snapshot.width + i10, snapshot.height + i11);
                return;
            }
            return;
        }
        HashMap<String, Object> currentMap = snapshot.toCurrentMap();
        HashMap<String, Object> targetMap = snapshot2.toTargetMap();
        boolean z5 = true;
        for (int i12 = 0; i12 < Snapshot.targetKeysToTransform.size(); i12++) {
            if (((Number) currentMap.get(Snapshot.currentKeysToTransform.get(i12))).doubleValue() != ((Number) targetMap.get(Snapshot.targetKeysToTransform.get(i12))).doubleValue()) {
                z5 = false;
            }
        }
        if (z5) {
            return;
        }
        HashMap<String, Object> prepareDataForAnimationWorklet = prepareDataForAnimationWorklet(currentMap, false);
        HashMap<String, Object> hashMap2 = new HashMap<>(prepareDataForAnimationWorklet(targetMap, true));
        for (String str : prepareDataForAnimationWorklet.keySet()) {
            hashMap2.put(str, prepareDataForAnimationWorklet.get(str));
        }
        this.mNativeMethodsHolder.startAnimation(id2, 3, hashMap2);
    }

    public HashMap<String, Object> prepareDataForAnimationWorklet(HashMap<String, Object> hashMap, boolean z5) {
        return prepareDataForAnimationWorklet(hashMap, z5, false);
    }

    public void printSubTree(View view, int i5) {
        if (i5 == 0) {
            Log.v("rea", "----------------------");
        }
        if (view == null) {
            return;
        }
        StringBuilder sb2 = new StringBuilder();
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            sb2.append("+");
        }
        sb2.append(" TAG:");
        sb2.append(view.getId());
        sb2.append(" CLASS:");
        sb2.append(view.getClass().getSimpleName());
        Log.v("rea", sb2.toString());
        if (!(view instanceof ViewGroup)) {
            return;
        }
        while (true) {
            ViewGroup viewGroup = (ViewGroup) view;
            if (i6 >= viewGroup.getChildCount()) {
                return;
            }
            printSubTree(viewGroup.getChildAt(i6), i5 + 1);
            i6++;
        }
    }

    public void progressLayoutAnimation(int i5, Map<String, Object> map, boolean z5) {
        ViewGroup viewGroup;
        View resolveView = resolveView(i5);
        if (resolveView == null || (viewGroup = (ViewGroup) resolveView.getParent()) == null) {
            return;
        }
        ViewManager resolveViewManager = resolveViewManager(i5);
        ViewManager resolveViewManager2 = resolveViewManager(viewGroup.getId());
        if (resolveViewManager == null) {
            return;
        }
        setNewProps(map, resolveView, resolveViewManager, resolveViewManager2, Integer.valueOf(viewGroup.getId()), z5);
    }

    public View resolveView(int i5) {
        if (this.mExitingViews.containsKey(Integer.valueOf(i5))) {
            return this.mExitingViews.get(Integer.valueOf(i5));
        }
        View transitioningView = this.mSharedTransitionManager.getTransitioningView(i5);
        if (transitioningView != null) {
            return transitioningView;
        }
        try {
            return this.mUIManager.resolveView(i5);
        } catch (IllegalViewOperationException unused) {
            return null;
        }
    }

    public void screenDidLayout(View view) {
        this.mSharedTransitionManager.screenDidLayout(view);
    }

    public void setAndroidUIScheduler(AndroidUIScheduler androidUIScheduler) {
        this.mWeakAndroidUIScheduler = new WeakReference<>(androidUIScheduler);
    }

    public void setNativeMethods(NativeMethodsHolder nativeMethodsHolder) {
        this.mNativeMethodsHolder = nativeMethodsHolder;
        this.mSharedTransitionManager.setNativeMethods(nativeMethodsHolder);
    }

    public void setNewProps(Map<String, Object> map, View view, ViewManager viewManager, ViewManager viewManager2, Integer num, boolean z5) {
        float floatValue = map.get(Snapshot.ORIGIN_X) != null ? ((Double) map.get(Snapshot.ORIGIN_X)).floatValue() : PixelUtil.toDIPFromPixel(view.getLeft());
        float floatValue2 = map.get(Snapshot.ORIGIN_Y) != null ? ((Double) map.get(Snapshot.ORIGIN_Y)).floatValue() : PixelUtil.toDIPFromPixel(view.getTop());
        float floatValue3 = map.get("width") != null ? ((Double) map.get("width")).floatValue() : PixelUtil.toDIPFromPixel(view.getWidth());
        float floatValue4 = map.get("height") != null ? ((Double) map.get("height")).floatValue() : PixelUtil.toDIPFromPixel(view.getHeight());
        if (map.containsKey(Snapshot.TRANSFORM_MATRIX)) {
            float[] fArr = new float[9];
            Object obj = map.get(Snapshot.TRANSFORM_MATRIX);
            if (obj instanceof ReadableNativeArray) {
                ReadableNativeArray readableNativeArray = (ReadableNativeArray) obj;
                for (int i5 = 0; i5 < 9; i5++) {
                    fArr[i5] = Double.valueOf(readableNativeArray.getDouble(i5)).floatValue();
                }
            } else {
                ArrayList arrayList = (ArrayList) map.get(Snapshot.TRANSFORM_MATRIX);
                for (int i6 = 0; i6 < 9; i6++) {
                    fArr[i6] = ((Float) arrayList.get(i6)).floatValue();
                }
            }
            view.setScaleX(fArr[0]);
            view.setScaleY(fArr[4]);
            map.remove(Snapshot.TRANSFORM_MATRIX);
        }
        updateLayout(view, viewManager2, num.intValue(), floatValue, floatValue2, floatValue3, floatValue4, z5);
        map.remove(Snapshot.ORIGIN_X);
        map.remove(Snapshot.ORIGIN_Y);
        map.remove(Snapshot.GLOBAL_ORIGIN_X);
        map.remove(Snapshot.GLOBAL_ORIGIN_Y);
        map.remove("width");
        map.remove("height");
        if (map.size() == 0) {
            return;
        }
        JavaOnlyMap javaOnlyMap = new JavaOnlyMap();
        for (String str : map.keySet()) {
            addProp(javaOnlyMap, str, map.get(str));
        }
        viewManager.updateProperties(view, new ReactStylesDiffMap(javaOnlyMap));
    }

    public void setReanimatedNativeHierarchyManager(ReanimatedNativeHierarchyManager reanimatedNativeHierarchyManager) {
        this.mReanimatedNativeHierarchyManager = reanimatedNativeHierarchyManager;
    }

    public boolean shouldAnimateExiting(int i5, boolean z5) {
        return this.mNativeMethodsHolder.shouldAnimateExiting(i5, z5);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void updateLayout(View view, ViewManager viewManager, int i5, float f2, float f10, float f11, float f12, boolean z5) {
        int round = Math.round(PixelUtil.toPixelFromDIP(f2));
        int round2 = Math.round(PixelUtil.toPixelFromDIP(f10));
        int round3 = Math.round(PixelUtil.toPixelFromDIP(f11));
        int round4 = Math.round(PixelUtil.toPixelFromDIP(f12));
        view.measure(View.MeasureSpec.makeMeasureSpec(round3, 1073741824), View.MeasureSpec.makeMeasureSpec(round4, 1073741824));
        ViewParent parent = view.getParent();
        if (parent instanceof RootView) {
            parent.requestLayout();
        }
        if (i5 % 10 != 1 || viewManager == 0) {
            if (z5) {
                Point convertScreenLocationToViewCoordinates = convertScreenLocationToViewCoordinates(new Point(round, round2), (View) view.getParent());
                round = convertScreenLocationToViewCoordinates.x;
                round2 = convertScreenLocationToViewCoordinates.y;
            }
            view.layout(round, round2, round3 + round, round4 + round2);
            return;
        }
        if (!(viewManager instanceof IViewManagerWithChildren)) {
            throw new IllegalViewOperationException(h.e(i5, "[Reanimated] Trying to use view with tag ", " as a parent, but its Manager doesn't implement IViewManagerWithChildren."));
        }
        if (((IViewManagerWithChildren) viewManager).needsCustomLayoutForChildren()) {
            return;
        }
        view.layout(round, round2, round3 + round, round4 + round2);
    }

    public void viewDidLayout(View view) {
        this.mSharedTransitionManager.viewDidLayout(view);
    }

    public void visitNativeTreeAndMakeSnapshot(View view) {
        this.mSharedTransitionManager.visitNativeTreeAndMakeSnapshot(view);
    }

    public HashMap<String, Object> prepareDataForAnimationWorklet(HashMap<String, Object> hashMap, boolean z5, boolean z6) {
        HashMap<String, Object> hashMap2 = new HashMap<>();
        Iterator<String> it = (z5 ? Snapshot.targetKeysToTransform : Snapshot.currentKeysToTransform).iterator();
        while (it.hasNext()) {
            String next = it.next();
            hashMap2.put(next, Float.valueOf(PixelUtil.toDIPFromPixel(Utils.convertToFloat(hashMap.get(next)))));
        }
        if (z6) {
            String str = z5 ? Snapshot.TARGET_TRANSFORM_MATRIX : Snapshot.CURRENT_TRANSFORM_MATRIX;
            hashMap2.put(str, hashMap.get(str));
        }
        DisplayMetrics displayMetrics = new DisplayMetrics();
        Activity currentActivity = this.mContext.getCurrentActivity();
        if (currentActivity == null) {
            hashMap2.put("windowWidth", Float.valueOf(PixelUtil.toDIPFromPixel(0.0f)));
            hashMap2.put("windowHeight", Float.valueOf(PixelUtil.toDIPFromPixel(0.0f)));
            return hashMap2;
        }
        currentActivity.getWindowManager().getDefaultDisplay().getMetrics(displayMetrics);
        int i5 = displayMetrics.heightPixels;
        hashMap2.put("windowWidth", Float.valueOf(PixelUtil.toDIPFromPixel(displayMetrics.widthPixels)));
        hashMap2.put("windowHeight", Float.valueOf(PixelUtil.toDIPFromPixel(i5)));
        return hashMap2;
    }

    private void cancelAnimationsInSubviews(ViewGroup viewGroup) {
        for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
            View childAt = viewGroup.getChildAt(childCount);
            if (childAt != null) {
                if (this.mExitingViews.containsKey(Integer.valueOf(childAt.getId()))) {
                    endLayoutAnimation(childAt.getId(), true);
                } else if ((childAt instanceof ViewGroup) && this.mExitingSubviewCountMap.containsKey(Integer.valueOf(childAt.getId()))) {
                    cancelAnimationsInSubviews((ViewGroup) childAt);
                }
            }
        }
    }
}
