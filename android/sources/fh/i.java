package fh;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.util.SparseArray;
import android.util.TypedValue;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.annotation.NonNull;
import androidx.core.util.Pools$SynchronizedPool;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import java.util.HashSet;
import n.x;

/* loaded from: classes3.dex */
public abstract class i extends ViewGroup implements x {

    /* renamed from: w0, reason: collision with root package name */
    public static final int[] f8584w0 = {R.attr.state_checked};

    /* renamed from: x0, reason: collision with root package name */
    public static final int[] f8585x0 = {-16842910};
    public int E;
    public int F;
    public ColorStateList G;
    public int H;
    public ColorStateList I;
    public final ColorStateList J;
    public int K;
    public int L;
    public int M;
    public int N;
    public boolean O;
    public Drawable P;
    public ColorStateList Q;
    public int R;
    public final SparseArray S;
    public int T;
    public int U;
    public int V;
    public int W;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f8586b0;

    /* renamed from: c0, reason: collision with root package name */
    public int f8587c0;

    /* renamed from: d, reason: collision with root package name */
    public final m3.a f8588d;

    /* renamed from: d0, reason: collision with root package name */
    public int f8589d0;

    /* renamed from: e, reason: collision with root package name */
    public final androidx.appcompat.widget.b f8590e;

    /* renamed from: e0, reason: collision with root package name */
    public int f8591e0;

    /* renamed from: f0, reason: collision with root package name */
    public int f8592f0;

    /* renamed from: g0, reason: collision with root package name */
    public int f8593g0;
    public int h0;

    /* renamed from: i, reason: collision with root package name */
    public Pools$SynchronizedPool f8594i;

    /* renamed from: i0, reason: collision with root package name */
    public lh.m f8595i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f8596j0;

    /* renamed from: k0, reason: collision with root package name */
    public ColorStateList f8597k0;

    /* renamed from: l0, reason: collision with root package name */
    public k f8598l0;

    /* renamed from: m0, reason: collision with root package name */
    public g f8599m0;

    /* renamed from: n0, reason: collision with root package name */
    public boolean f8600n0;

    /* renamed from: o0, reason: collision with root package name */
    public boolean f8601o0;

    /* renamed from: p0, reason: collision with root package name */
    public int f8602p0;

    /* renamed from: q0, reason: collision with root package name */
    public int f8603q0;

    /* renamed from: r0, reason: collision with root package name */
    public boolean f8604r0;

    /* renamed from: s0, reason: collision with root package name */
    public MenuItem f8605s0;

    /* renamed from: t0, reason: collision with root package name */
    public int f8606t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f8607u0;

    /* renamed from: v, reason: collision with root package name */
    public final SparseArray f8608v;

    /* renamed from: v0, reason: collision with root package name */
    public final Rect f8609v0;

    /* renamed from: w, reason: collision with root package name */
    public int f8610w;

    /* renamed from: x, reason: collision with root package name */
    public int f8611x;

    /* renamed from: y, reason: collision with root package name */
    public h[] f8612y;

    public i(Context context) {
        super(context);
        this.f8608v = new SparseArray();
        this.E = -1;
        this.F = -1;
        this.S = new SparseArray();
        this.T = -1;
        this.U = -1;
        this.V = -1;
        this.W = -1;
        this.h0 = 49;
        this.f8596j0 = false;
        this.f8602p0 = 1;
        this.f8603q0 = 0;
        this.f8605s0 = null;
        this.f8606t0 = 7;
        this.f8607u0 = false;
        this.f8609v0 = new Rect();
        this.J = c();
        if (isInEditMode()) {
            this.f8588d = null;
        } else {
            m3.a aVar = new m3.a();
            this.f8588d = aVar;
            aVar.U(0);
            aVar.o();
            aVar.I(ta.a.G(getContext(), com.discord.R.attr.motionDurationMedium4, getResources().getInteger(com.discord.R.integer.material_motion_duration_long_1)));
            aVar.K(ta.a.H(getContext(), com.discord.R.attr.motionEasingStandard, mg.a.f14493b));
            aVar.Q(new ch.o());
        }
        this.f8590e = new androidx.appcompat.widget.b(4, (rg.b) this);
        setImportantForAccessibility(1);
    }

    private int getCollapsedVisibleItemCount() {
        return Math.min(this.f8606t0, this.f8599m0.f8583e);
    }

    private e getNewItem() {
        Pools$SynchronizedPool pools$SynchronizedPool = this.f8594i;
        e eVar = pools$SynchronizedPool != null ? (e) pools$SynchronizedPool.acquire() : null;
        return eVar == null ? new rg.a(getContext()) : eVar;
    }

    private void setBadgeIfNeeded(@NonNull e eVar) {
        og.a aVar;
        int id2 = eVar.getId();
        if (id2 == -1 || (aVar = (og.a) this.S.get(id2)) == null) {
            return;
        }
        eVar.setBadge(aVar);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void a() {
        e eVar;
        removeAllViews();
        h[] hVarArr = this.f8612y;
        if (hVarArr != null && this.f8594i != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    e eVar2 = (e) hVar;
                    this.f8594i.release(eVar2);
                    eVar2.j(eVar2.Q);
                    eVar2.f8557i0 = null;
                    eVar2.f8563o0 = 0.0f;
                    eVar2.f8550d = false;
                }
            }
        }
        this.f8598l0.f8616e = true;
        this.f8599m0.b();
        this.f8598l0.f8616e = false;
        int i5 = this.f8599m0.f8581c;
        if (i5 == 0) {
            this.E = 0;
            this.F = 0;
            this.f8612y = null;
            this.f8594i = null;
            return;
        }
        if (this.f8594i == null || this.f8603q0 != i5) {
            this.f8603q0 = i5;
            this.f8594i = new Pools$SynchronizedPool(i5);
        }
        HashSet hashSet = new HashSet();
        for (int i6 = 0; i6 < this.f8599m0.f8580b.size(); i6++) {
            hashSet.add(Integer.valueOf(this.f8599m0.a(i6).getItemId()));
        }
        int i10 = 0;
        while (true) {
            SparseArray sparseArray = this.S;
            if (i10 >= sparseArray.size()) {
                break;
            }
            int keyAt = sparseArray.keyAt(i10);
            if (!hashSet.contains(Integer.valueOf(keyAt))) {
                sparseArray.delete(keyAt);
            }
            i10++;
        }
        int size = this.f8599m0.f8580b.size();
        this.f8612y = new h[size];
        int i11 = this.f8610w;
        boolean z5 = i11 != -1 ? i11 == 0 : getCurrentVisibleContentItemCount() > 3;
        int i12 = 0;
        int i13 = 0;
        for (int i14 = 0; i14 < size; i14++) {
            MenuItem a = this.f8599m0.a(i14);
            boolean z6 = a instanceof a;
            if (z6) {
                Context context = getContext();
                b bVar = new b(context);
                LayoutInflater.from(context).inflate(com.discord.R.layout.m3_navigation_menu_divider, (ViewGroup) bVar, true);
                bVar.b();
                bVar.setOnlyShowWhenExpanded(true);
                bVar.setDividersEnabled(this.f8607u0);
                eVar = bVar;
            } else if (a.hasSubMenu()) {
                if (i12 > 0) {
                    throw new IllegalArgumentException("Only one layer of submenu is supported; a submenu inside a submenu is not supported by the Navigation Bar.");
                }
                l lVar = new l(getContext());
                int i15 = this.N;
                if (i15 == 0) {
                    i15 = this.L;
                }
                lVar.setTextAppearance(i15);
                lVar.setTextColor(this.I);
                lVar.setOnlyShowWhenExpanded(true);
                lVar.a((n.l) a);
                i12 = a.getSubMenu().size();
                eVar = lVar;
            } else if (i12 > 0) {
                i12--;
                eVar = e(i14, (n.l) a, z5, true);
            } else {
                n.l lVar2 = (n.l) a;
                boolean z7 = i13 >= this.f8606t0;
                i13++;
                eVar = e(i14, lVar2, z5, z7);
            }
            if (!z6 && a.isCheckable() && this.F == -1) {
                this.F = i14;
            }
            this.f8612y[i14] = eVar;
            addView(eVar);
        }
        int min = Math.min(size - 1, this.F);
        this.F = min;
        setCheckedItem(this.f8612y[min].getItemData());
    }

    @Override // n.x
    public final void b(n.j jVar) {
        this.f8599m0 = new g(jVar);
    }

    public final ColorStateList c() {
        TypedValue typedValue = new TypedValue();
        if (!getContext().getTheme().resolveAttribute(R.attr.textColorSecondary, typedValue, true)) {
            return null;
        }
        ColorStateList c6 = y0.b.c(getContext(), typedValue.resourceId);
        if (!getContext().getTheme().resolveAttribute(com.discord.R.attr.colorPrimary, typedValue, true)) {
            return null;
        }
        int i5 = typedValue.data;
        int defaultColor = c6.getDefaultColor();
        int[] iArr = f8584w0;
        int[] iArr2 = ViewGroup.EMPTY_STATE_SET;
        int[] iArr3 = f8585x0;
        return new ColorStateList(new int[][]{iArr3, iArr, iArr2}, new int[]{c6.getColorForState(iArr3, defaultColor), i5, defaultColor});
    }

    public final lh.i d() {
        if (this.f8595i0 == null || this.f8597k0 == null) {
            return null;
        }
        lh.i iVar = new lh.i(this.f8595i0);
        iVar.q(this.f8597k0);
        return iVar;
    }

    public final e e(int i5, n.l lVar, boolean z5, boolean z6) {
        this.f8598l0.f8616e = true;
        lVar.setCheckable(true);
        this.f8598l0.f8616e = false;
        e newItem = getNewItem();
        newItem.setShifting(z5);
        newItem.setLabelMaxLines(this.f8602p0);
        newItem.setIconTintList(this.G);
        newItem.setIconSize(this.H);
        newItem.setTextColor(this.J);
        newItem.setTextAppearanceInactive(this.K);
        newItem.setTextAppearanceActive(this.L);
        newItem.setHorizontalTextAppearanceInactive(this.M);
        newItem.setHorizontalTextAppearanceActive(this.N);
        newItem.setTextAppearanceActiveBoldEnabled(this.O);
        newItem.setTextColor(this.I);
        int i6 = this.T;
        if (i6 != -1) {
            newItem.setItemPaddingTop(i6);
        }
        int i10 = this.U;
        if (i10 != -1) {
            newItem.setItemPaddingBottom(i10);
        }
        newItem.setMeasureBottomPaddingFromLabelBaseline(this.f8600n0);
        newItem.setLabelFontScalingEnabled(this.f8601o0);
        int i11 = this.V;
        if (i11 != -1) {
            newItem.setActiveIndicatorLabelPadding(i11);
        }
        int i12 = this.W;
        if (i12 != -1) {
            newItem.setIconLabelHorizontalSpacing(i12);
        }
        newItem.setActiveIndicatorWidth(this.f8586b0);
        newItem.setActiveIndicatorHeight(this.f8587c0);
        newItem.setActiveIndicatorExpandedWidth(this.f8589d0);
        newItem.setActiveIndicatorExpandedHeight(this.f8591e0);
        newItem.setActiveIndicatorMarginHorizontal(this.f8592f0);
        newItem.setItemGravity(this.h0);
        newItem.setActiveIndicatorExpandedPadding(this.f8609v0);
        newItem.setActiveIndicatorExpandedMarginHorizontal(this.f8593g0);
        newItem.setActiveIndicatorDrawable(d());
        newItem.setActiveIndicatorResizeable(this.f8596j0);
        newItem.setActiveIndicatorEnabled(this.a0);
        Drawable drawable = this.P;
        if (drawable != null) {
            newItem.setItemBackground(drawable);
        } else {
            newItem.setItemBackground(this.R);
        }
        newItem.setItemRippleColor(this.Q);
        newItem.setLabelVisibilityMode(this.f8610w);
        newItem.setItemIconGravity(this.f8611x);
        newItem.setOnlyShowWhenExpanded(z6);
        newItem.setExpanded(this.f8604r0);
        newItem.a(lVar);
        newItem.setItemPosition(i5);
        int i13 = lVar.a;
        newItem.setOnTouchListener((View.OnTouchListener) this.f8608v.get(i13));
        newItem.setOnClickListener(this.f8590e);
        int i14 = this.E;
        if (i14 != 0 && i13 == i14) {
            this.F = i5;
        }
        setBadgeIfNeeded(newItem);
        return newItem;
    }

    public int getActiveIndicatorLabelPadding() {
        return this.V;
    }

    public SparseArray<og.a> getBadgeDrawables() {
        return this.S;
    }

    public int getCurrentVisibleContentItemCount() {
        return this.f8604r0 ? this.f8599m0.f8582d : getCollapsedVisibleItemCount();
    }

    public int getHorizontalItemTextAppearanceActive() {
        return this.N;
    }

    public int getHorizontalItemTextAppearanceInactive() {
        return this.M;
    }

    public int getIconLabelHorizontalSpacing() {
        return this.W;
    }

    public ColorStateList getIconTintList() {
        return this.G;
    }

    public ColorStateList getItemActiveIndicatorColor() {
        return this.f8597k0;
    }

    public boolean getItemActiveIndicatorEnabled() {
        return this.a0;
    }

    public int getItemActiveIndicatorExpandedHeight() {
        return this.f8591e0;
    }

    public int getItemActiveIndicatorExpandedMarginHorizontal() {
        return this.f8593g0;
    }

    public int getItemActiveIndicatorExpandedWidth() {
        return this.f8589d0;
    }

    public int getItemActiveIndicatorHeight() {
        return this.f8587c0;
    }

    public int getItemActiveIndicatorMarginHorizontal() {
        return this.f8592f0;
    }

    public lh.m getItemActiveIndicatorShapeAppearance() {
        return this.f8595i0;
    }

    public int getItemActiveIndicatorWidth() {
        return this.f8586b0;
    }

    public Drawable getItemBackground() {
        h[] hVarArr = this.f8612y;
        if (hVarArr != null && hVarArr.length > 0) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    return ((e) hVar).getBackground();
                }
            }
        }
        return this.P;
    }

    @Deprecated
    public int getItemBackgroundRes() {
        return this.R;
    }

    public int getItemGravity() {
        return this.h0;
    }

    public int getItemIconGravity() {
        return this.f8611x;
    }

    public int getItemIconSize() {
        return this.H;
    }

    public int getItemPaddingBottom() {
        return this.U;
    }

    public int getItemPaddingTop() {
        return this.T;
    }

    public ColorStateList getItemRippleColor() {
        return this.Q;
    }

    public int getItemTextAppearanceActive() {
        return this.L;
    }

    public int getItemTextAppearanceInactive() {
        return this.K;
    }

    public ColorStateList getItemTextColor() {
        return this.I;
    }

    public int getLabelMaxLines() {
        return this.f8602p0;
    }

    public int getLabelVisibilityMode() {
        return this.f8610w;
    }

    public g getMenu() {
        return this.f8599m0;
    }

    public boolean getScaleLabelTextWithFont() {
        return this.f8601o0;
    }

    public int getSelectedItemId() {
        return this.E;
    }

    public int getSelectedItemPosition() {
        return this.F;
    }

    public int getWindowAnimations() {
        return 0;
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(accessibilityNodeInfo);
        accessibilityNodeInfoCompat.a.setCollectionInfo(AccessibilityNodeInfo.CollectionInfo.obtain(1, getCurrentVisibleContentItemCount(), false, 1));
    }

    public void setActiveIndicatorLabelPadding(int i5) {
        this.V = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorLabelPadding(i5);
                }
            }
        }
    }

    public void setCheckedItem(@NonNull MenuItem menuItem) {
        if (this.f8605s0 == menuItem || !menuItem.isCheckable()) {
            return;
        }
        MenuItem menuItem2 = this.f8605s0;
        if (menuItem2 != null && menuItem2.isChecked()) {
            this.f8605s0.setChecked(false);
        }
        menuItem.setChecked(true);
        this.f8605s0 = menuItem;
    }

    public void setCollapsedMaxItemCount(int i5) {
        this.f8606t0 = i5;
    }

    public void setExpanded(boolean z5) {
        this.f8604r0 = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                hVar.setExpanded(z5);
            }
        }
    }

    public void setHorizontalItemTextAppearanceActive(int i5) {
        this.N = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setHorizontalTextAppearanceActive(i5);
                }
            }
        }
    }

    public void setHorizontalItemTextAppearanceInactive(int i5) {
        this.M = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setHorizontalTextAppearanceInactive(i5);
                }
            }
        }
    }

    public void setIconLabelHorizontalSpacing(int i5) {
        this.W = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setIconLabelHorizontalSpacing(i5);
                }
            }
        }
    }

    public void setIconTintList(ColorStateList colorStateList) {
        this.G = colorStateList;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setIconTintList(colorStateList);
                }
            }
        }
    }

    public void setItemActiveIndicatorColor(ColorStateList colorStateList) {
        this.f8597k0 = colorStateList;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorDrawable(d());
                }
            }
        }
    }

    public void setItemActiveIndicatorEnabled(boolean z5) {
        this.a0 = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorEnabled(z5);
                }
            }
        }
    }

    public void setItemActiveIndicatorExpandedHeight(int i5) {
        this.f8591e0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorExpandedHeight(i5);
                }
            }
        }
    }

    public void setItemActiveIndicatorExpandedMarginHorizontal(int i5) {
        this.f8593g0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorExpandedMarginHorizontal(i5);
                }
            }
        }
    }

    public void setItemActiveIndicatorExpandedWidth(int i5) {
        this.f8589d0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorExpandedWidth(i5);
                }
            }
        }
    }

    public void setItemActiveIndicatorHeight(int i5) {
        this.f8587c0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorHeight(i5);
                }
            }
        }
    }

    public void setItemActiveIndicatorMarginHorizontal(int i5) {
        this.f8592f0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorMarginHorizontal(i5);
                }
            }
        }
    }

    public void setItemActiveIndicatorResizeable(boolean z5) {
        this.f8596j0 = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorResizeable(z5);
                }
            }
        }
    }

    public void setItemActiveIndicatorShapeAppearance(lh.m mVar) {
        this.f8595i0 = mVar;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorDrawable(d());
                }
            }
        }
    }

    public void setItemActiveIndicatorWidth(int i5) {
        this.f8586b0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setActiveIndicatorWidth(i5);
                }
            }
        }
    }

    public void setItemBackground(Drawable drawable) {
        this.P = drawable;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemBackground(drawable);
                }
            }
        }
    }

    public void setItemBackgroundRes(int i5) {
        this.R = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemBackground(i5);
                }
            }
        }
    }

    public void setItemGravity(int i5) {
        this.h0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemGravity(i5);
                }
            }
        }
    }

    public void setItemIconGravity(int i5) {
        this.f8611x = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemIconGravity(i5);
                }
            }
        }
    }

    public void setItemIconSize(int i5) {
        this.H = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setIconSize(i5);
                }
            }
        }
    }

    public void setItemPaddingBottom(int i5) {
        this.U = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemPaddingBottom(this.U);
                }
            }
        }
    }

    public void setItemPaddingTop(int i5) {
        this.T = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemPaddingTop(i5);
                }
            }
        }
    }

    public void setItemRippleColor(ColorStateList colorStateList) {
        this.Q = colorStateList;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setItemRippleColor(colorStateList);
                }
            }
        }
    }

    public void setItemTextAppearanceActive(int i5) {
        this.L = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setTextAppearanceActive(i5);
                }
            }
        }
    }

    public void setItemTextAppearanceActiveBoldEnabled(boolean z5) {
        this.O = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setTextAppearanceActiveBoldEnabled(z5);
                }
            }
        }
    }

    public void setItemTextAppearanceInactive(int i5) {
        this.K = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setTextAppearanceInactive(i5);
                }
            }
        }
    }

    public void setItemTextColor(ColorStateList colorStateList) {
        this.I = colorStateList;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setTextColor(colorStateList);
                }
            }
        }
    }

    public void setLabelFontScalingEnabled(boolean z5) {
        this.f8601o0 = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setLabelFontScalingEnabled(z5);
                }
            }
        }
    }

    public void setLabelMaxLines(int i5) {
        this.f8602p0 = i5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setLabelMaxLines(i5);
                }
            }
        }
    }

    public void setLabelVisibilityMode(int i5) {
        this.f8610w = i5;
    }

    public void setMeasurePaddingFromLabelBaseline(boolean z5) {
        this.f8600n0 = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof e) {
                    ((e) hVar).setMeasureBottomPaddingFromLabelBaseline(z5);
                }
            }
        }
    }

    public void setPresenter(@NonNull k kVar) {
        this.f8598l0 = kVar;
    }

    public void setSubmenuDividersEnabled(boolean z5) {
        if (this.f8607u0 == z5) {
            return;
        }
        this.f8607u0 = z5;
        h[] hVarArr = this.f8612y;
        if (hVarArr != null) {
            for (h hVar : hVarArr) {
                if (hVar instanceof b) {
                    ((b) hVar).setDividersEnabled(z5);
                }
            }
        }
    }
}
