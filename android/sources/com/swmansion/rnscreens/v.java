package com.swmansion.rnscreens;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0016\u0018\u00002\u00020\u00012\u00020\u0002:\u0002\u0005\u0006B\t\b\u0016¢\u0006\u0004\b\u0003\u0010\u0004¨\u0006\u0007"}, d2 = {"Lcom/swmansion/rnscreens/v;", "Landroidx/fragment/app/Fragment;", "Lcom/swmansion/rnscreens/ScreenFragmentWrapper;", "<init>", "()V", "com/swmansion/rnscreens/t", "com/swmansion/rnscreens/u", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nScreenFragment.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ScreenFragment.kt\ncom/swmansion/rnscreens/ScreenFragment\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,360:1\n1#2:361\n774#3:362\n865#3,2:363\n1869#3,2:365\n*S KotlinDebug\n*F\n+ 1 ScreenFragment.kt\ncom/swmansion/rnscreens/ScreenFragment\n*L\n238#1:362\n238#1:363,2\n238#1:365,2\n*E\n"})
/* loaded from: classes3.dex */
public class v extends Fragment implements ScreenFragmentWrapper {

    /* renamed from: d, reason: collision with root package name */
    public final Screen f6802d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f6803e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f6804i;

    /* renamed from: v, reason: collision with root package name */
    public float f6805v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f6806w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f6807x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f6808y;

    public v() {
        this.f6803e = new ArrayList();
        this.f6805v = -1.0f;
        this.f6806w = true;
        this.f6807x = true;
        throw new IllegalStateException("Screen fragments should never be restored. Follow instructions from https://github.com/software-mansion/react-native-screens/issues/17#issuecomment-424704067 to properly configure your main activity.");
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final Screen a() {
        Screen screen = this.f6802d;
        if (screen != null) {
            return screen;
        }
        Intrinsics.throwUninitializedPropertyAccessException("screen");
        return null;
    }

    public boolean b() {
        return false;
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final void c(ScreenContainer container) {
        Intrinsics.checkNotNullParameter(container, "container");
        this.f6803e.remove(container);
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final void d(t event) {
        Intrinsics.checkNotNullParameter(event, "event");
        int ordinal = event.ordinal();
        if (ordinal == 0) {
            this.f6807x = false;
            return;
        }
        if (ordinal == 1) {
            this.f6806w = false;
        } else if (ordinal == 2) {
            this.f6807x = true;
        } else {
            if (ordinal != 3) {
                throw new fo.n();
            }
            this.f6806w = true;
        }
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final Activity e() {
        Fragment fragment;
        FragmentActivity activity;
        FragmentActivity activity2 = getActivity();
        if (activity2 != null) {
            return activity2;
        }
        Context context = a().getContext();
        if (context instanceof ReactContext) {
            ReactContext reactContext = (ReactContext) context;
            if (reactContext.getCurrentActivity() != null) {
                return reactContext.getCurrentActivity();
            }
        }
        for (ViewParent container = a().getContainer(); container != null; container = container.getParent()) {
            if ((container instanceof Screen) && (fragment = ((Screen) container).getFragment()) != null && (activity = fragment.getActivity()) != null) {
                return activity;
            }
        }
        return null;
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final ReactContext i() {
        if (getContext() instanceof ReactContext) {
            Context context = getContext();
            Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
            return (ReactContext) context;
        }
        if (a().getContext() instanceof ReactContext) {
            Context context2 = a().getContext();
            Intrinsics.checkNotNull(context2, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
            return (ReactContext) context2;
        }
        for (ViewParent container = a().getContainer(); container != null; container = container.getParent()) {
            if (container instanceof Screen) {
                Screen screen = (Screen) container;
                if (screen.getContext() instanceof ReactContext) {
                    Context context3 = screen.getContext();
                    Intrinsics.checkNotNull(context3, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
                    return (ReactContext) context3;
                }
            }
        }
        return null;
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final void j(t event) {
        ScreenFragmentWrapper fragmentWrapper;
        Intrinsics.checkNotNullParameter(event, "event");
        ArrayList arrayList = new ArrayList();
        Iterator it = this.f6803e.iterator();
        while (it.hasNext()) {
            Object next = it.next();
            if (((ScreenContainer) next).getScreenCount() > 0) {
                arrayList.add(next);
            }
        }
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            Screen topScreen = ((ScreenContainer) it2.next()).getTopScreen();
            if (topScreen != null && (fragmentWrapper = topScreen.getFragmentWrapper()) != null) {
                u(event, fragmentWrapper);
            }
        }
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final List k() {
        return this.f6803e;
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final void l(ScreenContainer container) {
        Intrinsics.checkNotNullParameter(container, "container");
        this.f6803e.add(container);
    }

    public void m() {
        FragmentActivity activity = getActivity();
        if (activity == null) {
            this.f6804i = true;
        } else {
            ys.d.f0(a(), activity, i());
        }
    }

    @Override // androidx.fragment.app.Fragment
    public View onCreateView(LayoutInflater inflater, ViewGroup viewGroup, Bundle bundle) {
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        a().setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        Context context = getContext();
        if (context == null) {
            return null;
        }
        Intrinsics.checkNotNullParameter(context, "context");
        u uVar = new u(context);
        Screen a = a();
        w3.q.w(a);
        uVar.addView(a);
        return uVar;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onDestroy() {
        super.onDestroy();
        ScreenContainer container = a().getContainer();
        if (container == null || !container.hasScreen(a().getFragmentWrapper())) {
            Context context = a().getContext();
            if (context instanceof ReactContext) {
                int surfaceId = UIManagerHelper.getSurfaceId(context);
                EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, a().getId());
                if (eventDispatcherForReactTag != null) {
                    eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, a().getId(), 6));
                }
            }
        }
        this.f6803e.clear();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onResume() {
        super.onResume();
        if (this.f6804i) {
            this.f6804i = false;
            ys.d.f0(a(), e(), i());
        }
    }

    public final void t() {
        Context context = a().getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        ReactContext reactContext = (ReactContext) context;
        int surfaceId = UIManagerHelper.getSurfaceId(reactContext);
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(reactContext, a().getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, a().getId(), 2));
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0029, code lost:
    
        if (r1.f6806w == false) goto L12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x002b, code lost:
    
        r5 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0035, code lost:
    
        if (r1.f6807x == false) goto L12;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void u(t event, ScreenFragmentWrapper fragmentWrapper) {
        boolean z5;
        k4.k kVar;
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(fragmentWrapper, "fragmentWrapper");
        v g6 = fragmentWrapper.g();
        if (g6 instanceof b0) {
            b0 b0Var = (b0) g6;
            Intrinsics.checkNotNullParameter(event, "event");
            int ordinal = event.ordinal();
            if (ordinal == 0) {
                z5 = b0Var.f6807x;
            } else if (ordinal != 1) {
                z5 = false;
                if (ordinal != 2) {
                    if (ordinal != 3) {
                        throw new fo.n();
                    }
                }
            } else {
                z5 = b0Var.f6806w;
            }
            if (z5) {
                Screen a = b0Var.a();
                fragmentWrapper.d(event);
                int surfaceId = UIManagerHelper.getSurfaceId(a);
                int ordinal2 = event.ordinal();
                if (ordinal2 == 0) {
                    kVar = new k4.k(surfaceId, a.getId(), 4);
                } else if (ordinal2 == 1) {
                    kVar = new k4.k(surfaceId, a.getId(), 7);
                } else if (ordinal2 == 2) {
                    kVar = new k4.k(surfaceId, a.getId(), 5);
                } else {
                    if (ordinal2 != 3) {
                        throw new fo.n();
                    }
                    kVar = new k4.k(surfaceId, a.getId(), 8);
                }
                Context context = a().getContext();
                Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
                EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, a().getId());
                if (eventDispatcherForReactTag != null) {
                    eventDispatcherForReactTag.dispatchEvent(kVar);
                }
                fragmentWrapper.j(event);
                if (event == t.f6790d) {
                    ScreenContainer container = a.getContainer();
                    if ((container != null ? container.getTopScreen() : null) == a) {
                        String screenId = a.getScreenId();
                        try {
                            JankScreenContext jankScreenContext = w3.q.f19671c;
                            if (jankScreenContext != null) {
                                jankScreenContext.onScreenDidAppear(screenId);
                            }
                        } catch (Exception e9) {
                            Log.e("ScreenTransitionNotifier", "listener.onScreenDidAppear threw", e9);
                        }
                    }
                }
            }
        }
    }

    public final void v(float f2, boolean z5) {
        if (!(this instanceof b0) || this.f6805v == f2) {
            return;
        }
        float max = Math.max(0.0f, Math.min(1.0f, f2));
        this.f6805v = max;
        short s2 = (short) (max == 0.0f ? 1 : max == 1.0f ? 2 : 3);
        b0 b0Var = (b0) this;
        ScreenContainer container = b0Var.a().getContainer();
        boolean goingForward = container instanceof ScreenStack ? ((ScreenStack) container).getGoingForward() : false;
        Context context = b0Var.a().getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        ReactContext reactContext = (ReactContext) context;
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(reactContext, b0Var.a().getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new om.d(UIManagerHelper.getSurfaceId(reactContext), b0Var.a().getId(), this.f6805v, z5, goingForward, s2));
        }
    }

    public final void w(boolean z5) {
        this.f6808y = !z5;
        Fragment parentFragment = getParentFragment();
        if (parentFragment != null && (parentFragment instanceof v) && ((v) parentFragment).f6808y) {
            return;
        }
        if (isResumed()) {
            UiThreadUtil.runOnUiThread(new com.facebook.react.devsupport.e(z5, this, 4));
        } else if (z5) {
            u(t.f6792i, this);
            v(1.0f, true);
        } else {
            u(t.f6793v, this);
            v(0.0f, true);
        }
    }

    public v(Screen screenView) {
        Intrinsics.checkNotNullParameter(screenView, "screenView");
        this.f6803e = new ArrayList();
        this.f6805v = -1.0f;
        this.f6806w = true;
        this.f6807x = true;
        Intrinsics.checkNotNullParameter(screenView, "<set-?>");
        this.f6802d = screenView;
    }

    @Override // com.swmansion.rnscreens.ScreenFragmentWrapper
    public final v g() {
        return this;
    }
}
