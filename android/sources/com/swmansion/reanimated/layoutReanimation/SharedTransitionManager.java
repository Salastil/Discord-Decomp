package com.swmansion.reanimated.layoutReanimation;

import android.app.Activity;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.IllegalViewOperationException;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManager;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.uimanager.events.EventDispatcherListener;
import com.facebook.react.views.view.ReactViewGroup;
import com.swmansion.reanimated.Utils;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenStack;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

/* loaded from: classes3.dex */
public class SharedTransitionManager {
    private final AnimationsManager mAnimationsManager;
    private NativeMethodsHolder mNativeMethodsHolder;
    private View mTransitionContainer;
    private final List<View> mAddedSharedViews = new ArrayList();
    private final Map<Integer, View> mSharedTransitionParent = new HashMap();
    private final Map<Integer, Integer> mSharedTransitionInParentIndex = new HashMap();
    private final Map<Integer, Snapshot> mSnapshotRegistry = new HashMap();
    private final Map<Integer, View> mCurrentSharedTransitionViews = new HashMap();
    private final Map<Integer, SortedSet<Integer>> mSharedViewChildrenIndices = new HashMap();
    private final List<View> mRemovedSharedViews = new ArrayList();
    private final Set<Integer> mViewTagsToHide = new HashSet();
    private final Map<Integer, Integer> mDisableCleaningForViewTag = new HashMap();
    private List<SharedElement> mSharedElements = new ArrayList();
    private final Map<Integer, SharedElement> mSharedElementsLookup = new HashMap();
    private final List<SharedElement> mSharedElementsWithProgress = new ArrayList();
    private final List<SharedElement> mSharedElementsWithAnimation = new ArrayList();
    private final Set<View> mReattachedViews = new HashSet();
    private boolean mIsTransitionPrepared = false;
    private final Set<Integer> mTagsToCleanup = new HashSet();

    public class PrepareConfigCleanupTreeVisitor implements TreeVisitor {
        public PrepareConfigCleanupTreeVisitor() {
        }

        @Override // com.swmansion.reanimated.layoutReanimation.SharedTransitionManager.TreeVisitor
        public void run(View view) {
            SharedTransitionManager.this.mTagsToCleanup.add(Integer.valueOf(view.getId()));
        }
    }

    public class SnapshotTreeVisitor implements TreeVisitor {
        public SnapshotTreeVisitor() {
        }

        @Override // com.swmansion.reanimated.layoutReanimation.SharedTransitionManager.TreeVisitor
        public void run(View view) {
            if (SharedTransitionManager.this.mAnimationsManager.hasAnimationForTag(view.getId(), 4)) {
                SharedTransitionManager.this.mRemovedSharedViews.add(view);
                SharedTransitionManager.this.makeSnapshot(view);
            }
        }
    }

    public class TopWillAppearListener implements EventDispatcherListener {
        private final EventDispatcher mEventDispatcher;

        public TopWillAppearListener(EventDispatcher eventDispatcher) {
            this.mEventDispatcher = eventDispatcher;
        }

        @Override // com.facebook.react.uimanager.events.EventDispatcherListener
        public void onEventDispatch(Event event) {
            if (event.getName().equals("topWillAppear")) {
                SharedTransitionManager sharedTransitionManager = SharedTransitionManager.this;
                sharedTransitionManager.tryStartSharedTransitionForViews(sharedTransitionManager.mAddedSharedViews, true);
                SharedTransitionManager.this.mAddedSharedViews.clear();
                this.mEventDispatcher.removeListener(this);
            }
        }
    }

    public interface TreeVisitor {
        void run(View view);
    }

    public SharedTransitionManager(AnimationsManager animationsManager) {
        this.mAnimationsManager = animationsManager;
    }

    private void clearAllSharedConfigsForView(View view) {
        int id2 = view.getId();
        this.mSnapshotRegistry.remove(Integer.valueOf(id2));
        this.mNativeMethodsHolder.clearAnimationConfig(id2);
    }

    private void disableCleaningForViewTag(int i5) {
        Integer num = this.mDisableCleaningForViewTag.get(Integer.valueOf(i5));
        if (num != null) {
            this.mDisableCleaningForViewTag.put(Integer.valueOf(i5), Integer.valueOf(num.intValue() + 1));
        } else {
            this.mDisableCleaningForViewTag.put(Integer.valueOf(i5), 1);
        }
    }

    private void enableCleaningForViewTag(int i5) {
        Integer num = this.mDisableCleaningForViewTag.get(Integer.valueOf(i5));
        if (num == null) {
            return;
        }
        if (num.intValue() == 1) {
            this.mDisableCleaningForViewTag.remove(Integer.valueOf(i5));
        } else {
            this.mDisableCleaningForViewTag.put(Integer.valueOf(i5), Integer.valueOf(num.intValue() - 1));
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private View findScreen(View view) {
        for (ViewParent viewParent = view.getParent(); viewParent != 0; viewParent = viewParent.getParent()) {
            if (viewParent.getClass().getSimpleName().equals(Screen.TAG)) {
                return (View) viewParent;
            }
        }
        return null;
    }

    private void findSharedViewsForScreen(View view, List<View> list) {
        View topScreenForStack = ScreensHelper.getTopScreenForStack(view);
        if (topScreenForStack instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) topScreenForStack;
            if (this.mAnimationsManager.hasAnimationForTag(topScreenForStack.getId(), 4)) {
                list.add(topScreenForStack);
            }
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                findSharedViewsForScreen(viewGroup.getChildAt(i5), list);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private View findStack(View view) {
        for (ViewParent viewParent = view.getParent(); viewParent != 0; viewParent = viewParent.getParent()) {
            if (viewParent.getClass().getSimpleName().equals(ScreenStack.TAG)) {
                return (View) viewParent;
            }
        }
        return null;
    }

    private List<SharedElement> getSharedElementsForCurrentTransition(List<View> list, boolean z5) {
        boolean z6;
        ViewGroup viewGroup;
        boolean z7 = this.mReattachedViews.size() > 0;
        ArrayList arrayList = new ArrayList();
        HashSet hashSet = new HashSet();
        if (!z5) {
            Iterator<View> it = list.iterator();
            while (it.hasNext()) {
                hashSet.add(Integer.valueOf(it.next().getId()));
            }
        }
        ArrayList arrayList2 = new ArrayList();
        ReanimatedNativeHierarchyManager reanimatedNativeHierarchyManager = this.mAnimationsManager.getReanimatedNativeHierarchyManager();
        HashSet hashSet2 = new HashSet();
        Iterator<View> it2 = this.mRemovedSharedViews.iterator();
        while (it2.hasNext()) {
            hashSet2.add(Integer.valueOf(it2.next().getId()));
        }
        for (View view : list) {
            int findPrecedingViewTagForTransition = this.mNativeMethodsHolder.findPrecedingViewTagForTransition(view.getId());
            if (z7) {
                while (hashSet2.contains(Integer.valueOf(findPrecedingViewTagForTransition))) {
                    this.mNativeMethodsHolder.clearAnimationConfig(findPrecedingViewTagForTransition);
                    findPrecedingViewTagForTransition = this.mNativeMethodsHolder.findPrecedingViewTagForTransition(view.getId());
                }
            }
            boolean z8 = !z5 && hashSet.contains(Integer.valueOf(findPrecedingViewTagForTransition));
            if (findPrecedingViewTagForTransition >= 0) {
                View maybeOverrideSiblingForTabNavigator = maybeOverrideSiblingForTabNavigator(view, reanimatedNativeHierarchyManager.resolveView(findPrecedingViewTagForTransition));
                if (z5) {
                    maybeOverrideSiblingForTabNavigator = view;
                    view = maybeOverrideSiblingForTabNavigator;
                }
                if (z8) {
                    clearAllSharedConfigsForView(view);
                    clearAllSharedConfigsForView(maybeOverrideSiblingForTabNavigator);
                } else {
                    boolean containsKey = this.mCurrentSharedTransitionViews.containsKey(Integer.valueOf(view.getId()));
                    if (containsKey) {
                        z6 = z7;
                    } else {
                        View findScreen = findScreen(view);
                        View findScreen2 = findScreen(maybeOverrideSiblingForTabNavigator);
                        if (findScreen != null && findScreen2 != null && (viewGroup = (ViewGroup) findStack(findScreen)) != null) {
                            ViewGroupManager viewGroupManager = (ViewGroupManager) reanimatedNativeHierarchyManager.resolveViewManager(viewGroup.getId());
                            z6 = z7;
                            boolean z10 = false;
                            for (int i5 = 0; i5 < viewGroupManager.getChildCount((ViewGroupManager) viewGroup); i5++) {
                                if (viewGroupManager.getChildAt((ViewGroupManager) viewGroup, i5) == findScreen2) {
                                    z10 = true;
                                }
                            }
                            if (z10) {
                                ViewGroupManager viewGroupManager2 = (ViewGroupManager) reanimatedNativeHierarchyManager.resolveViewManager(viewGroup.getId());
                                int childCount = viewGroupManager2.getChildCount((ViewGroupManager) viewGroup);
                                if (childCount >= 2) {
                                    View childAt = viewGroupManager2.getChildAt((ViewGroupManager) viewGroup, childCount - 1);
                                    View childAt2 = viewGroupManager2.getChildAt((ViewGroupManager) viewGroup, childCount - 2);
                                    if (!z5) {
                                    }
                                }
                                z7 = z6;
                            }
                        }
                    }
                    Snapshot snapshot = null;
                    if (z5) {
                        this.mViewTagsToHide.add(Integer.valueOf(view.getId()));
                        if (containsKey) {
                            snapshot = new Snapshot(view);
                        } else {
                            makeSnapshot(view);
                        }
                        makeSnapshot(maybeOverrideSiblingForTabNavigator);
                    } else if (containsKey) {
                        makeSnapshot(view);
                    }
                    if (snapshot == null) {
                        snapshot = this.mSnapshotRegistry.get(Integer.valueOf(view.getId()));
                    }
                    Snapshot snapshot2 = this.mSnapshotRegistry.get(Integer.valueOf(maybeOverrideSiblingForTabNavigator.getId()));
                    if (snapshot2 == null) {
                        makeSnapshot(maybeOverrideSiblingForTabNavigator);
                    }
                    arrayList.add(view);
                    arrayList.add(maybeOverrideSiblingForTabNavigator);
                    arrayList2.add(new SharedElement(view, snapshot, maybeOverrideSiblingForTabNavigator, snapshot2));
                    z7 = z6;
                }
            }
        }
        if (!arrayList.isEmpty()) {
            ArrayList arrayList3 = new ArrayList();
            Iterator<SharedElement> it3 = this.mSharedElements.iterator();
            while (it3.hasNext()) {
                arrayList3.add(it3.next().sourceView);
            }
            HashSet hashSet3 = new HashSet();
            Iterator it4 = arrayList2.iterator();
            while (it4.hasNext()) {
                hashSet3.add(((SharedElement) it4.next()).sourceView);
            }
            Iterator it5 = arrayList3.iterator();
            while (it5.hasNext()) {
                View view2 = (View) it5.next();
                if (!hashSet3.contains(view2)) {
                    this.mViewTagsToHide.remove(Integer.valueOf(view2.getId()));
                    view2.setVisibility(0);
                }
            }
            this.mCurrentSharedTransitionViews.clear();
            Iterator it6 = arrayList.iterator();
            while (it6.hasNext()) {
                View view3 = (View) it6.next();
                this.mCurrentSharedTransitionViews.put(Integer.valueOf(view3.getId()), view3);
            }
        }
        this.mSharedElements = arrayList2;
        Iterator it7 = arrayList2.iterator();
        while (it7.hasNext()) {
            SharedElement sharedElement = (SharedElement) it7.next();
            this.mSharedElementsLookup.put(Integer.valueOf(sharedElement.sourceView.getId()), sharedElement);
        }
        return arrayList2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$finishSharedAnimation$1(ViewParent viewParent) {
        if (this.mReattachedViews.size() > 0) {
            return;
        }
        ((ViewGroup) viewParent).removeView(this.mTransitionContainer);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ int lambda$sortViewsByTags$0(View view, View view2) {
        return Integer.compare(view2.getId(), view.getId());
    }

    private View maybeOverrideSiblingForTabNavigator(View view, View view2) {
        View tabNavigator = ScreensHelper.getTabNavigator(view);
        if (tabNavigator == null) {
            return view2;
        }
        int id2 = view2.getId();
        int[] sharedGroup = this.mNativeMethodsHolder.getSharedGroup(view.getId());
        int i5 = -1;
        for (int i6 = 0; i6 < sharedGroup.length; i6++) {
            if (sharedGroup[i6] == id2) {
                i5 = i6;
            }
        }
        while (i5 >= 0) {
            View resolveView = this.mAnimationsManager.resolveView(sharedGroup[i5]);
            if (tabNavigator == ScreensHelper.getTabNavigator(resolveView)) {
                return resolveView;
            }
            i5--;
        }
        return view2;
    }

    private void maybeRestartAnimationWithNewLayout(View view) {
        View view2 = this.mCurrentSharedTransitionViews.get(Integer.valueOf(view.getId()));
        if (view2 == null) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (SharedElement sharedElement : this.mSharedElements) {
            if (sharedElement.targetView == view2) {
                arrayList.add(sharedElement);
                View view3 = sharedElement.sourceView;
                View view4 = sharedElement.targetView;
                Snapshot snapshot = new Snapshot(view3);
                Snapshot snapshot2 = this.mSnapshotRegistry.get(Integer.valueOf(view4.getId()));
                Snapshot snapshot3 = new Snapshot(view4);
                int i5 = (snapshot2.originX - snapshot2.originXByParent) + snapshot3.originX;
                int i6 = (snapshot2.originY - snapshot2.originYByParent) + snapshot3.originY;
                snapshot2.originX = i5;
                snapshot2.originY = i6;
                snapshot2.globalOriginX = i5;
                snapshot2.globalOriginY = i6;
                snapshot2.originXByParent = snapshot3.originXByParent;
                snapshot2.originYByParent = snapshot3.originYByParent;
                snapshot2.height = snapshot3.height;
                snapshot2.width = snapshot3.width;
                sharedElement.sourceViewSnapshot = snapshot;
                sharedElement.targetViewSnapshot = snapshot2;
                disableCleaningForViewTag(view3.getId());
                disableCleaningForViewTag(view4.getId());
            }
        }
        startSharedTransition(arrayList, 4);
    }

    private void reparentSharedViewsForCurrentTransition(List<SharedElement> list) {
        Iterator<SharedElement> it = list.iterator();
        while (it.hasNext()) {
            View view = it.next().sourceView;
            if (!this.mSharedTransitionParent.containsKey(Integer.valueOf(view.getId()))) {
                ViewGroup viewGroup = (ViewGroup) view.getParent();
                int id2 = viewGroup.getId();
                int indexOfChild = viewGroup.indexOfChild(view);
                this.mSharedTransitionParent.put(Integer.valueOf(view.getId()), (View) view.getParent());
                this.mSharedTransitionInParentIndex.put(Integer.valueOf(view.getId()), Integer.valueOf(indexOfChild));
                SortedSet<Integer> sortedSet = this.mSharedViewChildrenIndices.get(Integer.valueOf(id2));
                if (sortedSet == null) {
                    this.mSharedViewChildrenIndices.put(Integer.valueOf(id2), new TreeSet(Collections.singleton(Integer.valueOf(indexOfChild))));
                } else {
                    sortedSet.add(Integer.valueOf(indexOfChild));
                }
            }
        }
        Iterator<SharedElement> it2 = list.iterator();
        while (it2.hasNext()) {
            View view2 = it2.next().sourceView;
            ((ViewGroup) view2.getParent()).removeView(view2);
            ((ViewGroup) this.mTransitionContainer).addView(view2);
            this.mReattachedViews.add(view2);
        }
    }

    private void setupTransitionContainer() {
        Activity currentActivity;
        if (this.mTransitionContainer == null) {
            this.mTransitionContainer = new ReactViewGroup(this.mAnimationsManager.getContext());
        }
        if (this.mTransitionContainer.getParent() != null || (currentActivity = this.mAnimationsManager.getContext().getCurrentActivity()) == null) {
            return;
        }
        ((ViewGroup) currentActivity.getWindow().getDecorView().getRootView()).addView(this.mTransitionContainer);
        this.mTransitionContainer.bringToFront();
    }

    private void sortViewsByTags(List<View> list) {
        Collections.sort(list, new com.facebook.react.uimanager.a(1));
    }

    private void startPreparedTransitions() {
        startSharedTransition(this.mSharedElementsWithAnimation, 4);
        startSharedTransition(this.mSharedElementsWithProgress, 5);
    }

    private void startSharedAnimationForView(View view, Snapshot snapshot, Snapshot snapshot2, int i5) {
        HashMap<String, Object> targetMap = snapshot2.toTargetMap();
        HashMap<String, Object> prepareDataForAnimationWorklet = this.mAnimationsManager.prepareDataForAnimationWorklet(snapshot.toCurrentMap(), false, true);
        HashMap<String, Object> hashMap = new HashMap<>(this.mAnimationsManager.prepareDataForAnimationWorklet(targetMap, true, true));
        hashMap.putAll(prepareDataForAnimationWorklet);
        this.mNativeMethodsHolder.startAnimation(view.getId(), i5, hashMap);
    }

    private void startSharedTransition(List<SharedElement> list, int i5) {
        for (SharedElement sharedElement : list) {
            View view = sharedElement.sourceView;
            view.setVisibility(0);
            startSharedAnimationForView(view, sharedElement.sourceViewSnapshot, sharedElement.targetViewSnapshot, i5);
            sharedElement.targetView.setVisibility(4);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean tryStartSharedTransitionForViews(List<View> list, boolean z5) {
        if (!prepareSharedTransition(list, z5)) {
            return false;
        }
        startPreparedTransitions();
        return true;
    }

    private void visitTree(View view, TreeVisitor treeVisitor) {
        int id2 = view.getId();
        if (id2 == -1) {
            return;
        }
        ReanimatedNativeHierarchyManager reanimatedNativeHierarchyManager = this.mAnimationsManager.getReanimatedNativeHierarchyManager();
        try {
            treeVisitor.run(view);
            if (view instanceof ViewGroup) {
                ViewGroup viewGroup = (ViewGroup) view;
                ViewManager resolveViewManager = reanimatedNativeHierarchyManager.resolveViewManager(id2);
                ViewGroupManager viewGroupManager = resolveViewManager instanceof ViewGroupManager ? (ViewGroupManager) resolveViewManager : null;
                if (viewGroupManager == null) {
                    return;
                }
                for (int i5 = 0; i5 < viewGroupManager.getChildCount((ViewGroupManager) viewGroup); i5++) {
                    visitTree(viewGroupManager.getChildAt((ViewGroupManager) viewGroup, i5), treeVisitor);
                }
            }
        } catch (IllegalViewOperationException unused) {
        }
    }

    public void doSnapshotForTopScreenViews(ViewGroup viewGroup) {
        if (viewGroup.getChildCount() > 0) {
            View childAt = viewGroup.getChildAt(0);
            if (childAt instanceof ViewGroup) {
                visitNativeTreeAndMakeSnapshot(((ViewGroup) childAt).getChildAt(0));
            } else {
                Log.e("[Reanimated]", "Unable to recognize screen on stack.");
            }
        }
    }

    public void finishSharedAnimation(int i5) {
        ViewParent parent;
        if (this.mDisableCleaningForViewTag.containsKey(Integer.valueOf(i5))) {
            enableCleaningForViewTag(i5);
            return;
        }
        SharedElement sharedElement = this.mSharedElementsLookup.get(Integer.valueOf(i5));
        if (sharedElement == null) {
            return;
        }
        this.mSharedElementsLookup.remove(Integer.valueOf(i5));
        View view = sharedElement.sourceView;
        if (this.mReattachedViews.contains(view)) {
            this.mReattachedViews.remove(view);
            int id2 = view.getId();
            ((ViewGroup) this.mTransitionContainer).removeView(view);
            View view2 = this.mSharedTransitionParent.get(Integer.valueOf(id2));
            Integer num = this.mSharedTransitionInParentIndex.get(Integer.valueOf(id2));
            int intValue = num.intValue();
            ViewGroup viewGroup = (ViewGroup) view2;
            int id3 = viewGroup.getId();
            SortedSet<Integer> sortedSet = this.mSharedViewChildrenIndices.get(Integer.valueOf(id3));
            int size = sortedSet.headSet(num).size();
            sortedSet.remove(num);
            if (sortedSet.isEmpty()) {
                this.mSharedViewChildrenIndices.remove(Integer.valueOf(id3));
            }
            int i6 = intValue - size;
            if (i6 <= viewGroup.getChildCount()) {
                viewGroup.addView(view, i6);
            } else {
                viewGroup.addView(view);
            }
            Snapshot snapshot = this.mSnapshotRegistry.get(Integer.valueOf(id2));
            if (snapshot != null) {
                int i10 = snapshot.originX;
                int i11 = snapshot.originY;
                if (findStack(view) == null) {
                    snapshot.originX = snapshot.originXByParent;
                    snapshot.originY = snapshot.originYByParent;
                }
                HashMap<String, Object> basicMap = snapshot.toBasicMap();
                HashMap hashMap = new HashMap();
                for (String str : basicMap.keySet()) {
                    Object obj = basicMap.get(str);
                    if (str.equals(Snapshot.TRANSFORM_MATRIX)) {
                        hashMap.put(str, obj);
                    } else {
                        hashMap.put(str, Double.valueOf(PixelUtil.toDIPFromPixel(Utils.convertToFloat(obj))));
                    }
                }
                this.mAnimationsManager.progressLayoutAnimation(id2, hashMap, true);
                snapshot.originX = i10;
                snapshot.originY = i11;
            }
            if (this.mViewTagsToHide.contains(Integer.valueOf(i5))) {
                view.setVisibility(4);
            }
            this.mCurrentSharedTransitionViews.remove(Integer.valueOf(sharedElement.targetView.getId()));
            this.mCurrentSharedTransitionViews.remove(Integer.valueOf(id2));
            this.mSharedTransitionParent.remove(Integer.valueOf(id2));
            this.mSharedTransitionInParentIndex.remove(Integer.valueOf(id2));
        }
        sharedElement.targetView.setVisibility(0);
        if (this.mRemovedSharedViews.contains(view)) {
            this.mRemovedSharedViews.remove(view);
            this.mSnapshotRegistry.remove(Integer.valueOf(view.getId()));
            this.mNativeMethodsHolder.clearAnimationConfig(view.getId());
        }
        if (this.mReattachedViews.isEmpty()) {
            View view3 = this.mTransitionContainer;
            if (view3 != null && (parent = view3.getParent()) != null) {
                this.mTransitionContainer.post(new com.mkuczera.haptic.a(3, this, parent));
            }
            this.mSharedElements.clear();
            this.mSharedElementsWithProgress.clear();
            this.mSharedElementsWithAnimation.clear();
            this.mViewTagsToHide.clear();
        }
    }

    public View getTransitioningView(int i5) {
        return this.mCurrentSharedTransitionViews.get(Integer.valueOf(i5));
    }

    public void makeSnapshot(View view) {
        this.mSnapshotRegistry.put(Integer.valueOf(view.getId()), new Snapshot(view));
    }

    public void navigationTabChanged(View view, View view2) {
        Snapshot snapshot;
        this.mAddedSharedViews.clear();
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        findSharedViewsForScreen(view, arrayList2);
        sortViewsByTags(arrayList2);
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            View view3 = (View) it.next();
            int[] sharedGroup = this.mNativeMethodsHolder.getSharedGroup(view3.getId());
            int length = sharedGroup.length - 1;
            while (true) {
                if (length >= 0) {
                    View resolveView = this.mAnimationsManager.resolveView(sharedGroup[length]);
                    if (ScreensHelper.isViewChildOfScreen(resolveView, view2) && (snapshot = this.mSnapshotRegistry.get(Integer.valueOf(view3.getId()))) != null) {
                        arrayList.add(new SharedElement(view3, snapshot, resolveView, new Snapshot(resolveView)));
                        break;
                    }
                    length--;
                }
            }
        }
        if (arrayList.isEmpty()) {
            return;
        }
        this.mSharedElements = arrayList;
        this.mSharedElementsWithAnimation.clear();
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            SharedElement sharedElement = (SharedElement) it2.next();
            this.mSharedElementsLookup.put(Integer.valueOf(sharedElement.sourceView.getId()), sharedElement);
            this.mSharedElementsWithAnimation.add(sharedElement);
        }
        setupTransitionContainer();
        reparentSharedViewsForCurrentTransition(arrayList);
        startSharedTransition(this.mSharedElementsWithAnimation, 4);
    }

    public void notifyAboutNewView(View view) {
        this.mAddedSharedViews.add(view);
    }

    public void notifyAboutRemovedView(View view) {
        this.mRemovedSharedViews.add(view);
    }

    public void onScreenWillDisappear() {
        Iterator<Integer> it = this.mTagsToCleanup.iterator();
        while (it.hasNext()) {
            this.mNativeMethodsHolder.clearAnimationConfig(it.next().intValue());
        }
        this.mTagsToCleanup.clear();
        if (this.mIsTransitionPrepared) {
            this.mIsTransitionPrepared = false;
            for (SharedElement sharedElement : this.mSharedElementsWithAnimation) {
                sharedElement.targetViewSnapshot = new Snapshot(sharedElement.targetView);
            }
            for (SharedElement sharedElement2 : this.mSharedElementsWithProgress) {
                sharedElement2.targetViewSnapshot = new Snapshot(sharedElement2.targetView);
            }
            startPreparedTransitions();
        }
    }

    public void onViewsRemoval(int[] iArr) {
        if (iArr == null) {
            return;
        }
        visitTreeForTags(iArr, new SnapshotTreeVisitor());
        if (this.mRemovedSharedViews.size() > 0) {
            boolean prepareSharedTransition = prepareSharedTransition(this.mRemovedSharedViews, false);
            this.mIsTransitionPrepared = prepareSharedTransition;
            if (!prepareSharedTransition) {
                this.mRemovedSharedViews.clear();
            }
            visitTreeForTags(iArr, new PrepareConfigCleanupTreeVisitor());
        }
    }

    public void orderByAnimationTypes(List<SharedElement> list) {
        this.mSharedElementsWithProgress.clear();
        this.mSharedElementsWithAnimation.clear();
        for (SharedElement sharedElement : list) {
            if (this.mAnimationsManager.hasAnimationForTag(sharedElement.sourceView.getId(), 5)) {
                this.mSharedElementsWithProgress.add(sharedElement);
            } else {
                this.mSharedElementsWithAnimation.add(sharedElement);
            }
        }
    }

    public boolean prepareSharedTransition(List<View> list, boolean z5) {
        if (list.isEmpty()) {
            return false;
        }
        sortViewsByTags(list);
        List<SharedElement> sharedElementsForCurrentTransition = getSharedElementsForCurrentTransition(list, z5);
        if (sharedElementsForCurrentTransition.isEmpty()) {
            return false;
        }
        setupTransitionContainer();
        reparentSharedViewsForCurrentTransition(sharedElementsForCurrentTransition);
        orderByAnimationTypes(sharedElementsForCurrentTransition);
        return true;
    }

    public void screenDidLayout(View view) {
        EventDispatcher eventDispatcherForReactTag;
        if (this.mAddedSharedViews.isEmpty() || (eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) view.getContext(), view.getId())) == null) {
            return;
        }
        eventDispatcherForReactTag.addListener(new TopWillAppearListener(eventDispatcherForReactTag));
    }

    public void setNativeMethods(NativeMethodsHolder nativeMethodsHolder) {
        this.mNativeMethodsHolder = nativeMethodsHolder;
    }

    public void viewDidLayout(View view) {
    }

    public void visitNativeTreeAndMakeSnapshot(View view) {
        View topScreenForStack = ScreensHelper.getTopScreenForStack(view);
        if (topScreenForStack instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) topScreenForStack;
            if (this.mAnimationsManager.hasAnimationForTag(topScreenForStack.getId(), 4)) {
                makeSnapshot(topScreenForStack);
            }
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                visitNativeTreeAndMakeSnapshot(viewGroup.getChildAt(i5));
            }
        }
    }

    public void visitTreeForTags(int[] iArr, TreeVisitor treeVisitor) {
        if (iArr == null) {
            return;
        }
        ReanimatedNativeHierarchyManager reanimatedNativeHierarchyManager = this.mAnimationsManager.getReanimatedNativeHierarchyManager();
        for (int i5 : iArr) {
            visitTree(reanimatedNativeHierarchyManager.resolveView(i5), treeVisitor);
        }
    }
}
