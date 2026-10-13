package com.google.android.material.divider;

import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.View;
import androidx.annotation.NonNull;
import ch.q;
import com.discord.R;
import lh.i;
import ph.a;

/* loaded from: classes3.dex */
public class MaterialDivider extends View {

    /* renamed from: d, reason: collision with root package name */
    public final i f6067d;

    /* renamed from: e, reason: collision with root package name */
    public int f6068e;

    /* renamed from: i, reason: collision with root package name */
    public int f6069i;

    /* renamed from: v, reason: collision with root package name */
    public int f6070v;

    /* renamed from: w, reason: collision with root package name */
    public int f6071w;

    public MaterialDivider(@NonNull Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, R.attr.materialDividerStyle, R.style.Widget_MaterialComponents_MaterialDivider), attributeSet, R.attr.materialDividerStyle);
        Context context2 = getContext();
        this.f6067d = new i();
        TypedArray f2 = q.f(context2, attributeSet, lg.a.f13974y, R.attr.materialDividerStyle, R.style.Widget_MaterialComponents_MaterialDivider, new int[0]);
        this.f6068e = f2.getDimensionPixelSize(3, getResources().getDimensionPixelSize(R.dimen.material_divider_thickness));
        this.f6070v = f2.getDimensionPixelOffset(2, 0);
        this.f6071w = f2.getDimensionPixelOffset(1, 0);
        setDividerColor(k0.u(context2, f2, 0).getDefaultColor());
        f2.recycle();
    }

    public int getDividerColor() {
        return this.f6069i;
    }

    public int getDividerInsetEnd() {
        return this.f6071w;
    }

    public int getDividerInsetStart() {
        return this.f6070v;
    }

    public int getDividerThickness() {
        return this.f6068e;
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        int width;
        int i5;
        super.onDraw(canvas);
        boolean z5 = getLayoutDirection() == 1;
        int i6 = z5 ? this.f6071w : this.f6070v;
        if (z5) {
            width = getWidth();
            i5 = this.f6070v;
        } else {
            width = getWidth();
            i5 = this.f6071w;
        }
        int i10 = width - i5;
        int bottom = getBottom() - getTop();
        i iVar = this.f6067d;
        iVar.setBounds(i6, 0, i10, bottom);
        iVar.draw(canvas);
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        int mode = View.MeasureSpec.getMode(i6);
        int measuredHeight = getMeasuredHeight();
        if (mode == Integer.MIN_VALUE || mode == 0) {
            int i10 = this.f6068e;
            if (i10 > 0 && measuredHeight != i10) {
                measuredHeight = i10;
            }
            setMeasuredDimension(getMeasuredWidth(), measuredHeight);
        }
    }

    public void setDividerColor(int i5) {
        if (this.f6069i != i5) {
            this.f6069i = i5;
            this.f6067d.q(ColorStateList.valueOf(i5));
            invalidate();
        }
    }

    public void setDividerColorResource(int i5) {
        setDividerColor(getContext().getColor(i5));
    }

    public void setDividerInsetEnd(int i5) {
        this.f6071w = i5;
    }

    public void setDividerInsetEndResource(int i5) {
        setDividerInsetEnd(getContext().getResources().getDimensionPixelOffset(i5));
    }

    public void setDividerInsetStart(int i5) {
        this.f6070v = i5;
    }

    public void setDividerInsetStartResource(int i5) {
        setDividerInsetStart(getContext().getResources().getDimensionPixelOffset(i5));
    }

    public void setDividerThickness(int i5) {
        if (this.f6068e != i5) {
            this.f6068e = i5;
            requestLayout();
        }
    }

    public void setDividerThicknessResource(int i5) {
        setDividerThickness(getContext().getResources().getDimensionPixelSize(i5));
    }
}
