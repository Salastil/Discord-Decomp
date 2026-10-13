package hn;

import a5.h0;
import android.content.res.Configuration;
import android.os.Build;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowInsets;
import android.widget.FrameLayout;
import android.widget.ScrollView;
import androidx.appcompat.view.ContextThemeWrapper;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.o1;
import androidx.core.view.q1;
import androidx.core.view.r1;
import androidx.core.view.s1;
import androidx.core.view.t1;
import androidx.core.view.u1;
import androidx.core.view.v0;
import androidx.core.widget.NestedScrollView;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.m1;
import com.discord.R;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.runtime.r;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.swmansion.rnscreens.ScreenStack;
import e4.m;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class f extends FrameLayout implements sm.a, rm.d, kn.c, mn.c, View.OnLayoutChangeListener {
    public static final /* synthetic */ KProperty[] R = {com.discord.chat.bridge.botuikit.a.p(f.class, "tabBarHidden", "getTabBarHidden$react_native_screens_release()Z", 0)};
    public boolean E;
    public FragmentManager F;
    public final ContextThemeWrapper G;
    public final a H;
    public final u4.b I;
    public final rm.b J;
    public final h0 K;
    public boolean L;
    public final FrameLayout M;
    public final m N;
    public final in.b O;
    public mn.d P;
    public final an.b Q;

    /* renamed from: d, reason: collision with root package name */
    public h f10122d;

    /* renamed from: e, reason: collision with root package name */
    public h f10123e;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f10124i;

    /* renamed from: v, reason: collision with root package name */
    public final qd.f f10125v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f10126w;

    /* renamed from: x, reason: collision with root package name */
    public final g f10127x;

    /* renamed from: y, reason: collision with root package name */
    public l f10128y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(ThemedReactContext context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        p9.d dVar = um.i.a;
        p9.d dVar2 = um.i.a;
        int i5 = dVar2.f16329e;
        int i6 = i5 + 2;
        dVar2.f16329e = i6;
        if (i6 % 10 == 1) {
            dVar2.f16329e = i5 + 4;
        }
        setId(i5);
        h hVar = h.f10131c;
        this.f10122d = hVar;
        this.f10123e = hVar;
        ArrayList arrayList = new ArrayList();
        this.f10124i = arrayList;
        this.f10125v = new qd.f(4);
        g gVar = new g();
        gVar.a = false;
        gVar.f10129b = false;
        gVar.f10130c = false;
        this.f10127x = gVar;
        ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, R.style.Theme_Material3_DayNight_NoActionBar);
        this.G = contextThemeWrapper;
        a aVar = new a(contextThemeWrapper, this);
        aVar.setLayoutParams(new FrameLayout.LayoutParams(-1, -2, 80));
        this.H = aVar;
        this.I = new u4.b(14, this);
        this.J = new rm.b();
        this.K = new h0(2, (byte) 0);
        FrameLayout frameLayout = new FrameLayout(context);
        frameLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        int i10 = dVar2.f16329e;
        int i11 = i10 + 2;
        dVar2.f16329e = i11;
        if (i11 % 10 == 1) {
            dVar2.f16329e = i10 + 4;
        }
        frameLayout.setId(i10);
        this.M = frameLayout;
        this.N = new m(aVar, arrayList);
        this.O = new in.b(aVar, arrayList);
        this.Q = new an.b(this);
        addView(frameLayout);
        addView(aVar);
        aVar.setOnItemSelectedListener(new hc.m(8, this));
        gVar.a = true;
        gVar.f10129b = true;
        gVar.f10130c = true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:48:0x013f, code lost:
    
        if (r2.popToRoot() != false) goto L67;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean d(f fVar, MenuItem menuItem) {
        final b actionOrigin;
        ViewGroup j;
        h0 h0Var = fVar.K;
        String msg = "Item selected " + menuItem;
        Intrinsics.checkNotNullParameter("TabsHost", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
        ScreenStack screenStack = null;
        kn.e selectedTab$react_native_screens_release = !fVar.f10122d.a() ? fVar.getSelectedTab$react_native_screens_release() : null;
        int itemId = menuItem.getItemId();
        ArrayList arrayList = fVar.f10124i;
        if (itemId < 1) {
            throw new IllegalStateException("[RNScreens] MenuItem id must not be less than 1");
        }
        kn.e eVar = (kn.e) CollectionsKt.M(itemId - 1, arrayList);
        if (eVar == null) {
            throw new IllegalStateException(s4.h.e(menuItem.getItemId(), "[RNScreens] Can not select item with id: ", " - associated fragment does not exist").toString());
        }
        kn.b bVar = eVar.f13463d;
        final boolean z5 = false;
        final boolean z6 = eVar == selectedTab$react_native_screens_release;
        if (fVar.E) {
            l lVar = fVar.f10128y;
            if (lVar == null) {
                throw new IllegalStateException("[RNScreens] Attempt to require nullish pendingStateUpdateRequest");
            }
            actionOrigin = lVar.f10141c;
        } else {
            actionOrigin = b.f10114d;
        }
        if (!z6 && actionOrigin == b.f10114d && bVar.getPreventNativeSelection()) {
            h currentNavState = fVar.f10122d;
            String preventedScreenKey = bVar.getRequireScreenKey$react_native_screens_release();
            h0Var.getClass();
            Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
            Intrinsics.checkNotNullParameter(preventedScreenKey, "preventedScreenKey");
            h0Var.n(new com.discord.permissions.b(currentNavState, preventedScreenKey, 7));
            return false;
        }
        if (!fVar.f10122d.a()) {
            kn.e selectedTab$react_native_screens_release2 = fVar.getSelectedTab$react_native_screens_release();
            if (eVar == selectedTab$react_native_screens_release2) {
                h hVar = new h(fVar.f10122d.a, fVar.f10122d.f10132b + 1);
                fVar.f10122d = hVar;
                if (actionOrigin != b.f10115e) {
                    fVar.f10123e = hVar;
                }
            } else {
                h hVar2 = new h(bVar.getRequireScreenKey$react_native_screens_release(), fVar.f10122d.f10132b + 1);
                fVar.f10122d = hVar2;
                if (actionOrigin != b.f10115e) {
                    fVar.f10123e = hVar2;
                }
                androidx.fragment.app.a q5 = com.facebook.imagepipeline.nativecode.c.q(fVar.getRequireFragmentManager());
                q5.e(selectedTab$react_native_screens_release2);
                q5.b(new m1(eVar, 7));
                q5.d();
            }
        } else {
            if (!fVar.E || fVar.f10128y == null) {
                throw new IllegalStateException("Check failed.");
            }
            String requireScreenKey$react_native_screens_release = bVar.getRequireScreenKey$react_native_screens_release();
            if (!fVar.f10122d.a()) {
                throw new IllegalStateException("[RNScreens] Navigation state is already initialized!");
            }
            fVar.f10122d = new h(requireScreenKey$react_native_screens_release, 0);
            fVar.e(eVar);
        }
        if (z6) {
            kn.b view = ((f) fVar.I.f18810e).getSelectedTab$react_native_screens_release().f13463d;
            if (view.getShouldUseRepeatedTabSelectionPopToRootSpecialEffect()) {
                Intrinsics.checkNotNullParameter(view, "view");
                KeyEvent.Callback callback = view;
                while (true) {
                    if (callback != null) {
                        if (!(callback instanceof ScreenStack)) {
                            if (!(callback instanceof ViewGroup)) {
                                break;
                            }
                            ViewGroup viewGroup = (ViewGroup) callback;
                            if (viewGroup.getChildCount() == 0) {
                                break;
                            }
                            callback = viewGroup.getChildAt(0);
                        } else {
                            screenStack = (ScreenStack) callback;
                            break;
                        }
                    } else {
                        break;
                    }
                }
                if (screenStack != null) {
                }
            }
            if (view.getShouldUseRepeatedTabSelectionScrollToTopSpecialEffect() && (j = view.f13458i.j(view)) != null && j.getScrollY() > 0) {
                if (j instanceof ScrollView) {
                    ScrollView scrollView = (ScrollView) j;
                    scrollView.smoothScrollTo(scrollView.getScrollX(), 0);
                } else if (j instanceof NestedScrollView) {
                    NestedScrollView nestedScrollView = (NestedScrollView) j;
                    nestedScrollView.smoothScrollTo(nestedScrollView.getScrollX(), 0);
                }
                z5 = true;
            }
        }
        if (!z6) {
            fVar.f10127x.f10129b = true;
        }
        final h navState = fVar.f10122d;
        h0Var.getClass();
        Intrinsics.checkNotNullParameter(navState, "navState");
        Intrinsics.checkNotNullParameter(actionOrigin, "actionOrigin");
        h0Var.n(new Function1() { // from class: hn.j
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                i observer = (i) obj;
                Intrinsics.checkNotNullParameter(observer, "observer");
                in.a aVar = (in.a) observer;
                aVar.getClass();
                h navState2 = h.this;
                Intrinsics.checkNotNullParameter(navState2, "navState");
                b actionOrigin2 = actionOrigin;
                Intrinsics.checkNotNullParameter(actionOrigin2, "actionOrigin");
                in.c eventEmitter$react_native_screens_release = aVar.getEventEmitter$react_native_screens_release();
                String selectedScreenKey = navState2.a;
                int i5 = navState2.f10132b;
                eventEmitter$react_native_screens_release.getClass();
                Intrinsics.checkNotNullParameter(selectedScreenKey, "selectedScreenKey");
                Intrinsics.checkNotNullParameter(actionOrigin2, "actionOrigin");
                ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new jn.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, selectedScreenKey, i5, z6, z5, actionOrigin2));
                return Unit.a;
            }
        });
        return true;
    }

    private final FragmentManager getRequireFragmentManager() {
        FragmentManager fragmentManager = this.F;
        if (fragmentManager != null) {
            return fragmentManager;
        }
        throw new IllegalStateException("[RNScreens] Attempt to use nullish FragmentManager");
    }

    private final Integer getSelectedTabsScreenFragmentId() {
        Iterator it = this.f10124i.iterator();
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            }
            if (Intrinsics.areEqual(((kn.e) it.next()).f13463d.getRequireScreenKey$react_native_screens_release(), this.f10122d.a)) {
                break;
            }
            i5++;
        }
        Integer valueOf = Integer.valueOf(i5);
        if (i5 != -1) {
            return valueOf;
        }
        return null;
    }

    @Override // rm.d
    public final void a(rm.c listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.J.a(listener);
    }

    @Override // sm.a
    public final ViewGroup b() {
        kn.b bVar = getSelectedTab$react_native_screens_release().f13463d;
        return bVar.f13458i.j(bVar);
    }

    @Override // rm.d
    public final void c(rm.c listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.J.c(listener);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final WindowInsets dispatchApplyWindowInsets(WindowInsets windowInsets) {
        WindowInsets f2;
        if (!(windowInsets != null ? windowInsets.isConsumed() : true)) {
            Iterator it = new v0(this).iterator();
            while (it.hasNext()) {
                View view = (View) it.next();
                if (view == this.H) {
                    if (this.L) {
                        f2 = windowInsets;
                    } else {
                        WindowInsetsCompat g6 = WindowInsetsCompat.g(this, windowInsets);
                        Intrinsics.checkNotNullExpressionValue(g6, "toWindowInsetsCompat(...)");
                        int i5 = Build.VERSION.SDK_INT;
                        u1 t1Var = i5 >= 34 ? new t1(g6) : i5 >= 31 ? new s1(g6) : i5 >= 30 ? new r1(g6) : i5 >= 29 ? new q1(g6) : new o1(g6);
                        t1Var.c(8, Insets.f1511e);
                        f2 = t1Var.b().f();
                    }
                    ((a) view).dispatchApplyWindowInsets(f2);
                } else {
                    view.dispatchApplyWindowInsets(windowInsets);
                }
            }
        }
        return windowInsets;
    }

    public final void e(kn.e eVar) {
        androidx.fragment.app.a q5 = com.facebook.imagepipeline.nativecode.c.q(getRequireFragmentManager());
        Iterator it = this.f10124i.iterator();
        while (it.hasNext()) {
            kn.e eVar2 = (kn.e) it.next();
            q5.f(this.M.getId(), eVar2, null, 1);
            q5.e(eVar2);
        }
        q5.b(new m1(eVar, 7));
        q5.d();
    }

    public final void f() {
        g gVar = this.f10127x;
        if ((gVar.a || gVar.f10129b || gVar.f10130c) && isAttachedToWindow()) {
            boolean z5 = gVar.f10130c;
            ArrayList arrayList = this.f10124i;
            a aVar = this.H;
            if (z5) {
                gVar.f10130c = false;
                Menu menu = aVar.getMenu();
                Intrinsics.checkNotNullExpressionValue(menu, "getMenu(...)");
                if (menu.size() != arrayList.size()) {
                    aVar.getMenu().clear();
                }
                Iterator it = arrayList.iterator();
                int i5 = 0;
                while (it.hasNext()) {
                    Object next = it.next();
                    int i6 = i5 + 1;
                    if (i5 < 0) {
                        c0.k();
                        throw null;
                    }
                    Menu menu2 = aVar.getMenu();
                    Intrinsics.checkNotNullExpressionValue(menu2, "getMenu(...)");
                    kn.b tabsScreen = ((kn.e) next).f13463d;
                    Intrinsics.checkNotNullParameter(menu2, "<this>");
                    Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
                    MenuItem findItem = menu2.findItem(i6);
                    if (findItem == null) {
                        findItem = menu2.add(0, i6, 0, tabsScreen.getTabTitle());
                        Intrinsics.checkNotNullExpressionValue(findItem, "add(...)");
                    }
                    int itemId = findItem.getItemId();
                    if (itemId < 1) {
                        throw new IllegalStateException("[RNScreens] MenuItem id must not be less than 1");
                    }
                    if (itemId - 1 != i5) {
                        throw new IllegalStateException("[RNScreens] Illegal state: menu items are shuffled");
                    }
                    i5 = i6;
                }
            }
            if (gVar.a) {
                gVar.a = false;
                l rejectedRequest = this.f10128y;
                if (rejectedRequest == null) {
                    Intrinsics.checkNotNullParameter("TabsContainer", "tag");
                    Intrinsics.checkNotNullParameter("TabsContainer::performSelectedTabUpdate called w/o pending operation; skipping update", "msg");
                } else {
                    if (rejectedRequest == null) {
                        throw new IllegalStateException("[RNScreens] Attempt to require nullish pendingStateUpdateRequest");
                    }
                    String str = rejectedRequest.a;
                    kn.e g6 = g(str);
                    if (g6 == null) {
                        throw new IllegalStateException(s4.h.f("[RNScreens] Requested fragment for key: ", str, " does not exist").toString());
                    }
                    Iterator it2 = arrayList.iterator();
                    int i10 = 0;
                    while (true) {
                        if (!it2.hasNext()) {
                            i10 = -1;
                            break;
                        } else if (((kn.e) it2.next()) == g6) {
                            break;
                        } else {
                            i10++;
                        }
                    }
                    Integer valueOf = Integer.valueOf(i10);
                    if (i10 == -1) {
                        valueOf = null;
                    }
                    Integer valueOf2 = valueOf != null ? Integer.valueOf(valueOf.intValue() + 1) : null;
                    if (valueOf2 == null) {
                        throw new IllegalStateException(a3.e.k("[RNScreens] Failed to find Menu Item for screenKey: ", str).toString());
                    }
                    int intValue = valueOf2.intValue();
                    boolean z6 = this.f10126w;
                    h0 h0Var = this.K;
                    if (!z6 || this.f10122d.a() || this.f10123e.a() || rejectedRequest.f10140b >= this.f10123e.f10132b) {
                        if (aVar.getSelectedItemId() != intValue || this.f10122d.a()) {
                            this.E = true;
                            b actionOrigin = rejectedRequest.f10141c;
                            Intrinsics.checkNotNullParameter(actionOrigin, "actionOrigin");
                            if (actionOrigin == b.f10114d) {
                                throw new IllegalArgumentException("[RNScreens] User-triggered actions should be processed via regular setSelectedItemId callback");
                            }
                            aVar.f10113y = actionOrigin;
                            aVar.setSelectedItemId(intValue);
                            aVar.f10113y = null;
                            this.E = false;
                        } else {
                            h currentNavState = this.f10122d;
                            k reason = k.f10138e;
                            h0Var.getClass();
                            Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
                            Intrinsics.checkNotNullParameter(rejectedRequest, "rejectedRequest");
                            Intrinsics.checkNotNullParameter(reason, "reason");
                            h0Var.n(new com.discord.age_assurance.a(currentNavState, rejectedRequest, reason, 13));
                        }
                        this.f10128y = null;
                    } else {
                        h currentNavState2 = this.f10122d;
                        k reason2 = k.f10137d;
                        h0Var.getClass();
                        Intrinsics.checkNotNullParameter(currentNavState2, "currentNavState");
                        Intrinsics.checkNotNullParameter(rejectedRequest, "rejectedRequest");
                        Intrinsics.checkNotNullParameter(reason2, "reason");
                        h0Var.n(new com.discord.age_assurance.a(currentNavState2, rejectedRequest, reason2, 13));
                        this.f10128y = null;
                    }
                }
            }
            h();
        }
    }

    public final kn.e g(String str) {
        Object obj;
        Iterator it = this.f10124i.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (Intrinsics.areEqual(((kn.e) obj).f13463d.getRequireScreenKey$react_native_screens_release(), str)) {
                break;
            }
        }
        return (kn.e) obj;
    }

    @NotNull
    public final a getBottomNavigationView$react_native_screens_release() {
        return this.H;
    }

    @NotNull
    public final rm.a getColorScheme$react_native_screens_release() {
        rm.b bVar = this.J;
        return (rm.a) bVar.f17411d.getValue(bVar, rm.b.E[0]);
    }

    @NotNull
    public mn.a getInterfaceInsets() {
        return new mn.a(0.0f, 0.0f, 0.0f, this.H.getHeight());
    }

    @NotNull
    public final g getInvalidationFlags$react_native_screens_release() {
        return this.f10127x;
    }

    @NotNull
    public final h getNavigationState() {
        return this.f10122d;
    }

    public final boolean getRejectStaleNavigationStateUpdates$react_native_screens_release() {
        return this.f10126w;
    }

    @Override // rm.d
    public int getResolvedUiNightMode() {
        return this.J.getResolvedUiNightMode();
    }

    @NotNull
    public final kn.e getSelectedTab$react_native_screens_release() {
        kn.e g6 = g(this.f10122d.a);
        if (g6 != null) {
            return g6;
        }
        throw new IllegalStateException("[RNScreens] No selected tab present");
    }

    public final boolean getTabBarHidden$react_native_screens_release() {
        return ((Boolean) this.Q.getValue(this, R[0])).booleanValue();
    }

    public final boolean getTabBarRespectsIMEInsets$react_native_screens_release() {
        return this.L;
    }

    public final void h() {
        g gVar = this.f10127x;
        if (gVar.f10129b) {
            int i5 = 0;
            gVar.f10129b = false;
            Intrinsics.checkNotNullParameter("TabsContainer", "tag");
            Intrinsics.checkNotNullParameter("updateBottomNavigationViewAppearance", "msg");
            this.N.j0(this.G, this);
            post(new c(this, 1));
            in.b bVar = this.O;
            Iterator it = bVar.f10968b.iterator();
            while (it.hasNext()) {
                Object next = it.next();
                int i6 = i5 + 1;
                if (i5 < 0) {
                    c0.k();
                    throw null;
                }
                Menu menu = bVar.a.getMenu();
                Intrinsics.checkNotNullExpressionValue(menu, "getMenu(...)");
                bVar.a(menu.getItem(i5), ((kn.e) next).f13463d);
                i5 = i6;
            }
        }
    }

    public final void i(Integer num) {
        int intValue = getTabBarHidden$react_native_screens_release() ? 0 : num != null ? num.intValue() : this.H.getHeight();
        mn.d dVar = this.P;
        if (dVar != null) {
            mn.a newInterfaceInsets = new mn.a(0.0f, 0.0f, 0.0f, intValue);
            Intrinsics.checkNotNullParameter(newInterfaceInsets, "newInterfaceInsets");
            if (Intrinsics.areEqual(newInterfaceInsets, dVar.f14560e)) {
                return;
            }
            dVar.f14560e = newInterfaceInsets;
            mn.b bVar = dVar.f14565y;
            bVar.getClass();
            if (bVar == mn.b.f14555d || bVar == mn.b.f14557i) {
                dVar.f14562v = true;
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        rm.d dVar;
        String msg = "TabsContainer [" + getId() + "] attached to window";
        Intrinsics.checkNotNullParameter("TabsContainer", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
        super.onAttachedToWindow();
        this.f10125v.b(this);
        FragmentManager a = um.a.a(this);
        if (a == null) {
            throw new IllegalStateException("[RNScreens] Nullish fragment manager - can't run container operations");
        }
        this.F = a;
        if (!this.f10122d.a() && !this.f10122d.a()) {
            List f2 = getRequireFragmentManager().f1915c.f();
            Intrinsics.checkNotNullExpressionValue(f2, "getFragments(...)");
            ArrayList arrayList = new ArrayList();
            for (Object obj : f2) {
                if (obj instanceof kn.e) {
                    arrayList.add(obj);
                }
            }
            ArrayList arrayList2 = new ArrayList();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                Object next = it.next();
                if (this.f10124i.contains((kn.e) next)) {
                    arrayList2.add(next);
                }
            }
            List i02 = CollectionsKt.i0(arrayList2);
            if (i02.size() != 1 || CollectionsKt.K(i02) != getSelectedTab$react_native_screens_release()) {
                if (!i02.isEmpty()) {
                    throw new IllegalStateException("[RNScreens] Unexpected fragment manager state.");
                }
                e(getSelectedTab$react_native_screens_release());
            }
        }
        f();
        r rVar = new r(4, this);
        rm.b bVar = this.J;
        bVar.getClass();
        Intrinsics.checkNotNullParameter(this, "hostView");
        if (bVar.f17416x) {
            throw new IllegalStateException("[RNScreens] ColorSchemeCoordinator's setup method must not be called again without calling teardown() first.");
        }
        bVar.f17413i = getResources().getConfiguration().uiMode & 48;
        ViewParent parent = getParent();
        while (true) {
            if (parent == null) {
                dVar = null;
                break;
            } else {
                if (parent instanceof rm.d) {
                    dVar = (rm.d) parent;
                    break;
                }
                parent = parent.getParent();
            }
        }
        bVar.f17412e = dVar;
        if (dVar != null) {
            dVar.a(bVar);
        }
        bVar.f17417y = rVar;
        bVar.f17416x = true;
        bVar.f17414v = null;
        bVar.b();
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        int i5;
        super.onConfigurationChanged(configuration);
        rm.b bVar = this.J;
        if (configuration != null) {
            bVar.getClass();
            i5 = configuration.uiMode & 48;
        } else {
            i5 = 0;
        }
        bVar.f17413i = i5;
        bVar.b();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.F = null;
        qd.f fVar = this.f10125v;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(this, "self");
        sm.b bVar = (sm.b) fVar.f16831e;
        Intrinsics.checkNotNullParameter(this, "childContainer");
        if (bVar != null) {
            bVar.a(this);
        }
        fVar.f16831e = null;
        rm.b bVar2 = this.J;
        rm.d dVar = bVar2.f17412e;
        if (dVar != null) {
            dVar.c(bVar2);
        }
        bVar2.f17417y = null;
        bVar2.f17412e = null;
        bVar2.f17414v = null;
        bVar2.f17416x = false;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        if (!(view instanceof rg.e)) {
            throw new IllegalArgumentException(("[RNScreens] TabsContainer's onLayoutChange expects BottomNavigationView, received " + view + " instead").toString());
        }
        int i16 = i11 - i6;
        if (i16 != i15 - i13) {
            i(Integer.valueOf(i16));
        }
    }

    public final void setColorScheme$react_native_screens_release(@NotNull rm.a aVar) {
        Intrinsics.checkNotNullParameter(aVar, "<set-?>");
        rm.b bVar = this.J;
        bVar.getClass();
        Intrinsics.checkNotNullParameter(aVar, "<set-?>");
        bVar.f17411d.setValue(bVar, rm.b.E[0], aVar);
    }

    public void setOnInterfaceInsetsChangeListener(@NotNull mn.d listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        if (this.P == null) {
            this.H.addOnLayoutChangeListener(this);
        }
        this.P = listener;
    }

    public final void setPendingNavigationStateUpdate$react_native_screens_release(l lVar) {
        this.f10128y = lVar;
        this.f10127x.a = lVar != null;
    }

    public final void setRejectStaleNavigationStateUpdates$react_native_screens_release(boolean z5) {
        this.f10126w = z5;
    }

    public final void setTabBarHidden$react_native_screens_release(boolean z5) {
        this.Q.setValue(this, R[0], Boolean.valueOf(z5));
    }

    public final void setTabBarRespectsIMEInsets$react_native_screens_release(boolean z5) {
        this.L = z5;
    }
}
