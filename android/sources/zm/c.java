package zm;

import android.graphics.drawable.Drawable;
import bn.p;
import bn.t;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerListener;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.view.ReactViewGroup;
import fo.n;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;
import ys.l;

/* loaded from: classes3.dex */
public final class c extends ReactViewGroup implements g, h, an.a, UIManagerListener {
    public static final /* synthetic */ KProperty[] h0 = {com.discord.chat.bridge.botuikit.a.p(c.class, "type", "getType()Lcom/swmansion/rnscreens/gamma/stack/header/config/StackHeaderType;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, AlertFragment.ARG_TITLE, "getTitle()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, ViewProps.HIDDEN, "getHidden()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "transparent", "getTransparent()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "backButtonHidden", "getBackButtonHidden()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "backButtonTintColorNormal", "getBackButtonTintColorNormal()Ljava/lang/Integer;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "backButtonTintColorPressed", "getBackButtonTintColorPressed()Ljava/lang/Integer;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "backButtonTintColorFocused", "getBackButtonTintColorFocused()Ljava/lang/Integer;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "backButtonIcon", "getBackButtonIcon()Landroid/graphics/drawable/Drawable;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "scrollFlagScroll", "getScrollFlagScroll()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "scrollFlagEnterAlways", "getScrollFlagEnterAlways()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "scrollFlagEnterAlwaysCollapsed", "getScrollFlagEnterAlwaysCollapsed()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "scrollFlagExitUntilCollapsed", "getScrollFlagExitUntilCollapsed()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "scrollFlagSnap", "getScrollFlagSnap()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "toolbarMenu", "getToolbarMenu()Lcom/swmansion/rnscreens/gamma/stack/header/toolbar/StackHeaderToolbarMenuConfig;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "toolbarMenuGroupDividerEnabled", "getToolbarMenuGroupDividerEnabled()Z", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "backgroundSubview", "getBackgroundSubview()Lcom/swmansion/rnscreens/gamma/stack/header/subview/StackHeaderSubview;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "leadingSubview", "getLeadingSubview()Lcom/swmansion/rnscreens/gamma/stack/header/subview/StackHeaderSubview;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "centerSubview", "getCenterSubview()Lcom/swmansion/rnscreens/gamma/stack/header/subview/StackHeaderSubview;", 0), com.discord.chat.bridge.botuikit.a.p(c.class, "trailingSubview", "getTrailingSubview()Lcom/swmansion/rnscreens/gamma/stack/header/subview/StackHeaderSubview;", 0)};
    public final b E;
    public final b F;
    public final b G;
    public final b H;
    public final b I;
    public final b J;
    public final b K;
    public final b L;
    public final b M;
    public final b N;
    public final b O;
    public final b P;
    public String Q;
    public String R;
    public final um.f S;
    public Map T;
    public Object U;
    public Map V;
    public final b W;
    public final b a0;

    /* renamed from: b0, reason: collision with root package name */
    public final b f21285b0;

    /* renamed from: c0, reason: collision with root package name */
    public final b f21286c0;

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f21287d;

    /* renamed from: d0, reason: collision with root package name */
    public final qm.b f21288d0;

    /* renamed from: e, reason: collision with root package name */
    public f f21289e;

    /* renamed from: e0, reason: collision with root package name */
    public d f21290e0;

    /* renamed from: f0, reason: collision with root package name */
    public final t f21291f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f21292g0;

    /* renamed from: i, reason: collision with root package name */
    public int f21293i;

    /* renamed from: v, reason: collision with root package name */
    public final b f21294v;

    /* renamed from: w, reason: collision with root package name */
    public final b f21295w;

    /* renamed from: x, reason: collision with root package name */
    public final b f21296x;

    /* renamed from: y, reason: collision with root package name */
    public final b f21297y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f21287d = reactContext;
        ki.b.w(UIManagerHelper.INSTANCE, reactContext).addUIManagerEventListener(this);
        this.f21293i = l.a;
        i iVar = i.f21298d;
        this.f21294v = new b(this, 10);
        this.f21295w = new b(this, 12);
        this.f21296x = new b(this, 13);
        this.f21297y = new b(this, 14);
        this.E = new b(this, 15);
        this.F = new b(this, 16, false);
        this.G = new b(this, 17, false);
        this.H = new b(this, 18, false);
        this.I = new b(this, 19, false);
        this.J = new b(this, 0);
        this.K = new b(this, 1);
        this.L = new b(this, 2);
        this.M = new b(this, 3);
        this.N = new b(this, 4);
        m0 m0Var = m0.f13512d;
        this.O = new b(new bn.e(m0Var, m0Var), this);
        this.P = new b(this, 6);
        this.S = new um.f();
        this.T = v0.d();
        this.U = v0.d();
        this.V = v0.d();
        this.W = new b(this, 7, false);
        this.a0 = new b(this, 8, false);
        this.f21285b0 = new b(this, 9, false);
        this.f21286c0 = new b(this, 11, false);
        this.f21288d0 = new qm.b(true);
        this.f21291f0 = new t(new a(this), new a(this));
    }

    private final List<an.c> getListOfSubviews() {
        an.c[] elements = {m1306getBackgroundSubview(), m1308getLeadingSubview(), m1307getCenterSubview(), m1309getTrailingSubview()};
        Intrinsics.checkNotNullParameter(elements, "elements");
        return x.r(elements);
    }

    private void setBackgroundSubview(an.c cVar) {
        this.W.setValue(this, h0[16], cVar);
    }

    private void setCenterSubview(an.c cVar) {
        this.f21285b0.setValue(this, h0[18], cVar);
    }

    private void setLeadingSubview(an.c cVar) {
        this.a0.setValue(this, h0[17], cVar);
    }

    private void setTrailingSubview(an.c cVar) {
        this.f21286c0.setValue(this, h0[19], cVar);
    }

    public final void c(an.c headerSubview) {
        Intrinsics.checkNotNullParameter(headerSubview, "headerSubview");
        int ordinal = headerSubview.getType().ordinal();
        if (ordinal == 0) {
            setBackgroundSubview(headerSubview);
        } else if (ordinal == 1) {
            setLeadingSubview(headerSubview);
        } else if (ordinal == 2) {
            setCenterSubview(headerSubview);
        } else {
            if (ordinal != 3) {
                throw new n();
            }
            setTrailingSubview(headerSubview);
        }
        headerSubview.setOnStackHeaderSubviewChangeListener$react_native_screens_release(new WeakReference<>(this));
    }

    public final void d(int i5) {
        m1305setInvalidationFlagsgLpVZxs((~i5) & m1304getInvalidationFlags2a6ZA60());
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didDispatchMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
        this.f21292g0 = false;
        e();
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didScheduleMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    public final void e() {
        f fVar;
        if (this.f21289e == null || m1304getInvalidationFlags2a6ZA60() == 0 || (fVar = this.f21289e) == null) {
            return;
        }
        Intrinsics.checkNotNullParameter(this, "config");
        ((ym.h) ((qd.f) fVar).f16831e).w(this);
    }

    public final an.c f(int i5) {
        return (an.c) CollectionsKt.M(i5, getListOfSubviews());
    }

    public final void g(int i5) {
        m1305setInvalidationFlagsgLpVZxs(i5 | m1304getInvalidationFlags2a6ZA60());
    }

    public final String getBackButtonDrawableIconResourceName$react_native_screens_release() {
        return this.Q;
    }

    public boolean getBackButtonHidden() {
        return ((Boolean) this.E.getValue(this, h0[4])).booleanValue();
    }

    public Drawable getBackButtonIcon() {
        return (Drawable) this.I.getValue(this, h0[8]);
    }

    public final String getBackButtonImageIconUri$react_native_screens_release() {
        return this.R;
    }

    public Integer getBackButtonTintColorFocused() {
        return (Integer) this.H.getValue(this, h0[7]);
    }

    public Integer getBackButtonTintColorNormal() {
        return (Integer) this.F.getValue(this, h0[5]);
    }

    public Integer getBackButtonTintColorPressed() {
        return (Integer) this.G.getValue(this, h0[6]);
    }

    public final int getConfigSubviewsCount$react_native_screens_release() {
        return getListOfSubviews().size();
    }

    @NotNull
    public final d getEventEmitter$react_native_screens_release() {
        d dVar = this.f21290e0;
        if (dVar != null) {
            return dVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("eventEmitter");
        return null;
    }

    public boolean getHidden() {
        return ((Boolean) this.f21296x.getValue(this, h0[2])).booleanValue();
    }

    /* renamed from: getInvalidationFlags-2a6ZA60, reason: not valid java name */
    public int m1304getInvalidationFlags2a6ZA60() {
        return this.f21293i;
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.f21287d;
    }

    public boolean getScrollFlagEnterAlways() {
        return ((Boolean) this.K.getValue(this, h0[10])).booleanValue();
    }

    public boolean getScrollFlagEnterAlwaysCollapsed() {
        return ((Boolean) this.L.getValue(this, h0[11])).booleanValue();
    }

    public boolean getScrollFlagExitUntilCollapsed() {
        return ((Boolean) this.M.getValue(this, h0[12])).booleanValue();
    }

    public boolean getScrollFlagScroll() {
        return ((Boolean) this.J.getValue(this, h0[9])).booleanValue();
    }

    public boolean getScrollFlagSnap() {
        return ((Boolean) this.N.getValue(this, h0[13])).booleanValue();
    }

    public final StateWrapper getStateWrapper$react_native_screens_release() {
        return this.f21288d0.f16905b;
    }

    @NotNull
    public String getTitle() {
        return (String) this.f21295w.getValue(this, h0[1]);
    }

    @NotNull
    public bn.e getToolbarMenu() {
        return (bn.e) this.O.getValue(this, h0[14]);
    }

    public boolean getToolbarMenuGroupDividerEnabled() {
        return ((Boolean) this.P.getValue(this, h0[15])).booleanValue();
    }

    @NotNull
    public final Map<String, p> getToolbarMenuItemIconSourceMap$react_native_screens_release() {
        return this.T;
    }

    public boolean getTransparent() {
        return ((Boolean) this.f21297y.getValue(this, h0[3])).booleanValue();
    }

    @NotNull
    public i getType() {
        return (i) this.f21294v.getValue(this, h0[0]);
    }

    public final void h(an.c headerSubview) {
        Intrinsics.checkNotNullParameter(headerSubview, "headerSubview");
        headerSubview.setOnStackHeaderSubviewChangeListener$react_native_screens_release(null);
        int ordinal = headerSubview.getType().ordinal();
        if (ordinal == 0) {
            setBackgroundSubview(null);
            return;
        }
        if (ordinal == 1) {
            setLeadingSubview(null);
        } else if (ordinal == 2) {
            setCenterSubview(null);
        } else {
            if (ordinal != 3) {
                throw new n();
            }
            setTrailingSubview(null);
        }
    }

    public final void setBackButtonDrawableIconResourceName$react_native_screens_release(String str) {
        this.Q = str;
    }

    public void setBackButtonHidden$react_native_screens_release(boolean z5) {
        this.E.setValue(this, h0[4], Boolean.valueOf(z5));
    }

    public void setBackButtonIcon$react_native_screens_release(Drawable drawable) {
        this.I.setValue(this, h0[8], drawable);
    }

    public final void setBackButtonImageIconUri$react_native_screens_release(String str) {
        this.R = str;
    }

    public void setBackButtonTintColorFocused$react_native_screens_release(Integer num) {
        this.H.setValue(this, h0[7], num);
    }

    public void setBackButtonTintColorNormal$react_native_screens_release(Integer num) {
        this.F.setValue(this, h0[5], num);
    }

    public void setBackButtonTintColorPressed$react_native_screens_release(Integer num) {
        this.G.setValue(this, h0[6], num);
    }

    public void setConfigurationObserver(f fVar) {
        this.f21289e = fVar;
    }

    public final void setEventEmitter$react_native_screens_release(@NotNull d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<set-?>");
        this.f21290e0 = dVar;
    }

    public void setHidden$react_native_screens_release(boolean z5) {
        this.f21296x.setValue(this, h0[2], Boolean.valueOf(z5));
    }

    /* renamed from: setInvalidationFlags-gLpVZxs, reason: not valid java name */
    public void m1305setInvalidationFlagsgLpVZxs(int i5) {
        this.f21293i = i5;
    }

    public void setScrollFlagEnterAlways$react_native_screens_release(boolean z5) {
        this.K.setValue(this, h0[10], Boolean.valueOf(z5));
    }

    public void setScrollFlagEnterAlwaysCollapsed$react_native_screens_release(boolean z5) {
        this.L.setValue(this, h0[11], Boolean.valueOf(z5));
    }

    public void setScrollFlagExitUntilCollapsed$react_native_screens_release(boolean z5) {
        this.M.setValue(this, h0[12], Boolean.valueOf(z5));
    }

    public void setScrollFlagScroll$react_native_screens_release(boolean z5) {
        this.J.setValue(this, h0[9], Boolean.valueOf(z5));
    }

    public void setScrollFlagSnap$react_native_screens_release(boolean z5) {
        this.N.setValue(this, h0[13], Boolean.valueOf(z5));
    }

    public final void setStateWrapper$react_native_screens_release(StateWrapper stateWrapper) {
        this.f21288d0.f16905b = stateWrapper;
    }

    public void setTitle$react_native_screens_release(@NotNull String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.f21295w.setValue(this, h0[1], str);
    }

    public void setToolbarMenu$react_native_screens_release(@NotNull bn.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<set-?>");
        this.O.setValue(this, h0[14], eVar);
    }

    public void setToolbarMenuGroupDividerEnabled$react_native_screens_release(boolean z5) {
        this.P.setValue(this, h0[15], Boolean.valueOf(z5));
    }

    public final void setToolbarMenuItemIconSourceMap$react_native_screens_release(@NotNull Map<String, p> map) {
        Intrinsics.checkNotNullParameter(map, "<set-?>");
        this.T = map;
    }

    public void setTransparent$react_native_screens_release(boolean z5) {
        this.f21297y.setValue(this, h0[3], Boolean.valueOf(z5));
    }

    public void setType$react_native_screens_release(@NotNull i iVar) {
        Intrinsics.checkNotNullParameter(iVar, "<set-?>");
        this.f21294v.setValue(this, h0[0], iVar);
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willDispatchViewUpdates(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
        this.f21292g0 = true;
    }

    /* renamed from: getBackgroundSubview, reason: merged with bridge method [inline-methods] */
    public an.c m1306getBackgroundSubview() {
        return (an.c) this.W.getValue(this, h0[16]);
    }

    /* renamed from: getCenterSubview, reason: merged with bridge method [inline-methods] */
    public an.c m1307getCenterSubview() {
        return (an.c) this.f21285b0.getValue(this, h0[18]);
    }

    /* renamed from: getLeadingSubview, reason: merged with bridge method [inline-methods] */
    public an.c m1308getLeadingSubview() {
        return (an.c) this.a0.getValue(this, h0[17]);
    }

    /* renamed from: getTrailingSubview, reason: merged with bridge method [inline-methods] */
    public an.c m1309getTrailingSubview() {
        return (an.c) this.f21286c0.getValue(this, h0[19]);
    }
}
