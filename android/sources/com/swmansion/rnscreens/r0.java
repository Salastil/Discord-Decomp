package com.swmansion.rnscreens;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.view.ViewParent;
import android.widget.EditText;
import android.widget.ImageView;
import androidx.appcompat.widget.f3;
import com.discord.R;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class r0 extends ReactViewGroup {
    public boolean E;
    public boolean F;
    public boolean G;
    public e4.m H;
    public boolean I;
    public final int J;

    /* renamed from: d, reason: collision with root package name */
    public q0 f6782d;

    /* renamed from: e, reason: collision with root package name */
    public l0 f6783e;

    /* renamed from: i, reason: collision with root package name */
    public Integer f6784i;

    /* renamed from: v, reason: collision with root package name */
    public Integer f6785v;

    /* renamed from: w, reason: collision with root package name */
    public Integer f6786w;

    /* renamed from: x, reason: collision with root package name */
    public Integer f6787x;

    /* renamed from: y, reason: collision with root package name */
    public String f6788y;

    public r0(ThemedReactContext themedReactContext) {
        super(themedReactContext);
        this.f6782d = q0.f6776d;
        this.f6783e = l0.f6764d;
        this.f6788y = "";
        this.E = true;
        this.G = true;
        this.J = UIManagerHelper.getSurfaceId(this);
    }

    public static Unit c(r0 r0Var, b searchView) {
        b0 screenStackFragment;
        b bVar;
        Intrinsics.checkNotNullParameter(searchView, "newSearchView");
        if (r0Var.H == null) {
            Intrinsics.checkNotNullParameter(searchView, "searchView");
            e4.m mVar = new e4.m(16, false);
            mVar.f7963e = searchView;
            r0Var.H = mVar;
        }
        r0Var.l();
        if (r0Var.F && (screenStackFragment = r0Var.getScreenStackFragment()) != null && (bVar = screenStackFragment.L) != null) {
            bVar.setIconified(false);
            bVar.requestFocusFromTouch();
        }
        return Unit.a;
    }

    public static void d(r0 r0Var) {
        r0Var.k(new k4.k(r0Var.J, r0Var.getId(), 10));
        r0Var.setToolbarElementsVisibility(0);
    }

    public static void e(r0 r0Var) {
        r0Var.k(new k4.k(r0Var.J, r0Var.getId(), 12));
        r0Var.setToolbarElementsVisibility(8);
    }

    private final ScreenStackHeaderConfig getHeaderConfig() {
        ViewParent parent = getParent();
        if (parent instanceof g0) {
            return ((g0) parent).getConfig();
        }
        return null;
    }

    private final b0 getScreenStackFragment() {
        ScreenStackHeaderConfig headerConfig = getHeaderConfig();
        if (headerConfig != null) {
            return headerConfig.getScreenFragment();
        }
        return null;
    }

    private final void setSearchViewListeners(f3 f3Var) {
        f3Var.setOnQueryTextListener(new ve.i((Object) this));
        f3Var.setOnQueryTextFocusChangeListener(new com.discord.chat.input.views.b(1, this));
        f3Var.setOnCloseListener(new app.rive.runtime.kotlin.core.a(24, this));
        f3Var.setOnSearchClickListener(new com.discord.chat.presentation.list.delegate.b(8, this));
    }

    private final void setToolbarElementsVisibility(int i5) {
        g0 g0Var;
        ScreenStackHeaderConfig headerConfig = getHeaderConfig();
        int configSubviewsCount = headerConfig != null ? headerConfig.getConfigSubviewsCount() - 1 : 0;
        if (configSubviewsCount < 0) {
            return;
        }
        int i6 = 0;
        while (true) {
            ScreenStackHeaderConfig headerConfig2 = getHeaderConfig();
            if (headerConfig2 != null) {
                Object obj = headerConfig2.f6718y.get(i6);
                Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
                g0Var = (g0) obj;
            } else {
                g0Var = null;
            }
            if ((g0Var != null ? g0Var.getType() : null) != f0.f6753w && g0Var != null) {
                g0Var.setHiddenBySearchBar$react_native_screens_release(i5 == 8);
            }
            if (i6 == configSubviewsCount) {
                return;
            } else {
                i6++;
            }
        }
    }

    public final void f() {
        b bVar;
        b0 screenStackFragment = getScreenStackFragment();
        if (screenStackFragment == null || (bVar = screenStackFragment.L) == null) {
            return;
        }
        bVar.clearFocus();
    }

    public final void g() {
        b bVar;
        b0 screenStackFragment = getScreenStackFragment();
        if (screenStackFragment == null || (bVar = screenStackFragment.L) == null) {
            return;
        }
        bVar.r("");
        bVar.setIconified(true);
    }

    @NotNull
    public final l0 getAutoCapitalize() {
        return this.f6783e;
    }

    public final boolean getAutoFocus() {
        return this.F;
    }

    public final Integer getHeaderIconColor() {
        return this.f6786w;
    }

    public final Integer getHintTextColor() {
        return this.f6787x;
    }

    @NotNull
    public final q0 getInputType() {
        return this.f6782d;
    }

    @NotNull
    public final String getPlaceholder() {
        return this.f6788y;
    }

    public final boolean getShouldOverrideBackButton() {
        return this.E;
    }

    public final boolean getShouldShowHintSearchIcon() {
        return this.G;
    }

    public final Integer getTextColor() {
        return this.f6784i;
    }

    public final Integer getTintColor() {
        return this.f6785v;
    }

    public final void h() {
        b bVar;
        b0 screenStackFragment = getScreenStackFragment();
        if (screenStackFragment == null || (bVar = screenStackFragment.L) == null) {
            return;
        }
        bVar.r("");
    }

    public final void i() {
        b bVar;
        b0 screenStackFragment = getScreenStackFragment();
        if (screenStackFragment == null || (bVar = screenStackFragment.L) == null) {
            return;
        }
        bVar.setIconified(false);
        bVar.requestFocusFromTouch();
    }

    public final void j(String str) {
        b0 screenStackFragment;
        b bVar;
        if (str == null || (screenStackFragment = getScreenStackFragment()) == null || (bVar = screenStackFragment.L) == null) {
            return;
        }
        bVar.setText(str);
    }

    public final void k(Event event) {
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag((ReactContext) context, getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(event);
        }
    }

    public final void l() {
        Integer num;
        EditText X;
        ColorStateList textColors;
        b0 screenStackFragment = getScreenStackFragment();
        Integer num2 = null;
        b bVar = screenStackFragment != null ? screenStackFragment.L : null;
        if (bVar != null) {
            if (!this.I) {
                setSearchViewListeners(bVar);
                this.I = true;
            }
            bVar.setInputType(this.f6782d.a(this.f6783e));
            e4.m mVar = this.H;
            if (mVar != null) {
                Integer num3 = this.f6784i;
                Integer num4 = (Integer) mVar.f7964i;
                if (num3 != null) {
                    if (num4 == null) {
                        EditText X2 = mVar.X();
                        if (X2 != null && (textColors = X2.getTextColors()) != null) {
                            num2 = Integer.valueOf(textColors.getDefaultColor());
                        }
                        mVar.f7964i = num2;
                    }
                    EditText X3 = mVar.X();
                    if (X3 != null) {
                        X3.setTextColor(num3.intValue());
                    }
                } else if (num4 != null && (X = mVar.X()) != null) {
                    X.setTextColor(num4.intValue());
                }
            }
            e4.m mVar2 = this.H;
            if (mVar2 != null) {
                b bVar2 = (b) mVar2.f7963e;
                Integer num5 = this.f6785v;
                Drawable drawable = (Drawable) mVar2.f7965v;
                if (num5 != null) {
                    if (drawable == null) {
                        mVar2.f7965v = bVar2.findViewById(R.id.search_plate).getBackground();
                    }
                    bVar2.findViewById(R.id.search_plate).setBackgroundColor(num5.intValue());
                } else if (drawable != null) {
                    bVar2.findViewById(R.id.search_plate).setBackground(drawable);
                }
            }
            e4.m mVar3 = this.H;
            if (mVar3 != null) {
                Integer num6 = this.f6786w;
                b bVar3 = (b) mVar3.f7963e;
                if (num6 != null) {
                    int intValue = num6.intValue();
                    ((ImageView) bVar3.findViewById(R.id.search_button)).setColorFilter(intValue);
                    ((ImageView) bVar3.findViewById(R.id.search_close_btn)).setColorFilter(intValue);
                }
            }
            e4.m mVar4 = this.H;
            if (mVar4 != null && (num = this.f6787x) != null) {
                int intValue2 = num.intValue();
                EditText X4 = mVar4.X();
                if (X4 != null) {
                    X4.setHintTextColor(intValue2);
                }
            }
            e4.m mVar5 = this.H;
            if (mVar5 != null) {
                String placeholder = this.f6788y;
                boolean z5 = this.G;
                Intrinsics.checkNotNullParameter(placeholder, "placeholder");
                if (z5) {
                    ((b) mVar5.f7963e).setQueryHint(placeholder);
                } else {
                    EditText X5 = mVar5.X();
                    if (X5 != null) {
                        X5.setHint(placeholder);
                    }
                }
            }
            bVar.setOverrideBackAction(this.E);
        }
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        b0 screenStackFragment = getScreenStackFragment();
        if (screenStackFragment != null) {
            screenStackFragment.M = new com.facebook.react.runtime.r(1, this);
        }
    }

    public final void setAutoCapitalize(@NotNull l0 l0Var) {
        Intrinsics.checkNotNullParameter(l0Var, "<set-?>");
        this.f6783e = l0Var;
    }

    public final void setAutoFocus(boolean z5) {
        this.F = z5;
    }

    public final void setHeaderIconColor(Integer num) {
        this.f6786w = num;
    }

    public final void setHintTextColor(Integer num) {
        this.f6787x = num;
    }

    public final void setInputType(@NotNull q0 q0Var) {
        Intrinsics.checkNotNullParameter(q0Var, "<set-?>");
        this.f6782d = q0Var;
    }

    public final void setPlaceholder(@NotNull String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.f6788y = str;
    }

    public final void setShouldOverrideBackButton(boolean z5) {
        this.E = z5;
    }

    public final void setShouldShowHintSearchIcon(boolean z5) {
        this.G = z5;
    }

    public final void setTextColor(Integer num) {
        this.f6784i = num;
    }

    public final void setTintColor(Integer num) {
        this.f6785v = num;
    }
}
