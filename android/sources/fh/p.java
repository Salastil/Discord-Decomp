package fh;

import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.SparseArray;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.annotation.NonNull;
import androidx.appcompat.view.ContextThemeWrapper;
import ch.q;
import com.discord.R;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import n.v;
import n.x;

/* loaded from: classes3.dex */
public abstract class p extends FrameLayout {

    /* renamed from: d, reason: collision with root package name */
    public final f f8624d;

    /* renamed from: e, reason: collision with root package name */
    public final rg.b f8625e;

    /* renamed from: i, reason: collision with root package name */
    public final k f8626i;

    /* renamed from: v, reason: collision with root package name */
    public m.e f8627v;

    /* renamed from: w, reason: collision with root package name */
    public n f8628w;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r10v3 */
    /* JADX WARN: Type inference failed for: r10v4, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r10v8 */
    public p(ContextThemeWrapper contextThemeWrapper) {
        super(ph.a.b(contextThemeWrapper, null, R.attr.bottomNavigationStyle, R.style.Widget_Design_BottomNavigationView, new int[0]), null, R.attr.bottomNavigationStyle);
        ?? r10;
        k kVar = new k();
        kVar.f8616e = false;
        this.f8626i = kVar;
        Context context = getContext();
        e4.m g6 = q.g(context, null, lg.a.G, R.attr.bottomNavigationStyle, R.style.Widget_Design_BottomNavigationView, 17, 15);
        f fVar = new f(context, getClass(), getMaxItemCount());
        this.f8624d = fVar;
        rg.b bVar = new rg.b(context);
        this.f8625e = bVar;
        bVar.setMinimumHeight(getSuggestedMinimumHeight());
        bVar.setCollapsedMaxItemCount(getCollapsedMaxItemCount());
        kVar.f8615d = bVar;
        kVar.f8617i = 1;
        bVar.setPresenter(kVar);
        fVar.b(kVar, fVar.a);
        kVar.c(getContext(), fVar);
        TypedArray typedArray = (TypedArray) g6.f7964i;
        if (typedArray.hasValue(11)) {
            bVar.setIconTintList(g6.T(11));
        } else {
            bVar.setIconTintList(bVar.c());
        }
        setItemIconSize(typedArray.getDimensionPixelSize(10, getResources().getDimensionPixelSize(R.dimen.mtrl_navigation_bar_item_default_icon_size)));
        if (typedArray.hasValue(17)) {
            setItemTextAppearanceInactive(typedArray.getResourceId(17, 0));
        }
        if (typedArray.hasValue(15)) {
            setItemTextAppearanceActive(typedArray.getResourceId(15, 0));
        }
        if (typedArray.hasValue(4)) {
            setHorizontalItemTextAppearanceInactive(typedArray.getResourceId(4, 0));
        }
        if (typedArray.hasValue(3)) {
            setHorizontalItemTextAppearanceActive(typedArray.getResourceId(3, 0));
        }
        setItemTextAppearanceActiveBoldEnabled(typedArray.getBoolean(16, true));
        if (typedArray.hasValue(18)) {
            setItemTextColor(g6.T(18));
        }
        Drawable background = getBackground();
        ColorStateList b10 = ah.d.b(background);
        if (background == null || b10 != null) {
            lh.i iVar = new lh.i(lh.m.c(context, null, R.attr.bottomNavigationStyle, R.style.Widget_Design_BottomNavigationView).a());
            if (b10 != null) {
                iVar.q(b10);
            }
            iVar.m(context);
            setBackground(iVar);
        }
        if (typedArray.hasValue(13)) {
            setItemPaddingTop(typedArray.getDimensionPixelSize(13, 0));
        }
        if (typedArray.hasValue(12)) {
            setItemPaddingBottom(typedArray.getDimensionPixelSize(12, 0));
        }
        if (typedArray.hasValue(0)) {
            setActiveIndicatorLabelPadding(typedArray.getDimensionPixelSize(0, 0));
        }
        if (typedArray.hasValue(5)) {
            setIconLabelHorizontalSpacing(typedArray.getDimensionPixelSize(5, 0));
        }
        if (typedArray.hasValue(2)) {
            setElevation(typedArray.getDimensionPixelSize(2, 0));
        }
        getBackground().mutate().setTintList(k0.v(context, g6, 1));
        setLabelVisibilityMode(typedArray.getInteger(21, -1));
        setItemIconGravity(typedArray.getInteger(9, 0));
        setItemGravity(typedArray.getInteger(8, 49));
        int resourceId = typedArray.getResourceId(7, 0);
        if (resourceId != 0) {
            bVar.setItemBackgroundRes(resourceId);
        } else {
            setItemRippleColor(k0.v(context, g6, 14));
        }
        setMeasureBottomPaddingFromLabelBaseline(typedArray.getBoolean(22, true));
        setLabelFontScalingEnabled(typedArray.getBoolean(19, false));
        setLabelMaxLines(typedArray.getInteger(20, 1));
        int resourceId2 = typedArray.getResourceId(6, 0);
        if (resourceId2 != 0) {
            setItemActiveIndicatorEnabled(true);
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(resourceId2, lg.a.F);
            int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(1, 0);
            setItemActiveIndicatorWidth(dimensionPixelSize);
            setItemActiveIndicatorHeight(obtainStyledAttributes.getDimensionPixelSize(0, 0));
            int dimensionPixelOffset = obtainStyledAttributes.getDimensionPixelOffset(10, 0);
            setItemActiveIndicatorMarginHorizontal(dimensionPixelOffset);
            String string = obtainStyledAttributes.getString(9);
            int i5 = -2;
            if (string != null) {
                if (String.valueOf(-1).equals(string)) {
                    i5 = -1;
                } else if (!String.valueOf(-2).equals(string)) {
                    i5 = obtainStyledAttributes.getDimensionPixelSize(9, -2);
                }
            }
            setItemActiveIndicatorExpandedWidth(i5);
            setItemActiveIndicatorExpandedHeight(obtainStyledAttributes.getDimensionPixelSize(7, dimensionPixelSize));
            setItemActiveIndicatorExpandedMarginHorizontal(obtainStyledAttributes.getDimensionPixelOffset(8, dimensionPixelOffset));
            int dimensionPixelSize2 = getResources().getDimensionPixelSize(R.dimen.m3_navigation_item_leading_trailing_space);
            int dimensionPixelOffset2 = obtainStyledAttributes.getDimensionPixelOffset(5, dimensionPixelSize2);
            int dimensionPixelOffset3 = obtainStyledAttributes.getDimensionPixelOffset(4, dimensionPixelSize2);
            int i6 = getLayoutDirection() == 1 ? dimensionPixelOffset3 : dimensionPixelOffset2;
            int dimensionPixelOffset4 = obtainStyledAttributes.getDimensionPixelOffset(6, 0);
            dimensionPixelOffset2 = getLayoutDirection() != 1 ? dimensionPixelOffset3 : dimensionPixelOffset2;
            int dimensionPixelOffset5 = obtainStyledAttributes.getDimensionPixelOffset(3, 0);
            Rect rect = bVar.f8609v0;
            rect.left = i6;
            rect.top = dimensionPixelOffset4;
            rect.right = dimensionPixelOffset2;
            rect.bottom = dimensionPixelOffset5;
            h[] hVarArr = bVar.f8612y;
            if (hVarArr != null) {
                for (h hVar : hVarArr) {
                    if (hVar instanceof e) {
                        ((e) hVar).setActiveIndicatorExpandedPadding(rect);
                    }
                }
            }
            setItemActiveIndicatorColor(k0.u(context, obtainStyledAttributes, 2));
            r10 = 0;
            setItemActiveIndicatorShapeAppearance(lh.m.a(context, obtainStyledAttributes.getResourceId(11, 0), 0).a());
            obtainStyledAttributes.recycle();
        } else {
            r10 = 0;
        }
        if (typedArray.hasValue(23)) {
            int resourceId3 = typedArray.getResourceId(23, r10);
            k kVar2 = this.f8626i;
            kVar2.f8616e = true;
            getMenuInflater().inflate(resourceId3, this.f8624d);
            kVar2.f8616e = r10;
            kVar2.a(true);
        }
        g6.e0();
        addView(this.f8625e);
        this.f8624d.f14650e = new gj.c(11, (rg.e) this);
    }

    private MenuInflater getMenuInflater() {
        if (this.f8627v == null) {
            this.f8627v = new m.e(getContext());
        }
        return this.f8627v;
    }

    private void setMeasureBottomPaddingFromLabelBaseline(boolean z5) {
        this.f8625e.setMeasurePaddingFromLabelBaseline(z5);
    }

    public int getActiveIndicatorLabelPadding() {
        return this.f8625e.getActiveIndicatorLabelPadding();
    }

    public int getCollapsedMaxItemCount() {
        return getMaxItemCount();
    }

    public int getHorizontalItemTextAppearanceActive() {
        return this.f8625e.getHorizontalItemTextAppearanceActive();
    }

    public int getHorizontalItemTextAppearanceInactive() {
        return this.f8625e.getHorizontalItemTextAppearanceInactive();
    }

    public int getIconLabelHorizontalSpacing() {
        return this.f8625e.getIconLabelHorizontalSpacing();
    }

    public ColorStateList getItemActiveIndicatorColor() {
        return this.f8625e.getItemActiveIndicatorColor();
    }

    public int getItemActiveIndicatorExpandedHeight() {
        return this.f8625e.getItemActiveIndicatorExpandedHeight();
    }

    public int getItemActiveIndicatorExpandedMarginHorizontal() {
        return this.f8625e.getItemActiveIndicatorExpandedMarginHorizontal();
    }

    public int getItemActiveIndicatorExpandedWidth() {
        return this.f8625e.getItemActiveIndicatorExpandedWidth();
    }

    public int getItemActiveIndicatorHeight() {
        return this.f8625e.getItemActiveIndicatorHeight();
    }

    public int getItemActiveIndicatorMarginHorizontal() {
        return this.f8625e.getItemActiveIndicatorMarginHorizontal();
    }

    public lh.m getItemActiveIndicatorShapeAppearance() {
        return this.f8625e.getItemActiveIndicatorShapeAppearance();
    }

    public int getItemActiveIndicatorWidth() {
        return this.f8625e.getItemActiveIndicatorWidth();
    }

    public Drawable getItemBackground() {
        return this.f8625e.getItemBackground();
    }

    @Deprecated
    public int getItemBackgroundResource() {
        return this.f8625e.getItemBackgroundRes();
    }

    public int getItemGravity() {
        return this.f8625e.getItemGravity();
    }

    public int getItemIconGravity() {
        return this.f8625e.getItemIconGravity();
    }

    public int getItemIconSize() {
        return this.f8625e.getItemIconSize();
    }

    public ColorStateList getItemIconTintList() {
        return this.f8625e.getIconTintList();
    }

    public int getItemPaddingBottom() {
        return this.f8625e.getItemPaddingBottom();
    }

    public int getItemPaddingTop() {
        return this.f8625e.getItemPaddingTop();
    }

    public ColorStateList getItemRippleColor() {
        return this.f8625e.getItemRippleColor();
    }

    public int getItemTextAppearanceActive() {
        return this.f8625e.getItemTextAppearanceActive();
    }

    public int getItemTextAppearanceInactive() {
        return this.f8625e.getItemTextAppearanceInactive();
    }

    public ColorStateList getItemTextColor() {
        return this.f8625e.getItemTextColor();
    }

    public int getLabelVisibilityMode() {
        return this.f8625e.getLabelVisibilityMode();
    }

    public abstract int getMaxItemCount();

    @NonNull
    public Menu getMenu() {
        return this.f8624d;
    }

    @NonNull
    public x getMenuView() {
        return this.f8625e;
    }

    @NonNull
    public ViewGroup getMenuViewGroup() {
        return this.f8625e;
    }

    @NonNull
    public k getPresenter() {
        return this.f8626i;
    }

    public boolean getScaleLabelTextWithFont() {
        return this.f8625e.getScaleLabelTextWithFont();
    }

    public int getSelectedItemId() {
        return this.f8625e.getSelectedItemId();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        Drawable background = getBackground();
        if (background instanceof lh.i) {
            jb.a.I(this, (lh.i) background);
        }
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        Parcelable parcelable2;
        if (!(parcelable instanceof o)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        o oVar = (o) parcelable;
        super.onRestoreInstanceState(oVar.f7399d);
        Bundle bundle = oVar.f8623i;
        CopyOnWriteArrayList copyOnWriteArrayList = this.f8624d.f14664u;
        SparseArray sparseParcelableArray = bundle.getSparseParcelableArray("android:menu:presenters");
        if (sparseParcelableArray == null || copyOnWriteArrayList.isEmpty()) {
            return;
        }
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            v vVar = (v) weakReference.get();
            if (vVar == null) {
                copyOnWriteArrayList.remove(weakReference);
            } else {
                int id2 = vVar.getId();
                if (id2 > 0 && (parcelable2 = (Parcelable) sparseParcelableArray.get(id2)) != null) {
                    vVar.f(parcelable2);
                }
            }
        }
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        Parcelable i5;
        o oVar = new o(super.onSaveInstanceState());
        Bundle bundle = new Bundle();
        oVar.f8623i = bundle;
        CopyOnWriteArrayList copyOnWriteArrayList = this.f8624d.f14664u;
        if (copyOnWriteArrayList.isEmpty()) {
            return oVar;
        }
        SparseArray<? extends Parcelable> sparseArray = new SparseArray<>();
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            v vVar = (v) weakReference.get();
            if (vVar == null) {
                copyOnWriteArrayList.remove(weakReference);
            } else {
                int id2 = vVar.getId();
                if (id2 > 0 && (i5 = vVar.i()) != null) {
                    sparseArray.put(id2, i5);
                }
            }
        }
        bundle.putSparseParcelableArray("android:menu:presenters", sparseArray);
        return oVar;
    }

    public void setActiveIndicatorLabelPadding(int i5) {
        this.f8625e.setActiveIndicatorLabelPadding(i5);
    }

    @Override // android.view.View
    public void setElevation(float f2) {
        super.setElevation(f2);
        Drawable background = getBackground();
        if (background instanceof lh.i) {
            ((lh.i) background).p(f2);
        }
    }

    public void setHorizontalItemTextAppearanceActive(int i5) {
        this.f8625e.setHorizontalItemTextAppearanceActive(i5);
    }

    public void setHorizontalItemTextAppearanceInactive(int i5) {
        this.f8625e.setHorizontalItemTextAppearanceInactive(i5);
    }

    public void setIconLabelHorizontalSpacing(int i5) {
        this.f8625e.setIconLabelHorizontalSpacing(i5);
    }

    public void setItemActiveIndicatorColor(ColorStateList colorStateList) {
        this.f8625e.setItemActiveIndicatorColor(colorStateList);
    }

    public void setItemActiveIndicatorEnabled(boolean z5) {
        this.f8625e.setItemActiveIndicatorEnabled(z5);
    }

    public void setItemActiveIndicatorExpandedHeight(int i5) {
        this.f8625e.setItemActiveIndicatorExpandedHeight(i5);
    }

    public void setItemActiveIndicatorExpandedMarginHorizontal(int i5) {
        this.f8625e.setItemActiveIndicatorExpandedMarginHorizontal(i5);
    }

    public void setItemActiveIndicatorExpandedWidth(int i5) {
        this.f8625e.setItemActiveIndicatorExpandedWidth(i5);
    }

    public void setItemActiveIndicatorHeight(int i5) {
        this.f8625e.setItemActiveIndicatorHeight(i5);
    }

    public void setItemActiveIndicatorMarginHorizontal(int i5) {
        this.f8625e.setItemActiveIndicatorMarginHorizontal(i5);
    }

    public void setItemActiveIndicatorShapeAppearance(lh.m mVar) {
        this.f8625e.setItemActiveIndicatorShapeAppearance(mVar);
    }

    public void setItemActiveIndicatorWidth(int i5) {
        this.f8625e.setItemActiveIndicatorWidth(i5);
    }

    public void setItemBackground(Drawable drawable) {
        this.f8625e.setItemBackground(drawable);
    }

    public void setItemBackgroundResource(int i5) {
        this.f8625e.setItemBackgroundRes(i5);
    }

    public void setItemGravity(int i5) {
        rg.b bVar = this.f8625e;
        if (bVar.getItemGravity() != i5) {
            bVar.setItemGravity(i5);
            this.f8626i.a(false);
        }
    }

    public void setItemIconGravity(int i5) {
        rg.b bVar = this.f8625e;
        if (bVar.getItemIconGravity() != i5) {
            bVar.setItemIconGravity(i5);
            this.f8626i.a(false);
        }
    }

    public void setItemIconSize(int i5) {
        this.f8625e.setItemIconSize(i5);
    }

    public void setItemIconSizeRes(int i5) {
        setItemIconSize(getResources().getDimensionPixelSize(i5));
    }

    public void setItemIconTintList(ColorStateList colorStateList) {
        this.f8625e.setIconTintList(colorStateList);
    }

    public void setItemPaddingBottom(int i5) {
        this.f8625e.setItemPaddingBottom(i5);
    }

    public void setItemPaddingTop(int i5) {
        this.f8625e.setItemPaddingTop(i5);
    }

    public void setItemRippleColor(ColorStateList colorStateList) {
        this.f8625e.setItemRippleColor(colorStateList);
    }

    public void setItemTextAppearanceActive(int i5) {
        this.f8625e.setItemTextAppearanceActive(i5);
    }

    public void setItemTextAppearanceActiveBoldEnabled(boolean z5) {
        this.f8625e.setItemTextAppearanceActiveBoldEnabled(z5);
    }

    public void setItemTextAppearanceInactive(int i5) {
        this.f8625e.setItemTextAppearanceInactive(i5);
    }

    public void setItemTextColor(ColorStateList colorStateList) {
        this.f8625e.setItemTextColor(colorStateList);
    }

    public void setLabelFontScalingEnabled(boolean z5) {
        this.f8625e.setLabelFontScalingEnabled(z5);
    }

    public void setLabelMaxLines(int i5) {
        this.f8625e.setLabelMaxLines(i5);
    }

    public void setLabelVisibilityMode(int i5) {
        rg.b bVar = this.f8625e;
        if (bVar.getLabelVisibilityMode() != i5) {
            bVar.setLabelVisibilityMode(i5);
            this.f8626i.a(false);
        }
    }

    public void setOnItemSelectedListener(n nVar) {
        this.f8628w = nVar;
    }

    public void setSelectedItemId(int i5) {
        f fVar = this.f8624d;
        MenuItem findItem = fVar.findItem(i5);
        if (findItem != null) {
            boolean q5 = fVar.q(findItem, this.f8626i, 0);
            if (findItem.isCheckable()) {
                if (!q5 || findItem.isChecked()) {
                    this.f8625e.setCheckedItem(findItem);
                }
            }
        }
    }

    public void setOnItemReselectedListener(m mVar) {
    }
}
