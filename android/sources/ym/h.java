package ym;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.Log;
import android.util.TypedValue;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.appcompat.view.ContextThemeWrapper;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.appcompat.widget.s3;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import bn.m;
import com.discord.R;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.google.android.material.appbar.MaterialToolbar;
import com.swmansion.rnscreens.gamma.stack.header.StackHeaderScrollingViewBehavior;
import fo.n;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import ng.k;
import org.jetbrains.annotations.NotNull;
import w3.q;
import ys.l;
import zm.i;

/* loaded from: classes3.dex */
public final class h extends CoordinatorLayout {
    public final en.f U;
    public final boolean V;
    public zm.g W;
    public zm.h a0;

    /* renamed from: b0, reason: collision with root package name */
    public final qd.f f20969b0;

    /* renamed from: c0, reason: collision with root package name */
    public final g f20970c0;

    /* renamed from: d0, reason: collision with root package name */
    public final com.discord.channel_spine.a f20971d0;

    /* renamed from: e0, reason: collision with root package name */
    public final e f20972e0;

    /* renamed from: f0, reason: collision with root package name */
    public c f20973f0;

    /* renamed from: g0, reason: collision with root package name */
    public Map f20974g0;
    public m h0;

    /* renamed from: i0, reason: collision with root package name */
    public final h8.a f20975i0;

    /* renamed from: j0, reason: collision with root package name */
    public FrameLayout f20976j0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r1v1, types: [ym.g] */
    public h(Context context, en.f stackScreen, boolean z5) {
        super(context, null);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
        this.U = stackScreen;
        this.V = z5;
        f listener = new f(this);
        this.f20969b0 = new qd.f(13, this);
        this.f20970c0 = new ng.f() { // from class: ym.g
            @Override // ng.f
            public final void a(int i5) {
                h.this.v();
            }
        };
        this.f20971d0 = new com.discord.channel_spine.a(6, this);
        this.f20972e0 = new e(new ContextThemeWrapper(context, R.style.Theme_Material3_DayNight_NoActionBar));
        this.f20974g0 = v0.d();
        this.h0 = m.f3076d;
        this.f20975i0 = new h8.a(17, this);
        setTransitionGroup(true);
        FrameLayout frameLayout = new FrameLayout(context);
        frameLayout.addView(stackScreen);
        this.f20976j0 = frameLayout;
        addView(frameLayout, new v0.d(-1, -1));
        stackScreen.getClass();
        Intrinsics.checkNotNullParameter(listener, "listener");
        WeakReference weakReference = stackScreen.G;
        if ((weakReference != null ? (f) weakReference.get() : null) != null) {
            throw new IllegalStateException("[RNScreens] Attempted to register header config attach listener before previous listener was cleared.");
        }
        stackScreen.G = new WeakReference(listener);
        zm.c cVar = stackScreen.F;
        if (cVar != null) {
            listener.a(cVar, cVar);
        }
    }

    @NotNull
    public final en.f getStackScreen$react_native_screens_release() {
        return this.U;
    }

    @NotNull
    public final FrameLayout getStackScreenWrapper$react_native_screens_release() {
        return this.f20976j0;
    }

    public final void setStackScreenWrapper$react_native_screens_release(@NotNull FrameLayout frameLayout) {
        Intrinsics.checkNotNullParameter(frameLayout, "<set-?>");
        this.f20976j0 = frameLayout;
    }

    public final String t(MaterialToolbar materialToolbar, String str, Boolean bool) {
        Boolean bool2;
        String str2 = (String) this.h0.a.get(str);
        if (str2 != null && (bool2 = (Boolean) this.h0.f3077b.get(str2)) != null) {
            boolean booleanValue = bool2.booleanValue();
            Integer num = (Integer) this.f20974g0.get(str);
            if (num != null) {
                MenuItem findItem = materialToolbar.getMenu().findItem(num.intValue());
                if (findItem == null) {
                    return null;
                }
                if (booleanValue && Intrinsics.areEqual(bool, Boolean.FALSE)) {
                    Log.w("StackHeaderCoordinatorLayout", s4.h.g("[RNScreens] Cannot uncheck item '", str, "' in single-selection group '", str2, "'. Check a different item instead."));
                    return null;
                }
                boolean z5 = true;
                if (!booleanValue) {
                    if (bool != null) {
                        z5 = bool.booleanValue();
                    } else if (findItem.isChecked()) {
                        z5 = false;
                    }
                }
                if (findItem.isChecked() == z5) {
                    return null;
                }
                findItem.setChecked(z5);
                return str2;
            }
        }
        return null;
    }

    public final void u(MaterialToolbar materialToolbar, String groupId) {
        zm.h hVar = this.a0;
        if (hVar != null) {
            Iterable iterable = (List) this.h0.f3078c.get(groupId);
            if (iterable == null) {
                iterable = m0.f13512d;
            }
            ArrayList selectedIds = new ArrayList();
            for (Object obj : iterable) {
                Integer num = (Integer) this.f20974g0.get((String) obj);
                if (num != null) {
                    MenuItem findItem = materialToolbar.getMenu().findItem(num.intValue());
                    if (findItem != null && findItem.isChecked()) {
                        selectedIds.add(obj);
                    }
                }
            }
            Intrinsics.checkNotNullParameter(groupId, "groupId");
            Intrinsics.checkNotNullParameter(selectedIds, "selectedIds");
            zm.d eventEmitter$react_native_screens_release = ((zm.c) hVar).getEventEmitter$react_native_screens_release();
            eventEmitter$react_native_screens_release.getClass();
            Intrinsics.checkNotNullParameter(groupId, "groupId");
            Intrinsics.checkNotNullParameter(selectedIds, "selectedIds");
            ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new cn.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, groupId, selectedIds));
        }
    }

    public final void v() {
        zm.g gVar;
        c cVar;
        zm.h hVar = this.a0;
        if (hVar == null || (gVar = this.W) == null || (cVar = this.f20973f0) == null) {
            return;
        }
        zm.c cVar2 = (zm.c) gVar;
        zm.c cVar3 = (zm.c) hVar;
        qm.b.a(cVar3.f21288d0, cVar3.getResources().getDisplayMetrics().density, Integer.valueOf(cVar.getWidth()), Integer.valueOf(cVar.getHeight()), null, Integer.valueOf(cVar2.getTransparent() ? cVar.getTop() : cVar.getTop() - cVar.getBottom()), 8);
        an.e m1308getLeadingSubview = cVar2.m1308getLeadingSubview();
        if (m1308getLeadingSubview != null) {
            z(m1308getLeadingSubview, cVar);
        }
        an.e m1307getCenterSubview = cVar2.m1307getCenterSubview();
        if (m1307getCenterSubview != null) {
            z(m1307getCenterSubview, cVar);
        }
        an.e m1309getTrailingSubview = cVar2.m1309getTrailingSubview();
        if (m1309getTrailingSubview != null) {
            z(m1309getTrailingSubview, cVar);
        }
        an.e m1306getBackgroundSubview = cVar2.m1306getBackgroundSubview();
        if (m1306getBackgroundSubview != null) {
            z(m1306getBackgroundSubview, cVar);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void w(zm.g gVar) {
        boolean z5;
        Drawable drawable;
        Drawable drawable2;
        int i5;
        int i6;
        ColorStateList colorStateList;
        View view;
        c bVar;
        int i10;
        zm.c config = (zm.c) gVar;
        boolean f2 = l.f(config.m1304getInvalidationFlags2a6ZA60(), 3);
        e eVar = this.f20972e0;
        if (f2) {
            y();
            if (config.getHidden()) {
                x();
                requestLayout();
                config.d(l.a);
                return;
            }
            eVar.getClass();
            Intrinsics.checkNotNullParameter(this, "coordinatorLayout");
            Intrinsics.checkNotNullParameter(config, "config");
            int i11 = c.f20966b0;
            ContextThemeWrapper context = eVar.a;
            i type = config.getType();
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(type, "type");
            int ordinal = type.ordinal();
            if (ordinal == 0) {
                bVar = new b(context);
            } else {
                if (ordinal != 1 && ordinal != 2) {
                    throw new n();
                }
                bVar = new a(context, type);
            }
            if (config.getTransparent()) {
                x();
                addView(bVar);
            } else {
                addView(bVar, 0);
                ViewGroup.LayoutParams layoutParams = this.f20976j0.getLayoutParams();
                Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type androidx.coordinatorlayout.widget.CoordinatorLayout.LayoutParams");
                v0.d dVar = (v0.d) layoutParams;
                if (dVar.a == null) {
                    dVar.b(new StackHeaderScrollingViewBehavior(new com.discord.chat.input.views.a(12, this)));
                    this.f20976j0.setLayoutParams(dVar);
                    this.f20976j0.requestLayout();
                }
            }
            bVar.requestApplyInsets();
            MaterialToolbar toolbar = bVar.getToolbar();
            an.e m1308getLeadingSubview = config.m1308getLeadingSubview();
            if (m1308getLeadingSubview != null) {
                an.c cVar = (an.c) m1308getLeadingSubview;
                q.i(cVar.m0getView());
                toolbar.addView(cVar.m0getView(), new s3(8388611, 0));
            }
            an.e m1309getTrailingSubview = config.m1309getTrailingSubview();
            if (m1309getTrailingSubview != null) {
                an.c cVar2 = (an.c) m1309getTrailingSubview;
                q.i(cVar2.m0getView());
                toolbar.addView(cVar2.m0getView(), new s3(8388613, 0));
            }
            an.e m1307getCenterSubview = config.m1307getCenterSubview();
            if (m1307getCenterSubview != null) {
                if (bVar instanceof b) {
                    an.c cVar3 = (an.c) m1307getCenterSubview;
                    q.i(cVar3.m0getView());
                    toolbar.addView(cVar3.m0getView(), new s3(1, 0));
                } else {
                    Log.e("StackHeaderApplicator", "[RNScreens] Center subview is supported only for small header type.");
                }
            } else if (bVar instanceof b) {
                AppCompatTextView appCompatTextView = new AppCompatTextView(toolbar.getContext(), null);
                appCompatTextView.setSingleLine();
                appCompatTextView.setEllipsize(TextUtils.TruncateAt.END);
                appCompatTextView.setTextAppearance(R.style.TextAppearance_Material3_TitleLarge);
                s3 s3Var = new s3(8388611, 0);
                s3Var.setMarginStart(toolbar.getContentInsetStart() + toolbar.getTitleMarginStart());
                s3Var.setMarginEnd(toolbar.getTitleMarginEnd());
                ((ViewGroup.MarginLayoutParams) s3Var).topMargin = toolbar.getTitleMarginTop();
                ((ViewGroup.MarginLayoutParams) s3Var).bottomMargin = toolbar.getTitleMarginBottom();
                appCompatTextView.setLayoutParams(s3Var);
                ((b) bVar).setManagedTitleView$react_native_screens_release(appCompatTextView);
                toolbar.addView(appCompatTextView, config.getLayoutDirection() == 1 ? 0 : -1, new s3(8388611, 0));
            }
            an.e m1306getBackgroundSubview = config.m1306getBackgroundSubview();
            if (m1306getBackgroundSubview != null) {
                if (bVar instanceof a) {
                    an.c cVar4 = (an.c) m1306getBackgroundSubview;
                    q.i(cVar4.m0getView());
                    a aVar = (a) bVar;
                    FrameLayout frameLayout = new FrameLayout(aVar.getContext());
                    frameLayout.setFitsSystemWindows(true);
                    frameLayout.addView(cVar4.m0getView(), new FrameLayout.LayoutParams(-1, -1));
                    k collapsingToolbarLayout$react_native_screens_release = aVar.getCollapsingToolbarLayout$react_native_screens_release();
                    ng.h hVar = new ng.h(-1);
                    int ordinal2 = cVar4.getCollapseMode().ordinal();
                    if (ordinal2 == 0) {
                        i10 = 0;
                    } else {
                        if (ordinal2 != 1) {
                            throw new n();
                        }
                        i10 = 2;
                    }
                    hVar.a = i10;
                    Unit unit = Unit.a;
                    collapsingToolbarLayout$react_native_screens_release.addView(frameLayout, 0, hVar);
                } else {
                    Log.e("StackHeaderApplicator", "[RNScreens] Background subview is supported only for collapsing header types (medium, large).");
                }
            }
            if ((bVar instanceof a) && config.getLayoutDirection() == 1) {
                bVar.measure(View.MeasureSpec.makeMeasureSpec(getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(0, 0));
                MaterialToolbar toolbar2 = ((a) bVar).getToolbar();
                int childCount = toolbar2.getChildCount();
                int i12 = 0;
                while (true) {
                    if (i12 >= childCount) {
                        break;
                    }
                    View childAt = toolbar2.getChildAt(i12);
                    if (!(childAt instanceof an.c)) {
                        ViewGroup.LayoutParams layoutParams2 = childAt.getLayoutParams();
                        toolbar2.removeViewAt(i12);
                        toolbar2.addView(childAt, 0, layoutParams2);
                        break;
                    }
                    i12++;
                }
            }
            bVar.getToolbar().requestLayout();
            this.f20973f0 = bVar;
            bVar.a(this.f20970c0);
            bVar.addOnLayoutChangeListener(this.f20971d0);
            config.d(3);
        }
        c appBar = this.f20973f0;
        if (appBar != null) {
            if (f2 || l.f(config.m1304getInvalidationFlags2a6ZA60(), 4)) {
                eVar.getClass();
                Intrinsics.checkNotNullParameter(appBar, "appBar");
                Intrinsics.checkNotNullParameter(config, "config");
                if (appBar instanceof b) {
                    b bVar2 = (b) appBar;
                    AppCompatTextView managedTitleView$react_native_screens_release = bVar2.getManagedTitleView$react_native_screens_release();
                    if (managedTitleView$react_native_screens_release != null) {
                        managedTitleView$react_native_screens_release.setText(config.getTitle());
                    }
                    AppCompatTextView managedTitleView$react_native_screens_release2 = bVar2.getManagedTitleView$react_native_screens_release();
                    if (managedTitleView$react_native_screens_release2 != null) {
                        managedTitleView$react_native_screens_release2.requestLayout();
                    }
                } else {
                    if (!(appBar instanceof a)) {
                        throw new n();
                    }
                    ((a) appBar).getCollapsingToolbarLayout$react_native_screens_release().setTitle(config.getTitle());
                }
                config.d(4);
            }
            if (f2 || l.f(config.m1304getInvalidationFlags2a6ZA60(), 8)) {
                MaterialToolbar toolbar3 = appBar.getToolbar();
                eVar.getClass();
                Intrinsics.checkNotNullParameter(toolbar3, "toolbar");
                Intrinsics.checkNotNullParameter(config, "config");
                h8.a onNavigationIconClick = this.f20975i0;
                Intrinsics.checkNotNullParameter(onNavigationIconClick, "onNavigationIconClick");
                if (!this.V || config.getBackButtonHidden()) {
                    z5 = f2;
                    toolbar3.setNavigationIcon((Drawable) null);
                    toolbar3.setNavigationOnClickListener(null);
                } else {
                    toolbar3.f5926u0 = null;
                    Drawable navigationIcon = toolbar3.getNavigationIcon();
                    if (navigationIcon != null) {
                        navigationIcon.mutate().setTintList(null);
                        toolbar3.setNavigationIcon(navigationIcon);
                    }
                    Drawable backButtonIcon = config.getBackButtonIcon();
                    if (backButtonIcon != null) {
                        drawable2 = e4.f.y(toolbar3, backButtonIcon);
                    } else {
                        ContextThemeWrapper context2 = eVar.a;
                        Intrinsics.checkNotNullParameter(context2, "context");
                        TypedValue typedValue = new TypedValue();
                        if (!context2.getTheme().resolveAttribute(R.attr.homeAsUpIndicator, typedValue, true) || (i5 = typedValue.resourceId) == 0) {
                            Log.w("DrawableUtils", "[RNScreens] Failed to resolve drawable attribute.");
                            drawable = null;
                        } else {
                            drawable = ys.d.J(context2, i5);
                        }
                        drawable2 = drawable;
                    }
                    Integer backButtonTintColorNormal = config.getBackButtonTintColorNormal();
                    Integer backButtonTintColorPressed = config.getBackButtonTintColorPressed();
                    Integer backButtonTintColorFocused = config.getBackButtonTintColorFocused();
                    if (backButtonTintColorNormal == null && backButtonTintColorPressed == null && backButtonTintColorFocused == null) {
                        z5 = f2;
                        colorStateList = null;
                    } else {
                        ArrayList arrayList = new ArrayList();
                        ArrayList arrayList2 = new ArrayList();
                        if (backButtonTintColorPressed != null) {
                            int intValue = backButtonTintColorPressed.intValue();
                            z5 = f2;
                            arrayList.add(new int[]{android.R.attr.state_pressed});
                            arrayList2.add(Integer.valueOf(intValue));
                        } else {
                            z5 = f2;
                        }
                        if (backButtonTintColorFocused != null) {
                            int intValue2 = backButtonTintColorFocused.intValue();
                            arrayList.add(new int[]{android.R.attr.state_focused});
                            arrayList2.add(Integer.valueOf(intValue2));
                        }
                        if (backButtonTintColorNormal != null) {
                            int intValue3 = backButtonTintColorNormal.intValue();
                            i6 = 0;
                            arrayList.add(new int[0]);
                            arrayList2.add(Integer.valueOf(intValue3));
                        } else {
                            i6 = 0;
                        }
                        colorStateList = new ColorStateList((int[][]) arrayList.toArray(new int[i6][]), CollectionsKt.h0(arrayList2));
                    }
                    if (colorStateList != null && drawable2 != null) {
                        drawable2 = drawable2.mutate();
                        drawable2.setTintList(colorStateList);
                    }
                    toolbar3.setNavigationIcon(drawable2);
                    toolbar3.setNavigationOnClickListener(new a6.a(7, onNavigationIconClick));
                }
                config.d(8);
            } else {
                z5 = f2;
            }
            if (z5 || l.f(config.m1304getInvalidationFlags2a6ZA60(), 16)) {
                eVar.getClass();
                Intrinsics.checkNotNullParameter(appBar, "appBar");
                Intrinsics.checkNotNullParameter(config, "config");
                if ((config.getScrollFlagEnterAlways() || config.getScrollFlagEnterAlwaysCollapsed() || config.getScrollFlagExitUntilCollapsed() || config.getScrollFlagSnap()) && !config.getScrollFlagScroll()) {
                    Log.e("StackHeaderApplicator", "[RNScreens] scrollFlag* requires scrollFlagScroll to take effect.");
                }
                if (config.getScrollFlagEnterAlwaysCollapsed() && !config.getScrollFlagEnterAlways()) {
                    Log.e("StackHeaderApplicator", "[RNScreens] scrollFlagEnterAlwaysCollapsed requires scrollFlagEnterAlways to take effect.");
                }
                boolean scrollFlagScroll = config.getScrollFlagScroll();
                boolean z6 = scrollFlagScroll;
                if (config.getScrollFlagEnterAlways()) {
                    z6 = (scrollFlagScroll ? 1 : 0) | 4;
                }
                boolean z7 = z6;
                if (config.getScrollFlagEnterAlwaysCollapsed()) {
                    z7 = (z6 ? 1 : 0) | '\b';
                }
                boolean z8 = z7;
                if (config.getScrollFlagExitUntilCollapsed()) {
                    z8 = (z7 ? 1 : 0) | 2;
                }
                int i13 = z8;
                if (config.getScrollFlagSnap()) {
                    i13 = (z8 ? 1 : 0) | 16;
                }
                if (appBar instanceof b) {
                    view = ((b) appBar).getToolbar();
                } else {
                    if (!(appBar instanceof a)) {
                        throw new n();
                    }
                    view = ((a) appBar).getCollapsingToolbarLayout$react_native_screens_release();
                }
                ViewGroup.LayoutParams layoutParams3 = view.getLayoutParams();
                Intrinsics.checkNotNull(layoutParams3, "null cannot be cast to non-null type com.google.android.material.appbar.AppBarLayout.LayoutParams");
                ng.e eVar2 = (ng.e) layoutParams3;
                eVar2.a = i13;
                view.setLayoutParams(eVar2);
                appBar.f(true, false, true);
                config.d(16);
            }
            if (l.f(config.m1304getInvalidationFlags2a6ZA60(), 32)) {
                bn.e menuConfig = config.getToolbarMenu();
                eVar.getClass();
                Intrinsics.checkNotNullParameter(menuConfig, "menuConfig");
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                LinkedHashMap linkedHashMap2 = new LinkedHashMap();
                Ref.IntRef intRef = new Ref.IntRef();
                intRef.element = 1;
                e.c(menuConfig.f3058b, linkedHashMap, linkedHashMap2, new d(intRef, 0));
                Map n6 = v0.n(linkedHashMap);
                Map n10 = v0.n(linkedHashMap2);
                bn.e menuConfig2 = config.getToolbarMenu();
                Intrinsics.checkNotNullParameter(menuConfig2, "menuConfig");
                LinkedHashMap linkedHashMap3 = new LinkedHashMap();
                Ref.IntRef intRef2 = new Ref.IntRef();
                intRef2.element = 1;
                e.d(menuConfig2, linkedHashMap3, new d(intRef2, 1));
                Map n11 = v0.n(linkedHashMap3);
                bn.e menuConfig3 = config.getToolbarMenu();
                Intrinsics.checkNotNullParameter(menuConfig3, "menuConfig");
                LinkedHashMap linkedHashMap4 = new LinkedHashMap();
                LinkedHashMap linkedHashMap5 = new LinkedHashMap();
                LinkedHashMap linkedHashMap6 = new LinkedHashMap();
                e.e(menuConfig3, linkedHashMap4, linkedHashMap5, linkedHashMap6);
                LinkedHashMap linkedHashMap7 = new LinkedHashMap(u0.a(linkedHashMap6.size()));
                for (Map.Entry entry : linkedHashMap6.entrySet()) {
                    linkedHashMap7.put(entry.getKey(), CollectionsKt.i0((Iterable) entry.getValue()));
                }
                m mVar = new m(linkedHashMap4, linkedHashMap5, linkedHashMap7);
                e.i(config.getToolbarMenu());
                this.f20974g0 = n6;
                this.h0 = mVar;
                MaterialToolbar toolbar4 = appBar.getToolbar();
                bn.e toolbarMenu = config.getToolbarMenu();
                boolean toolbarMenuGroupDividerEnabled = config.getToolbarMenuGroupDividerEnabled();
                com.discord.chat.presentation.message.i iVar = new com.discord.chat.presentation.message.i(7, this, appBar);
                eVar.getClass();
                e.f(toolbar4, toolbarMenu, n6, n10, n11, toolbarMenuGroupDividerEnabled, iVar);
                config.d(32);
            }
        }
        v();
    }

    public final void x() {
        ViewGroup.LayoutParams layoutParams = this.f20976j0.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type androidx.coordinatorlayout.widget.CoordinatorLayout.LayoutParams");
        v0.d dVar = (v0.d) layoutParams;
        if (dVar.a != null) {
            dVar.b(null);
            this.f20976j0.setLayoutParams(dVar);
            en.f fVar = this.U;
            qm.b.a(fVar.E, fVar.getResources().getDisplayMetrics().density, null, null, null, 0, 14);
            this.f20976j0.requestLayout();
        }
    }

    public final void y() {
        g gVar;
        c cVar = this.f20973f0;
        if (cVar != null) {
            ArrayList arrayList = cVar.E;
            if (arrayList != null && (gVar = this.f20970c0) != null) {
                arrayList.remove(gVar);
            }
            cVar.removeOnLayoutChangeListener(this.f20971d0);
            removeView(cVar);
        }
        this.f20973f0 = null;
        this.f20974g0 = v0.d();
        this.h0 = m.f3076d;
    }

    public final void z(an.e eVar, c cVar) {
        an.c m1306getBackgroundSubview;
        an.c cVar2 = (an.c) eVar;
        View m0getView = cVar2.m0getView();
        if (m0getView.getWidth() == 0 && m0getView.getHeight() == 0) {
            return;
        }
        int[] iArr = new int[2];
        int[] iArr2 = new int[2];
        cVar.getLocationInWindow(iArr);
        m0getView.getLocationInWindow(iArr2);
        zm.h hVar = this.a0;
        if (hVar != null) {
            an.f type = cVar2.getType();
            int i5 = iArr2[0] - iArr[0];
            int i6 = iArr2[1] - iArr[1];
            zm.c cVar3 = (zm.c) hVar;
            Intrinsics.checkNotNullParameter(type, "type");
            int ordinal = type.ordinal();
            if (ordinal == 0) {
                m1306getBackgroundSubview = cVar3.m1306getBackgroundSubview();
            } else if (ordinal == 1) {
                m1306getBackgroundSubview = cVar3.m1308getLeadingSubview();
            } else if (ordinal == 2) {
                m1306getBackgroundSubview = cVar3.m1307getCenterSubview();
            } else {
                if (ordinal != 3) {
                    throw new n();
                }
                m1306getBackgroundSubview = cVar3.m1309getTrailingSubview();
            }
            if (m1306getBackgroundSubview != null) {
                qm.b.a(m1306getBackgroundSubview.f687x, m1306getBackgroundSubview.getResources().getDisplayMetrics().density, null, null, Integer.valueOf(i5), Integer.valueOf(i6), 6);
            }
        }
    }
}
