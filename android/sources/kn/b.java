package kn;

import android.graphics.drawable.Drawable;
import android.view.MenuItem;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.fragment.app.Fragment;
import com.facebook.react.uimanager.ThemedReactContext;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class b extends ViewGroup implements qm.a, xm.c, sm.b {
    public static final /* synthetic */ KProperty[] O = {com.discord.chat.bridge.botuikit.a.p(b.class, "tabTitle", "getTabTitle()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "appearance", "getAppearance$react_native_screens_release()Lcom/swmansion/rnscreens/gamma/tabs/appearance/TabsAppearance;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "badgeValue", "getBadgeValue()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "tabBarItemTestID", "getTabBarItemTestID()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "tabBarItemAccessibilityLabel", "getTabBarItemAccessibilityLabel()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "drawableIconResourceName", "getDrawableIconResourceName()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "selectedDrawableIconResourceName", "getSelectedDrawableIconResourceName()Ljava/lang/String;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "icon", "getIcon()Landroid/graphics/drawable/Drawable;", 0), com.discord.chat.bridge.botuikit.a.p(b.class, "selectedIcon", "getSelectedIcon()Landroid/graphics/drawable/Drawable;", 0)};
    public final a E;
    public final a F;
    public final a G;
    public final a H;
    public final a I;
    public final a J;
    public final a K;
    public boolean L;
    public boolean M;
    public boolean N;

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f13456d;

    /* renamed from: e, reason: collision with root package name */
    public WeakReference f13457e;

    /* renamed from: i, reason: collision with root package name */
    public final e4.e f13458i;

    /* renamed from: v, reason: collision with root package name */
    public d f13459v;

    /* renamed from: w, reason: collision with root package name */
    public String f13460w;

    /* renamed from: x, reason: collision with root package name */
    public final a f13461x;

    /* renamed from: y, reason: collision with root package name */
    public final a f13462y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f13456d = reactContext;
        this.f13457e = new WeakReference(null);
        this.f13458i = new e4.e(21);
        this.f13461x = new a(this, 0);
        this.f13462y = new a(this, 1);
        this.E = new a(this, 2);
        this.F = new a(this, 3);
        this.G = new a(this, 4);
        this.H = new a(this, 5);
        this.I = new a(this, 6);
        this.J = new a(this, 7);
        this.K = new a(this, 8);
        this.L = true;
        this.M = true;
    }

    public static final void d(b tabsScreen, Object obj, Object obj2) {
        c cVar;
        if (Intrinsics.areEqual(obj2, obj) || (cVar = (c) tabsScreen.f13457e.get()) == null) {
            return;
        }
        hn.f fVar = (hn.f) cVar;
        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
        Iterator it = fVar.f10124i.iterator();
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            } else if (((e) it.next()).f13463d == tabsScreen) {
                break;
            } else {
                i5++;
            }
        }
        Integer valueOf = Integer.valueOf(i5);
        if (i5 == -1) {
            valueOf = null;
        }
        MenuItem findItem = valueOf != null ? fVar.H.getMenu().findItem(valueOf.intValue() + 1) : null;
        if (findItem != null) {
            fVar.N.i0(fVar.G, findItem, tabsScreen, fVar.getSelectedTab$react_native_screens_release().f13463d.getAppearance$react_native_screens_release());
            fVar.O.a(findItem, tabsScreen);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // sm.b
    public final void a(sm.a container) {
        Intrinsics.checkNotNullParameter(container, "container");
        e4.e eVar = this.f13458i;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(container, "container");
        if (e.e.g((WeakReference) eVar.f7943e, (FrameLayout) container)) {
            ((WeakReference) eVar.f7943e).clear();
        }
    }

    @Override // sm.b
    public final void b(sm.a container) {
        Intrinsics.checkNotNullParameter(container, "container");
        e4.e eVar = this.f13458i;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(container, "container");
        eVar.f7943e = new WeakReference(container);
    }

    @Override // xm.c
    public final void c(xm.a marker, ViewGroup scrollView) {
        Intrinsics.checkNotNullParameter(marker, "marker");
        Intrinsics.checkNotNullParameter(scrollView, "scrollView");
        e4.e eVar = this.f13458i;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(scrollView, "scrollView");
        eVar.f7944i = new WeakReference(scrollView);
    }

    public final gn.b getAppearance$react_native_screens_release() {
        return (gn.b) this.f13462y.getValue(this, O[1]);
    }

    @Override // qm.a
    public Fragment getAssociatedFragment() {
        c cVar = (c) this.f13457e.get();
        Object obj = null;
        if (cVar == null) {
            return null;
        }
        Intrinsics.checkNotNullParameter(this, "tabsScreen");
        Iterator it = ((hn.f) cVar).f10124i.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            if (((e) next).f13463d == this) {
                obj = next;
                break;
            }
        }
        return (e) obj;
    }

    public final String getBadgeValue() {
        return (String) this.E.getValue(this, O[2]);
    }

    public final String getDrawableIconResourceName() {
        return (String) this.H.getValue(this, O[5]);
    }

    @NotNull
    public final d getEventEmitter$react_native_screens_release() {
        d dVar = this.f13459v;
        if (dVar != null) {
            return dVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("eventEmitter");
        return null;
    }

    public final Drawable getIcon() {
        return (Drawable) this.J.getValue(this, O[7]);
    }

    public final boolean getPreventNativeSelection() {
        return this.N;
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.f13456d;
    }

    @NotNull
    public final String getRequireScreenKey$react_native_screens_release() {
        String str = this.f13460w;
        if (str != null) {
            return str;
        }
        throw new IllegalStateException("[RNScreens] screenKey MUST NOT be null");
    }

    public final String getScreenKey() {
        return this.f13460w;
    }

    public final String getSelectedDrawableIconResourceName() {
        return (String) this.I.getValue(this, O[6]);
    }

    public final Drawable getSelectedIcon() {
        return (Drawable) this.K.getValue(this, O[8]);
    }

    public final boolean getShouldUseRepeatedTabSelectionPopToRootSpecialEffect() {
        return this.M;
    }

    public final boolean getShouldUseRepeatedTabSelectionScrollToTopSpecialEffect() {
        return this.L;
    }

    public final String getTabBarItemAccessibilityLabel() {
        return (String) this.G.getValue(this, O[4]);
    }

    public final String getTabBarItemTestID() {
        return (String) this.F.getValue(this, O[3]);
    }

    public final String getTabTitle() {
        return (String) this.f13461x.getValue(this, O[0]);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        String msg = "TabsScreen [" + getId() + "] attached to window";
        Intrinsics.checkNotNullParameter("TabsScreen", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
        super.onAttachedToWindow();
    }

    public final void setAppearance$react_native_screens_release(gn.b bVar) {
        this.f13462y.setValue(this, O[1], bVar);
    }

    public final void setBadgeValue(String str) {
        this.E.setValue(this, O[2], str);
    }

    public final void setDrawableIconResourceName(String str) {
        this.H.setValue(this, O[5], str);
    }

    public final void setEventEmitter$react_native_screens_release(@NotNull d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<set-?>");
        this.f13459v = dVar;
    }

    public final void setIcon(Drawable drawable) {
        this.J.setValue(this, O[7], drawable);
    }

    public final void setPreventNativeSelection(boolean z5) {
        this.N = z5;
    }

    public final void setScreenKey(String str) {
        if (str != null && StringsKt.K(str)) {
            str = null;
        }
        this.f13460w = str;
    }

    public final void setSelectedDrawableIconResourceName(String str) {
        this.I.setValue(this, O[6], str);
    }

    public final void setSelectedIcon(Drawable drawable) {
        this.K.setValue(this, O[8], drawable);
    }

    public final void setShouldUseRepeatedTabSelectionPopToRootSpecialEffect(boolean z5) {
        this.M = z5;
    }

    public final void setShouldUseRepeatedTabSelectionScrollToTopSpecialEffect(boolean z5) {
        this.L = z5;
    }

    public final void setTabBarItemAccessibilityLabel(String str) {
        this.G.setValue(this, O[4], str);
    }

    public final void setTabBarItemTestID(String str) {
        this.F.setValue(this, O[3], str);
    }

    public final void setTabTitle(String str) {
        this.f13461x.setValue(this, O[0], str);
    }

    public final void setTabsScreenDelegate$react_native_screens_release(c cVar) {
        this.f13457e = new WeakReference(cVar);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }
}
