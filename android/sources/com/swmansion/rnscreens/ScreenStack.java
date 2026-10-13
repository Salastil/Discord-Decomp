package com.swmansion.rnscreens;

import android.content.Context;
import android.graphics.Canvas;
import android.os.Build;
import android.util.Log;
import android.view.View;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;
import com.discord.R;
import com.discord.jank_stats.JankScreenContext;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenStack;
import com.swmansion.rnscreens.stack.views.ChildrenDrawingOrderStrategy;
import com.swmansion.rnscreens.stack.views.ScreensCoordinatorLayout;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.y0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.TypeIntrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public class ScreenStack extends ScreenContainer {

    @NotNull
    public static final Companion Companion = new Companion();

    @NotNull
    public static final String TAG = "ScreenStack";
    private ChildrenDrawingOrderStrategy childrenDrawingOrderStrategy;
    private ScreenFragmentWrapper currentVisibleBottom;

    @NotNull
    private List<View> disappearingTransitioningChildren;

    @NotNull
    private final Set<ScreenStackFragmentWrapper> dismissedWrappers;

    @NotNull
    private final List<DrawingOp> drawingOpPool;

    @NotNull
    private List<DrawingOp> drawingOps;
    private boolean goingForward;

    @NotNull
    private List<? extends ScreenFragmentWrapper> preloadedWrappers;
    private boolean removalTransitionStarted;

    @NotNull
    private final ArrayList<ScreenStackFragmentWrapper> stack;
    private ScreenStackFragmentWrapper topScreenWrapper;

    public static final class Companion {
    }

    public final class DrawingOp {
        public Canvas a;

        /* renamed from: b, reason: collision with root package name */
        public View f6706b;

        /* renamed from: c, reason: collision with root package name */
        public long f6707c;

        public DrawingOp() {
        }
    }

    public ScreenStack(Context context) {
        super(context);
        this.stack = new ArrayList<>();
        this.dismissedWrappers = new HashSet();
        this.preloadedWrappers = new ArrayList();
        this.drawingOpPool = new ArrayList();
        this.drawingOps = new ArrayList();
        this.disappearingTransitioningChildren = new ArrayList();
    }

    public static final void access$performDraw(ScreenStack screenStack, DrawingOp drawingOp) {
        screenStack.getClass();
        Canvas canvas = drawingOp.a;
        Intrinsics.checkNotNull(canvas);
        super.drawChild(canvas, drawingOp.f6706b, drawingOp.f6707c);
    }

    public static boolean b(Ref.ObjectRef objectRef, ScreenStack screenStack, ScreenFragmentWrapper it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return !(it == objectRef.element || CollectionsKt.E(screenStack.dismissedWrappers, it)) || it.a().getActivityState() == Screen.ActivityState.f6678d;
    }

    public static boolean c(ScreenStack screenStack, ScreenStackFragmentWrapper wrapper) {
        Intrinsics.checkNotNullParameter(wrapper, "wrapper");
        return !screenStack.screenWrappers.contains(wrapper) || screenStack.dismissedWrappers.contains(wrapper);
    }

    public static boolean d(ScreenStack screenStack, ScreenFragmentWrapper it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return (CollectionsKt.E(screenStack.dismissedWrappers, it) || it.a().getActivityState() == Screen.ActivityState.f6678d) ? false : true;
    }

    public static void e(Screen screen, boolean z5) {
        int i5 = z5 ? KeyCommandDescriptor.ModifierFlags.CONTROL : 393216;
        if (Build.VERSION.SDK_INT >= 26) {
            screen.changeFocusability$react_native_screens_release(z5 ? 16 : 0, i5);
        } else {
            screen.changeFocusabilityCompat$react_native_screens_release(z5, i5);
        }
    }

    public final void dismiss(@NotNull ScreenStackFragmentWrapper screenFragment) {
        Intrinsics.checkNotNullParameter(screenFragment, "screenFragment");
        this.dismissedWrappers.add(screenFragment);
        performUpdatesNow();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchDraw(@NotNull Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        super.dispatchDraw(canvas);
        ChildrenDrawingOrderStrategy childrenDrawingOrderStrategy = this.childrenDrawingOrderStrategy;
        if (childrenDrawingOrderStrategy != null) {
            childrenDrawingOrderStrategy.a(this.drawingOps);
        }
        List<DrawingOp> list = this.drawingOps;
        this.drawingOps = new ArrayList();
        for (DrawingOp drawingOp : list) {
            access$performDraw(ScreenStack.this, drawingOp);
            drawingOp.a = null;
            drawingOp.f6706b = null;
            drawingOp.f6707c = 0L;
            this.drawingOpPool.add(drawingOp);
        }
    }

    @Override // android.view.ViewGroup
    public boolean drawChild(@NotNull Canvas canvas, @NotNull View child, long j) {
        DrawingOp remove;
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        Intrinsics.checkNotNullParameter(child, "child");
        List<DrawingOp> list = this.drawingOps;
        if (this.drawingOpPool.isEmpty()) {
            remove = new DrawingOp();
        } else {
            List<DrawingOp> list2 = this.drawingOpPool;
            remove = list2.remove(kotlin.collections.c0.f(list2));
        }
        remove.a = canvas;
        remove.f6706b = child;
        remove.f6707c = j;
        list.add(remove);
        return true;
    }

    @Override // android.view.ViewGroup
    public void endViewTransition(View view) {
        ChildrenDrawingOrderStrategy childrenDrawingOrderStrategy;
        Intrinsics.checkNotNullParameter(view, "view");
        if (!(view instanceof ScreensCoordinatorLayout)) {
            throw new IllegalArgumentException("[RNScreens] Expected children of type: ScreensCoordinatorLayout");
        }
        if (((ScreensCoordinatorLayout) view).getBlockFrameworkTransitionFinalization$react_native_screens_release()) {
            return;
        }
        super.endViewTransition(view);
        this.disappearingTransitioningChildren.remove(view);
        if (this.disappearingTransitioningChildren.isEmpty() && (childrenDrawingOrderStrategy = this.childrenDrawingOrderStrategy) != null) {
            childrenDrawingOrderStrategy.disable();
        }
        if (this.removalTransitionStarted) {
            this.removalTransitionStarted = false;
            f();
        }
    }

    public final void f() {
        int surfaceId = UIManagerHelper.getSurfaceId(this);
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, getId(), 13));
        }
        Screen topScreen = getTopScreen();
        String screenId = topScreen != null ? topScreen.getScreenId() : null;
        try {
            JankScreenContext jankScreenContext = w3.q.f19671c;
            if (jankScreenContext != null) {
                jankScreenContext.onScreenDidAppear(screenId);
            }
        } catch (Exception e9) {
            Log.e("ScreenTransitionNotifier", "listener.onScreenDidAppear threw", e9);
        }
    }

    @NotNull
    public final ArrayList<ScreenStackFragmentWrapper> getFragments() {
        return this.stack;
    }

    public final boolean getGoingForward() {
        return this.goingForward;
    }

    @NotNull
    public final Screen getRootScreen() {
        Object obj;
        Screen a;
        Iterator<T> it = this.screenWrappers.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (!CollectionsKt.E(this.dismissedWrappers, (ScreenFragmentWrapper) obj)) {
                break;
            }
        }
        ScreenFragmentWrapper screenFragmentWrapper = (ScreenFragmentWrapper) obj;
        if (screenFragmentWrapper == null || (a = screenFragmentWrapper.a()) == null) {
            throw new IllegalStateException("[RNScreens] Stack has no root screen set");
        }
        return a;
    }

    @NotNull
    public final List<String> getScreenIds() {
        ArrayList<ScreenFragmentWrapper> arrayList = this.screenWrappers;
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
        Iterator<T> it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(((ScreenFragmentWrapper) it.next()).a().getScreenId());
        }
        return arrayList2;
    }

    @Override // com.swmansion.rnscreens.ScreenContainer
    public Screen getTopScreen() {
        ScreenStackFragmentWrapper screenStackFragmentWrapper = this.topScreenWrapper;
        if (screenStackFragmentWrapper != null) {
            return screenStackFragmentWrapper.a();
        }
        return null;
    }

    @Override // com.swmansion.rnscreens.ScreenContainer
    public boolean hasScreen(ScreenFragmentWrapper screenFragmentWrapper) {
        return CollectionsKt.E(this.screenWrappers, screenFragmentWrapper) && !CollectionsKt.E(this.dismissedWrappers, screenFragmentWrapper);
    }

    @Override // com.swmansion.rnscreens.ScreenContainer
    public void notifyContainerUpdate() {
        Iterator<T> it = this.stack.iterator();
        while (it.hasNext()) {
            ((ScreenStackFragmentWrapper) it.next()).m();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:4:0x003e, code lost:
    
        if (r4 == r1.element) goto L6;
     */
    /* JADX WARN: Removed duplicated region for block: B:103:0x032a  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x032e  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0166  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x023e A[LOOP:0: B:82:0x0238->B:84:0x023e, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:89:0x0279 A[LOOP:1: B:87:0x0273->B:89:0x0279, LOOP_END] */
    /* JADX WARN: Type inference failed for: r4v28 */
    /* JADX WARN: Type inference failed for: r4v7 */
    /* JADX WARN: Type inference failed for: r4v8, types: [T, com.swmansion.rnscreens.ScreenFragmentWrapper] */
    /* JADX WARN: Type inference failed for: r5v1, types: [T, java.lang.Object] */
    @Override // com.swmansion.rnscreens.ScreenContainer
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onUpdate() {
        ?? r42;
        Screen.StackAnimation stackAnimation;
        boolean z5;
        ScreenStackFragmentWrapper screenStackFragmentWrapper;
        FragmentTransaction createTransaction;
        kr.d dVar;
        kr.d dVar2;
        T t5;
        T t10;
        Screen a;
        ScreenStackFragmentWrapper screenStackFragmentWrapper2;
        T t11;
        Screen a10;
        final Ref.ObjectRef objectRef = new Ref.ObjectRef();
        final Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
        this.childrenDrawingOrderStrategy = null;
        final int i5 = 0;
        kr.g i6 = kr.s.i(CollectionsKt.C(kotlin.collections.i0.y(this.screenWrappers)), new Function1(this) { // from class: com.swmansion.rnscreens.w

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ ScreenStack f6810e;

            {
                this.f6810e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                boolean d6;
                switch (i5) {
                    case 0:
                        d6 = ScreenStack.d(this.f6810e, (ScreenFragmentWrapper) obj);
                        break;
                    default:
                        d6 = ScreenStack.c(this.f6810e, (ScreenStackFragmentWrapper) obj);
                        break;
                }
                return Boolean.valueOf(d6);
            }
        });
        objectRef.element = kr.s.k(i6);
        ScreenFragmentWrapper screenFragmentWrapper = (ScreenFragmentWrapper) kr.s.k(kr.s.h(i6, new com.discord.mobile_voice_overlay.views.e(27)));
        if (screenFragmentWrapper != null) {
            r42 = screenFragmentWrapper;
        }
        r42 = 0;
        objectRef2.element = r42;
        this.currentVisibleBottom = r42;
        boolean z6 = CollectionsKt.E(this.stack, objectRef.element) && !CollectionsKt.E(this.preloadedWrappers, objectRef.element);
        T t12 = objectRef.element;
        ScreenStackFragmentWrapper screenStackFragmentWrapper3 = this.topScreenWrapper;
        boolean z7 = t12 != screenStackFragmentWrapper3;
        if (t12 == 0 || z6) {
            if (t12 == 0 || screenStackFragmentWrapper3 == null || !z7) {
                stackAnimation = null;
                z5 = true;
            } else {
                Screen a11 = screenStackFragmentWrapper3.a();
                stackAnimation = a11 != null ? a11.getStackAnimation() : null;
                z5 = false;
            }
        } else if (screenStackFragmentWrapper3 != null) {
            z5 = (this.screenWrappers.contains(screenStackFragmentWrapper3)) || (((ScreenFragmentWrapper) objectRef.element).a().getReplaceAnimation() == Screen.ReplaceAnimation.f6682d);
            if (z5) {
                a10 = ((ScreenFragmentWrapper) objectRef.element).a();
            } else {
                ScreenStackFragmentWrapper screenStackFragmentWrapper4 = this.topScreenWrapper;
                if (screenStackFragmentWrapper4 == null || (a10 = screenStackFragmentWrapper4.a()) == null) {
                    stackAnimation = null;
                }
            }
            stackAnimation = a10.getStackAnimation();
        } else {
            stackAnimation = Screen.StackAnimation.f6686e;
            this.goingForward = true;
            z5 = true;
        }
        this.goingForward = z5;
        if (z5 && (t11 = objectRef.element) != 0) {
            ScreenFragmentWrapper screenFragmentWrapper2 = (ScreenFragmentWrapper) t11;
            Companion.getClass();
            Screen.StackAnimation stackAnimation2 = stackAnimation == null ? screenFragmentWrapper2.a().getStackAnimation() : stackAnimation;
            if ((Build.VERSION.SDK_INT >= 33 || stackAnimation2 == Screen.StackAnimation.f6688v || stackAnimation2 == Screen.StackAnimation.f6691y || stackAnimation2 == Screen.StackAnimation.E || stackAnimation2 == Screen.StackAnimation.F) && stackAnimation2 != Screen.StackAnimation.f6686e && objectRef2.element == 0) {
                this.childrenDrawingOrderStrategy = new on.b();
                createTransaction = createTransaction();
                if (stackAnimation != null) {
                    Intrinsics.checkNotNullParameter(createTransaction, "<this>");
                    Intrinsics.checkNotNullParameter(stackAnimation, "stackAnimation");
                    if (z5) {
                        switch (stackAnimation.ordinal()) {
                            case 0:
                                createTransaction.i(R.anim.rns_default_enter_in, R.anim.rns_default_enter_out);
                                break;
                            case 1:
                                createTransaction.i(R.anim.rns_no_animation_20, R.anim.rns_no_animation_20);
                                break;
                            case 2:
                                createTransaction.i(R.anim.rns_fade_in, R.anim.rns_fade_out);
                                break;
                            case 3:
                                createTransaction.i(R.anim.rns_slide_in_from_bottom, R.anim.rns_no_animation_medium);
                                break;
                            case 4:
                                createTransaction.i(R.anim.rns_slide_in_from_right, R.anim.rns_slide_out_to_left);
                                break;
                            case 5:
                                createTransaction.i(R.anim.rns_slide_in_from_left, R.anim.rns_slide_out_to_right);
                                break;
                            case 6:
                                createTransaction.i(R.anim.rns_fade_from_bottom, R.anim.rns_no_animation_350);
                                break;
                            case 7:
                                createTransaction.i(R.anim.rns_ios_from_right_foreground_open, R.anim.rns_ios_from_right_background_open);
                                break;
                            case 8:
                                createTransaction.i(R.anim.rns_ios_from_left_foreground_open, R.anim.rns_ios_from_left_background_open);
                                break;
                            default:
                                throw new fo.n();
                        }
                    } else {
                        switch (stackAnimation.ordinal()) {
                            case 0:
                                createTransaction.i(R.anim.rns_default_exit_in, R.anim.rns_default_exit_out);
                                break;
                            case 1:
                                createTransaction.i(R.anim.rns_no_animation_20, R.anim.rns_no_animation_20);
                                break;
                            case 2:
                                createTransaction.i(R.anim.rns_fade_in, R.anim.rns_fade_out);
                                break;
                            case 3:
                                createTransaction.i(R.anim.rns_no_animation_medium, R.anim.rns_slide_out_to_bottom);
                                break;
                            case 4:
                                createTransaction.i(R.anim.rns_slide_in_from_left, R.anim.rns_slide_out_to_right);
                                break;
                            case 5:
                                createTransaction.i(R.anim.rns_slide_in_from_right, R.anim.rns_slide_out_to_left);
                                break;
                            case 6:
                                createTransaction.i(R.anim.rns_no_animation_250, R.anim.rns_fade_to_bottom);
                                break;
                            case 7:
                                createTransaction.i(R.anim.rns_ios_from_right_background_close, R.anim.rns_ios_from_right_foreground_close);
                                break;
                            case 8:
                                createTransaction.i(R.anim.rns_ios_from_left_background_close, R.anim.rns_ios_from_left_foreground_close);
                                break;
                            default:
                                throw new fo.n();
                        }
                    }
                }
                final int i10 = 1;
                dVar = new kr.d(kr.s.i(CollectionsKt.C(this.stack), new Function1(this) { // from class: com.swmansion.rnscreens.w

                    /* renamed from: e, reason: collision with root package name */
                    public final /* synthetic */ ScreenStack f6810e;

                    {
                        this.f6810e = this;
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        boolean d6;
                        switch (i10) {
                            case 0:
                                d6 = ScreenStack.d(this.f6810e, (ScreenFragmentWrapper) obj);
                                break;
                            default:
                                d6 = ScreenStack.c(this.f6810e, (ScreenStackFragmentWrapper) obj);
                                break;
                        }
                        return Boolean.valueOf(d6);
                    }
                }));
                while (dVar.hasNext()) {
                    createTransaction.g(((ScreenStackFragmentWrapper) dVar.next()).g());
                }
                kotlin.collections.w C = CollectionsKt.C(this.screenWrappers);
                final int i11 = 1;
                Function1 predicate = new Function1() { // from class: com.swmansion.rnscreens.x
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        int i12 = i11;
                        Ref.ObjectRef objectRef3 = objectRef2;
                        switch (i12) {
                            case 0:
                                ScreenStackFragmentWrapper it = (ScreenStackFragmentWrapper) obj;
                                ScreenStack.Companion companion = ScreenStack.Companion;
                                Intrinsics.checkNotNullParameter(it, "it");
                                if (it != objectRef3.element && it.b()) {
                                    r1 = true;
                                }
                                return Boolean.valueOf(r1);
                            case 1:
                                ScreenFragmentWrapper it2 = (ScreenFragmentWrapper) obj;
                                ScreenStack.Companion companion2 = ScreenStack.Companion;
                                Intrinsics.checkNotNullParameter(it2, "it");
                                return Boolean.valueOf(it2 != objectRef3.element);
                            default:
                                ScreenFragmentWrapper it3 = (ScreenFragmentWrapper) obj;
                                ScreenStack.Companion companion3 = ScreenStack.Companion;
                                Intrinsics.checkNotNullParameter(it3, "it");
                                return Boolean.valueOf(it3 != objectRef3.element);
                        }
                    }
                };
                Intrinsics.checkNotNullParameter(C, "<this>");
                Intrinsics.checkNotNullParameter(predicate, "predicate");
                dVar2 = new kr.d(kr.s.i(new kr.e(C, predicate, 1), new com.discord.permissions.b(6, objectRef, this)));
                while (dVar2.hasNext()) {
                    createTransaction.g(((ScreenFragmentWrapper) dVar2.next()).g());
                }
                t5 = objectRef2.element;
                if (t5 != 0 || ((ScreenFragmentWrapper) t5).g().isAdded()) {
                    t10 = objectRef.element;
                    if (t10 != 0 && !((ScreenFragmentWrapper) t10).g().isAdded()) {
                        a = ((ScreenFragmentWrapper) objectRef.element).a();
                        Intrinsics.checkNotNullParameter(a, "<this>");
                        if (!a.getSheetShouldOverflowTopInset() && nm.l.c(a)) {
                            ((ScreenFragmentWrapper) objectRef.element).g().postponeEnterTransition();
                        }
                        screenStackFragmentWrapper2 = null;
                        createTransaction.f(getId(), ((ScreenFragmentWrapper) objectRef.element).g(), null, 1);
                        T t13 = objectRef.element;
                        this.topScreenWrapper = !(t13 instanceof ScreenStackFragmentWrapper) ? (ScreenStackFragmentWrapper) t13 : screenStackFragmentWrapper2;
                        this.stack.clear();
                        kotlin.collections.h0.p(this.stack, kr.s.n(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(25)));
                        this.preloadedWrappers = kr.s.q(kr.s.i(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(26)));
                        updateA11yForVisibleScreens$react_native_screens_release();
                        createTransaction.d();
                    }
                } else {
                    ScreenFragmentWrapper screenFragmentWrapper3 = (ScreenFragmentWrapper) objectRef.element;
                    final int i12 = 2;
                    kr.d dVar3 = new kr.d(kr.s.i(kr.s.h(CollectionsKt.C(this.screenWrappers), new Function1() { // from class: com.swmansion.rnscreens.x
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            int i122 = i12;
                            Ref.ObjectRef objectRef3 = objectRef2;
                            switch (i122) {
                                case 0:
                                    ScreenStackFragmentWrapper it = (ScreenStackFragmentWrapper) obj;
                                    ScreenStack.Companion companion = ScreenStack.Companion;
                                    Intrinsics.checkNotNullParameter(it, "it");
                                    if (it != objectRef3.element && it.b()) {
                                        r1 = true;
                                    }
                                    return Boolean.valueOf(r1);
                                case 1:
                                    ScreenFragmentWrapper it2 = (ScreenFragmentWrapper) obj;
                                    ScreenStack.Companion companion2 = ScreenStack.Companion;
                                    Intrinsics.checkNotNullParameter(it2, "it");
                                    return Boolean.valueOf(it2 != objectRef3.element);
                                default:
                                    ScreenFragmentWrapper it3 = (ScreenFragmentWrapper) obj;
                                    ScreenStack.Companion companion3 = ScreenStack.Companion;
                                    Intrinsics.checkNotNullParameter(it3, "it");
                                    return Boolean.valueOf(it3 != objectRef3.element);
                            }
                        }
                    }), new com.discord.mobile_voice_overlay.views.e(28)));
                    while (dVar3.hasNext()) {
                        createTransaction.f(getId(), ((ScreenFragmentWrapper) dVar3.next()).g(), null, 1);
                        createTransaction.h(false, new com.google.firebase.messaging.s(5, screenFragmentWrapper3));
                    }
                }
                screenStackFragmentWrapper2 = null;
                T t132 = objectRef.element;
                this.topScreenWrapper = !(t132 instanceof ScreenStackFragmentWrapper) ? (ScreenStackFragmentWrapper) t132 : screenStackFragmentWrapper2;
                this.stack.clear();
                kotlin.collections.h0.p(this.stack, kr.s.n(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(25)));
                this.preloadedWrappers = kr.s.q(kr.s.i(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(26)));
                updateA11yForVisibleScreens$react_native_screens_release();
                createTransaction.d();
            }
        }
        if (objectRef.element != 0 && z6 && (screenStackFragmentWrapper = this.topScreenWrapper) != null && screenStackFragmentWrapper.b() && !((ScreenFragmentWrapper) objectRef.element).b()) {
            kotlin.collections.w C2 = CollectionsKt.C(kotlin.collections.i0.y(this.stack));
            final int i13 = 0;
            Function1 predicate2 = new Function1() { // from class: com.swmansion.rnscreens.x
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    int i122 = i13;
                    Ref.ObjectRef objectRef3 = objectRef;
                    switch (i122) {
                        case 0:
                            ScreenStackFragmentWrapper it = (ScreenStackFragmentWrapper) obj;
                            ScreenStack.Companion companion = ScreenStack.Companion;
                            Intrinsics.checkNotNullParameter(it, "it");
                            if (it != objectRef3.element && it.b()) {
                                r1 = true;
                            }
                            return Boolean.valueOf(r1);
                        case 1:
                            ScreenFragmentWrapper it2 = (ScreenFragmentWrapper) obj;
                            ScreenStack.Companion companion2 = ScreenStack.Companion;
                            Intrinsics.checkNotNullParameter(it2, "it");
                            return Boolean.valueOf(it2 != objectRef3.element);
                        default:
                            ScreenFragmentWrapper it3 = (ScreenFragmentWrapper) obj;
                            ScreenStack.Companion companion3 = ScreenStack.Companion;
                            Intrinsics.checkNotNullParameter(it3, "it");
                            return Boolean.valueOf(it3 != objectRef3.element);
                    }
                }
            };
            Intrinsics.checkNotNullParameter(C2, "<this>");
            Intrinsics.checkNotNullParameter(predicate2, "predicate");
            int f2 = kr.s.f(new kr.e(C2, predicate2, 1));
            if (f2 > 1) {
                this.childrenDrawingOrderStrategy = new on.a(Math.max((kotlin.collections.c0.f(this.stack) - f2) + 1, 0));
            }
        }
        createTransaction = createTransaction();
        if (stackAnimation != null) {
        }
        final int i102 = 1;
        dVar = new kr.d(kr.s.i(CollectionsKt.C(this.stack), new Function1(this) { // from class: com.swmansion.rnscreens.w

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ ScreenStack f6810e;

            {
                this.f6810e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                boolean d6;
                switch (i102) {
                    case 0:
                        d6 = ScreenStack.d(this.f6810e, (ScreenFragmentWrapper) obj);
                        break;
                    default:
                        d6 = ScreenStack.c(this.f6810e, (ScreenStackFragmentWrapper) obj);
                        break;
                }
                return Boolean.valueOf(d6);
            }
        }));
        while (dVar.hasNext()) {
        }
        kotlin.collections.w C3 = CollectionsKt.C(this.screenWrappers);
        final int i112 = 1;
        Function1 predicate3 = new Function1() { // from class: com.swmansion.rnscreens.x
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                int i122 = i112;
                Ref.ObjectRef objectRef3 = objectRef2;
                switch (i122) {
                    case 0:
                        ScreenStackFragmentWrapper it = (ScreenStackFragmentWrapper) obj;
                        ScreenStack.Companion companion = ScreenStack.Companion;
                        Intrinsics.checkNotNullParameter(it, "it");
                        if (it != objectRef3.element && it.b()) {
                            r1 = true;
                        }
                        return Boolean.valueOf(r1);
                    case 1:
                        ScreenFragmentWrapper it2 = (ScreenFragmentWrapper) obj;
                        ScreenStack.Companion companion2 = ScreenStack.Companion;
                        Intrinsics.checkNotNullParameter(it2, "it");
                        return Boolean.valueOf(it2 != objectRef3.element);
                    default:
                        ScreenFragmentWrapper it3 = (ScreenFragmentWrapper) obj;
                        ScreenStack.Companion companion3 = ScreenStack.Companion;
                        Intrinsics.checkNotNullParameter(it3, "it");
                        return Boolean.valueOf(it3 != objectRef3.element);
                }
            }
        };
        Intrinsics.checkNotNullParameter(C3, "<this>");
        Intrinsics.checkNotNullParameter(predicate3, "predicate");
        dVar2 = new kr.d(kr.s.i(new kr.e(C3, predicate3, 1), new com.discord.permissions.b(6, objectRef, this)));
        while (dVar2.hasNext()) {
        }
        t5 = objectRef2.element;
        if (t5 != 0) {
        }
        t10 = objectRef.element;
        if (t10 != 0) {
            a = ((ScreenFragmentWrapper) objectRef.element).a();
            Intrinsics.checkNotNullParameter(a, "<this>");
            if (!a.getSheetShouldOverflowTopInset()) {
                ((ScreenFragmentWrapper) objectRef.element).g().postponeEnterTransition();
            }
            screenStackFragmentWrapper2 = null;
            createTransaction.f(getId(), ((ScreenFragmentWrapper) objectRef.element).g(), null, 1);
            T t1322 = objectRef.element;
            this.topScreenWrapper = !(t1322 instanceof ScreenStackFragmentWrapper) ? (ScreenStackFragmentWrapper) t1322 : screenStackFragmentWrapper2;
            this.stack.clear();
            kotlin.collections.h0.p(this.stack, kr.s.n(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(25)));
            this.preloadedWrappers = kr.s.q(kr.s.i(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(26)));
            updateA11yForVisibleScreens$react_native_screens_release();
            createTransaction.d();
        }
        screenStackFragmentWrapper2 = null;
        T t13222 = objectRef.element;
        this.topScreenWrapper = !(t13222 instanceof ScreenStackFragmentWrapper) ? (ScreenStackFragmentWrapper) t13222 : screenStackFragmentWrapper2;
        this.stack.clear();
        kotlin.collections.h0.p(this.stack, kr.s.n(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(25)));
        this.preloadedWrappers = kr.s.q(kr.s.i(CollectionsKt.C(this.screenWrappers), new com.discord.mobile_voice_overlay.views.e(26)));
        updateA11yForVisibleScreens$react_native_screens_release();
        createTransaction.d();
    }

    public final void onViewTransitionEnd$react_native_screens_release(@NotNull ScreensCoordinatorLayout view) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (!this.removalTransitionStarted) {
            f();
        }
        if (view.getNeedsTransitionFinalization$react_native_screens_release()) {
            if (view.getBlockFrameworkTransitionFinalization$react_native_screens_release()) {
                throw new IllegalStateException("[RNScreens] Attempt to finalize transition on view that blocks the action!");
            }
            endViewTransition(view);
        }
    }

    public final boolean popToRoot() {
        int i5;
        Iterator<ScreenFragmentWrapper> it = this.screenWrappers.iterator();
        int i6 = 0;
        while (true) {
            i5 = -1;
            if (!it.hasNext()) {
                i6 = -1;
                break;
            }
            if (it.next().a().getActivityState() != Screen.ActivityState.f6678d) {
                break;
            }
            i6++;
        }
        ArrayList<ScreenFragmentWrapper> arrayList = this.screenWrappers;
        ListIterator<ScreenFragmentWrapper> listIterator = arrayList.listIterator(arrayList.size());
        while (true) {
            if (!listIterator.hasPrevious()) {
                break;
            }
            if (listIterator.previous().a().getActivityState() != Screen.ActivityState.f6678d) {
                i5 = listIterator.nextIndex();
                break;
            }
        }
        if (i6 < 0 || i5 <= i6) {
            return false;
        }
        int i10 = i6 + 1;
        if (i10 <= i5) {
            while (true) {
                notifyScreenDetached(this.screenWrappers.get(i10).a());
                if (i10 == i5) {
                    break;
                }
                i10++;
            }
        }
        return true;
    }

    @Override // com.swmansion.rnscreens.ScreenContainer
    public void removeAllScreens() {
        this.dismissedWrappers.clear();
        super.removeAllScreens();
    }

    @Override // com.swmansion.rnscreens.ScreenContainer
    public void removeScreenAt(int i5) {
        Set<ScreenStackFragmentWrapper> set = this.dismissedWrappers;
        TypeIntrinsics.asMutableCollection(set).remove(getScreenFragmentWrapperAt(i5));
        super.removeScreenAt(i5);
    }

    public final void setGoingForward(boolean z5) {
        this.goingForward = z5;
    }

    @Override // android.view.ViewGroup
    public void startViewTransition(@NotNull View view) {
        ChildrenDrawingOrderStrategy childrenDrawingOrderStrategy;
        Intrinsics.checkNotNullParameter(view, "view");
        if (!(view instanceof ScreensCoordinatorLayout)) {
            throw new IllegalStateException(a3.e.i(view.getClass(), "[RNScreens] Unexpected type of ScreenStack direct subview ").toString());
        }
        super.startViewTransition(view);
        if (((ScreensCoordinatorLayout) view).getFragment$react_native_screens_release().isRemoving()) {
            this.disappearingTransitioningChildren.add(view);
        }
        if (!this.disappearingTransitioningChildren.isEmpty() && (childrenDrawingOrderStrategy = this.childrenDrawingOrderStrategy) != null) {
            childrenDrawingOrderStrategy.enable();
        }
        this.removalTransitionStarted = true;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0043  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void updateA11yForVisibleScreens$react_native_screens_release() {
        ScreenStackFragmentWrapper screenStackFragmentWrapper;
        boolean b10;
        ScreenFragmentWrapper screenFragmentWrapper;
        int sheetInitialDetentIndex;
        if (this.screenWrappers.size() > 1 && this.currentVisibleBottom != null && (screenStackFragmentWrapper = this.topScreenWrapper) != null) {
            if (nm.l.c(screenStackFragmentWrapper.a())) {
                Screen a = screenStackFragmentWrapper.a();
                Intrinsics.checkNotNullParameter(a, "<this>");
                Fragment fragment = a.getFragment();
                if (fragment != null) {
                    Intrinsics.checkNotNullParameter(fragment, "<this>");
                    nm.k kVar = ((b0) fragment).P;
                    if (kVar != null) {
                        sheetInitialDetentIndex = kVar.f15575w;
                        b10 = sheetInitialDetentIndex <= a.getSheetLargestUndimmedDetentIndex();
                    }
                }
                sheetInitialDetentIndex = a.getSheetInitialDetentIndex();
                if (sheetInitialDetentIndex <= a.getSheetLargestUndimmedDetentIndex()) {
                }
            } else {
                b10 = screenStackFragmentWrapper.b();
            }
            ArrayList<ScreenFragmentWrapper> arrayList = this.screenWrappers;
            Iterator it = kotlin.collections.i0.x(CollectionsKt.c0(arrayList, yo.j.i(0, arrayList.size() - 1))).iterator();
            do {
                ListIterator listIterator = ((y0) it).f13528d;
                if (!listIterator.hasPrevious()) {
                    break;
                }
                screenFragmentWrapper = (ScreenFragmentWrapper) listIterator.previous();
                screenFragmentWrapper.a().changeAccessibilityMode(b10 ? 4 : 0);
                e(screenFragmentWrapper.a(), !b10);
            } while (!Intrinsics.areEqual(screenFragmentWrapper, this.currentVisibleBottom));
        }
        Screen topScreen = getTopScreen();
        if (topScreen != null) {
            topScreen.changeAccessibilityMode(0);
        }
        Screen topScreen2 = getTopScreen();
        if (topScreen2 != null) {
            e(topScreen2, true);
        }
    }

    @Override // com.swmansion.rnscreens.ScreenContainer
    @NotNull
    public ScreenStackFragmentWrapper adapt(@NotNull Screen screenView) {
        Intrinsics.checkNotNullParameter(screenView, "screen");
        if (y.a[screenView.getStackPresentation().ordinal()] == 1) {
            Intrinsics.checkNotNullParameter(screenView, "screenView");
            return new b0(screenView);
        }
        Intrinsics.checkNotNullParameter(screenView, "screenView");
        return new b0(screenView);
    }
}
