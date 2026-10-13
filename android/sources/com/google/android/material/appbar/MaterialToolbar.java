package com.google.android.material.appbar;

import ah.d;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.util.Pair;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.Toolbar;
import bg.s;
import ch.q;
import com.discord.R;
import java.util.ArrayList;
import java.util.Collections;
import lh.i;
import ph.a;

/* loaded from: classes3.dex */
public class MaterialToolbar extends Toolbar {

    /* renamed from: z0, reason: collision with root package name */
    public static final ImageView.ScaleType[] f5925z0 = {ImageView.ScaleType.MATRIX, ImageView.ScaleType.FIT_XY, ImageView.ScaleType.FIT_START, ImageView.ScaleType.FIT_CENTER, ImageView.ScaleType.FIT_END, ImageView.ScaleType.CENTER, ImageView.ScaleType.CENTER_CROP, ImageView.ScaleType.CENTER_INSIDE};

    /* renamed from: u0, reason: collision with root package name */
    public Integer f5926u0;

    /* renamed from: v0, reason: collision with root package name */
    public boolean f5927v0;

    /* renamed from: w0, reason: collision with root package name */
    public boolean f5928w0;

    /* renamed from: x0, reason: collision with root package name */
    public ImageView.ScaleType f5929x0;

    /* renamed from: y0, reason: collision with root package name */
    public Boolean f5930y0;

    public MaterialToolbar(@NonNull Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, R.attr.toolbarStyle, R.style.Widget_MaterialComponents_Toolbar), attributeSet, 0);
        Context context2 = getContext();
        TypedArray f2 = q.f(context2, attributeSet, lg.a.E, R.attr.toolbarStyle, R.style.Widget_MaterialComponents_Toolbar, new int[0]);
        if (f2.hasValue(2)) {
            setNavigationIconTint(f2.getColor(2, -1));
        }
        this.f5927v0 = f2.getBoolean(4, false);
        this.f5928w0 = f2.getBoolean(3, false);
        int i5 = f2.getInt(1, -1);
        if (i5 >= 0) {
            ImageView.ScaleType[] scaleTypeArr = f5925z0;
            if (i5 < scaleTypeArr.length) {
                this.f5929x0 = scaleTypeArr[i5];
            }
        }
        if (f2.hasValue(0)) {
            this.f5930y0 = Boolean.valueOf(f2.getBoolean(0, false));
        }
        f2.recycle();
        Drawable background = getBackground();
        ColorStateList valueOf = background == null ? ColorStateList.valueOf(0) : d.b(background);
        if (valueOf != null) {
            i iVar = new i();
            iVar.q(valueOf);
            iVar.m(context2);
            iVar.p(getElevation());
            setBackground(iVar);
        }
    }

    public ImageView.ScaleType getLogoScaleType() {
        return this.f5929x0;
    }

    public Integer getNavigationIconTint() {
        return this.f5926u0;
    }

    @Override // androidx.appcompat.widget.Toolbar, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        Drawable background = getBackground();
        if (background instanceof i) {
            jb.a.I(this, (i) background);
        }
    }

    @Override // androidx.appcompat.widget.Toolbar, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        ImageView imageView;
        Drawable drawable;
        super.onLayout(z5, i5, i6, i10, i11);
        s sVar = q.f3562c;
        int i12 = 0;
        ImageView imageView2 = null;
        if (this.f5927v0 || this.f5928w0) {
            ArrayList e9 = q.e(this, getTitle());
            TextView textView = e9.isEmpty() ? null : (TextView) Collections.min(e9, sVar);
            ArrayList e10 = q.e(this, getSubtitle());
            TextView textView2 = e10.isEmpty() ? null : (TextView) Collections.max(e10, sVar);
            if (textView != null || textView2 != null) {
                int measuredWidth = getMeasuredWidth();
                int i13 = measuredWidth / 2;
                int paddingLeft = getPaddingLeft();
                int paddingRight = measuredWidth - getPaddingRight();
                for (int i14 = 0; i14 < getChildCount(); i14++) {
                    View childAt = getChildAt(i14);
                    if (childAt.getVisibility() != 8 && childAt != textView && childAt != textView2) {
                        if (childAt.getRight() < i13 && childAt.getRight() > paddingLeft) {
                            paddingLeft = childAt.getRight();
                        }
                        if (childAt.getLeft() > i13 && childAt.getLeft() < paddingRight) {
                            paddingRight = childAt.getLeft();
                        }
                    }
                }
                Pair pair = new Pair(Integer.valueOf(paddingLeft), Integer.valueOf(paddingRight));
                if (this.f5927v0 && textView != null) {
                    w(textView, pair);
                }
                if (this.f5928w0 && textView2 != null) {
                    w(textView2, pair);
                }
            }
        }
        Drawable logo = getLogo();
        if (logo != null) {
            while (true) {
                if (i12 >= getChildCount()) {
                    break;
                }
                View childAt2 = getChildAt(i12);
                if ((childAt2 instanceof ImageView) && (drawable = (imageView = (ImageView) childAt2).getDrawable()) != null && drawable.getConstantState() != null && drawable.getConstantState().equals(logo.getConstantState())) {
                    imageView2 = imageView;
                    break;
                }
                i12++;
            }
        }
        if (imageView2 != null) {
            Boolean bool = this.f5930y0;
            if (bool != null) {
                imageView2.setAdjustViewBounds(bool.booleanValue());
            }
            ImageView.ScaleType scaleType = this.f5929x0;
            if (scaleType != null) {
                imageView2.setScaleType(scaleType);
            }
        }
    }

    @Override // android.view.View
    public void setElevation(float f2) {
        super.setElevation(f2);
        Drawable background = getBackground();
        if (background instanceof i) {
            ((i) background).p(f2);
        }
    }

    public void setLogoAdjustViewBounds(boolean z5) {
        Boolean bool = this.f5930y0;
        if (bool == null || bool.booleanValue() != z5) {
            this.f5930y0 = Boolean.valueOf(z5);
            requestLayout();
        }
    }

    public void setLogoScaleType(@NonNull ImageView.ScaleType scaleType) {
        if (this.f5929x0 != scaleType) {
            this.f5929x0 = scaleType;
            requestLayout();
        }
    }

    @Override // androidx.appcompat.widget.Toolbar
    public void setNavigationIcon(Drawable drawable) {
        if (drawable != null && this.f5926u0 != null) {
            drawable = drawable.mutate();
            drawable.setTint(this.f5926u0.intValue());
        }
        super.setNavigationIcon(drawable);
    }

    public void setNavigationIconTint(int i5) {
        this.f5926u0 = Integer.valueOf(i5);
        Drawable navigationIcon = getNavigationIcon();
        if (navigationIcon != null) {
            setNavigationIcon(navigationIcon);
        }
    }

    public void setSubtitleCentered(boolean z5) {
        if (this.f5928w0 != z5) {
            this.f5928w0 = z5;
            requestLayout();
        }
    }

    public void setTitleCentered(boolean z5) {
        if (this.f5927v0 != z5) {
            this.f5927v0 = z5;
            requestLayout();
        }
    }

    public final void w(TextView textView, Pair pair) {
        int measuredWidth = getMeasuredWidth();
        int measuredWidth2 = textView.getMeasuredWidth();
        int i5 = (measuredWidth / 2) - (measuredWidth2 / 2);
        int i6 = measuredWidth2 + i5;
        int max = Math.max(Math.max(((Integer) pair.first).intValue() - i5, 0), Math.max(i6 - ((Integer) pair.second).intValue(), 0));
        if (max > 0) {
            i5 += max;
            i6 -= max;
            textView.measure(View.MeasureSpec.makeMeasureSpec(i6 - i5, 1073741824), textView.getMeasuredHeightAndState());
        }
        textView.layout(i5, textView.getTop(), i6, textView.getBottom());
    }
}
