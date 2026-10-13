package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.LinearLayout;

/* loaded from: classes.dex */
public abstract class y1 extends ViewGroup {
    public boolean E;
    public int[] F;
    public int[] G;
    public Drawable H;
    public int I;
    public int J;
    public int K;
    public int L;

    /* renamed from: d, reason: collision with root package name */
    public boolean f1175d;

    /* renamed from: e, reason: collision with root package name */
    public int f1176e;

    /* renamed from: i, reason: collision with root package name */
    public int f1177i;

    /* renamed from: v, reason: collision with root package name */
    public int f1178v;

    /* renamed from: w, reason: collision with root package name */
    public int f1179w;

    /* renamed from: x, reason: collision with root package name */
    public int f1180x;

    /* renamed from: y, reason: collision with root package name */
    public float f1181y;

    public y1(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        this.f1175d = true;
        this.f1176e = -1;
        this.f1177i = 0;
        this.f1179w = 8388659;
        int[] iArr = h.a.f9456n;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, i5);
        androidx.core.view.s0.o(this, context, iArr, attributeSet, (TypedArray) b02.f7964i, i5, 0);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        int i6 = typedArray.getInt(1, -1);
        if (i6 >= 0) {
            setOrientation(i6);
        }
        int i10 = typedArray.getInt(0, -1);
        if (i10 >= 0) {
            setGravity(i10);
        }
        boolean z5 = typedArray.getBoolean(2, true);
        if (!z5) {
            setBaselineAligned(z5);
        }
        this.f1181y = typedArray.getFloat(4, -1.0f);
        this.f1176e = typedArray.getInt(3, -1);
        this.E = typedArray.getBoolean(7, false);
        setDividerDrawable(b02.U(5));
        this.K = typedArray.getInt(8, 0);
        this.L = typedArray.getDimensionPixelSize(6, 0);
        b02.e0();
    }

    @Override // android.view.ViewGroup
    public boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof x1;
    }

    public final void d(Canvas canvas, int i5) {
        this.H.setBounds(getPaddingLeft() + this.L, i5, (getWidth() - getPaddingRight()) - this.L, this.J + i5);
        this.H.draw(canvas);
    }

    public final void e(Canvas canvas, int i5) {
        this.H.setBounds(i5, getPaddingTop() + this.L, this.I + i5, (getHeight() - getPaddingBottom()) - this.L);
        this.H.draw(canvas);
    }

    @Override // android.view.ViewGroup
    /* renamed from: f, reason: merged with bridge method [inline-methods] */
    public x1 generateDefaultLayoutParams() {
        int i5 = this.f1178v;
        if (i5 == 0) {
            return new x1(-2, -2);
        }
        if (i5 == 1) {
            return new x1(-1, -2);
        }
        return null;
    }

    @Override // android.view.ViewGroup
    /* renamed from: g, reason: merged with bridge method [inline-methods] */
    public x1 generateLayoutParams(AttributeSet attributeSet) {
        return new x1(getContext(), attributeSet);
    }

    @Override // android.view.View
    public int getBaseline() {
        int i5;
        if (this.f1176e < 0) {
            return super.getBaseline();
        }
        int childCount = getChildCount();
        int i6 = this.f1176e;
        if (childCount <= i6) {
            throw new RuntimeException("mBaselineAlignedChildIndex of LinearLayout set to an index that is out of bounds.");
        }
        View childAt = getChildAt(i6);
        int baseline = childAt.getBaseline();
        if (baseline == -1) {
            if (this.f1176e == 0) {
                return -1;
            }
            throw new RuntimeException("mBaselineAlignedChildIndex of LinearLayout points to a View that doesn't know how to get its baseline.");
        }
        int i10 = this.f1177i;
        if (this.f1178v == 1 && (i5 = this.f1179w & 112) != 48) {
            if (i5 == 16) {
                i10 += ((((getBottom() - getTop()) - getPaddingTop()) - getPaddingBottom()) - this.f1180x) / 2;
            } else if (i5 == 80) {
                i10 = ((getBottom() - getTop()) - getPaddingBottom()) - this.f1180x;
            }
        }
        return i10 + ((LinearLayout.LayoutParams) ((x1) childAt.getLayoutParams())).topMargin + baseline;
    }

    public int getBaselineAlignedChildIndex() {
        return this.f1176e;
    }

    public Drawable getDividerDrawable() {
        return this.H;
    }

    public int getDividerPadding() {
        return this.L;
    }

    public int getDividerWidth() {
        return this.I;
    }

    public int getGravity() {
        return this.f1179w;
    }

    public int getOrientation() {
        return this.f1178v;
    }

    public int getShowDividers() {
        return this.K;
    }

    public int getVirtualChildCount() {
        return getChildCount();
    }

    public float getWeightSum() {
        return this.f1181y;
    }

    @Override // android.view.ViewGroup
    /* renamed from: h, reason: merged with bridge method [inline-methods] */
    public x1 generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof x1 ? new x1((x1) layoutParams) : layoutParams instanceof ViewGroup.MarginLayoutParams ? new x1((ViewGroup.MarginLayoutParams) layoutParams) : new x1(layoutParams);
    }

    public final boolean i(int i5) {
        if (i5 == 0) {
            return (this.K & 1) != 0;
        }
        if (i5 == getChildCount()) {
            return (this.K & 4) != 0;
        }
        if ((this.K & 2) != 0) {
            for (int i6 = i5 - 1; i6 >= 0; i6--) {
                if (getChildAt(i6).getVisibility() != 8) {
                    return true;
                }
            }
        }
        return false;
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        int right;
        int left;
        int i5;
        if (this.H == null) {
            return;
        }
        int i6 = 0;
        if (this.f1178v == 1) {
            int virtualChildCount = getVirtualChildCount();
            while (i6 < virtualChildCount) {
                View childAt = getChildAt(i6);
                if (childAt != null && childAt.getVisibility() != 8 && i(i6)) {
                    d(canvas, (childAt.getTop() - ((LinearLayout.LayoutParams) ((x1) childAt.getLayoutParams())).topMargin) - this.J);
                }
                i6++;
            }
            if (i(virtualChildCount)) {
                View childAt2 = getChildAt(virtualChildCount - 1);
                d(canvas, childAt2 == null ? (getHeight() - getPaddingBottom()) - this.J : childAt2.getBottom() + ((LinearLayout.LayoutParams) ((x1) childAt2.getLayoutParams())).bottomMargin);
                return;
            }
            return;
        }
        int virtualChildCount2 = getVirtualChildCount();
        boolean z5 = f4.a;
        boolean z6 = getLayoutDirection() == 1;
        while (i6 < virtualChildCount2) {
            View childAt3 = getChildAt(i6);
            if (childAt3 != null && childAt3.getVisibility() != 8 && i(i6)) {
                x1 x1Var = (x1) childAt3.getLayoutParams();
                e(canvas, z6 ? childAt3.getRight() + ((LinearLayout.LayoutParams) x1Var).rightMargin : (childAt3.getLeft() - ((LinearLayout.LayoutParams) x1Var).leftMargin) - this.I);
            }
            i6++;
        }
        if (i(virtualChildCount2)) {
            View childAt4 = getChildAt(virtualChildCount2 - 1);
            if (childAt4 != null) {
                x1 x1Var2 = (x1) childAt4.getLayoutParams();
                if (z6) {
                    left = childAt4.getLeft() - ((LinearLayout.LayoutParams) x1Var2).leftMargin;
                    i5 = this.I;
                    right = left - i5;
                } else {
                    right = childAt4.getRight() + ((LinearLayout.LayoutParams) x1Var2).rightMargin;
                }
            } else if (z6) {
                right = getPaddingLeft();
            } else {
                left = getWidth() - getPaddingRight();
                i5 = this.I;
                right = left - i5;
            }
            e(canvas, right);
        }
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        accessibilityEvent.setClassName("androidx.appcompat.widget.LinearLayoutCompat");
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName("androidx.appcompat.widget.LinearLayoutCompat");
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x009d  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x015a  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0163  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x01a4  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x01a9  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0191  */
    @Override // android.view.ViewGroup, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int i19;
        int i20;
        char c6;
        int i21;
        int i22;
        int i23;
        int i24 = 8;
        char c8 = 2;
        if (this.f1178v == 1) {
            int paddingLeft = getPaddingLeft();
            int i25 = i10 - i5;
            int paddingRight = i25 - getPaddingRight();
            int paddingRight2 = (i25 - paddingLeft) - getPaddingRight();
            int virtualChildCount = getVirtualChildCount();
            int i26 = this.f1179w;
            int i27 = i26 & 112;
            int i28 = 8388615 & i26;
            int paddingTop = i27 != 16 ? i27 != 80 ? getPaddingTop() : ((getPaddingTop() + i11) - i6) - this.f1180x : getPaddingTop() + (((i11 - i6) - this.f1180x) / 2);
            int i29 = 0;
            while (i29 < virtualChildCount) {
                View childAt = getChildAt(i29);
                if (childAt == null || childAt.getVisibility() == i24) {
                    c6 = c8;
                } else {
                    int measuredWidth = childAt.getMeasuredWidth();
                    int measuredHeight = childAt.getMeasuredHeight();
                    x1 x1Var = (x1) childAt.getLayoutParams();
                    c6 = c8;
                    int i30 = ((LinearLayout.LayoutParams) x1Var).gravity;
                    if (i30 < 0) {
                        i30 = i28;
                    }
                    int absoluteGravity = Gravity.getAbsoluteGravity(i30, getLayoutDirection()) & 7;
                    if (absoluteGravity == 1) {
                        i21 = ((paddingRight2 - measuredWidth) / 2) + paddingLeft + ((LinearLayout.LayoutParams) x1Var).leftMargin;
                        i22 = ((LinearLayout.LayoutParams) x1Var).rightMargin;
                    } else if (absoluteGravity != 5) {
                        i23 = ((LinearLayout.LayoutParams) x1Var).leftMargin + paddingLeft;
                        if (i(i29)) {
                            paddingTop += this.J;
                        }
                        int i31 = paddingTop + ((LinearLayout.LayoutParams) x1Var).topMargin;
                        childAt.layout(i23, i31, measuredWidth + i23, i31 + measuredHeight);
                        paddingTop = measuredHeight + ((LinearLayout.LayoutParams) x1Var).bottomMargin + i31;
                    } else {
                        i21 = paddingRight - measuredWidth;
                        i22 = ((LinearLayout.LayoutParams) x1Var).rightMargin;
                    }
                    i23 = i21 - i22;
                    if (i(i29)) {
                    }
                    int i312 = paddingTop + ((LinearLayout.LayoutParams) x1Var).topMargin;
                    childAt.layout(i23, i312, measuredWidth + i23, i312 + measuredHeight);
                    paddingTop = measuredHeight + ((LinearLayout.LayoutParams) x1Var).bottomMargin + i312;
                }
                i29++;
                c8 = c6;
                i24 = 8;
            }
            return;
        }
        boolean z6 = f4.a;
        boolean z7 = getLayoutDirection() == 1;
        int paddingTop2 = getPaddingTop();
        int i32 = i11 - i6;
        int paddingBottom = i32 - getPaddingBottom();
        int paddingBottom2 = (i32 - paddingTop2) - getPaddingBottom();
        int virtualChildCount2 = getVirtualChildCount();
        int i33 = this.f1179w;
        int i34 = 8388615 & i33;
        int i35 = i33 & 112;
        boolean z8 = this.f1175d;
        int[] iArr = this.F;
        int[] iArr2 = this.G;
        int absoluteGravity2 = Gravity.getAbsoluteGravity(i34, getLayoutDirection());
        int paddingLeft2 = absoluteGravity2 != 1 ? absoluteGravity2 != 5 ? getPaddingLeft() : ((getPaddingLeft() + i10) - i5) - this.f1180x : getPaddingLeft() + (((i10 - i5) - this.f1180x) / 2);
        if (z7) {
            i13 = virtualChildCount2 - 1;
            i12 = -1;
        } else {
            i12 = 1;
            i13 = 0;
        }
        int i36 = 0;
        while (i36 < virtualChildCount2) {
            int i37 = (i12 * i36) + i13;
            View childAt2 = getChildAt(i37);
            if (childAt2 == null) {
                i14 = i13;
            } else {
                i14 = i13;
                if (childAt2.getVisibility() != 8) {
                    int measuredWidth2 = childAt2.getMeasuredWidth();
                    int measuredHeight2 = childAt2.getMeasuredHeight();
                    x1 x1Var2 = (x1) childAt2.getLayoutParams();
                    int i38 = paddingLeft2;
                    if (z8) {
                        i15 = paddingTop2;
                        if (((LinearLayout.LayoutParams) x1Var2).height != -1) {
                            i16 = childAt2.getBaseline();
                            i17 = ((LinearLayout.LayoutParams) x1Var2).gravity;
                            if (i17 < 0) {
                                i17 = i35;
                            }
                            i18 = i17 & 112;
                            if (i18 == 16) {
                                if (i18 == 48) {
                                    i19 = i15 + ((LinearLayout.LayoutParams) x1Var2).topMargin;
                                    if (i16 != -1) {
                                        i19 = (iArr[1] - i16) + i19;
                                    }
                                } else if (i18 != 80) {
                                    i19 = i15;
                                } else {
                                    i19 = (paddingBottom - measuredHeight2) - ((LinearLayout.LayoutParams) x1Var2).bottomMargin;
                                    if (i16 != -1) {
                                        i20 = iArr2[2] - (childAt2.getMeasuredHeight() - i16);
                                    }
                                }
                                int i39 = (i(i37) ? i38 + this.I : i38) + ((LinearLayout.LayoutParams) x1Var2).leftMargin;
                                childAt2.layout(i39, i19, i39 + measuredWidth2, i19 + measuredHeight2);
                                paddingLeft2 = measuredWidth2 + ((LinearLayout.LayoutParams) x1Var2).rightMargin + i39;
                                i36++;
                                i13 = i14;
                                paddingTop2 = i15;
                            } else {
                                i19 = ((paddingBottom2 - measuredHeight2) / 2) + i15 + ((LinearLayout.LayoutParams) x1Var2).topMargin;
                                i20 = ((LinearLayout.LayoutParams) x1Var2).bottomMargin;
                            }
                            i19 -= i20;
                            int i392 = (i(i37) ? i38 + this.I : i38) + ((LinearLayout.LayoutParams) x1Var2).leftMargin;
                            childAt2.layout(i392, i19, i392 + measuredWidth2, i19 + measuredHeight2);
                            paddingLeft2 = measuredWidth2 + ((LinearLayout.LayoutParams) x1Var2).rightMargin + i392;
                            i36++;
                            i13 = i14;
                            paddingTop2 = i15;
                        }
                    } else {
                        i15 = paddingTop2;
                    }
                    i16 = -1;
                    i17 = ((LinearLayout.LayoutParams) x1Var2).gravity;
                    if (i17 < 0) {
                    }
                    i18 = i17 & 112;
                    if (i18 == 16) {
                    }
                    i19 -= i20;
                    int i3922 = (i(i37) ? i38 + this.I : i38) + ((LinearLayout.LayoutParams) x1Var2).leftMargin;
                    childAt2.layout(i3922, i19, i3922 + measuredWidth2, i19 + measuredHeight2);
                    paddingLeft2 = measuredWidth2 + ((LinearLayout.LayoutParams) x1Var2).rightMargin + i3922;
                    i36++;
                    i13 = i14;
                    paddingTop2 = i15;
                }
            }
            i15 = paddingTop2;
            i36++;
            i13 = i14;
            paddingTop2 = i15;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:222:0x04f8  */
    /* JADX WARN: Removed duplicated region for block: B:235:0x053d  */
    /* JADX WARN: Removed duplicated region for block: B:240:0x0547  */
    /* JADX WARN: Removed duplicated region for block: B:244:0x0526  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x013f  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0148  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onMeasure(int i5, int i6) {
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        boolean z5;
        int baseline;
        int i16;
        int i17;
        int[] iArr;
        int i18;
        int i19;
        boolean z6;
        boolean z7;
        x1 x1Var;
        int i20;
        int[] iArr2;
        int i21;
        View view;
        int i22;
        boolean z8;
        boolean z10;
        int max;
        int i23;
        int i24;
        int i25;
        int i26;
        int i27;
        int i28;
        int i29;
        int i30;
        boolean z11;
        int i31;
        int i32;
        int i33;
        View view2;
        boolean z12;
        boolean z13;
        y1 y1Var = this;
        int i34 = -2;
        int i35 = 0;
        int i36 = 1073741824;
        int i37 = 8;
        if (y1Var.f1178v == 1) {
            y1Var.f1180x = 0;
            int virtualChildCount = y1Var.getVirtualChildCount();
            int mode = View.MeasureSpec.getMode(i5);
            int mode2 = View.MeasureSpec.getMode(i6);
            int i38 = y1Var.f1176e;
            boolean z14 = y1Var.E;
            int i39 = 0;
            int i40 = 0;
            int i41 = 0;
            boolean z15 = false;
            int i42 = 0;
            boolean z16 = false;
            boolean z17 = true;
            float f2 = 0.0f;
            int i43 = 0;
            while (i39 < virtualChildCount) {
                int i44 = mode;
                View childAt = y1Var.getChildAt(i39);
                if (childAt == null) {
                    y1Var.f1180x = y1Var.f1180x;
                } else if (childAt.getVisibility() != i37) {
                    if (y1Var.i(i39)) {
                        y1Var.f1180x += y1Var.J;
                    }
                    x1 x1Var2 = (x1) childAt.getLayoutParams();
                    float f10 = ((LinearLayout.LayoutParams) x1Var2).weight;
                    f2 += f10;
                    if (mode2 == i36 && ((LinearLayout.LayoutParams) x1Var2).height == 0 && f10 > 0.0f) {
                        int i45 = y1Var.f1180x;
                        y1Var.f1180x = Math.max(i45, ((LinearLayout.LayoutParams) x1Var2).topMargin + i45 + ((LinearLayout.LayoutParams) x1Var2).bottomMargin);
                        view2 = childAt;
                        i30 = mode2;
                        i31 = i38;
                        z11 = z14;
                        i32 = i39;
                        z15 = true;
                        i33 = i44;
                    } else {
                        if (((LinearLayout.LayoutParams) x1Var2).height != 0 || f10 <= 0.0f) {
                            i27 = Integer.MIN_VALUE;
                        } else {
                            ((LinearLayout.LayoutParams) x1Var2).height = i34;
                            i27 = 0;
                        }
                        if (f2 == 0.0f) {
                            i28 = i39;
                            i29 = y1Var.f1180x;
                        } else {
                            i28 = i39;
                            i29 = 0;
                        }
                        i30 = mode2;
                        z11 = z14;
                        i31 = i38;
                        i32 = i28;
                        i33 = i44;
                        y1Var.measureChildWithMargins(childAt, i5, 0, i6, i29);
                        if (i27 != Integer.MIN_VALUE) {
                            ((LinearLayout.LayoutParams) x1Var2).height = i27;
                        }
                        int measuredHeight = childAt.getMeasuredHeight();
                        int i46 = y1Var.f1180x;
                        view2 = childAt;
                        y1Var.f1180x = Math.max(i46, i46 + measuredHeight + ((LinearLayout.LayoutParams) x1Var2).topMargin + ((LinearLayout.LayoutParams) x1Var2).bottomMargin);
                        if (z11) {
                            i43 = Math.max(measuredHeight, i43);
                        }
                    }
                    if (i31 >= 0 && i31 == i32 + 1) {
                        y1Var.f1177i = y1Var.f1180x;
                    }
                    if (i32 < i31 && ((LinearLayout.LayoutParams) x1Var2).weight > 0.0f) {
                        throw new RuntimeException("A child of LinearLayout with index less than mBaselineAlignedChildIndex has weight > 0, which won't work.  Either remove the weight, or don't set mBaselineAlignedChildIndex.");
                    }
                    if (i33 == 1073741824 || ((LinearLayout.LayoutParams) x1Var2).width != -1) {
                        z12 = false;
                    } else {
                        z12 = true;
                        z16 = true;
                    }
                    int i47 = ((LinearLayout.LayoutParams) x1Var2).leftMargin + ((LinearLayout.LayoutParams) x1Var2).rightMargin;
                    int measuredWidth = view2.getMeasuredWidth() + i47;
                    i35 = Math.max(i35, measuredWidth);
                    int measuredState = view2.getMeasuredState();
                    boolean z18 = z12;
                    int combineMeasuredStates = View.combineMeasuredStates(i42, measuredState);
                    if (z17) {
                        i42 = combineMeasuredStates;
                        if (((LinearLayout.LayoutParams) x1Var2).width == -1) {
                            z13 = true;
                            if (((LinearLayout.LayoutParams) x1Var2).weight <= 0.0f) {
                                if (!z18) {
                                    i47 = measuredWidth;
                                }
                                i41 = Math.max(i41, i47);
                            } else {
                                if (!z18) {
                                    i47 = measuredWidth;
                                }
                                i40 = Math.max(i40, i47);
                            }
                            z17 = z13;
                            i39 = i32 + 1;
                            i38 = i31;
                            mode = i33;
                            z14 = z11;
                            mode2 = i30;
                            i34 = -2;
                            i36 = 1073741824;
                            i37 = 8;
                        }
                    } else {
                        i42 = combineMeasuredStates;
                    }
                    z13 = false;
                    if (((LinearLayout.LayoutParams) x1Var2).weight <= 0.0f) {
                    }
                    z17 = z13;
                    i39 = i32 + 1;
                    i38 = i31;
                    mode = i33;
                    z14 = z11;
                    mode2 = i30;
                    i34 = -2;
                    i36 = 1073741824;
                    i37 = 8;
                }
                i30 = mode2;
                i31 = i38;
                z11 = z14;
                i32 = i39;
                i33 = i44;
                i39 = i32 + 1;
                i38 = i31;
                mode = i33;
                z14 = z11;
                mode2 = i30;
                i34 = -2;
                i36 = 1073741824;
                i37 = 8;
            }
            int i48 = mode;
            int i49 = mode2;
            boolean z19 = z14;
            int i50 = i42;
            int i51 = i6;
            if (y1Var.f1180x > 0 && y1Var.i(virtualChildCount)) {
                y1Var.f1180x += y1Var.J;
            }
            if (z19 && (i49 == Integer.MIN_VALUE || i49 == 0)) {
                y1Var.f1180x = 0;
                for (int i52 = 0; i52 < virtualChildCount; i52++) {
                    View childAt2 = y1Var.getChildAt(i52);
                    if (childAt2 == null) {
                        y1Var.f1180x = y1Var.f1180x;
                    } else if (childAt2.getVisibility() != 8) {
                        x1 x1Var3 = (x1) childAt2.getLayoutParams();
                        int i53 = y1Var.f1180x;
                        y1Var.f1180x = Math.max(i53, i53 + i43 + ((LinearLayout.LayoutParams) x1Var3).topMargin + ((LinearLayout.LayoutParams) x1Var3).bottomMargin);
                    }
                }
            }
            int paddingBottom = y1Var.getPaddingBottom() + y1Var.getPaddingTop() + y1Var.f1180x;
            y1Var.f1180x = paddingBottom;
            int resolveSizeAndState = View.resolveSizeAndState(Math.max(paddingBottom, y1Var.getSuggestedMinimumHeight()), i51, 0);
            int i54 = (resolveSizeAndState & 16777215) - y1Var.f1180x;
            if (z15 || (i54 != 0 && f2 > 0.0f)) {
                float f11 = y1Var.f1181y;
                if (f11 > 0.0f) {
                    f2 = f11;
                }
                y1Var.f1180x = 0;
                int i55 = i50;
                int i56 = 0;
                while (i56 < virtualChildCount) {
                    View childAt3 = y1Var.getChildAt(i56);
                    if (childAt3.getVisibility() == 8) {
                        i24 = i56;
                    } else {
                        x1 x1Var4 = (x1) childAt3.getLayoutParams();
                        float f12 = ((LinearLayout.LayoutParams) x1Var4).weight;
                        if (f12 > 0.0f) {
                            int i57 = (int) ((i54 * f12) / f2);
                            f2 -= f12;
                            i54 -= i57;
                            i24 = i56;
                            int childMeasureSpec = ViewGroup.getChildMeasureSpec(i5, y1Var.getPaddingRight() + y1Var.getPaddingLeft() + ((LinearLayout.LayoutParams) x1Var4).leftMargin + ((LinearLayout.LayoutParams) x1Var4).rightMargin, ((LinearLayout.LayoutParams) x1Var4).width);
                            if (((LinearLayout.LayoutParams) x1Var4).height == 0) {
                                i26 = 1073741824;
                                if (i49 == 1073741824) {
                                    if (i57 <= 0) {
                                        i57 = 0;
                                    }
                                    childAt3.measure(childMeasureSpec, View.MeasureSpec.makeMeasureSpec(i57, 1073741824));
                                    i55 = View.combineMeasuredStates(i55, childAt3.getMeasuredState() & (-256));
                                }
                            } else {
                                i26 = 1073741824;
                            }
                            int measuredHeight2 = childAt3.getMeasuredHeight() + i57;
                            if (measuredHeight2 < 0) {
                                measuredHeight2 = 0;
                            }
                            childAt3.measure(childMeasureSpec, View.MeasureSpec.makeMeasureSpec(measuredHeight2, i26));
                            i55 = View.combineMeasuredStates(i55, childAt3.getMeasuredState() & (-256));
                        } else {
                            i24 = i56;
                        }
                        int i58 = ((LinearLayout.LayoutParams) x1Var4).leftMargin + ((LinearLayout.LayoutParams) x1Var4).rightMargin;
                        int measuredWidth2 = childAt3.getMeasuredWidth() + i58;
                        i35 = Math.max(i35, measuredWidth2);
                        if (i48 != 1073741824) {
                            i25 = -1;
                            if (((LinearLayout.LayoutParams) x1Var4).width == -1) {
                                measuredWidth2 = i58;
                            }
                        } else {
                            i25 = -1;
                        }
                        i40 = Math.max(i40, measuredWidth2);
                        boolean z20 = z17 && ((LinearLayout.LayoutParams) x1Var4).width == i25;
                        int i59 = y1Var.f1180x;
                        y1Var.f1180x = Math.max(i59, childAt3.getMeasuredHeight() + i59 + ((LinearLayout.LayoutParams) x1Var4).topMargin + ((LinearLayout.LayoutParams) x1Var4).bottomMargin);
                        z17 = z20;
                    }
                    i56 = i24 + 1;
                }
                y1Var.f1180x = y1Var.getPaddingBottom() + y1Var.getPaddingTop() + y1Var.f1180x;
                i50 = i55;
            } else {
                i40 = Math.max(i40, i41);
                if (z19 && i49 != 1073741824) {
                    for (int i60 = 0; i60 < virtualChildCount; i60++) {
                        View childAt4 = y1Var.getChildAt(i60);
                        if (childAt4 != null && childAt4.getVisibility() != 8 && ((LinearLayout.LayoutParams) ((x1) childAt4.getLayoutParams())).weight > 0.0f) {
                            childAt4.measure(View.MeasureSpec.makeMeasureSpec(childAt4.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(i43, 1073741824));
                        }
                    }
                }
            }
            if (z17 || i48 == 1073741824) {
                i40 = i35;
            }
            y1Var.setMeasuredDimension(View.resolveSizeAndState(Math.max(y1Var.getPaddingRight() + y1Var.getPaddingLeft() + i40, y1Var.getSuggestedMinimumWidth()), i5, i50), resolveSizeAndState);
            if (z16) {
                int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(y1Var.getMeasuredWidth(), 1073741824);
                int i61 = 0;
                while (i61 < virtualChildCount) {
                    View childAt5 = y1Var.getChildAt(i61);
                    if (childAt5.getVisibility() != 8) {
                        x1 x1Var5 = (x1) childAt5.getLayoutParams();
                        if (((LinearLayout.LayoutParams) x1Var5).width == -1) {
                            int i62 = ((LinearLayout.LayoutParams) x1Var5).height;
                            ((LinearLayout.LayoutParams) x1Var5).height = childAt5.getMeasuredHeight();
                            y1Var.measureChildWithMargins(childAt5, makeMeasureSpec, 0, i51, 0);
                            ((LinearLayout.LayoutParams) x1Var5).height = i62;
                        }
                    }
                    i61++;
                    i51 = i6;
                }
                return;
            }
            return;
        }
        int i63 = i5;
        y1Var.f1180x = 0;
        int virtualChildCount2 = y1Var.getVirtualChildCount();
        int mode3 = View.MeasureSpec.getMode(i63);
        int mode4 = View.MeasureSpec.getMode(i6);
        if (y1Var.F == null || y1Var.G == null) {
            y1Var.F = new int[4];
            y1Var.G = new int[4];
        }
        int[] iArr3 = y1Var.F;
        int[] iArr4 = y1Var.G;
        iArr3[3] = -1;
        char c6 = 2;
        iArr3[2] = -1;
        iArr3[1] = -1;
        iArr3[0] = -1;
        iArr4[3] = -1;
        iArr4[2] = -1;
        iArr4[1] = -1;
        iArr4[0] = -1;
        boolean z21 = y1Var.f1175d;
        boolean z22 = y1Var.E;
        boolean z23 = mode3 == 1073741824;
        float f13 = 0.0f;
        boolean z24 = true;
        int i64 = 0;
        int i65 = 0;
        int i66 = 0;
        int i67 = 0;
        int i68 = 0;
        int i69 = 0;
        boolean z25 = false;
        boolean z26 = false;
        while (i64 < virtualChildCount2) {
            char c8 = c6;
            View childAt6 = y1Var.getChildAt(i64);
            if (childAt6 == null) {
                y1Var.f1180x = y1Var.f1180x;
                i19 = i64;
                i23 = i66;
                iArr2 = iArr3;
                iArr = iArr4;
                z6 = z21;
                z7 = z22;
            } else {
                int i70 = i65;
                if (childAt6.getVisibility() == 8) {
                    i63 = i5;
                    i19 = i64;
                    i23 = i66;
                    iArr = iArr4;
                    z6 = z21;
                    z7 = z22;
                    i65 = i70;
                    iArr2 = iArr3;
                } else {
                    if (y1Var.i(i64)) {
                        y1Var.f1180x += y1Var.I;
                    }
                    x1 x1Var6 = (x1) childAt6.getLayoutParams();
                    float f14 = ((LinearLayout.LayoutParams) x1Var6).weight;
                    f13 += f14;
                    int i71 = i64;
                    if (mode3 == 1073741824 && ((LinearLayout.LayoutParams) x1Var6).width == 0 && f14 > 0.0f) {
                        if (z23) {
                            y1Var.f1180x = ((LinearLayout.LayoutParams) x1Var6).leftMargin + ((LinearLayout.LayoutParams) x1Var6).rightMargin + y1Var.f1180x;
                        } else {
                            int i72 = y1Var.f1180x;
                            y1Var.f1180x = Math.max(i72, ((LinearLayout.LayoutParams) x1Var6).leftMargin + i72 + ((LinearLayout.LayoutParams) x1Var6).rightMargin);
                        }
                        if (z21) {
                            int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(0, 0);
                            childAt6.measure(makeMeasureSpec2, makeMeasureSpec2);
                            view = childAt6;
                            z6 = z21;
                            z7 = z22;
                            i20 = i70;
                            i19 = i71;
                            x1Var = x1Var6;
                            iArr2 = iArr3;
                            iArr = iArr4;
                            i63 = i5;
                            i21 = i66;
                            i18 = i67;
                        } else {
                            view = childAt6;
                            z6 = z21;
                            z7 = z22;
                            z26 = true;
                            i20 = i70;
                            i19 = i71;
                            i22 = 1073741824;
                            x1Var = x1Var6;
                            iArr2 = iArr3;
                            iArr = iArr4;
                            i63 = i5;
                            i21 = i66;
                            i18 = i67;
                            if (mode4 == i22 && ((LinearLayout.LayoutParams) x1Var).height == -1) {
                                z8 = true;
                                z25 = true;
                            } else {
                                z8 = false;
                            }
                            int i73 = ((LinearLayout.LayoutParams) x1Var).topMargin + ((LinearLayout.LayoutParams) x1Var).bottomMargin;
                            int measuredHeight3 = view.getMeasuredHeight() + i73;
                            i69 = View.combineMeasuredStates(i69, view.getMeasuredState());
                            if (z6) {
                                z10 = z8;
                            } else {
                                int baseline2 = view.getBaseline();
                                z10 = z8;
                                if (baseline2 != -1) {
                                    int i74 = ((LinearLayout.LayoutParams) x1Var).gravity;
                                    if (i74 < 0) {
                                        i74 = y1Var.f1179w;
                                    }
                                    int i75 = (((i74 & 112) >> 4) & (-2)) >> 1;
                                    iArr2[i75] = Math.max(iArr2[i75], baseline2);
                                    iArr[i75] = Math.max(iArr[i75], measuredHeight3 - baseline2);
                                }
                            }
                            int max2 = Math.max(i20, measuredHeight3);
                            boolean z27 = !z24 && ((LinearLayout.LayoutParams) x1Var).height == -1;
                            if (((LinearLayout.LayoutParams) x1Var).weight <= 0.0f) {
                                if (!z10) {
                                    i73 = measuredHeight3;
                                }
                                i67 = Math.max(i18, i73);
                                max = i21;
                            } else {
                                if (!z10) {
                                    i73 = measuredHeight3;
                                }
                                max = Math.max(i21, i73);
                                i67 = i18;
                            }
                            int i76 = max;
                            i65 = max2;
                            i23 = i76;
                            z24 = z27;
                        }
                    } else {
                        if (((LinearLayout.LayoutParams) x1Var6).width != 0 || f14 <= 0.0f) {
                            i17 = Integer.MIN_VALUE;
                        } else {
                            ((LinearLayout.LayoutParams) x1Var6).width = -2;
                            i17 = 0;
                        }
                        iArr = iArr4;
                        i18 = i67;
                        i19 = i71;
                        z6 = z21;
                        z7 = z22;
                        int i77 = i17;
                        x1Var = x1Var6;
                        i20 = i70;
                        i63 = i5;
                        iArr2 = iArr3;
                        i21 = i66;
                        y1Var.measureChildWithMargins(childAt6, i63, f13 == 0.0f ? y1Var.f1180x : 0, i6, 0);
                        if (i77 != Integer.MIN_VALUE) {
                            ((LinearLayout.LayoutParams) x1Var).width = i77;
                        }
                        int measuredWidth3 = childAt6.getMeasuredWidth();
                        if (z23) {
                            view = childAt6;
                            y1Var.f1180x = ((LinearLayout.LayoutParams) x1Var).leftMargin + measuredWidth3 + ((LinearLayout.LayoutParams) x1Var).rightMargin + y1Var.f1180x;
                        } else {
                            view = childAt6;
                            int i78 = y1Var.f1180x;
                            y1Var.f1180x = Math.max(i78, i78 + measuredWidth3 + ((LinearLayout.LayoutParams) x1Var).leftMargin + ((LinearLayout.LayoutParams) x1Var).rightMargin);
                        }
                        if (z7) {
                            i68 = Math.max(measuredWidth3, i68);
                        }
                    }
                    i22 = 1073741824;
                    if (mode4 == i22) {
                    }
                    z8 = false;
                    int i732 = ((LinearLayout.LayoutParams) x1Var).topMargin + ((LinearLayout.LayoutParams) x1Var).bottomMargin;
                    int measuredHeight32 = view.getMeasuredHeight() + i732;
                    i69 = View.combineMeasuredStates(i69, view.getMeasuredState());
                    if (z6) {
                    }
                    int max22 = Math.max(i20, measuredHeight32);
                    if (z24) {
                    }
                    if (((LinearLayout.LayoutParams) x1Var).weight <= 0.0f) {
                    }
                    int i762 = max;
                    i65 = max22;
                    i23 = i762;
                    z24 = z27;
                }
            }
            i66 = i23;
            i64 = i19 + 1;
            c6 = c8;
            iArr3 = iArr2;
            iArr4 = iArr;
            z21 = z6;
            z22 = z7;
        }
        int[] iArr5 = iArr3;
        int[] iArr6 = iArr4;
        char c10 = c6;
        boolean z28 = z21;
        boolean z29 = z22;
        int i79 = i65;
        int i80 = i66;
        int i81 = i67;
        if (y1Var.f1180x > 0 && y1Var.i(virtualChildCount2)) {
            y1Var.f1180x += y1Var.I;
        }
        int i82 = iArr5[1];
        int max3 = (i82 == -1 && iArr5[0] == -1 && iArr5[c10] == -1 && iArr5[3] == -1) ? i79 : Math.max(i79, Math.max(iArr6[3], Math.max(iArr6[0], Math.max(iArr6[1], iArr6[c10]))) + Math.max(iArr5[3], Math.max(iArr5[0], Math.max(i82, iArr5[c10]))));
        if (z29 && (mode3 == Integer.MIN_VALUE || mode3 == 0)) {
            y1Var.f1180x = 0;
            for (int i83 = 0; i83 < virtualChildCount2; i83++) {
                View childAt7 = y1Var.getChildAt(i83);
                if (childAt7 == null) {
                    y1Var.f1180x = y1Var.f1180x;
                } else if (childAt7.getVisibility() != 8) {
                    x1 x1Var7 = (x1) childAt7.getLayoutParams();
                    if (z23) {
                        y1Var.f1180x = ((LinearLayout.LayoutParams) x1Var7).leftMargin + i68 + ((LinearLayout.LayoutParams) x1Var7).rightMargin + y1Var.f1180x;
                    } else {
                        int i84 = y1Var.f1180x;
                        y1Var.f1180x = Math.max(i84, i84 + i68 + ((LinearLayout.LayoutParams) x1Var7).leftMargin + ((LinearLayout.LayoutParams) x1Var7).rightMargin);
                    }
                }
            }
        }
        int paddingRight = y1Var.getPaddingRight() + y1Var.getPaddingLeft() + y1Var.f1180x;
        y1Var.f1180x = paddingRight;
        int resolveSizeAndState2 = View.resolveSizeAndState(Math.max(paddingRight, y1Var.getSuggestedMinimumWidth()), i63, 0);
        int i85 = (resolveSizeAndState2 & 16777215) - y1Var.f1180x;
        if (z26 || (i85 != 0 && f13 > 0.0f)) {
            float f15 = y1Var.f1181y;
            if (f15 > 0.0f) {
                f13 = f15;
            }
            iArr5[3] = -1;
            iArr5[c10] = -1;
            iArr5[1] = -1;
            iArr5[0] = -1;
            iArr6[3] = -1;
            iArr6[c10] = -1;
            iArr6[1] = -1;
            iArr6[0] = -1;
            y1Var.f1180x = 0;
            max3 = -1;
            int i86 = 0;
            while (i86 < virtualChildCount2) {
                View childAt8 = y1Var.getChildAt(i86);
                if (childAt8 == null || childAt8.getVisibility() == 8) {
                    i14 = resolveSizeAndState2;
                } else {
                    x1 x1Var8 = (x1) childAt8.getLayoutParams();
                    float f16 = ((LinearLayout.LayoutParams) x1Var8).weight;
                    if (f16 > 0.0f) {
                        int i87 = (int) ((i85 * f16) / f13);
                        f13 -= f16;
                        i85 -= i87;
                        i14 = resolveSizeAndState2;
                        int childMeasureSpec2 = ViewGroup.getChildMeasureSpec(i6, y1Var.getPaddingBottom() + y1Var.getPaddingTop() + ((LinearLayout.LayoutParams) x1Var8).topMargin + ((LinearLayout.LayoutParams) x1Var8).bottomMargin, ((LinearLayout.LayoutParams) x1Var8).height);
                        if (((LinearLayout.LayoutParams) x1Var8).width == 0) {
                            i16 = 1073741824;
                            if (mode3 == 1073741824) {
                                if (i87 <= 0) {
                                    i87 = 0;
                                }
                                childAt8.measure(View.MeasureSpec.makeMeasureSpec(i87, 1073741824), childMeasureSpec2);
                                i69 = View.combineMeasuredStates(i69, childAt8.getMeasuredState() & (-16777216));
                            }
                        } else {
                            i16 = 1073741824;
                        }
                        int measuredWidth4 = childAt8.getMeasuredWidth() + i87;
                        if (measuredWidth4 < 0) {
                            measuredWidth4 = 0;
                        }
                        childAt8.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth4, i16), childMeasureSpec2);
                        i69 = View.combineMeasuredStates(i69, childAt8.getMeasuredState() & (-16777216));
                    } else {
                        i14 = resolveSizeAndState2;
                    }
                    if (z23) {
                        y1Var.f1180x = childAt8.getMeasuredWidth() + ((LinearLayout.LayoutParams) x1Var8).leftMargin + ((LinearLayout.LayoutParams) x1Var8).rightMargin + y1Var.f1180x;
                    } else {
                        int i88 = y1Var.f1180x;
                        y1Var.f1180x = Math.max(i88, childAt8.getMeasuredWidth() + i88 + ((LinearLayout.LayoutParams) x1Var8).leftMargin + ((LinearLayout.LayoutParams) x1Var8).rightMargin);
                    }
                    boolean z30 = mode4 != 1073741824 && ((LinearLayout.LayoutParams) x1Var8).height == -1;
                    int i89 = ((LinearLayout.LayoutParams) x1Var8).topMargin + ((LinearLayout.LayoutParams) x1Var8).bottomMargin;
                    int measuredHeight4 = childAt8.getMeasuredHeight() + i89;
                    max3 = Math.max(max3, measuredHeight4);
                    if (!z30) {
                        i89 = measuredHeight4;
                    }
                    int max4 = Math.max(i80, i89);
                    if (z24) {
                        i15 = -1;
                        if (((LinearLayout.LayoutParams) x1Var8).height == -1) {
                            z5 = true;
                            if (!z28 && (baseline = childAt8.getBaseline()) != i15) {
                                int i90 = ((LinearLayout.LayoutParams) x1Var8).gravity;
                                if (i90 < 0) {
                                    i90 = y1Var.f1179w;
                                }
                                int i91 = (((i90 & 112) >> 4) & (-2)) >> 1;
                                iArr5[i91] = Math.max(iArr5[i91], baseline);
                                iArr6[i91] = Math.max(iArr6[i91], measuredHeight4 - baseline);
                            }
                            z24 = z5;
                            i80 = max4;
                        }
                    } else {
                        i15 = -1;
                    }
                    z5 = false;
                    if (!z28) {
                    }
                    z24 = z5;
                    i80 = max4;
                }
                i86++;
                resolveSizeAndState2 = i14;
            }
            i10 = resolveSizeAndState2;
            i11 = -16777216;
            y1Var.f1180x = y1Var.getPaddingRight() + y1Var.getPaddingLeft() + y1Var.f1180x;
            int i92 = iArr5[1];
            if (i92 == -1 && iArr5[0] == -1 && iArr5[c10] == -1 && iArr5[3] == -1) {
                i12 = 0;
            } else {
                i12 = 0;
                max3 = Math.max(max3, Math.max(iArr6[3], Math.max(iArr6[0], Math.max(iArr6[1], iArr6[c10]))) + Math.max(iArr5[3], Math.max(iArr5[0], Math.max(i92, iArr5[c10]))));
            }
            i13 = i80;
        } else {
            i13 = Math.max(i80, i81);
            if (z29 && mode3 != 1073741824) {
                for (int i93 = 0; i93 < virtualChildCount2; i93++) {
                    View childAt9 = y1Var.getChildAt(i93);
                    if (childAt9 != null && childAt9.getVisibility() != 8 && ((LinearLayout.LayoutParams) ((x1) childAt9.getLayoutParams())).weight > 0.0f) {
                        childAt9.measure(View.MeasureSpec.makeMeasureSpec(i68, 1073741824), View.MeasureSpec.makeMeasureSpec(childAt9.getMeasuredHeight(), 1073741824));
                    }
                }
            }
            i10 = resolveSizeAndState2;
            i11 = -16777216;
            i12 = 0;
        }
        if (!z24 && mode4 != 1073741824) {
            max3 = i13;
        }
        y1Var.setMeasuredDimension(i10 | (i69 & i11), View.resolveSizeAndState(Math.max(y1Var.getPaddingBottom() + y1Var.getPaddingTop() + max3, y1Var.getSuggestedMinimumHeight()), i6, i69 << 16));
        if (z25) {
            int makeMeasureSpec3 = View.MeasureSpec.makeMeasureSpec(y1Var.getMeasuredHeight(), 1073741824);
            int i94 = i12;
            while (i94 < virtualChildCount2) {
                View childAt10 = y1Var.getChildAt(i94);
                if (childAt10.getVisibility() != 8) {
                    x1 x1Var9 = (x1) childAt10.getLayoutParams();
                    if (((LinearLayout.LayoutParams) x1Var9).height == -1) {
                        int i95 = ((LinearLayout.LayoutParams) x1Var9).width;
                        ((LinearLayout.LayoutParams) x1Var9).width = childAt10.getMeasuredWidth();
                        y1Var.measureChildWithMargins(childAt10, i63, 0, makeMeasureSpec3, 0);
                        ((LinearLayout.LayoutParams) x1Var9).width = i95;
                    }
                }
                i94++;
                y1Var = this;
                i63 = i5;
            }
        }
    }

    public void setBaselineAligned(boolean z5) {
        this.f1175d = z5;
    }

    public void setBaselineAlignedChildIndex(int i5) {
        if (i5 >= 0 && i5 < getChildCount()) {
            this.f1176e = i5;
            return;
        }
        throw new IllegalArgumentException("base aligned child index out of range (0, " + getChildCount() + ")");
    }

    public void setDividerDrawable(Drawable drawable) {
        if (drawable == this.H) {
            return;
        }
        this.H = drawable;
        if (drawable != null) {
            this.I = drawable.getIntrinsicWidth();
            this.J = drawable.getIntrinsicHeight();
        } else {
            this.I = 0;
            this.J = 0;
        }
        setWillNotDraw(drawable == null);
        requestLayout();
    }

    public void setDividerPadding(int i5) {
        this.L = i5;
    }

    public void setGravity(int i5) {
        if (this.f1179w != i5) {
            if ((8388615 & i5) == 0) {
                i5 |= 8388611;
            }
            if ((i5 & 112) == 0) {
                i5 |= 48;
            }
            this.f1179w = i5;
            requestLayout();
        }
    }

    public void setHorizontalGravity(int i5) {
        int i6 = i5 & 8388615;
        int i10 = this.f1179w;
        if ((8388615 & i10) != i6) {
            this.f1179w = i6 | ((-8388616) & i10);
            requestLayout();
        }
    }

    public void setMeasureWithLargestChildEnabled(boolean z5) {
        this.E = z5;
    }

    public void setOrientation(int i5) {
        if (this.f1178v != i5) {
            this.f1178v = i5;
            requestLayout();
        }
    }

    public void setShowDividers(int i5) {
        if (i5 != this.K) {
            requestLayout();
        }
        this.K = i5;
    }

    public void setVerticalGravity(int i5) {
        int i6 = i5 & 112;
        int i10 = this.f1179w;
        if ((i10 & 112) != i6) {
            this.f1179w = i6 | (i10 & (-113));
            requestLayout();
        }
    }

    public void setWeightSum(float f2) {
        this.f1181y = Math.max(0.0f, f2);
    }

    @Override // android.view.ViewGroup
    public final boolean shouldDelayChildPressedState() {
        return false;
    }
}
