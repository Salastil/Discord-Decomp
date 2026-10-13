package com.google.android.material.internal;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;

/* loaded from: classes3.dex */
public class BaselineLayout extends ViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public int f6072d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f6073e;

    public BaselineLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f6072d = -1;
    }

    @Override // android.view.View
    public int getBaseline() {
        return this.f6072d;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int childCount = getChildCount();
        int paddingLeft = getPaddingLeft();
        int paddingRight = ((i10 - i5) - getPaddingRight()) - paddingLeft;
        int paddingTop = getPaddingTop();
        for (int i12 = 0; i12 < childCount; i12++) {
            View childAt = getChildAt(i12);
            if (childAt.getVisibility() != 8) {
                int measuredWidth = childAt.getMeasuredWidth();
                int measuredHeight = childAt.getMeasuredHeight();
                int i13 = ((paddingRight - measuredWidth) / 2) + paddingLeft;
                int baseline = (this.f6072d == -1 || childAt.getBaseline() == -1) ? paddingTop : (this.f6072d + paddingTop) - childAt.getBaseline();
                childAt.layout(i13, baseline, measuredWidth + i13, measuredHeight + baseline);
            }
        }
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        int childCount = getChildCount();
        int i10 = 0;
        int i11 = 0;
        int i12 = 0;
        int i13 = 0;
        int i14 = -1;
        int i15 = -1;
        for (int i16 = 0; i16 < childCount; i16++) {
            View childAt = getChildAt(i16);
            if (childAt.getVisibility() != 8) {
                measureChild(childAt, i5, i6);
                i10 = Math.max(i10, childAt.getMeasuredHeight());
                int baseline = childAt.getBaseline();
                if (baseline != -1) {
                    i14 = Math.max(i14, baseline);
                    i15 = Math.max(i15, childAt.getMeasuredHeight() - baseline);
                }
                i12 = Math.max(i12, childAt.getMeasuredWidth());
                i11 = Math.max(i11, childAt.getMeasuredHeight());
                i13 = View.combineMeasuredStates(i13, childAt.getMeasuredState());
            }
        }
        if (i14 != -1) {
            if (this.f6073e) {
                i11 = Math.max(i11, Math.max(i15, getPaddingBottom()) + i14);
            }
            this.f6072d = i14;
        }
        if (!this.f6073e) {
            i11 = getPaddingBottom() + i10;
        }
        setMeasuredDimension(View.resolveSizeAndState(Math.max(i12, getSuggestedMinimumWidth()), i5, i13), View.resolveSizeAndState(Math.max(i11, getSuggestedMinimumHeight()), i6, i13 << 16));
    }

    public void setMeasurePaddingFromBaseline(boolean z5) {
        this.f6073e = z5;
    }
}
