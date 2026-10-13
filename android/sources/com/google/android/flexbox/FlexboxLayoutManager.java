package com.google.android.flexbox;

import android.content.Context;
import android.graphics.PointF;
import android.graphics.Rect;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.SparseArray;
import android.view.View;
import android.view.ViewGroup;
import androidx.recyclerview.widget.OrientationHelper;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.i1;
import androidx.recyclerview.widget.m0;
import androidx.recyclerview.widget.r0;
import androidx.recyclerview.widget.s0;
import com.google.android.flexbox.FlexboxHelper;
import java.util.ArrayList;
import java.util.List;
import oe.d;
import oe.e;
import oe.f;
import oe.g;

/* loaded from: classes3.dex */
public class FlexboxLayoutManager extends RecyclerView.LayoutManager implements oe.a, i1 {
    public static final Rect V = new Rect();
    public RecyclerView.Recycler F;
    public RecyclerView.State G;
    public f H;
    public final d I;
    public OrientationHelper J;
    public OrientationHelper K;
    public g L;
    public int M;
    public int N;
    public int O;
    public int P;
    public final SparseArray Q;
    public final Context R;
    public View S;
    public int T;
    public final FlexboxHelper.FlexLinesResult U;

    /* renamed from: d, reason: collision with root package name */
    public int f5607d;

    /* renamed from: e, reason: collision with root package name */
    public int f5608e;

    /* renamed from: i, reason: collision with root package name */
    public final int f5609i;

    /* renamed from: w, reason: collision with root package name */
    public boolean f5611w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f5612x;

    /* renamed from: v, reason: collision with root package name */
    public final int f5610v = -1;

    /* renamed from: y, reason: collision with root package name */
    public List f5613y = new ArrayList();
    public final FlexboxHelper E = new FlexboxHelper(this);

    public FlexboxLayoutManager(Context context) {
        d dVar = new d(this);
        this.I = dVar;
        this.M = -1;
        this.N = Integer.MIN_VALUE;
        this.O = Integer.MIN_VALUE;
        this.P = Integer.MIN_VALUE;
        this.Q = new SparseArray();
        this.T = -1;
        this.U = new FlexboxHelper.FlexLinesResult();
        u(0);
        v(1);
        if (this.f5609i != 4) {
            removeAllViews();
            this.f5613y.clear();
            d.b(dVar);
            dVar.f15841d = 0;
            this.f5609i = 4;
            requestLayout();
        }
        this.R = context;
    }

    public static boolean b(int i5, int i6, int i10) {
        int mode = View.MeasureSpec.getMode(i6);
        int size = View.MeasureSpec.getSize(i6);
        if (i10 > 0 && i5 != i10) {
            return false;
        }
        if (mode == Integer.MIN_VALUE) {
            return size >= i5;
        }
        if (mode != 0) {
            return mode == 1073741824 && size == i5;
        }
        return true;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean canScrollHorizontally() {
        if (this.f5608e == 0) {
            return isMainAxisDirectionHorizontal();
        }
        if (!isMainAxisDirectionHorizontal()) {
            return true;
        }
        int width = getWidth();
        View view = this.S;
        return width > (view != null ? view.getWidth() : 0);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean canScrollVertically() {
        if (this.f5608e == 0) {
            return !isMainAxisDirectionHorizontal();
        }
        if (!isMainAxisDirectionHorizontal()) {
            int height = getHeight();
            View view = this.S;
            if (height <= (view != null ? view.getHeight() : 0)) {
                return false;
            }
        }
        return true;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean checkLayoutParams(RecyclerView.LayoutParams layoutParams) {
        return layoutParams instanceof e;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollExtent(RecyclerView.State state) {
        return d(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollOffset(RecyclerView.State state) {
        return e(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollRange(RecyclerView.State state) {
        return f(state);
    }

    @Override // androidx.recyclerview.widget.i1
    public final PointF computeScrollVectorForPosition(int i5) {
        View childAt;
        if (getChildCount() == 0 || (childAt = getChildAt(0)) == null) {
            return null;
        }
        int i6 = i5 < getPosition(childAt) ? -1 : 1;
        return isMainAxisDirectionHorizontal() ? new PointF(0.0f, i6) : new PointF(i6, 0.0f);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollExtent(RecyclerView.State state) {
        return d(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollOffset(RecyclerView.State state) {
        return e(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollRange(RecyclerView.State state) {
        return f(state);
    }

    public final int d(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        int b10 = state.b();
        g();
        View i5 = i(b10);
        View k = k(b10);
        if (state.b() == 0 || i5 == null || k == null) {
            return 0;
        }
        return Math.min(this.J.l(), this.J.b(k) - this.J.e(i5));
    }

    public final int e(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        int b10 = state.b();
        View i5 = i(b10);
        View k = k(b10);
        if (state.b() == 0 || i5 == null || k == null) {
            return 0;
        }
        int position = getPosition(i5);
        int position2 = getPosition(k);
        int abs = Math.abs(this.J.b(k) - this.J.e(i5));
        int i6 = this.E.f5596c[position];
        if (i6 == 0 || i6 == -1) {
            return 0;
        }
        return Math.round((i6 * (abs / ((r3[position2] - i6) + 1))) + (this.J.k() - this.J.e(i5)));
    }

    public final int f(RecyclerView.State state) {
        if (getChildCount() != 0) {
            int b10 = state.b();
            View i5 = i(b10);
            View k = k(b10);
            if (state.b() != 0 && i5 != null && k != null) {
                View m5 = m(0, getChildCount());
                int position = m5 == null ? -1 : getPosition(m5);
                return (int) ((Math.abs(this.J.b(k) - this.J.e(i5)) / (((m(getChildCount() - 1, -1) != null ? getPosition(r4) : -1) - position) + 1)) * state.b());
            }
        }
        return 0;
    }

    public final void g() {
        if (this.J != null) {
            return;
        }
        if (isMainAxisDirectionHorizontal()) {
            if (this.f5608e == 0) {
                this.J = new r0(this);
                this.K = new s0(this);
                return;
            } else {
                this.J = new s0(this);
                this.K = new r0(this);
                return;
            }
        }
        if (this.f5608e == 0) {
            this.J = new s0(this);
            this.K = new r0(this);
        } else {
            this.J = new r0(this);
            this.K = new s0(this);
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final RecyclerView.LayoutParams generateDefaultLayoutParams() {
        return new e(-2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final RecyclerView.LayoutParams generateLayoutParams(Context context, AttributeSet attributeSet) {
        e eVar = new e(context, attributeSet);
        eVar.f15846w = 0.0f;
        eVar.f15847x = 1.0f;
        eVar.f15848y = -1;
        eVar.E = -1.0f;
        eVar.H = 16777215;
        eVar.I = 16777215;
        return eVar;
    }

    @Override // oe.a
    public final int getAlignContent() {
        return 5;
    }

    @Override // oe.a
    public final int getAlignItems() {
        return this.f5609i;
    }

    @Override // oe.a
    public final int getChildHeightMeasureSpec(int i5, int i6, int i10) {
        return RecyclerView.LayoutManager.getChildMeasureSpec(getHeight(), getHeightMode(), i6, i10, canScrollVertically());
    }

    @Override // oe.a
    public final int getChildWidthMeasureSpec(int i5, int i6, int i10) {
        return RecyclerView.LayoutManager.getChildMeasureSpec(getWidth(), getWidthMode(), i6, i10, canScrollHorizontally());
    }

    @Override // oe.a
    public final int getDecorationLengthCrossAxis(View view) {
        int leftDecorationWidth;
        int rightDecorationWidth;
        if (isMainAxisDirectionHorizontal()) {
            leftDecorationWidth = getTopDecorationHeight(view);
            rightDecorationWidth = getBottomDecorationHeight(view);
        } else {
            leftDecorationWidth = getLeftDecorationWidth(view);
            rightDecorationWidth = getRightDecorationWidth(view);
        }
        return rightDecorationWidth + leftDecorationWidth;
    }

    @Override // oe.a
    public final int getDecorationLengthMainAxis(View view, int i5, int i6) {
        int topDecorationHeight;
        int bottomDecorationHeight;
        if (isMainAxisDirectionHorizontal()) {
            topDecorationHeight = getLeftDecorationWidth(view);
            bottomDecorationHeight = getRightDecorationWidth(view);
        } else {
            topDecorationHeight = getTopDecorationHeight(view);
            bottomDecorationHeight = getBottomDecorationHeight(view);
        }
        return bottomDecorationHeight + topDecorationHeight;
    }

    @Override // oe.a
    public final int getFlexDirection() {
        return this.f5607d;
    }

    @Override // oe.a
    public final View getFlexItemAt(int i5) {
        View view = (View) this.Q.get(i5);
        return view != null ? view : this.F.e(i5);
    }

    @Override // oe.a
    public final int getFlexItemCount() {
        return this.G.b();
    }

    @Override // oe.a
    public final List getFlexLinesInternal() {
        return this.f5613y;
    }

    @Override // oe.a
    public final int getFlexWrap() {
        return this.f5608e;
    }

    @Override // oe.a
    public final int getLargestMainSize() {
        if (this.f5613y.size() == 0) {
            return 0;
        }
        int size = this.f5613y.size();
        int i5 = Integer.MIN_VALUE;
        for (int i6 = 0; i6 < size; i6++) {
            i5 = Math.max(i5, ((FlexLine) this.f5613y.get(i6)).f5583e);
        }
        return i5;
    }

    @Override // oe.a
    public final int getMaxLine() {
        return this.f5610v;
    }

    @Override // oe.a
    public final View getReorderedFlexItemAt(int i5) {
        return getFlexItemAt(i5);
    }

    @Override // oe.a
    public final int getSumOfCrossSize() {
        int size = this.f5613y.size();
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += ((FlexLine) this.f5613y.get(i6)).f5585g;
        }
        return i5;
    }

    public final int h(RecyclerView.Recycler recycler, RecyclerView.State state, f fVar) {
        int i5;
        int i6;
        boolean z5;
        int i10;
        int i11;
        boolean z6;
        Rect rect;
        int i12;
        int i13;
        int i14;
        float topDecorationHeight;
        boolean z7;
        FlexboxHelper flexboxHelper;
        int i15;
        int i16;
        int i17;
        Rect rect2;
        int i18;
        int i19 = fVar.f15853f;
        if (i19 != Integer.MIN_VALUE) {
            int i20 = fVar.a;
            if (i20 < 0) {
                fVar.f15853f = i19 + i20;
            }
            s(recycler, fVar);
        }
        int i21 = fVar.a;
        boolean isMainAxisDirectionHorizontal = isMainAxisDirectionHorizontal();
        int i22 = i21;
        int i23 = 0;
        while (true) {
            if (i22 <= 0 && !this.H.f15849b) {
                break;
            }
            List list = this.f5613y;
            int i24 = fVar.f15851d;
            if (i24 < 0 || i24 >= state.b() || (i5 = fVar.f15850c) < 0 || i5 >= list.size()) {
                break;
            }
            FlexLine flexLine = (FlexLine) this.f5613y.get(fVar.f15850c);
            fVar.f15851d = flexLine.f5591o;
            boolean isMainAxisDirectionHorizontal2 = isMainAxisDirectionHorizontal();
            d dVar = this.I;
            Rect rect3 = V;
            FlexboxHelper flexboxHelper2 = this.E;
            if (isMainAxisDirectionHorizontal2) {
                int paddingLeft = getPaddingLeft();
                int paddingRight = getPaddingRight();
                int width = getWidth();
                int i25 = fVar.f15852e;
                if (fVar.f15855h == -1) {
                    i25 -= flexLine.f5585g;
                }
                int i26 = fVar.f15851d;
                float f2 = dVar.f15841d;
                float f10 = paddingLeft - f2;
                float f11 = (width - paddingRight) - f2;
                float max = Math.max(0.0f, 0.0f);
                int i27 = flexLine.f5586h;
                i6 = i21;
                int i28 = i25;
                int i29 = i26;
                int i30 = 0;
                while (i29 < i26 + i27) {
                    int i31 = i26;
                    View flexItemAt = getFlexItemAt(i29);
                    if (flexItemAt == null) {
                        i15 = i30;
                        z7 = isMainAxisDirectionHorizontal;
                        flexboxHelper = flexboxHelper2;
                        i16 = i27;
                        i17 = i29;
                        rect2 = rect3;
                        i18 = i31;
                    } else {
                        z7 = isMainAxisDirectionHorizontal;
                        if (fVar.f15855h == 1) {
                            calculateItemDecorationsForChild(flexItemAt, rect3);
                            addView(flexItemAt);
                        } else {
                            calculateItemDecorationsForChild(flexItemAt, rect3);
                            addView(flexItemAt, i30);
                            i30++;
                        }
                        flexboxHelper = flexboxHelper2;
                        long j = flexboxHelper2.f5597d[i29];
                        int i32 = (int) j;
                        int i33 = (int) (j >> 32);
                        if (w(flexItemAt, i32, i33, (e) flexItemAt.getLayoutParams())) {
                            flexItemAt.measure(i32, i33);
                        }
                        float leftDecorationWidth = f10 + getLeftDecorationWidth(flexItemAt) + ((ViewGroup.MarginLayoutParams) r6).leftMargin;
                        float rightDecorationWidth = f11 - (getRightDecorationWidth(flexItemAt) + ((ViewGroup.MarginLayoutParams) r6).rightMargin);
                        int topDecorationHeight2 = getTopDecorationHeight(flexItemAt) + i28;
                        if (this.f5611w) {
                            int round = Math.round(rightDecorationWidth) - flexItemAt.getMeasuredWidth();
                            Rect rect4 = rect3;
                            int round2 = Math.round(rightDecorationWidth);
                            int measuredHeight = flexItemAt.getMeasuredHeight() + topDecorationHeight2;
                            i16 = i27;
                            i17 = i29;
                            rect2 = rect4;
                            i15 = i30;
                            i18 = i31;
                            this.E.o(flexItemAt, flexLine, round, topDecorationHeight2, round2, measuredHeight);
                        } else {
                            i15 = i30;
                            i16 = i27;
                            i17 = i29;
                            rect2 = rect3;
                            i18 = i31;
                            this.E.o(flexItemAt, flexLine, Math.round(leftDecorationWidth), topDecorationHeight2, flexItemAt.getMeasuredWidth() + Math.round(leftDecorationWidth), flexItemAt.getMeasuredHeight() + topDecorationHeight2);
                        }
                        f11 = rightDecorationWidth - ((getLeftDecorationWidth(flexItemAt) + (flexItemAt.getMeasuredWidth() + ((ViewGroup.MarginLayoutParams) r6).leftMargin)) + max);
                        f10 = getRightDecorationWidth(flexItemAt) + flexItemAt.getMeasuredWidth() + ((ViewGroup.MarginLayoutParams) r6).rightMargin + max + leftDecorationWidth;
                    }
                    i29 = i17 + 1;
                    i26 = i18;
                    flexboxHelper2 = flexboxHelper;
                    isMainAxisDirectionHorizontal = z7;
                    i30 = i15;
                    i27 = i16;
                    rect3 = rect2;
                }
                z5 = isMainAxisDirectionHorizontal;
                fVar.f15850c += this.H.f15855h;
                i11 = flexLine.f5585g;
            } else {
                i6 = i21;
                z5 = isMainAxisDirectionHorizontal;
                Rect rect5 = rect3;
                boolean z8 = true;
                int paddingTop = getPaddingTop();
                int paddingBottom = getPaddingBottom();
                int height = getHeight();
                int i34 = fVar.f15852e;
                if (fVar.f15855h == -1) {
                    int i35 = flexLine.f5585g;
                    i10 = i34 + i35;
                    i34 -= i35;
                } else {
                    i10 = i34;
                }
                int i36 = fVar.f15851d;
                float f12 = height - paddingBottom;
                float f13 = dVar.f15841d;
                float f14 = paddingTop - f13;
                float f15 = f12 - f13;
                float max2 = Math.max(0.0f, 0.0f);
                int i37 = flexLine.f5586h;
                int i38 = i36;
                int i39 = 0;
                while (i38 < i36 + i37) {
                    int i40 = i36;
                    View flexItemAt2 = getFlexItemAt(i38);
                    if (flexItemAt2 == null) {
                        i12 = i37;
                        i13 = i40;
                        topDecorationHeight = f15;
                        z6 = z8;
                        rect = rect5;
                        i14 = i38;
                    } else {
                        float f16 = f14;
                        long j5 = flexboxHelper2.f5597d[i38];
                        float f17 = f15;
                        int i41 = (int) j5;
                        int i42 = (int) (j5 >> 32);
                        if (w(flexItemAt2, i41, i42, (e) flexItemAt2.getLayoutParams())) {
                            flexItemAt2.measure(i41, i42);
                        }
                        float topDecorationHeight3 = f16 + getTopDecorationHeight(flexItemAt2) + ((ViewGroup.MarginLayoutParams) r4).topMargin;
                        float bottomDecorationHeight = f17 - (getBottomDecorationHeight(flexItemAt2) + ((ViewGroup.MarginLayoutParams) r4).rightMargin);
                        z6 = true;
                        if (fVar.f15855h == 1) {
                            rect = rect5;
                            calculateItemDecorationsForChild(flexItemAt2, rect);
                            addView(flexItemAt2);
                        } else {
                            rect = rect5;
                            calculateItemDecorationsForChild(flexItemAt2, rect);
                            addView(flexItemAt2, i39);
                            i39++;
                        }
                        int i43 = i39;
                        int leftDecorationWidth2 = getLeftDecorationWidth(flexItemAt2) + i34;
                        int rightDecorationWidth2 = i10 - getRightDecorationWidth(flexItemAt2);
                        int i44 = i38;
                        boolean z10 = this.f5611w;
                        if (!z10) {
                            i12 = i37;
                            i13 = i40;
                            i14 = i44;
                            if (this.f5612x) {
                                this.E.p(flexItemAt2, flexLine, z10, leftDecorationWidth2, Math.round(bottomDecorationHeight) - flexItemAt2.getMeasuredHeight(), flexItemAt2.getMeasuredWidth() + leftDecorationWidth2, Math.round(bottomDecorationHeight));
                            } else {
                                this.E.p(flexItemAt2, flexLine, z10, leftDecorationWidth2, Math.round(topDecorationHeight3), flexItemAt2.getMeasuredWidth() + leftDecorationWidth2, flexItemAt2.getMeasuredHeight() + Math.round(topDecorationHeight3));
                            }
                        } else if (this.f5612x) {
                            i14 = i44;
                            i12 = i37;
                            i13 = i40;
                            this.E.p(flexItemAt2, flexLine, z10, rightDecorationWidth2 - flexItemAt2.getMeasuredWidth(), Math.round(bottomDecorationHeight) - flexItemAt2.getMeasuredHeight(), rightDecorationWidth2, Math.round(bottomDecorationHeight));
                        } else {
                            i12 = i37;
                            i13 = i40;
                            i14 = i44;
                            this.E.p(flexItemAt2, flexLine, z10, rightDecorationWidth2 - flexItemAt2.getMeasuredWidth(), Math.round(topDecorationHeight3), rightDecorationWidth2, flexItemAt2.getMeasuredHeight() + Math.round(topDecorationHeight3));
                        }
                        topDecorationHeight = bottomDecorationHeight - ((getTopDecorationHeight(flexItemAt2) + (flexItemAt2.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) r4).bottomMargin)) + max2);
                        f14 = getBottomDecorationHeight(flexItemAt2) + flexItemAt2.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) r4).topMargin + max2 + topDecorationHeight3;
                        i39 = i43;
                    }
                    i38 = i14 + 1;
                    rect5 = rect;
                    z8 = z6;
                    f15 = topDecorationHeight;
                    i36 = i13;
                    i37 = i12;
                }
                fVar.f15850c += this.H.f15855h;
                i11 = flexLine.f5585g;
            }
            i23 += i11;
            if (z5 || !this.f5611w) {
                fVar.f15852e += flexLine.f5585g * fVar.f15855h;
            } else {
                fVar.f15852e -= flexLine.f5585g * fVar.f15855h;
            }
            i22 -= flexLine.f5585g;
            i21 = i6;
            isMainAxisDirectionHorizontal = z5;
        }
        int i45 = i21;
        int i46 = fVar.a - i23;
        fVar.a = i46;
        int i47 = fVar.f15853f;
        if (i47 != Integer.MIN_VALUE) {
            int i48 = i47 + i23;
            fVar.f15853f = i48;
            if (i46 < 0) {
                fVar.f15853f = i48 + i46;
            }
            s(recycler, fVar);
        }
        return i45 - fVar.a;
    }

    public final View i(int i5) {
        View n6 = n(0, getChildCount(), i5);
        if (n6 == null) {
            return null;
        }
        int i6 = this.E.f5596c[getPosition(n6)];
        if (i6 == -1) {
            return null;
        }
        return j(n6, (FlexLine) this.f5613y.get(i6));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean isAutoMeasureEnabled() {
        return true;
    }

    @Override // oe.a
    public final boolean isMainAxisDirectionHorizontal() {
        int i5 = this.f5607d;
        return i5 == 0 || i5 == 1;
    }

    public final View j(View view, FlexLine flexLine) {
        boolean isMainAxisDirectionHorizontal = isMainAxisDirectionHorizontal();
        int i5 = flexLine.f5586h;
        for (int i6 = 1; i6 < i5; i6++) {
            View childAt = getChildAt(i6);
            if (childAt != null && childAt.getVisibility() != 8) {
                if (!this.f5611w || isMainAxisDirectionHorizontal) {
                    if (this.J.e(view) <= this.J.e(childAt)) {
                    }
                    view = childAt;
                } else {
                    if (this.J.b(view) >= this.J.b(childAt)) {
                    }
                    view = childAt;
                }
            }
        }
        return view;
    }

    public final View k(int i5) {
        View n6 = n(getChildCount() - 1, -1, i5);
        if (n6 == null) {
            return null;
        }
        return l(n6, (FlexLine) this.f5613y.get(this.E.f5596c[getPosition(n6)]));
    }

    public final View l(View view, FlexLine flexLine) {
        boolean isMainAxisDirectionHorizontal = isMainAxisDirectionHorizontal();
        int childCount = (getChildCount() - flexLine.f5586h) - 1;
        for (int childCount2 = getChildCount() - 2; childCount2 > childCount; childCount2--) {
            View childAt = getChildAt(childCount2);
            if (childAt != null && childAt.getVisibility() != 8) {
                if (!this.f5611w || isMainAxisDirectionHorizontal) {
                    if (this.J.b(view) >= this.J.b(childAt)) {
                    }
                    view = childAt;
                } else {
                    if (this.J.e(view) <= this.J.e(childAt)) {
                    }
                    view = childAt;
                }
            }
        }
        return view;
    }

    public final View m(int i5, int i6) {
        int i10 = i6 > i5 ? 1 : -1;
        while (i5 != i6) {
            View childAt = getChildAt(i5);
            int paddingLeft = getPaddingLeft();
            int paddingTop = getPaddingTop();
            int width = getWidth() - getPaddingRight();
            int height = getHeight() - getPaddingBottom();
            int decoratedLeft = getDecoratedLeft(childAt) - ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) childAt.getLayoutParams())).leftMargin;
            int decoratedTop = getDecoratedTop(childAt) - ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) childAt.getLayoutParams())).topMargin;
            int decoratedRight = getDecoratedRight(childAt) + ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) childAt.getLayoutParams())).rightMargin;
            int decoratedBottom = getDecoratedBottom(childAt) + ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) childAt.getLayoutParams())).bottomMargin;
            boolean z5 = decoratedLeft >= width || decoratedRight >= paddingLeft;
            boolean z6 = decoratedTop >= height || decoratedBottom >= paddingTop;
            if (z5 && z6) {
                return childAt;
            }
            i5 += i10;
        }
        return null;
    }

    public final View n(int i5, int i6, int i10) {
        int position;
        g();
        if (this.H == null) {
            f fVar = new f();
            fVar.f15855h = 1;
            this.H = fVar;
        }
        int k = this.J.k();
        int g6 = this.J.g();
        int i11 = i6 <= i5 ? -1 : 1;
        View view = null;
        View view2 = null;
        while (i5 != i6) {
            View childAt = getChildAt(i5);
            if (childAt != null && (position = getPosition(childAt)) >= 0 && position < i10) {
                if (((RecyclerView.LayoutParams) childAt.getLayoutParams()).f2308d.isRemoved()) {
                    if (view2 == null) {
                        view2 = childAt;
                    }
                } else {
                    if (this.J.e(childAt) >= k && this.J.b(childAt) <= g6) {
                        return childAt;
                    }
                    if (view == null) {
                        view = childAt;
                    }
                }
            }
            i5 += i11;
        }
        return view != null ? view : view2;
    }

    public final int o(int i5, RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        int i6;
        int g6;
        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
            int g10 = this.J.g() - i5;
            if (g10 <= 0) {
                return 0;
            }
            i6 = -q(-g10, recycler, state);
        } else {
            int k = i5 - this.J.k();
            if (k <= 0) {
                return 0;
            }
            i6 = q(k, recycler, state);
        }
        int i10 = i5 + i6;
        if (!z5 || (g6 = this.J.g() - i10) <= 0) {
            return i6;
        }
        this.J.p(g6);
        return g6 + i6;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onAdapterChanged(RecyclerView.Adapter adapter, RecyclerView.Adapter adapter2) {
        removeAllViews();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onAttachedToWindow(RecyclerView recyclerView) {
        super.onAttachedToWindow(recyclerView);
        this.S = (View) recyclerView.getParent();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsAdded(RecyclerView recyclerView, int i5, int i6) {
        super.onItemsAdded(recyclerView, i5, i6);
        x(i5);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsMoved(RecyclerView recyclerView, int i5, int i6, int i10) {
        super.onItemsMoved(recyclerView, i5, i6, i10);
        x(Math.min(i5, i6));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsRemoved(RecyclerView recyclerView, int i5, int i6) {
        super.onItemsRemoved(recyclerView, i5, i6);
        x(i5);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsUpdated(RecyclerView recyclerView, int i5, int i6, Object obj) {
        super.onItemsUpdated(recyclerView, i5, i6, obj);
        x(i5);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onLayoutChildren(RecyclerView.Recycler recycler, RecyclerView.State state) {
        int i5;
        View childAt;
        boolean z5;
        int i6;
        boolean z6;
        int i10;
        int i11;
        int i12;
        this.F = recycler;
        this.G = state;
        int b10 = state.b();
        if (b10 == 0 && state.f2332g) {
            return;
        }
        int layoutDirection = getLayoutDirection();
        int i13 = this.f5607d;
        if (i13 == 0) {
            this.f5611w = layoutDirection == 1;
            this.f5612x = this.f5608e == 2;
        } else if (i13 == 1) {
            this.f5611w = layoutDirection != 1;
            this.f5612x = this.f5608e == 2;
        } else if (i13 == 2) {
            boolean z7 = layoutDirection == 1;
            this.f5611w = z7;
            if (this.f5608e == 2) {
                this.f5611w = !z7;
            }
            this.f5612x = false;
        } else if (i13 != 3) {
            this.f5611w = false;
            this.f5612x = false;
        } else {
            boolean z8 = layoutDirection == 1;
            this.f5611w = z8;
            if (this.f5608e == 2) {
                this.f5611w = !z8;
            }
            this.f5612x = true;
        }
        g();
        if (this.H == null) {
            f fVar = new f();
            fVar.f15855h = 1;
            this.H = fVar;
        }
        FlexboxHelper flexboxHelper = this.E;
        flexboxHelper.j(b10);
        flexboxHelper.k(b10);
        flexboxHelper.i(b10);
        this.H.f15856i = false;
        g gVar = this.L;
        if (gVar != null && (i12 = gVar.f15857d) >= 0 && i12 < b10) {
            this.M = i12;
        }
        d dVar = this.I;
        if (!dVar.f15843f || this.M != -1 || gVar != null) {
            d.b(dVar);
            g gVar2 = this.L;
            if (!state.f2332g && (i5 = this.M) != -1) {
                if (i5 < 0 || i5 >= state.b()) {
                    this.M = -1;
                    this.N = Integer.MIN_VALUE;
                } else {
                    int i14 = this.M;
                    dVar.a = i14;
                    dVar.f15839b = flexboxHelper.f5596c[i14];
                    g gVar3 = this.L;
                    if (gVar3 != null) {
                        int b11 = state.b();
                        int i15 = gVar3.f15857d;
                        if (i15 >= 0 && i15 < b11) {
                            dVar.f15840c = this.J.k() + gVar2.f15858e;
                            dVar.f15844g = true;
                            dVar.f15839b = -1;
                            dVar.f15843f = true;
                        }
                    }
                    if (this.N == Integer.MIN_VALUE) {
                        View findViewByPosition = findViewByPosition(this.M);
                        if (findViewByPosition == null) {
                            if (getChildCount() > 0 && (childAt = getChildAt(0)) != null) {
                                dVar.f15842e = this.M < getPosition(childAt);
                            }
                            d.a(dVar);
                        } else if (this.J.c(findViewByPosition) > this.J.l()) {
                            d.a(dVar);
                        } else if (this.J.e(findViewByPosition) - this.J.k() < 0) {
                            dVar.f15840c = this.J.k();
                            dVar.f15842e = false;
                        } else if (this.J.g() - this.J.b(findViewByPosition) < 0) {
                            dVar.f15840c = this.J.g();
                            dVar.f15842e = true;
                        } else {
                            dVar.f15840c = dVar.f15842e ? this.J.m() + this.J.b(findViewByPosition) : this.J.e(findViewByPosition);
                        }
                    } else if (isMainAxisDirectionHorizontal() || !this.f5611w) {
                        dVar.f15840c = this.J.k() + this.N;
                    } else {
                        dVar.f15840c = this.N - this.J.h();
                    }
                    dVar.f15843f = true;
                }
            }
            if (getChildCount() != 0) {
                View k = dVar.f15842e ? k(state.b()) : i(state.b());
                if (k != null) {
                    FlexboxLayoutManager flexboxLayoutManager = dVar.f15845h;
                    OrientationHelper orientationHelper = flexboxLayoutManager.f5608e == 0 ? flexboxLayoutManager.K : flexboxLayoutManager.J;
                    if (flexboxLayoutManager.isMainAxisDirectionHorizontal() || !flexboxLayoutManager.f5611w) {
                        if (dVar.f15842e) {
                            dVar.f15840c = orientationHelper.m() + orientationHelper.b(k);
                        } else {
                            dVar.f15840c = orientationHelper.e(k);
                        }
                    } else if (dVar.f15842e) {
                        dVar.f15840c = orientationHelper.m() + orientationHelper.e(k);
                    } else {
                        dVar.f15840c = orientationHelper.b(k);
                    }
                    int position = flexboxLayoutManager.getPosition(k);
                    dVar.a = position;
                    dVar.f15844g = false;
                    int[] iArr = flexboxLayoutManager.E.f5596c;
                    if (position == -1) {
                        position = 0;
                    }
                    int i16 = iArr[position];
                    if (i16 == -1) {
                        i16 = 0;
                    }
                    dVar.f15839b = i16;
                    int size = flexboxLayoutManager.f5613y.size();
                    int i17 = dVar.f15839b;
                    if (size > i17) {
                        dVar.a = ((FlexLine) flexboxLayoutManager.f5613y.get(i17)).f5591o;
                    }
                    if (!state.f2332g && supportsPredictiveItemAnimations() && (this.J.e(k) >= this.J.g() || this.J.b(k) < this.J.k())) {
                        dVar.f15840c = dVar.f15842e ? this.J.g() : this.J.k();
                    }
                    dVar.f15843f = true;
                }
            }
            d.a(dVar);
            dVar.a = 0;
            dVar.f15839b = 0;
            dVar.f15843f = true;
        }
        detachAndScrapAttachedViews(recycler);
        if (dVar.f15842e) {
            z(dVar, false, true);
        } else {
            y(dVar, false, true);
        }
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(getWidth(), getWidthMode());
        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(getHeight(), getHeightMode());
        int width = getWidth();
        int height = getHeight();
        boolean isMainAxisDirectionHorizontal = isMainAxisDirectionHorizontal();
        Context context = this.R;
        if (isMainAxisDirectionHorizontal) {
            int i18 = this.O;
            z5 = (i18 == Integer.MIN_VALUE || i18 == width) ? false : true;
            f fVar2 = this.H;
            i6 = fVar2.f15849b ? context.getResources().getDisplayMetrics().heightPixels : fVar2.a;
        } else {
            int i19 = this.P;
            z5 = (i19 == Integer.MIN_VALUE || i19 == height) ? false : true;
            f fVar3 = this.H;
            i6 = fVar3.f15849b ? context.getResources().getDisplayMetrics().widthPixels : fVar3.a;
        }
        int i20 = i6;
        this.O = width;
        this.P = height;
        int i21 = this.T;
        FlexboxHelper.FlexLinesResult flexLinesResult = this.U;
        if (i21 != -1 || (this.M == -1 && !z5)) {
            int min = i21 != -1 ? Math.min(i21, dVar.a) : dVar.a;
            flexLinesResult.a = null;
            flexLinesResult.f5599b = 0;
            if (isMainAxisDirectionHorizontal()) {
                if (this.f5613y.size() > 0) {
                    flexboxHelper.d(min, this.f5613y);
                    this.E.b(this.U, makeMeasureSpec, makeMeasureSpec2, i20, min, dVar.a, this.f5613y);
                } else {
                    flexboxHelper.i(b10);
                    this.E.b(this.U, makeMeasureSpec, makeMeasureSpec2, i20, 0, -1, this.f5613y);
                }
            } else if (this.f5613y.size() > 0) {
                flexboxHelper.d(min, this.f5613y);
                int i22 = min;
                this.E.b(this.U, makeMeasureSpec2, makeMeasureSpec, i20, i22, dVar.a, this.f5613y);
                makeMeasureSpec2 = makeMeasureSpec2;
                makeMeasureSpec = makeMeasureSpec;
                min = i22;
            } else {
                flexboxHelper.i(b10);
                this.E.b(this.U, makeMeasureSpec2, makeMeasureSpec, i20, 0, -1, this.f5613y);
                makeMeasureSpec2 = makeMeasureSpec2;
                makeMeasureSpec = makeMeasureSpec;
            }
            this.f5613y = flexLinesResult.a;
            flexboxHelper.h(makeMeasureSpec, makeMeasureSpec2, min);
            flexboxHelper.u(min);
        } else if (!dVar.f15842e) {
            this.f5613y.clear();
            flexLinesResult.a = null;
            flexLinesResult.f5599b = 0;
            if (isMainAxisDirectionHorizontal()) {
                this.E.b(this.U, makeMeasureSpec, makeMeasureSpec2, i20, 0, dVar.a, this.f5613y);
            } else {
                this.E.b(this.U, makeMeasureSpec2, makeMeasureSpec, i20, 0, dVar.a, this.f5613y);
                makeMeasureSpec2 = makeMeasureSpec2;
                makeMeasureSpec = makeMeasureSpec;
            }
            this.f5613y = flexLinesResult.a;
            flexboxHelper.h(makeMeasureSpec, makeMeasureSpec2, 0);
            flexboxHelper.u(0);
            int i23 = flexboxHelper.f5596c[dVar.a];
            dVar.f15839b = i23;
            this.H.f15850c = i23;
        }
        h(recycler, state, this.H);
        if (dVar.f15842e) {
            i11 = this.H.f15852e;
            z6 = true;
            y(dVar, true, false);
            h(recycler, state, this.H);
            i10 = this.H.f15852e;
        } else {
            z6 = true;
            i10 = this.H.f15852e;
            z(dVar, true, false);
            h(recycler, state, this.H);
            i11 = this.H.f15852e;
        }
        if (getChildCount() > 0) {
            if (dVar.f15842e) {
                p(o(i10, recycler, state, z6) + i11, recycler, state, false);
            } else {
                o(p(i11, recycler, state, z6) + i10, recycler, state, false);
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onLayoutCompleted(RecyclerView.State state) {
        super.onLayoutCompleted(state);
        this.L = null;
        this.M = -1;
        this.N = Integer.MIN_VALUE;
        this.T = -1;
        d.b(this.I);
        this.Q.clear();
    }

    @Override // oe.a
    public final void onNewFlexItemAdded(View view, int i5, int i6, FlexLine flexLine) {
        calculateItemDecorationsForChild(view, V);
        if (isMainAxisDirectionHorizontal()) {
            int rightDecorationWidth = getRightDecorationWidth(view) + getLeftDecorationWidth(view);
            flexLine.f5583e += rightDecorationWidth;
            flexLine.f5584f += rightDecorationWidth;
            return;
        }
        int bottomDecorationHeight = getBottomDecorationHeight(view) + getTopDecorationHeight(view);
        flexLine.f5583e += bottomDecorationHeight;
        flexLine.f5584f += bottomDecorationHeight;
    }

    @Override // oe.a
    public final void onNewFlexLineAdded(FlexLine flexLine) {
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (parcelable instanceof g) {
            this.L = (g) parcelable;
            requestLayout();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final Parcelable onSaveInstanceState() {
        g gVar = this.L;
        if (gVar != null) {
            g gVar2 = new g();
            gVar2.f15857d = gVar.f15857d;
            gVar2.f15858e = gVar.f15858e;
            return gVar2;
        }
        g gVar3 = new g();
        if (getChildCount() <= 0) {
            gVar3.f15857d = -1;
            return gVar3;
        }
        View childAt = getChildAt(0);
        gVar3.f15857d = getPosition(childAt);
        gVar3.f15858e = this.J.e(childAt) - this.J.k();
        return gVar3;
    }

    public final int p(int i5, RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        int i6;
        int k;
        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
            int k5 = i5 - this.J.k();
            if (k5 <= 0) {
                return 0;
            }
            i6 = -q(k5, recycler, state);
        } else {
            int g6 = this.J.g() - i5;
            if (g6 <= 0) {
                return 0;
            }
            i6 = q(-g6, recycler, state);
        }
        int i10 = i5 + i6;
        if (!z5 || (k = i10 - this.J.k()) <= 0) {
            return i6;
        }
        this.J.p(-k);
        return i6 - k;
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x01ee  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int q(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        int h6;
        int i6;
        if (getChildCount() != 0 && i5 != 0) {
            g();
            this.H.f15856i = true;
            boolean z5 = !isMainAxisDirectionHorizontal() && this.f5611w;
            int i10 = (!z5 ? i5 > 0 : i5 < 0) ? -1 : 1;
            int abs = Math.abs(i5);
            this.H.f15855h = i10;
            boolean isMainAxisDirectionHorizontal = isMainAxisDirectionHorizontal();
            int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(getWidth(), getWidthMode());
            int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(getHeight(), getHeightMode());
            boolean z6 = !isMainAxisDirectionHorizontal && this.f5611w;
            FlexboxHelper flexboxHelper = this.E;
            if (i10 == 1) {
                View childAt = getChildAt(getChildCount() - 1);
                if (childAt != null) {
                    this.H.f15852e = this.J.b(childAt);
                    int position = getPosition(childAt);
                    View l6 = l(childAt, (FlexLine) this.f5613y.get(flexboxHelper.f5596c[position]));
                    f fVar = this.H;
                    fVar.getClass();
                    int i11 = position + 1;
                    fVar.f15851d = i11;
                    int[] iArr = flexboxHelper.f5596c;
                    if (iArr.length <= i11) {
                        fVar.f15850c = -1;
                    } else {
                        fVar.f15850c = iArr[i11];
                    }
                    if (z6) {
                        fVar.f15852e = this.J.e(l6);
                        this.H.f15853f = this.J.k() + (-this.J.e(l6));
                        f fVar2 = this.H;
                        fVar2.f15853f = Math.max(fVar2.f15853f, 0);
                    } else {
                        fVar.f15852e = this.J.b(l6);
                        this.H.f15853f = this.J.b(l6) - this.J.g();
                    }
                    int i12 = this.H.f15850c;
                    if ((i12 == -1 || i12 > this.f5613y.size() - 1) && this.H.f15851d <= this.G.b()) {
                        f fVar3 = this.H;
                        int i13 = abs - fVar3.f15853f;
                        FlexboxHelper.FlexLinesResult flexLinesResult = this.U;
                        flexLinesResult.a = null;
                        flexLinesResult.f5599b = 0;
                        if (i13 > 0) {
                            if (isMainAxisDirectionHorizontal) {
                                this.E.b(flexLinesResult, makeMeasureSpec, makeMeasureSpec2, i13, fVar3.f15851d, -1, this.f5613y);
                            } else {
                                this.E.b(flexLinesResult, makeMeasureSpec2, makeMeasureSpec, i13, fVar3.f15851d, -1, this.f5613y);
                                makeMeasureSpec2 = makeMeasureSpec2;
                                makeMeasureSpec = makeMeasureSpec;
                            }
                            flexboxHelper.h(makeMeasureSpec, makeMeasureSpec2, this.H.f15851d);
                            flexboxHelper.u(this.H.f15851d);
                        }
                    }
                    f fVar4 = this.H;
                    fVar4.a = abs - fVar4.f15853f;
                }
                f fVar5 = this.H;
                h6 = h(recycler, state, fVar5) + fVar5.f15853f;
                if (h6 >= 0) {
                    if (z5) {
                        if (abs > h6) {
                            i6 = (-i10) * h6;
                        }
                        i6 = i5;
                    } else {
                        if (abs > h6) {
                            i6 = i10 * h6;
                        }
                        i6 = i5;
                    }
                    this.J.p(-i6);
                    this.H.f15854g = i6;
                    return i6;
                }
            } else {
                View childAt2 = getChildAt(0);
                if (childAt2 != null) {
                    this.H.f15852e = this.J.e(childAt2);
                    int position2 = getPosition(childAt2);
                    View j = j(childAt2, (FlexLine) this.f5613y.get(flexboxHelper.f5596c[position2]));
                    f fVar6 = this.H;
                    fVar6.getClass();
                    int i14 = flexboxHelper.f5596c[position2];
                    if (i14 == -1) {
                        i14 = 0;
                    }
                    if (i14 > 0) {
                        this.H.f15851d = position2 - ((FlexLine) this.f5613y.get(i14 - 1)).f5586h;
                    } else {
                        fVar6.f15851d = -1;
                    }
                    f fVar7 = this.H;
                    fVar7.f15850c = i14 > 0 ? i14 - 1 : 0;
                    if (z6) {
                        fVar7.f15852e = this.J.b(j);
                        this.H.f15853f = this.J.b(j) - this.J.g();
                        f fVar8 = this.H;
                        fVar8.f15853f = Math.max(fVar8.f15853f, 0);
                    } else {
                        fVar7.f15852e = this.J.e(j);
                        this.H.f15853f = this.J.k() + (-this.J.e(j));
                    }
                    f fVar42 = this.H;
                    fVar42.a = abs - fVar42.f15853f;
                }
                f fVar52 = this.H;
                h6 = h(recycler, state, fVar52) + fVar52.f15853f;
                if (h6 >= 0) {
                }
            }
        }
        return 0;
    }

    public final int r(int i5) {
        if (getChildCount() == 0 || i5 == 0) {
            return 0;
        }
        g();
        boolean isMainAxisDirectionHorizontal = isMainAxisDirectionHorizontal();
        View view = this.S;
        int width = isMainAxisDirectionHorizontal ? view.getWidth() : view.getHeight();
        int width2 = isMainAxisDirectionHorizontal ? getWidth() : getHeight();
        int layoutDirection = getLayoutDirection();
        d dVar = this.I;
        if (layoutDirection == 1) {
            int abs = Math.abs(i5);
            if (i5 < 0) {
                return -Math.min((width2 + dVar.f15841d) - width, abs);
            }
            int i6 = dVar.f15841d;
            if (i6 + i5 > 0) {
                return -i6;
            }
        } else {
            if (i5 > 0) {
                return Math.min((width2 - dVar.f15841d) - width, i5);
            }
            int i10 = dVar.f15841d;
            if (i10 + i5 < 0) {
                return -i10;
            }
        }
        return i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x006f  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0080 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x0103 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void s(RecyclerView.Recycler recycler, f fVar) {
        int childCount;
        int i5;
        int childCount2;
        int i6;
        View childAt;
        int i10;
        if (fVar.f15856i) {
            int i11 = fVar.f15855h;
            FlexboxHelper flexboxHelper = this.E;
            int i12 = -1;
            if (i11 == -1) {
                if (fVar.f15853f < 0 || (childCount2 = getChildCount()) == 0 || (childAt = getChildAt(childCount2 - 1)) == null || (i10 = flexboxHelper.f5596c[getPosition(childAt)]) == -1) {
                    return;
                }
                FlexLine flexLine = (FlexLine) this.f5613y.get(i10);
                int i13 = i6;
                while (true) {
                    if (i13 < 0) {
                        break;
                    }
                    View childAt2 = getChildAt(i13);
                    if (childAt2 != null) {
                        int i14 = fVar.f15853f;
                        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
                            if (this.J.e(childAt2) < this.J.f() - i14) {
                                break;
                            }
                            if (flexLine.f5591o != getPosition(childAt2)) {
                                continue;
                            } else if (i10 <= 0) {
                                childCount2 = i13;
                                break;
                            } else {
                                i10 += fVar.f15855h;
                                flexLine = (FlexLine) this.f5613y.get(i10);
                                childCount2 = i13;
                            }
                        } else {
                            if (this.J.b(childAt2) > i14) {
                                break;
                            }
                            if (flexLine.f5591o != getPosition(childAt2)) {
                            }
                        }
                    }
                    i13--;
                }
                while (i6 >= childCount2) {
                    removeAndRecycleViewAt(i6, recycler);
                    i6--;
                }
                return;
            }
            if (fVar.f15853f >= 0 && (childCount = getChildCount()) != 0) {
                int i15 = 0;
                View childAt3 = getChildAt(0);
                if (childAt3 == null || (i5 = flexboxHelper.f5596c[getPosition(childAt3)]) == -1) {
                    return;
                }
                FlexLine flexLine2 = (FlexLine) this.f5613y.get(i5);
                while (true) {
                    if (i15 >= childCount) {
                        break;
                    }
                    View childAt4 = getChildAt(i15);
                    if (childAt4 != null) {
                        int i16 = fVar.f15853f;
                        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
                            if (this.J.b(childAt4) > i16) {
                                break;
                            }
                            if (flexLine2.f5592p != getPosition(childAt4)) {
                                continue;
                            } else if (i5 >= this.f5613y.size() - 1) {
                                i12 = i15;
                                break;
                            } else {
                                i5 += fVar.f15855h;
                                flexLine2 = (FlexLine) this.f5613y.get(i5);
                                i12 = i15;
                            }
                        } else {
                            if (this.J.f() - this.J.e(childAt4) > i16) {
                                break;
                            }
                            if (flexLine2.f5592p != getPosition(childAt4)) {
                            }
                        }
                    }
                    i15++;
                }
                while (i12 >= 0) {
                    removeAndRecycleViewAt(i12, recycler);
                    i12--;
                }
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int scrollHorizontallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (!isMainAxisDirectionHorizontal() || this.f5608e == 0) {
            int q5 = q(i5, recycler, state);
            this.Q.clear();
            return q5;
        }
        int r5 = r(i5);
        this.I.f15841d += r5;
        this.K.p(-r5);
        return r5;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void scrollToPosition(int i5) {
        this.M = i5;
        this.N = Integer.MIN_VALUE;
        g gVar = this.L;
        if (gVar != null) {
            gVar.f15857d = -1;
        }
        requestLayout();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int scrollVerticallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (isMainAxisDirectionHorizontal() || (this.f5608e == 0 && !isMainAxisDirectionHorizontal())) {
            int q5 = q(i5, recycler, state);
            this.Q.clear();
            return q5;
        }
        int r5 = r(i5);
        this.I.f15841d += r5;
        this.K.p(-r5);
        return r5;
    }

    @Override // oe.a
    public final void setFlexLines(List list) {
        this.f5613y = list;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void smoothScrollToPosition(RecyclerView recyclerView, RecyclerView.State state, int i5) {
        m0 m0Var = new m0(recyclerView.getContext());
        m0Var.setTargetPosition(i5);
        startSmoothScroll(m0Var);
    }

    public final void t() {
        int heightMode = isMainAxisDirectionHorizontal() ? getHeightMode() : getWidthMode();
        this.H.f15849b = heightMode == 0 || heightMode == Integer.MIN_VALUE;
    }

    public final void u(int i5) {
        if (this.f5607d != i5) {
            removeAllViews();
            this.f5607d = i5;
            this.J = null;
            this.K = null;
            this.f5613y.clear();
            d dVar = this.I;
            d.b(dVar);
            dVar.f15841d = 0;
            requestLayout();
        }
    }

    @Override // oe.a
    public final void updateViewCache(int i5, View view) {
        this.Q.put(i5, view);
    }

    public final void v(int i5) {
        int i6 = this.f5608e;
        if (i6 != 1) {
            if (i6 == 0) {
                removeAllViews();
                this.f5613y.clear();
                d dVar = this.I;
                d.b(dVar);
                dVar.f15841d = 0;
            }
            this.f5608e = 1;
            this.J = null;
            this.K = null;
            requestLayout();
        }
    }

    public final boolean w(View view, int i5, int i6, e eVar) {
        return (!view.isLayoutRequested() && isMeasurementCacheEnabled() && b(view.getWidth(), i5, ((ViewGroup.MarginLayoutParams) eVar).width) && b(view.getHeight(), i6, ((ViewGroup.MarginLayoutParams) eVar).height)) ? false : true;
    }

    public final void x(int i5) {
        View m5 = m(getChildCount() - 1, -1);
        if (i5 >= (m5 != null ? getPosition(m5) : -1)) {
            return;
        }
        int childCount = getChildCount();
        FlexboxHelper flexboxHelper = this.E;
        flexboxHelper.j(childCount);
        flexboxHelper.k(childCount);
        flexboxHelper.i(childCount);
        if (i5 >= flexboxHelper.f5596c.length) {
            return;
        }
        this.T = i5;
        View childAt = getChildAt(0);
        if (childAt == null) {
            return;
        }
        this.M = getPosition(childAt);
        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
            this.N = this.J.e(childAt) - this.J.k();
        } else {
            this.N = this.J.h() + this.J.b(childAt);
        }
    }

    public final void y(d dVar, boolean z5, boolean z6) {
        int i5;
        if (z6) {
            t();
        } else {
            this.H.f15849b = false;
        }
        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
            this.H.a = this.J.g() - dVar.f15840c;
        } else {
            this.H.a = dVar.f15840c - getPaddingRight();
        }
        f fVar = this.H;
        fVar.f15851d = dVar.a;
        fVar.f15855h = 1;
        fVar.f15852e = dVar.f15840c;
        fVar.f15853f = Integer.MIN_VALUE;
        fVar.f15850c = dVar.f15839b;
        if (!z5 || this.f5613y.size() <= 1 || (i5 = dVar.f15839b) < 0 || i5 >= this.f5613y.size() - 1) {
            return;
        }
        FlexLine flexLine = (FlexLine) this.f5613y.get(dVar.f15839b);
        f fVar2 = this.H;
        fVar2.f15850c++;
        fVar2.f15851d += flexLine.f5586h;
    }

    public final void z(d dVar, boolean z5, boolean z6) {
        if (z6) {
            t();
        } else {
            this.H.f15849b = false;
        }
        if (isMainAxisDirectionHorizontal() || !this.f5611w) {
            this.H.a = dVar.f15840c - this.J.k();
        } else {
            this.H.a = (this.S.getWidth() - dVar.f15840c) - this.J.k();
        }
        f fVar = this.H;
        fVar.f15851d = dVar.a;
        fVar.f15855h = -1;
        fVar.f15852e = dVar.f15840c;
        fVar.f15853f = Integer.MIN_VALUE;
        int i5 = dVar.f15839b;
        fVar.f15850c = i5;
        if (!z5 || i5 <= 0) {
            return;
        }
        int size = this.f5613y.size();
        int i6 = dVar.f15839b;
        if (size > i6) {
            FlexLine flexLine = (FlexLine) this.f5613y.get(i6);
            r4.f15850c--;
            this.H.f15851d -= flexLine.f5586h;
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsUpdated(RecyclerView recyclerView, int i5, int i6) {
        super.onItemsUpdated(recyclerView, i5, i6);
        x(i5);
    }

    public FlexboxLayoutManager(Context context, AttributeSet attributeSet, int i5, int i6) {
        d dVar = new d(this);
        this.I = dVar;
        this.M = -1;
        this.N = Integer.MIN_VALUE;
        this.O = Integer.MIN_VALUE;
        this.P = Integer.MIN_VALUE;
        this.Q = new SparseArray();
        this.T = -1;
        this.U = new FlexboxHelper.FlexLinesResult();
        RecyclerView.LayoutManager.Properties properties = RecyclerView.LayoutManager.getProperties(context, attributeSet, i5, i6);
        int i10 = properties.a;
        if (i10 != 0) {
            if (i10 == 1) {
                if (properties.f2306c) {
                    u(3);
                } else {
                    u(2);
                }
            }
        } else if (properties.f2306c) {
            u(1);
        } else {
            u(0);
        }
        v(1);
        if (this.f5609i != 4) {
            removeAllViews();
            this.f5613y.clear();
            d.b(dVar);
            dVar.f15841d = 0;
            this.f5609i = 4;
            requestLayout();
        }
        this.R = context;
    }
}
