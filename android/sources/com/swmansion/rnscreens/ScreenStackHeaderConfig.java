package com.swmansion.rnscreens;

import android.R;
import android.content.Context;
import android.content.res.AssetManager;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.widget.s3;
import androidx.fragment.app.Fragment;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactPointerEventsView;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.text.ReactTypefaceUtils;
import com.google.android.material.appbar.AppBarLayout$ScrollingViewBehavior;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class ScreenStackHeaderConfig extends e implements ReactPointerEventsView {
    public final d E;
    public boolean F;
    public boolean G;
    public final c0 H;
    public final c0 I;
    public final c0 J;
    public final c0 K;
    public final c0 L;
    public String M;
    public int N;
    public String O;
    public String P;
    public float Q;
    public int R;
    public Integer S;
    public boolean T;
    public boolean U;
    public boolean V;
    public ActionBar W;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f6711b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f6712c0;

    /* renamed from: d0, reason: collision with root package name */
    public final int f6713d0;

    /* renamed from: e0, reason: collision with root package name */
    public final int f6714e0;

    /* renamed from: f0, reason: collision with root package name */
    public final com.discord.chat.presentation.list.delegate.b f6715f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f6716g0;
    public final e0 h0;

    /* renamed from: x, reason: collision with root package name */
    public final m f6717x;

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f6718y;

    /* renamed from: j0, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f6710j0 = {com.discord.chat.bridge.botuikit.a.p(ScreenStackHeaderConfig.class, "consumeTopInset", "getConsumeTopInset()Z", 0), com.discord.chat.bridge.botuikit.a.p(ScreenStackHeaderConfig.class, "consumeLeftInset", "getConsumeLeftInset()Z", 0), com.discord.chat.bridge.botuikit.a.p(ScreenStackHeaderConfig.class, "consumeRightInset", "getConsumeRightInset()Z", 0), com.discord.chat.bridge.botuikit.a.p(ScreenStackHeaderConfig.class, "consumeBottomInset", "getConsumeBottomInset()Z", 0), com.discord.chat.bridge.botuikit.a.p(ScreenStackHeaderConfig.class, "legacyTopInsetBehavior", "getLegacyTopInsetBehavior()Z", 0)};

    /* renamed from: i0, reason: collision with root package name */
    public static final ha.k f6709i0 = new ha.k(5);

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ScreenStackHeaderConfig(ThemedReactContext context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        m pointerEventsImpl = new m();
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(pointerEventsImpl, "pointerEventsImpl");
        this.f6717x = pointerEventsImpl;
        this.f6718y = new ArrayList(3);
        this.H = new c0(this, 0);
        this.I = new c0(this, 1);
        this.J = new c0(this, 2);
        this.K = new c0(this, 3);
        this.L = new c0(this, 4);
        this.f6715f0 = new com.discord.chat.presentation.list.delegate.b(7, this);
        this.h0 = new e0();
        setVisibility(8);
        d dVar = new d(context, this);
        this.E = dVar;
        this.f6713d0 = dVar.getContentInsetStart();
        this.f6714e0 = dVar.getContentInsetStartWithNavigation();
        TypedValue typedValue = new TypedValue();
        if (context.getTheme().resolveAttribute(R.attr.colorPrimary, typedValue, true)) {
            dVar.setBackgroundColor(typedValue.data);
        }
        dVar.setClipChildren(false);
    }

    public static void a(ScreenStackHeaderConfig screenStackHeaderConfig) {
        b0 screenFragment = screenStackHeaderConfig.getScreenFragment();
        if (screenFragment != null) {
            ScreenStack screenStack = screenStackHeaderConfig.getScreenStack();
            if (screenStack == null || !Intrinsics.areEqual(screenStack.getRootScreen(), screenFragment.a())) {
                if (!screenFragment.a().getNativeBackButtonDismissalEnabled()) {
                    screenFragment.t();
                    return;
                }
                ScreenContainer container = screenFragment.a().getContainer();
                if (!(container instanceof ScreenStack)) {
                    throw new IllegalStateException("ScreenStackFragment added into a non-stack container");
                }
                ((ScreenStack) container).dismiss(screenFragment);
                return;
            }
            Fragment parentFragment = screenFragment.getParentFragment();
            if (parentFragment instanceof b0) {
                b0 b0Var = (b0) parentFragment;
                if (!b0Var.a().getNativeBackButtonDismissalEnabled()) {
                    b0Var.t();
                    return;
                }
                ScreenContainer container2 = b0Var.a().getContainer();
                if (!(container2 instanceof ScreenStack)) {
                    throw new IllegalStateException("ScreenStackFragment added into a non-stack container");
                }
                ((ScreenStack) container2).dismiss(b0Var);
            }
        }
    }

    private final Screen getScreen() {
        ViewParent parent = getParent();
        if (parent instanceof Screen) {
            return (Screen) parent;
        }
        return null;
    }

    private final ScreenStack getScreenStack() {
        Screen screen = getScreen();
        ScreenContainer container = screen != null ? screen.getContainer() : null;
        if (container instanceof ScreenStack) {
            return (ScreenStack) container;
        }
        return null;
    }

    public final void b() {
        Screen screen;
        if (getParent() == null || this.V || (screen = getScreen()) == null || screen.isBeingRemoved()) {
            return;
        }
        d();
    }

    public final void c(d toolbar, boolean z5) {
        int max;
        Object obj;
        Intrinsics.checkNotNullParameter(toolbar, "toolbar");
        if (z5) {
            if (toolbar.getNavigationIcon() != null) {
                max = toolbar.getPaddingStart() + toolbar.getCurrentContentInsetStart();
            } else {
                max = Math.max(toolbar.getCurrentContentInsetStart(), toolbar.getPaddingStart());
            }
            Iterator it = this.f6718y.iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                } else {
                    obj = it.next();
                    if (((g0) obj).getType() == f0.f6749d) {
                        break;
                    }
                }
            }
            g0 g0Var = (g0) obj;
            if (g0Var != null) {
                max = g0Var.getLeft();
            }
            int paddingEnd = toolbar.getPaddingEnd() + toolbar.getCurrentContentInsetEnd();
            this.h0.a(this, getScreen());
            int width = toolbar.getWidth();
            int height = toolbar.getHeight();
            float P = a5.k0.P(this, width);
            float P2 = a5.k0.P(this, height);
            float P3 = a5.k0.P(this, max);
            float P4 = a5.k0.P(this, paddingEnd);
            if (Math.abs(this.f6740e - P) >= 0.9f || Math.abs(this.f6741i - P2) >= 0.9f || Math.abs(this.f6742v - P3) >= 0.9f || Math.abs(this.f6743w - P4) >= 0.9f) {
                this.f6740e = P;
                this.f6741i = P2;
                this.f6742v = P3;
                this.f6743w = P4;
                WritableNativeMap writableNativeMap = new WritableNativeMap();
                writableNativeMap.putDouble("frameWidth", P);
                writableNativeMap.putDouble("frameHeight", P2);
                writableNativeMap.putDouble(ViewProps.PADDING_START, P3);
                writableNativeMap.putDouble(ViewProps.PADDING_END, P4);
                StateWrapper stateWrapper = this.f6739d;
                if (stateWrapper != null) {
                    stateWrapper.updateState(writableNativeMap);
                }
            }
        }
    }

    public final void d() {
        b bVar;
        Drawable navigationIcon;
        boolean z5;
        boolean z6;
        b0 screenFragment;
        b0 screenFragment2;
        d dVar;
        ReactContext i5;
        ScreenStack screenStack = getScreenStack();
        boolean z7 = screenStack == null || Intrinsics.areEqual(screenStack.getTopScreen(), getParent());
        if (this.f6712c0 && z7 && !this.V) {
            b0 screenFragment3 = getScreenFragment();
            i.h hVar = (i.h) (screenFragment3 != null ? screenFragment3.getActivity() : null);
            if (hVar == null) {
                return;
            }
            String str = this.P;
            d toolbar = this.E;
            if (str != null) {
                if (Intrinsics.areEqual(str, "rtl")) {
                    toolbar.setLayoutDirection(1);
                } else if (Intrinsics.areEqual(this.P, "ltr")) {
                    toolbar.setLayoutDirection(0);
                }
            }
            Screen screen = getScreen();
            if (screen != null) {
                if (getContext() instanceof ReactContext) {
                    Context context = getContext();
                    Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
                    i5 = (ReactContext) context;
                } else {
                    ScreenFragmentWrapper fragmentWrapper = screen.getFragmentWrapper();
                    i5 = fragmentWrapper != null ? fragmentWrapper.i() : null;
                }
                ys.d.f0(screen, hVar, i5);
            }
            boolean z8 = this.F;
            e0 e0Var = this.h0;
            if (z8) {
                if (toolbar.getParent() != null && (screenFragment2 = getScreenFragment()) != null) {
                    ng.g gVar = screenFragment2.E;
                    if (gVar != null && (dVar = screenFragment2.F) != null && dVar.getParent() == gVar) {
                        gVar.removeView(dVar);
                    }
                    screenFragment2.F = null;
                }
                e0Var.a(this, getScreen());
                return;
            }
            if (toolbar.getParent() == null && (screenFragment = getScreenFragment()) != null) {
                Intrinsics.checkNotNullParameter(toolbar, "toolbar");
                screenFragment.I = toolbar.getConfig();
                ng.g gVar2 = screenFragment.E;
                if (gVar2 != null) {
                    gVar2.addView(toolbar);
                }
                ng.e eVar = new ng.e(-2);
                eVar.a = 0;
                toolbar.setLayoutParams(eVar);
                screenFragment.F = toolbar;
            }
            hVar.setSupportActionBar(toolbar);
            ActionBar supportActionBar = hVar.getSupportActionBar();
            if (supportActionBar == null) {
                throw new IllegalArgumentException("Required value was null.");
            }
            this.W = supportActionBar;
            b0 screenFragment4 = getScreenFragment();
            supportActionBar.m((screenFragment4 == null || !screenFragment4.x() || this.T) ? false : true);
            supportActionBar.q(this.M);
            if (TextUtils.isEmpty(this.M)) {
                this.f6716g0 = true;
            }
            ScreenStackHeaderConfig screenStackHeaderConfig = toolbar.f6733u0;
            toolbar.setContentInsetStartWithNavigation(screenStackHeaderConfig.getPreferredContentInsetStartWithNavigation());
            int preferredContentInsetStart = screenStackHeaderConfig.getPreferredContentInsetStart();
            int preferredContentInsetEnd = screenStackHeaderConfig.getPreferredContentInsetEnd();
            toolbar.d();
            toolbar.Q.a(preferredContentInsetStart, preferredContentInsetEnd);
            toolbar.setNavigationOnClickListener(this.f6715f0);
            b0 screenFragment5 = getScreenFragment();
            if (screenFragment5 != null && screenFragment5.G != (z6 = this.U)) {
                ng.g gVar3 = screenFragment5.E;
                if (gVar3 != null) {
                    gVar3.setElevation(z6 ? 0.0f : PixelUtil.toPixelFromDIP(4.0f));
                }
                ng.g gVar4 = screenFragment5.E;
                if (gVar4 != null) {
                    gVar4.setStateListAnimator(null);
                }
                screenFragment5.G = z6;
            }
            b0 screenFragment6 = getScreenFragment();
            if (screenFragment6 != null && screenFragment6.H != (z5 = this.G)) {
                if (nm.l.c(screenFragment6.a())) {
                    Intrinsics.checkNotNullParameter("ScreenStackFragment", "tag");
                    Intrinsics.checkNotNullParameter("Skipping behavior update: Cannot override BottomSheetBehavior on a FormSheet.", "msg");
                } else {
                    ViewGroup.LayoutParams layoutParams = screenFragment6.a().getLayoutParams();
                    Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type androidx.coordinatorlayout.widget.CoordinatorLayout.LayoutParams");
                    ((v0.d) layoutParams).b(z5 ? null : new AppBarLayout$ScrollingViewBehavior());
                }
                screenFragment6.H = z5;
            }
            f6709i0.getClass();
            TextView l6 = ha.k.l(toolbar);
            int i6 = this.N;
            if (i6 != 0) {
                toolbar.setTitleTextColor(i6);
            }
            if (l6 != null) {
                String str2 = this.O;
                if (str2 != null || this.R > 0) {
                    int i10 = this.R;
                    AssetManager assets = getContext().getAssets();
                    Intrinsics.checkNotNullExpressionValue(assets, "getAssets(...)");
                    l6.setTypeface(ReactTypefaceUtils.applyStyles(null, 0, i10, str2, assets));
                }
                float f2 = this.Q;
                if (f2 > 0.0f) {
                    l6.setTextSize(f2);
                }
            }
            Integer num = this.S;
            if (num != null) {
                toolbar.setBackgroundColor(num.intValue());
            }
            if (this.f6711b0 != 0 && (navigationIcon = toolbar.getNavigationIcon()) != null) {
                navigationIcon.setColorFilter(new PorterDuffColorFilter(this.f6711b0, PorterDuff.Mode.SRC_ATOP));
            }
            for (int childCount = toolbar.getChildCount() - 1; -1 < childCount; childCount--) {
                if (toolbar.getChildAt(childCount) instanceof g0) {
                    toolbar.removeViewAt(childCount);
                }
            }
            b0 screenFragment7 = getScreenFragment();
            boolean z10 = (screenFragment7 == null || (bVar = screenFragment7.L) == null || bVar.f967p0) ? false : true;
            ArrayList arrayList = this.f6718y;
            int size = arrayList.size();
            for (int i11 = 0; i11 < size; i11++) {
                Object obj = arrayList.get(i11);
                Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
                g0 g0Var = (g0) obj;
                f0 type = g0Var.getType();
                if (type != f0.f6753w && g0Var.G != z10) {
                    g0Var.setHiddenBySearchBar$react_native_screens_release(z10);
                }
                if (type == f0.f6752v) {
                    View childAt = g0Var.getChildAt(0);
                    ImageView imageView = childAt instanceof ImageView ? (ImageView) childAt : null;
                    if (imageView == null) {
                        throw new JSApplicationIllegalArgumentException("Back button header config view should have Image as first child");
                    }
                    supportActionBar.o(imageView.getDrawable());
                } else {
                    s3 s3Var = new s3(-1);
                    int ordinal = type.ordinal();
                    if (ordinal == 0) {
                        if (!this.a0) {
                            toolbar.setNavigationIcon((Drawable) null);
                        }
                        toolbar.setTitle((CharSequence) null);
                        s3Var.a = 8388611;
                    } else if (ordinal == 1) {
                        ((ViewGroup.MarginLayoutParams) s3Var).width = -1;
                        s3Var.a = 1;
                        toolbar.setTitle((CharSequence) null);
                    } else if (ordinal == 2) {
                        s3Var.a = 8388613;
                    }
                    g0Var.setLayoutParams(s3Var);
                    toolbar.addView(g0Var);
                }
            }
            e0Var.a(this, getScreen());
        }
    }

    public final int getConfigSubviewsCount() {
        return this.f6718y.size();
    }

    public final boolean getConsumeBottomInset() {
        return ((Boolean) this.K.getValue(this, f6710j0[3])).booleanValue();
    }

    public final boolean getConsumeLeftInset() {
        return ((Boolean) this.I.getValue(this, f6710j0[1])).booleanValue();
    }

    public final boolean getConsumeRightInset() {
        return ((Boolean) this.J.getValue(this, f6710j0[2])).booleanValue();
    }

    public final boolean getConsumeTopInset() {
        return ((Boolean) this.H.getValue(this, f6710j0[0])).booleanValue();
    }

    @NotNull
    public final e0 getHeaderHeightUpdateProxy() {
        return this.h0;
    }

    public final boolean getLegacyTopInsetBehavior() {
        return ((Boolean) this.L.getValue(this, f6710j0[4])).booleanValue();
    }

    @Override // com.facebook.react.uimanager.ReactPointerEventsView
    @NotNull
    public PointerEvents getPointerEvents() {
        return (PointerEvents) this.f6717x.f6770e;
    }

    public final int getPreferredContentInsetEnd() {
        return this.f6713d0;
    }

    public final int getPreferredContentInsetStart() {
        return this.f6713d0;
    }

    public final int getPreferredContentInsetStartWithNavigation() {
        if (this.f6716g0) {
            return 0;
        }
        return this.f6714e0;
    }

    public final b0 getScreenFragment() {
        ViewParent parent = getParent();
        if (!(parent instanceof Screen)) {
            return null;
        }
        Fragment fragment = ((Screen) parent).getFragment();
        if (fragment instanceof b0) {
            return (b0) fragment;
        }
        return null;
    }

    @NotNull
    public final d getToolbar() {
        return this.E;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.f6712c0 = true;
        int surfaceId = UIManagerHelper.getSurfaceId(this);
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, getId(), 1));
        }
        d();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.f6712c0 = false;
        int surfaceId = UIManagerHelper.getSurfaceId(this);
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(new k4.k(surfaceId, getId(), 3));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }

    public final void setBackButtonInCustomView(boolean z5) {
        this.a0 = z5;
    }

    public final void setBackgroundColor(Integer num) {
        this.S = num;
    }

    public final void setConsumeBottomInset(boolean z5) {
        this.K.setValue(this, f6710j0[3], Boolean.valueOf(z5));
    }

    public final void setConsumeLeftInset(boolean z5) {
        this.I.setValue(this, f6710j0[1], Boolean.valueOf(z5));
    }

    public final void setConsumeRightInset(boolean z5) {
        this.J.setValue(this, f6710j0[2], Boolean.valueOf(z5));
    }

    public final void setConsumeTopInset(boolean z5) {
        this.H.setValue(this, f6710j0[0], Boolean.valueOf(z5));
    }

    public final void setDirection(String str) {
        this.P = str;
    }

    public final void setHeaderHidden(boolean z5) {
        this.F = z5;
    }

    public final void setHeaderTranslucent(boolean z5) {
        this.G = z5;
    }

    public final void setHidden(boolean z5) {
        this.F = z5;
    }

    public final void setHideBackButton(boolean z5) {
        this.T = z5;
    }

    public final void setHideShadow(boolean z5) {
        this.U = z5;
    }

    public final void setLegacyTopInsetBehavior(boolean z5) {
        this.L.setValue(this, f6710j0[4], Boolean.valueOf(z5));
    }

    public final void setTintColor(int i5) {
        this.f6711b0 = i5;
    }

    public final void setTitle(String str) {
        this.M = str;
    }

    public final void setTitleColor(int i5) {
        this.N = i5;
    }

    public final void setTitleEmpty(boolean z5) {
        this.f6716g0 = z5;
    }

    public final void setTitleFontFamily(String str) {
        this.O = str;
    }

    public final void setTitleFontSize(float f2) {
        this.Q = f2;
    }

    public final void setTitleFontWeight(String str) {
        this.R = ReactTypefaceUtils.parseFontWeight(str);
    }

    public final void setTranslucent(boolean z5) {
        this.G = z5;
    }
}
