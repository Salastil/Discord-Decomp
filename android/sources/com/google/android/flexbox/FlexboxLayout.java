package com.google.android.flexbox;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.SparseIntArray;
import android.view.View;
import android.view.ViewGroup;
import androidx.core.view.s0;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.events.PointerEventHelper;
import com.google.android.flexbox.FlexboxHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.WeakHashMap;
import k0.d;
import oe.b;
import oe.c;
import oe.h;

/* loaded from: classes3.dex */
public class FlexboxLayout extends ViewGroup implements oe.a {
    public static final int SHOW_DIVIDER_BEGINNING = 1;
    public static final int SHOW_DIVIDER_END = 4;
    public static final int SHOW_DIVIDER_MIDDLE = 2;
    public static final int SHOW_DIVIDER_NONE = 0;
    private int mAlignContent;
    private int mAlignItems;
    private Drawable mDividerDrawableHorizontal;
    private Drawable mDividerDrawableVertical;
    private int mDividerHorizontalHeight;
    private int mDividerVerticalWidth;
    private int mFlexDirection;
    private List<FlexLine> mFlexLines;
    private FlexboxHelper.FlexLinesResult mFlexLinesResult;
    private int mFlexWrap;
    private FlexboxHelper mFlexboxHelper;
    private int mJustifyContent;
    private int mMaxLine;
    private SparseIntArray mOrderCache;
    private int[] mReorderedIndices;
    private int mShowDividerHorizontal;
    private int mShowDividerVertical;

    public static class LayoutParams extends ViewGroup.MarginLayoutParams implements b {
        public static final Parcelable.Creator<LayoutParams> CREATOR = new a();
        public int E;
        public int F;
        public boolean G;

        /* renamed from: d, reason: collision with root package name */
        public int f5600d;

        /* renamed from: e, reason: collision with root package name */
        public float f5601e;

        /* renamed from: i, reason: collision with root package name */
        public float f5602i;

        /* renamed from: v, reason: collision with root package name */
        public int f5603v;

        /* renamed from: w, reason: collision with root package name */
        public float f5604w;

        /* renamed from: x, reason: collision with root package name */
        public int f5605x;

        /* renamed from: y, reason: collision with root package name */
        public int f5606y;

        public LayoutParams(int i5, int i6) {
            super(new ViewGroup.LayoutParams(i5, i6));
            this.f5600d = 1;
            this.f5601e = 0.0f;
            this.f5602i = 1.0f;
            this.f5603v = -1;
            this.f5604w = -1.0f;
            this.f5605x = -1;
            this.f5606y = -1;
            this.E = 16777215;
            this.F = 16777215;
        }

        @Override // oe.b
        public final int b() {
            return this.f5603v;
        }

        @Override // oe.b
        public final float c() {
            return this.f5602i;
        }

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // oe.b
        public final int e() {
            return this.f5605x;
        }

        @Override // oe.b
        public final void f(int i5) {
            this.f5605x = i5;
        }

        @Override // oe.b
        public final int g() {
            return ((ViewGroup.MarginLayoutParams) this).bottomMargin;
        }

        @Override // oe.b
        public final int getHeight() {
            return ((ViewGroup.MarginLayoutParams) this).height;
        }

        @Override // oe.b
        public final int getOrder() {
            return this.f5600d;
        }

        @Override // oe.b
        public final int getWidth() {
            return ((ViewGroup.MarginLayoutParams) this).width;
        }

        @Override // oe.b
        public final int j() {
            return ((ViewGroup.MarginLayoutParams) this).leftMargin;
        }

        @Override // oe.b
        public final int k() {
            return ((ViewGroup.MarginLayoutParams) this).topMargin;
        }

        @Override // oe.b
        public final void l(int i5) {
            this.f5606y = i5;
        }

        @Override // oe.b
        public final float m() {
            return this.f5601e;
        }

        @Override // oe.b
        public final float n() {
            return this.f5604w;
        }

        @Override // oe.b
        public final int p() {
            return ((ViewGroup.MarginLayoutParams) this).rightMargin;
        }

        @Override // oe.b
        public final int q() {
            return this.f5606y;
        }

        @Override // oe.b
        public final boolean r() {
            return this.G;
        }

        @Override // oe.b
        public final int s() {
            return this.F;
        }

        @Override // oe.b
        public final int u() {
            return this.E;
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i5) {
            parcel.writeInt(this.f5600d);
            parcel.writeFloat(this.f5601e);
            parcel.writeFloat(this.f5602i);
            parcel.writeInt(this.f5603v);
            parcel.writeFloat(this.f5604w);
            parcel.writeInt(this.f5605x);
            parcel.writeInt(this.f5606y);
            parcel.writeInt(this.E);
            parcel.writeInt(this.F);
            parcel.writeByte(this.G ? (byte) 1 : (byte) 0);
            parcel.writeInt(((ViewGroup.MarginLayoutParams) this).bottomMargin);
            parcel.writeInt(((ViewGroup.MarginLayoutParams) this).leftMargin);
            parcel.writeInt(((ViewGroup.MarginLayoutParams) this).rightMargin);
            parcel.writeInt(((ViewGroup.MarginLayoutParams) this).topMargin);
            parcel.writeInt(((ViewGroup.MarginLayoutParams) this).height);
            parcel.writeInt(((ViewGroup.MarginLayoutParams) this).width);
        }
    }

    public FlexboxLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.mMaxLine = -1;
        this.mFlexboxHelper = new FlexboxHelper(this);
        this.mFlexLines = new ArrayList();
        this.mFlexLinesResult = new FlexboxHelper.FlexLinesResult();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a, 0, 0);
        this.mFlexDirection = obtainStyledAttributes.getInt(5, 0);
        this.mFlexWrap = obtainStyledAttributes.getInt(6, 0);
        this.mJustifyContent = obtainStyledAttributes.getInt(7, 0);
        this.mAlignItems = obtainStyledAttributes.getInt(1, 0);
        this.mAlignContent = obtainStyledAttributes.getInt(0, 0);
        this.mMaxLine = obtainStyledAttributes.getInt(8, -1);
        Drawable drawable = obtainStyledAttributes.getDrawable(2);
        if (drawable != null) {
            setDividerDrawableHorizontal(drawable);
            setDividerDrawableVertical(drawable);
        }
        Drawable drawable2 = obtainStyledAttributes.getDrawable(3);
        if (drawable2 != null) {
            setDividerDrawableHorizontal(drawable2);
        }
        Drawable drawable3 = obtainStyledAttributes.getDrawable(4);
        if (drawable3 != null) {
            setDividerDrawableVertical(drawable3);
        }
        int i5 = obtainStyledAttributes.getInt(9, 0);
        if (i5 != 0) {
            this.mShowDividerVertical = i5;
            this.mShowDividerHorizontal = i5;
        }
        int i6 = obtainStyledAttributes.getInt(11, 0);
        if (i6 != 0) {
            this.mShowDividerVertical = i6;
        }
        int i10 = obtainStyledAttributes.getInt(10, 0);
        if (i10 != 0) {
            this.mShowDividerHorizontal = i10;
        }
        obtainStyledAttributes.recycle();
    }

    public final void a(Canvas canvas, boolean z5, boolean z6) {
        int paddingLeft = getPaddingLeft();
        int max = Math.max(0, (getWidth() - getPaddingRight()) - paddingLeft);
        int size = this.mFlexLines.size();
        for (int i5 = 0; i5 < size; i5++) {
            FlexLine flexLine = this.mFlexLines.get(i5);
            for (int i6 = 0; i6 < flexLine.f5586h; i6++) {
                int i10 = flexLine.f5591o + i6;
                View reorderedChildAt = getReorderedChildAt(i10);
                if (reorderedChildAt != null && reorderedChildAt.getVisibility() != 8) {
                    LayoutParams layoutParams = (LayoutParams) reorderedChildAt.getLayoutParams();
                    if (e(i10, i6)) {
                        d(canvas, z5 ? reorderedChildAt.getRight() + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin : (reorderedChildAt.getLeft() - ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin) - this.mDividerVerticalWidth, flexLine.f5580b, flexLine.f5585g);
                    }
                    if (i6 == flexLine.f5586h - 1 && (this.mShowDividerVertical & 4) > 0) {
                        d(canvas, z5 ? (reorderedChildAt.getLeft() - ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin) - this.mDividerVerticalWidth : reorderedChildAt.getRight() + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, flexLine.f5580b, flexLine.f5585g);
                    }
                }
            }
            if (f(i5)) {
                c(canvas, paddingLeft, z6 ? flexLine.f5582d : flexLine.f5580b - this.mDividerHorizontalHeight, max);
            }
            if (g(i5) && (this.mShowDividerHorizontal & 4) > 0) {
                c(canvas, paddingLeft, z6 ? flexLine.f5580b - this.mDividerHorizontalHeight : flexLine.f5582d, max);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // android.view.ViewGroup
    public void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        if (this.mOrderCache == null) {
            this.mOrderCache = new SparseIntArray(getChildCount());
        }
        FlexboxHelper flexboxHelper = this.mFlexboxHelper;
        SparseIntArray sparseIntArray = this.mOrderCache;
        oe.a aVar = flexboxHelper.a;
        int flexItemCount = aVar.getFlexItemCount();
        ArrayList f2 = flexboxHelper.f(flexItemCount);
        c cVar = new c();
        if (view == null || !(layoutParams instanceof b)) {
            cVar.f15838e = 1;
        } else {
            cVar.f15838e = ((b) layoutParams).getOrder();
        }
        if (i5 == -1 || i5 == flexItemCount) {
            cVar.f15837d = flexItemCount;
        } else if (i5 < aVar.getFlexItemCount()) {
            cVar.f15837d = i5;
            for (int i6 = i5; i6 < flexItemCount; i6++) {
                ((c) f2.get(i6)).f15837d++;
            }
        } else {
            cVar.f15837d = flexItemCount;
        }
        f2.add(cVar);
        this.mReorderedIndices = FlexboxHelper.r(flexItemCount + 1, f2, sparseIntArray);
        super.addView(view, i5, layoutParams);
    }

    public final void b(Canvas canvas, boolean z5, boolean z6) {
        int paddingTop = getPaddingTop();
        int max = Math.max(0, (getHeight() - getPaddingBottom()) - paddingTop);
        int size = this.mFlexLines.size();
        for (int i5 = 0; i5 < size; i5++) {
            FlexLine flexLine = this.mFlexLines.get(i5);
            for (int i6 = 0; i6 < flexLine.f5586h; i6++) {
                int i10 = flexLine.f5591o + i6;
                View reorderedChildAt = getReorderedChildAt(i10);
                if (reorderedChildAt != null && reorderedChildAt.getVisibility() != 8) {
                    LayoutParams layoutParams = (LayoutParams) reorderedChildAt.getLayoutParams();
                    if (e(i10, i6)) {
                        c(canvas, flexLine.a, z6 ? reorderedChildAt.getBottom() + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin : (reorderedChildAt.getTop() - ((ViewGroup.MarginLayoutParams) layoutParams).topMargin) - this.mDividerHorizontalHeight, flexLine.f5585g);
                    }
                    if (i6 == flexLine.f5586h - 1 && (this.mShowDividerHorizontal & 4) > 0) {
                        c(canvas, flexLine.a, z6 ? (reorderedChildAt.getTop() - ((ViewGroup.MarginLayoutParams) layoutParams).topMargin) - this.mDividerHorizontalHeight : reorderedChildAt.getBottom() + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin, flexLine.f5585g);
                    }
                }
            }
            if (f(i5)) {
                d(canvas, z5 ? flexLine.f5581c : flexLine.a - this.mDividerVerticalWidth, paddingTop, max);
            }
            if (g(i5) && (this.mShowDividerVertical & 4) > 0) {
                d(canvas, z5 ? flexLine.a - this.mDividerVerticalWidth : flexLine.f5581c, paddingTop, max);
            }
        }
    }

    public final void c(Canvas canvas, int i5, int i6, int i10) {
        Drawable drawable = this.mDividerDrawableHorizontal;
        if (drawable == null) {
            return;
        }
        drawable.setBounds(i5, i6, i10 + i5, this.mDividerHorizontalHeight + i6);
        this.mDividerDrawableHorizontal.draw(canvas);
    }

    @Override // android.view.ViewGroup
    public boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof LayoutParams;
    }

    public final void d(Canvas canvas, int i5, int i6, int i10) {
        Drawable drawable = this.mDividerDrawableVertical;
        if (drawable == null) {
            return;
        }
        drawable.setBounds(i5, i6, this.mDividerVerticalWidth + i5, i10 + i6);
        this.mDividerDrawableVertical.draw(canvas);
    }

    public final boolean e(int i5, int i6) {
        for (int i10 = 1; i10 <= i6; i10++) {
            View reorderedChildAt = getReorderedChildAt(i5 - i10);
            if (reorderedChildAt != null && reorderedChildAt.getVisibility() != 8) {
                return isMainAxisDirectionHorizontal() ? (this.mShowDividerVertical & 2) != 0 : (this.mShowDividerHorizontal & 2) != 0;
            }
        }
        return isMainAxisDirectionHorizontal() ? (this.mShowDividerVertical & 1) != 0 : (this.mShowDividerHorizontal & 1) != 0;
    }

    public final boolean f(int i5) {
        if (i5 >= 0 && i5 < this.mFlexLines.size()) {
            for (int i6 = 0; i6 < i5; i6++) {
                if (this.mFlexLines.get(i6).a() > 0) {
                    return isMainAxisDirectionHorizontal() ? (this.mShowDividerHorizontal & 2) != 0 : (this.mShowDividerVertical & 2) != 0;
                }
            }
            if (isMainAxisDirectionHorizontal()) {
                return (this.mShowDividerHorizontal & 1) != 0;
            }
            if ((this.mShowDividerVertical & 1) != 0) {
                return true;
            }
        }
        return false;
    }

    public final boolean g(int i5) {
        if (i5 >= 0 && i5 < this.mFlexLines.size()) {
            for (int i6 = i5 + 1; i6 < this.mFlexLines.size(); i6++) {
                if (this.mFlexLines.get(i6).a() > 0) {
                    return false;
                }
            }
            if (isMainAxisDirectionHorizontal()) {
                return (this.mShowDividerHorizontal & 4) != 0;
            }
            if ((this.mShowDividerVertical & 4) != 0) {
                return true;
            }
        }
        return false;
    }

    @Override // oe.a
    public int getAlignContent() {
        return this.mAlignContent;
    }

    @Override // oe.a
    public int getAlignItems() {
        return this.mAlignItems;
    }

    @Override // oe.a
    public int getChildHeightMeasureSpec(int i5, int i6, int i10) {
        return ViewGroup.getChildMeasureSpec(i5, i6, i10);
    }

    @Override // oe.a
    public int getChildWidthMeasureSpec(int i5, int i6, int i10) {
        return ViewGroup.getChildMeasureSpec(i5, i6, i10);
    }

    @Override // oe.a
    public int getDecorationLengthCrossAxis(View view) {
        return 0;
    }

    @Override // oe.a
    public int getDecorationLengthMainAxis(View view, int i5, int i6) {
        int i10;
        int i11;
        if (isMainAxisDirectionHorizontal()) {
            i10 = e(i5, i6) ? this.mDividerVerticalWidth : 0;
            if ((this.mShowDividerVertical & 4) <= 0) {
                return i10;
            }
            i11 = this.mDividerVerticalWidth;
        } else {
            i10 = e(i5, i6) ? this.mDividerHorizontalHeight : 0;
            if ((this.mShowDividerHorizontal & 4) <= 0) {
                return i10;
            }
            i11 = this.mDividerHorizontalHeight;
        }
        return i10 + i11;
    }

    public Drawable getDividerDrawableHorizontal() {
        return this.mDividerDrawableHorizontal;
    }

    public Drawable getDividerDrawableVertical() {
        return this.mDividerDrawableVertical;
    }

    @Override // oe.a
    public int getFlexDirection() {
        return this.mFlexDirection;
    }

    @Override // oe.a
    public View getFlexItemAt(int i5) {
        return getChildAt(i5);
    }

    @Override // oe.a
    public int getFlexItemCount() {
        return getChildCount();
    }

    public List<FlexLine> getFlexLines() {
        ArrayList arrayList = new ArrayList(this.mFlexLines.size());
        for (FlexLine flexLine : this.mFlexLines) {
            if (flexLine.a() != 0) {
                arrayList.add(flexLine);
            }
        }
        return arrayList;
    }

    @Override // oe.a
    public List<FlexLine> getFlexLinesInternal() {
        return this.mFlexLines;
    }

    @Override // oe.a
    public int getFlexWrap() {
        return this.mFlexWrap;
    }

    public int getJustifyContent() {
        return this.mJustifyContent;
    }

    @Override // oe.a
    public int getLargestMainSize() {
        Iterator<FlexLine> it = this.mFlexLines.iterator();
        int i5 = Integer.MIN_VALUE;
        while (it.hasNext()) {
            i5 = Math.max(i5, it.next().f5583e);
        }
        return i5;
    }

    @Override // oe.a
    public int getMaxLine() {
        return this.mMaxLine;
    }

    public View getReorderedChildAt(int i5) {
        if (i5 < 0) {
            return null;
        }
        int[] iArr = this.mReorderedIndices;
        if (i5 >= iArr.length) {
            return null;
        }
        return getChildAt(iArr[i5]);
    }

    @Override // oe.a
    public View getReorderedFlexItemAt(int i5) {
        return getReorderedChildAt(i5);
    }

    public int getShowDividerHorizontal() {
        return this.mShowDividerHorizontal;
    }

    public int getShowDividerVertical() {
        return this.mShowDividerVertical;
    }

    @Override // oe.a
    public int getSumOfCrossSize() {
        int size = this.mFlexLines.size();
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            FlexLine flexLine = this.mFlexLines.get(i6);
            if (f(i6)) {
                i5 += isMainAxisDirectionHorizontal() ? this.mDividerHorizontalHeight : this.mDividerVerticalWidth;
            }
            if (g(i6)) {
                i5 += isMainAxisDirectionHorizontal() ? this.mDividerHorizontalHeight : this.mDividerVerticalWidth;
            }
            i5 += flexLine.f5585g;
        }
        return i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00d5  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void h(int i5, int i6, int i10, int i11, boolean z5) {
        float f2;
        float f10;
        float f11;
        int i12;
        boolean z6;
        int i13;
        int i14;
        int i15;
        int i16;
        View view;
        FlexLine flexLine;
        int paddingLeft = getPaddingLeft();
        int paddingRight = getPaddingRight();
        int i17 = i10 - i5;
        int paddingBottom = (i11 - i6) - getPaddingBottom();
        int paddingTop = getPaddingTop();
        int size = this.mFlexLines.size();
        for (int i18 = 0; i18 < size; i18++) {
            FlexLine flexLine2 = this.mFlexLines.get(i18);
            if (f(i18)) {
                int i19 = this.mDividerHorizontalHeight;
                paddingBottom -= i19;
                paddingTop += i19;
            }
            int i20 = paddingBottom;
            int i21 = this.mJustifyContent;
            char c6 = 4;
            int i22 = 2;
            boolean z7 = true;
            if (i21 == 0) {
                f2 = paddingLeft;
                f10 = i17 - paddingRight;
            } else if (i21 == 1) {
                int i23 = flexLine2.f5583e;
                f10 = i23 - paddingLeft;
                f2 = (i17 - i23) + paddingRight;
            } else if (i21 != 2) {
                if (i21 == 3) {
                    f2 = paddingLeft;
                    f11 = (i17 - flexLine2.f5583e) / (flexLine2.a() != 1 ? r7 - 1 : 1.0f);
                    f10 = i17 - paddingRight;
                } else if (i21 == 4) {
                    int a = flexLine2.a();
                    float f12 = a != 0 ? (i17 - flexLine2.f5583e) / a : 0.0f;
                    float f13 = f12 / 2.0f;
                    f2 = paddingLeft + f13;
                    float f14 = (i17 - paddingRight) - f13;
                    f11 = f12;
                    f10 = f14;
                } else {
                    if (i21 != 5) {
                        throw new IllegalStateException("Invalid justifyContent is set: " + this.mJustifyContent);
                    }
                    f11 = flexLine2.a() != 0 ? (i17 - flexLine2.f5583e) / (r3 + 1) : 0.0f;
                    f2 = paddingLeft + f11;
                    f10 = (i17 - paddingRight) - f11;
                }
                float max = Math.max(f11, 0.0f);
                i12 = 0;
                while (i12 < flexLine2.f5586h) {
                    int i24 = flexLine2.f5591o + i12;
                    View reorderedChildAt = getReorderedChildAt(i24);
                    char c8 = c6;
                    if (reorderedChildAt != null) {
                        boolean z8 = z7;
                        if (reorderedChildAt.getVisibility() == 8) {
                            z6 = z8;
                        } else {
                            LayoutParams layoutParams = (LayoutParams) reorderedChildAt.getLayoutParams();
                            float f15 = f2 + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin;
                            float f16 = f10 - ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin;
                            if (e(i24, i12)) {
                                int i25 = this.mDividerVerticalWidth;
                                float f17 = i25;
                                f15 += f17;
                                f16 -= f17;
                                i16 = i25;
                            } else {
                                i16 = 0;
                            }
                            float f18 = f16;
                            int i26 = (i12 != flexLine2.f5586h + (-1) || (this.mShowDividerVertical & 4) <= 0) ? 0 : this.mDividerVerticalWidth;
                            if (this.mFlexWrap == i22) {
                                if (z5) {
                                    i14 = i22;
                                    i15 = i12;
                                    view = reorderedChildAt;
                                    z6 = z8;
                                    this.mFlexboxHelper.o(view, flexLine2, Math.round(f18) - reorderedChildAt.getMeasuredWidth(), i20 - reorderedChildAt.getMeasuredHeight(), Math.round(f18), i20);
                                } else {
                                    i15 = i12;
                                    view = reorderedChildAt;
                                    z6 = z8;
                                    i14 = i22;
                                    this.mFlexboxHelper.o(view, flexLine2, Math.round(f15), i20 - view.getMeasuredHeight(), view.getMeasuredWidth() + Math.round(f15), i20);
                                }
                                i13 = i20;
                            } else {
                                i15 = i12;
                                view = reorderedChildAt;
                                z6 = z8;
                                i14 = i22;
                                i13 = i20;
                                if (z5) {
                                    this.mFlexboxHelper.o(view, flexLine2, Math.round(f18) - view.getMeasuredWidth(), paddingTop, Math.round(f18), view.getMeasuredHeight() + paddingTop);
                                } else {
                                    int i27 = paddingTop;
                                    this.mFlexboxHelper.o(view, flexLine2, Math.round(f15), i27, view.getMeasuredWidth() + Math.round(f15), view.getMeasuredHeight() + i27);
                                    paddingTop = i27;
                                }
                            }
                            f2 = f15 + view.getMeasuredWidth() + max + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin;
                            float measuredWidth = f18 - ((view.getMeasuredWidth() + max) + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin);
                            if (z5) {
                                flexLine = flexLine2;
                                flexLine.b(view, i26, 0, i16, 0);
                            } else {
                                flexLine = flexLine2;
                                flexLine.b(view, i16, 0, i26, 0);
                            }
                            flexLine2 = flexLine;
                            f10 = measuredWidth;
                            i12 = i15 + 1;
                            c6 = c8;
                            i22 = i14;
                            z7 = z6;
                            i20 = i13;
                        }
                    } else {
                        z6 = z7;
                    }
                    i14 = i22;
                    i15 = i12;
                    i13 = i20;
                    i12 = i15 + 1;
                    c6 = c8;
                    i22 = i14;
                    z7 = z6;
                    i20 = i13;
                }
                int i28 = flexLine2.f5585g;
                paddingTop += i28;
                paddingBottom = i20 - i28;
            } else {
                int i29 = flexLine2.f5583e;
                f2 = paddingLeft + ((i17 - i29) / 2.0f);
                f10 = (i17 - paddingRight) - ((i17 - i29) / 2.0f);
            }
            f11 = 0.0f;
            float max2 = Math.max(f11, 0.0f);
            i12 = 0;
            while (i12 < flexLine2.f5586h) {
            }
            int i282 = flexLine2.f5585g;
            paddingTop += i282;
            paddingBottom = i20 - i282;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00d0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void i(int i5, int i6, int i10, int i11, boolean z5, boolean z6) {
        float f2;
        float f10;
        float f11;
        int i12;
        char c6;
        int i13;
        int i14;
        int i15;
        int i16;
        FlexLine flexLine;
        int paddingTop = getPaddingTop();
        int paddingBottom = getPaddingBottom();
        int paddingRight = getPaddingRight();
        int paddingLeft = getPaddingLeft();
        int i17 = i11 - i6;
        int i18 = (i10 - i5) - paddingRight;
        int size = this.mFlexLines.size();
        for (int i19 = 0; i19 < size; i19++) {
            FlexLine flexLine2 = this.mFlexLines.get(i19);
            if (f(i19)) {
                int i20 = this.mDividerVerticalWidth;
                paddingLeft += i20;
                i18 -= i20;
            }
            int i21 = i18;
            int i22 = this.mJustifyContent;
            char c8 = 4;
            int i23 = 1;
            if (i22 == 0) {
                f2 = paddingTop;
                f10 = i17 - paddingBottom;
            } else if (i22 == 1) {
                int i24 = flexLine2.f5583e;
                f10 = i24 - paddingTop;
                f2 = (i17 - i24) + paddingBottom;
            } else if (i22 != 2) {
                if (i22 == 3) {
                    f2 = paddingTop;
                    f11 = (i17 - flexLine2.f5583e) / (flexLine2.a() != 1 ? r13 - 1 : 1.0f);
                    f10 = i17 - paddingBottom;
                } else if (i22 == 4) {
                    int a = flexLine2.a();
                    f11 = a != 0 ? (i17 - flexLine2.f5583e) / a : 0.0f;
                    float f12 = f11 / 2.0f;
                    f2 = paddingTop + f12;
                    f10 = (i17 - paddingBottom) - f12;
                } else {
                    if (i22 != 5) {
                        throw new IllegalStateException("Invalid justifyContent is set: " + this.mJustifyContent);
                    }
                    f11 = flexLine2.a() != 0 ? (i17 - flexLine2.f5583e) / (r5 + 1) : 0.0f;
                    f2 = paddingTop + f11;
                    f10 = (i17 - paddingBottom) - f11;
                }
                float max = Math.max(f11, 0.0f);
                i12 = 0;
                while (i12 < flexLine2.f5586h) {
                    int i25 = flexLine2.f5591o + i12;
                    int i26 = i23;
                    View reorderedChildAt = getReorderedChildAt(i25);
                    if (reorderedChildAt != null) {
                        c6 = c8;
                        if (reorderedChildAt.getVisibility() != 8) {
                            LayoutParams layoutParams = (LayoutParams) reorderedChildAt.getLayoutParams();
                            float f13 = f2 + ((ViewGroup.MarginLayoutParams) layoutParams).topMargin;
                            float f14 = f10 - ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin;
                            if (e(i25, i12)) {
                                i16 = this.mDividerHorizontalHeight;
                                float f15 = i16;
                                f13 += f15;
                                f14 -= f15;
                            } else {
                                i16 = 0;
                            }
                            float f16 = f14;
                            int i27 = (i12 != flexLine2.f5586h - i26 || (this.mShowDividerHorizontal & 4) <= 0) ? 0 : this.mDividerHorizontalHeight;
                            if (z5) {
                                if (z6) {
                                    i15 = i26;
                                    i14 = i12;
                                    this.mFlexboxHelper.p(reorderedChildAt, flexLine2, true, i21 - reorderedChildAt.getMeasuredWidth(), Math.round(f16) - reorderedChildAt.getMeasuredHeight(), i21, Math.round(f16));
                                } else {
                                    i14 = i12;
                                    i15 = i26;
                                    this.mFlexboxHelper.p(reorderedChildAt, flexLine2, true, i21 - reorderedChildAt.getMeasuredWidth(), Math.round(f13), i21, reorderedChildAt.getMeasuredHeight() + Math.round(f13));
                                }
                                i13 = i21;
                            } else {
                                i14 = i12;
                                i15 = i26;
                                i13 = i21;
                                if (z6) {
                                    this.mFlexboxHelper.p(reorderedChildAt, flexLine2, false, paddingLeft, Math.round(f16) - reorderedChildAt.getMeasuredHeight(), reorderedChildAt.getMeasuredWidth() + paddingLeft, Math.round(f16));
                                } else {
                                    int i28 = paddingLeft;
                                    this.mFlexboxHelper.p(reorderedChildAt, flexLine2, false, i28, Math.round(f13), reorderedChildAt.getMeasuredWidth() + i28, reorderedChildAt.getMeasuredHeight() + Math.round(f13));
                                    paddingLeft = i28;
                                }
                            }
                            f2 = f13 + reorderedChildAt.getMeasuredHeight() + max + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin;
                            float measuredHeight = f16 - ((reorderedChildAt.getMeasuredHeight() + max) + ((ViewGroup.MarginLayoutParams) layoutParams).topMargin);
                            if (z6) {
                                flexLine = flexLine2;
                                flexLine.b(reorderedChildAt, 0, i27, 0, i16);
                            } else {
                                flexLine = flexLine2;
                                flexLine.b(reorderedChildAt, 0, i16, 0, i27);
                            }
                            flexLine2 = flexLine;
                            f10 = measuredHeight;
                            i12 = i14 + 1;
                            c8 = c6;
                            i23 = i15;
                            i21 = i13;
                        }
                    } else {
                        c6 = c8;
                    }
                    i14 = i12;
                    i15 = i26;
                    i13 = i21;
                    i12 = i14 + 1;
                    c8 = c6;
                    i23 = i15;
                    i21 = i13;
                }
                int i29 = flexLine2.f5585g;
                paddingLeft += i29;
                i18 = i21 - i29;
            } else {
                float f17 = (i17 - flexLine2.f5583e) / 2.0f;
                f2 = paddingTop + f17;
                f10 = (i17 - paddingBottom) - f17;
            }
            f11 = 0.0f;
            float max2 = Math.max(f11, 0.0f);
            i12 = 0;
            while (i12 < flexLine2.f5586h) {
            }
            int i292 = flexLine2.f5585g;
            paddingLeft += i292;
            i18 = i21 - i292;
        }
    }

    @Override // oe.a
    public boolean isMainAxisDirectionHorizontal() {
        int i5 = this.mFlexDirection;
        return i5 == 0 || i5 == 1;
    }

    public final void j(int i5, int i6, int i10, int i11) {
        int paddingBottom;
        int largestMainSize;
        int resolveSizeAndState;
        int resolveSizeAndState2;
        int mode = View.MeasureSpec.getMode(i6);
        int size = View.MeasureSpec.getSize(i6);
        int mode2 = View.MeasureSpec.getMode(i10);
        int size2 = View.MeasureSpec.getSize(i10);
        if (i5 == 0 || i5 == 1) {
            paddingBottom = getPaddingBottom() + getPaddingTop() + getSumOfCrossSize();
            largestMainSize = getLargestMainSize();
        } else {
            if (i5 != 2 && i5 != 3) {
                throw new IllegalArgumentException(d.i(i5, "Invalid flex direction: "));
            }
            paddingBottom = getLargestMainSize();
            largestMainSize = getPaddingRight() + getPaddingLeft() + getSumOfCrossSize();
        }
        if (mode == Integer.MIN_VALUE) {
            if (size < largestMainSize) {
                i11 = View.combineMeasuredStates(i11, PointerEventHelper.X_FLAG_SUPPORTS_HOVER);
            } else {
                size = largestMainSize;
            }
            resolveSizeAndState = View.resolveSizeAndState(size, i6, i11);
        } else if (mode == 0) {
            resolveSizeAndState = View.resolveSizeAndState(largestMainSize, i6, i11);
        } else {
            if (mode != 1073741824) {
                throw new IllegalStateException(d.i(mode, "Unknown width mode is set: "));
            }
            if (size < largestMainSize) {
                i11 = View.combineMeasuredStates(i11, PointerEventHelper.X_FLAG_SUPPORTS_HOVER);
            }
            resolveSizeAndState = View.resolveSizeAndState(size, i6, i11);
        }
        if (mode2 == Integer.MIN_VALUE) {
            if (size2 < paddingBottom) {
                i11 = View.combineMeasuredStates(i11, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
            } else {
                size2 = paddingBottom;
            }
            resolveSizeAndState2 = View.resolveSizeAndState(size2, i10, i11);
        } else if (mode2 == 0) {
            resolveSizeAndState2 = View.resolveSizeAndState(paddingBottom, i10, i11);
        } else {
            if (mode2 != 1073741824) {
                throw new IllegalStateException(d.i(mode2, "Unknown height mode is set: "));
            }
            if (size2 < paddingBottom) {
                i11 = View.combineMeasuredStates(i11, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
            }
            resolveSizeAndState2 = View.resolveSizeAndState(size2, i10, i11);
        }
        setMeasuredDimension(resolveSizeAndState, resolveSizeAndState2);
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        if (this.mDividerDrawableVertical == null && this.mDividerDrawableHorizontal == null) {
            return;
        }
        if (this.mShowDividerHorizontal == 0 && this.mShowDividerVertical == 0) {
            return;
        }
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = getLayoutDirection();
        int i5 = this.mFlexDirection;
        if (i5 == 0) {
            a(canvas, layoutDirection == 1, this.mFlexWrap == 2);
            return;
        }
        if (i5 == 1) {
            a(canvas, layoutDirection != 1, this.mFlexWrap == 2);
            return;
        }
        if (i5 == 2) {
            boolean z5 = layoutDirection == 1;
            if (this.mFlexWrap == 2) {
                z5 = !z5;
            }
            b(canvas, z5, false);
            return;
        }
        if (i5 != 3) {
            return;
        }
        boolean z6 = layoutDirection == 1;
        if (this.mFlexWrap == 2) {
            z6 = !z6;
        }
        b(canvas, z6, true);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = getLayoutDirection();
        int i12 = this.mFlexDirection;
        if (i12 == 0) {
            h(i5, i6, i10, i11, layoutDirection == 1);
            return;
        }
        if (i12 == 1) {
            h(i5, i6, i10, i11, layoutDirection != 1);
            return;
        }
        if (i12 == 2) {
            boolean z6 = false;
            if (layoutDirection == 1) {
                z6 = true;
            }
            if (this.mFlexWrap == 2) {
                z6 = !z6;
            }
            i(i5, i6, i10, i11, z6, false);
            return;
        }
        if (i12 != 3) {
            throw new IllegalStateException("Invalid flex direction is set: " + this.mFlexDirection);
        }
        boolean z7 = layoutDirection == 1;
        if (this.mFlexWrap == 2) {
            z7 = !z7;
        }
        i(i5, i6, i10, i11, z7, true);
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x00e2  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onMeasure(int i5, int i6) {
        int i10;
        if (this.mOrderCache == null) {
            this.mOrderCache = new SparseIntArray(getChildCount());
        }
        FlexboxHelper flexboxHelper = this.mFlexboxHelper;
        SparseIntArray sparseIntArray = this.mOrderCache;
        oe.a aVar = flexboxHelper.a;
        int flexItemCount = aVar.getFlexItemCount();
        if (sparseIntArray.size() == flexItemCount) {
            for (int i11 = 0; i11 < flexItemCount; i11++) {
                View flexItemAt = aVar.getFlexItemAt(i11);
                if (flexItemAt == null || ((b) flexItemAt.getLayoutParams()).getOrder() == sparseIntArray.get(i11)) {
                }
            }
            i10 = this.mFlexDirection;
            if (i10 == 0 && i10 != 1) {
                if (i10 != 2 && i10 != 3) {
                    throw new IllegalStateException("Invalid value for the flex direction is set: " + this.mFlexDirection);
                }
                this.mFlexLines.clear();
                FlexboxHelper.FlexLinesResult flexLinesResult = this.mFlexLinesResult;
                flexLinesResult.a = null;
                flexLinesResult.f5599b = 0;
                this.mFlexboxHelper.b(flexLinesResult, i6, i5, Integer.MAX_VALUE, 0, -1, null);
                this.mFlexLines = this.mFlexLinesResult.a;
                this.mFlexboxHelper.h(i5, i6, 0);
                this.mFlexboxHelper.g(i5, i6, getPaddingRight() + getPaddingLeft());
                this.mFlexboxHelper.u(0);
                j(this.mFlexDirection, i5, i6, this.mFlexLinesResult.f5599b);
                return;
            }
            this.mFlexLines.clear();
            FlexboxHelper.FlexLinesResult flexLinesResult2 = this.mFlexLinesResult;
            flexLinesResult2.a = null;
            flexLinesResult2.f5599b = 0;
            this.mFlexboxHelper.b(flexLinesResult2, i5, i6, Integer.MAX_VALUE, 0, -1, null);
            this.mFlexLines = this.mFlexLinesResult.a;
            this.mFlexboxHelper.h(i5, i6, 0);
            if (this.mAlignItems == 3) {
                for (FlexLine flexLine : this.mFlexLines) {
                    int i12 = Integer.MIN_VALUE;
                    for (int i13 = 0; i13 < flexLine.f5586h; i13++) {
                        View reorderedChildAt = getReorderedChildAt(flexLine.f5591o + i13);
                        if (reorderedChildAt != null && reorderedChildAt.getVisibility() != 8) {
                            LayoutParams layoutParams = (LayoutParams) reorderedChildAt.getLayoutParams();
                            i12 = this.mFlexWrap != 2 ? Math.max(i12, reorderedChildAt.getMeasuredHeight() + Math.max(flexLine.f5588l - reorderedChildAt.getBaseline(), ((ViewGroup.MarginLayoutParams) layoutParams).topMargin) + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin) : Math.max(i12, reorderedChildAt.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) layoutParams).topMargin + Math.max(reorderedChildAt.getBaseline() + (flexLine.f5588l - reorderedChildAt.getMeasuredHeight()), ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin));
                        }
                    }
                    flexLine.f5585g = i12;
                }
            }
            this.mFlexboxHelper.g(i5, i6, getPaddingBottom() + getPaddingTop());
            this.mFlexboxHelper.u(0);
            j(this.mFlexDirection, i5, i6, this.mFlexLinesResult.f5599b);
        }
        FlexboxHelper flexboxHelper2 = this.mFlexboxHelper;
        SparseIntArray sparseIntArray2 = this.mOrderCache;
        int flexItemCount2 = flexboxHelper2.a.getFlexItemCount();
        this.mReorderedIndices = FlexboxHelper.r(flexItemCount2, flexboxHelper2.f(flexItemCount2), sparseIntArray2);
        i10 = this.mFlexDirection;
        if (i10 == 0) {
        }
        this.mFlexLines.clear();
        FlexboxHelper.FlexLinesResult flexLinesResult22 = this.mFlexLinesResult;
        flexLinesResult22.a = null;
        flexLinesResult22.f5599b = 0;
        this.mFlexboxHelper.b(flexLinesResult22, i5, i6, Integer.MAX_VALUE, 0, -1, null);
        this.mFlexLines = this.mFlexLinesResult.a;
        this.mFlexboxHelper.h(i5, i6, 0);
        if (this.mAlignItems == 3) {
        }
        this.mFlexboxHelper.g(i5, i6, getPaddingBottom() + getPaddingTop());
        this.mFlexboxHelper.u(0);
        j(this.mFlexDirection, i5, i6, this.mFlexLinesResult.f5599b);
    }

    @Override // oe.a
    public void onNewFlexItemAdded(View view, int i5, int i6, FlexLine flexLine) {
        if (e(i5, i6)) {
            if (isMainAxisDirectionHorizontal()) {
                int i10 = flexLine.f5583e;
                int i11 = this.mDividerVerticalWidth;
                flexLine.f5583e = i10 + i11;
                flexLine.f5584f += i11;
                return;
            }
            int i12 = flexLine.f5583e;
            int i13 = this.mDividerHorizontalHeight;
            flexLine.f5583e = i12 + i13;
            flexLine.f5584f += i13;
        }
    }

    @Override // oe.a
    public void onNewFlexLineAdded(FlexLine flexLine) {
        if (isMainAxisDirectionHorizontal()) {
            if ((this.mShowDividerVertical & 4) > 0) {
                int i5 = flexLine.f5583e;
                int i6 = this.mDividerVerticalWidth;
                flexLine.f5583e = i5 + i6;
                flexLine.f5584f += i6;
                return;
            }
            return;
        }
        if ((this.mShowDividerHorizontal & 4) > 0) {
            int i10 = flexLine.f5583e;
            int i11 = this.mDividerHorizontalHeight;
            flexLine.f5583e = i10 + i11;
            flexLine.f5584f += i11;
        }
    }

    public void setAlignContent(int i5) {
        if (this.mAlignContent != i5) {
            this.mAlignContent = i5;
            requestLayout();
        }
    }

    public void setAlignItems(int i5) {
        if (this.mAlignItems != i5) {
            this.mAlignItems = i5;
            requestLayout();
        }
    }

    public void setDividerDrawable(Drawable drawable) {
        setDividerDrawableHorizontal(drawable);
        setDividerDrawableVertical(drawable);
    }

    public void setDividerDrawableHorizontal(Drawable drawable) {
        if (drawable == this.mDividerDrawableHorizontal) {
            return;
        }
        this.mDividerDrawableHorizontal = drawable;
        if (drawable != null) {
            this.mDividerHorizontalHeight = drawable.getIntrinsicHeight();
        } else {
            this.mDividerHorizontalHeight = 0;
        }
        if (this.mDividerDrawableHorizontal == null && this.mDividerDrawableVertical == null) {
            setWillNotDraw(true);
        } else {
            setWillNotDraw(false);
        }
        requestLayout();
    }

    public void setDividerDrawableVertical(Drawable drawable) {
        if (drawable == this.mDividerDrawableVertical) {
            return;
        }
        this.mDividerDrawableVertical = drawable;
        if (drawable != null) {
            this.mDividerVerticalWidth = drawable.getIntrinsicWidth();
        } else {
            this.mDividerVerticalWidth = 0;
        }
        if (this.mDividerDrawableHorizontal == null && this.mDividerDrawableVertical == null) {
            setWillNotDraw(true);
        } else {
            setWillNotDraw(false);
        }
        requestLayout();
    }

    public void setFlexDirection(int i5) {
        if (this.mFlexDirection != i5) {
            this.mFlexDirection = i5;
            requestLayout();
        }
    }

    @Override // oe.a
    public void setFlexLines(List<FlexLine> list) {
        this.mFlexLines = list;
    }

    public void setFlexWrap(int i5) {
        if (this.mFlexWrap != i5) {
            this.mFlexWrap = i5;
            requestLayout();
        }
    }

    public void setJustifyContent(int i5) {
        if (this.mJustifyContent != i5) {
            this.mJustifyContent = i5;
            requestLayout();
        }
    }

    public void setMaxLine(int i5) {
        if (this.mMaxLine != i5) {
            this.mMaxLine = i5;
            requestLayout();
        }
    }

    public void setShowDivider(int i5) {
        setShowDividerVertical(i5);
        setShowDividerHorizontal(i5);
    }

    public void setShowDividerHorizontal(int i5) {
        if (i5 != this.mShowDividerHorizontal) {
            this.mShowDividerHorizontal = i5;
            requestLayout();
        }
    }

    public void setShowDividerVertical(int i5) {
        if (i5 != this.mShowDividerVertical) {
            this.mShowDividerVertical = i5;
            requestLayout();
        }
    }

    @Override // oe.a
    public void updateViewCache(int i5, View view) {
    }

    @Override // android.view.ViewGroup
    public LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        Context context = getContext();
        LayoutParams layoutParams = new LayoutParams(context, attributeSet);
        layoutParams.f5600d = 1;
        layoutParams.f5601e = 0.0f;
        layoutParams.f5602i = 1.0f;
        layoutParams.f5603v = -1;
        layoutParams.f5604w = -1.0f;
        layoutParams.f5605x = -1;
        layoutParams.f5606y = -1;
        layoutParams.E = 16777215;
        layoutParams.F = 16777215;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.f15859b);
        layoutParams.f5600d = obtainStyledAttributes.getInt(8, 1);
        layoutParams.f5601e = obtainStyledAttributes.getFloat(2, 0.0f);
        layoutParams.f5602i = obtainStyledAttributes.getFloat(3, 1.0f);
        layoutParams.f5603v = obtainStyledAttributes.getInt(0, -1);
        layoutParams.f5604w = obtainStyledAttributes.getFraction(1, 1, 1, -1.0f);
        layoutParams.f5605x = obtainStyledAttributes.getDimensionPixelSize(7, -1);
        layoutParams.f5606y = obtainStyledAttributes.getDimensionPixelSize(6, -1);
        layoutParams.E = obtainStyledAttributes.getDimensionPixelSize(5, 16777215);
        layoutParams.F = obtainStyledAttributes.getDimensionPixelSize(4, 16777215);
        layoutParams.G = obtainStyledAttributes.getBoolean(9, false);
        obtainStyledAttributes.recycle();
        return layoutParams;
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams instanceof LayoutParams) {
            LayoutParams layoutParams2 = (LayoutParams) layoutParams;
            LayoutParams layoutParams3 = new LayoutParams(layoutParams2);
            layoutParams3.f5600d = 1;
            layoutParams3.f5601e = 0.0f;
            layoutParams3.f5602i = 1.0f;
            layoutParams3.f5603v = -1;
            layoutParams3.f5604w = -1.0f;
            layoutParams3.f5605x = -1;
            layoutParams3.f5606y = -1;
            layoutParams3.E = 16777215;
            layoutParams3.F = 16777215;
            layoutParams3.f5600d = layoutParams2.f5600d;
            layoutParams3.f5601e = layoutParams2.f5601e;
            layoutParams3.f5602i = layoutParams2.f5602i;
            layoutParams3.f5603v = layoutParams2.f5603v;
            layoutParams3.f5604w = layoutParams2.f5604w;
            layoutParams3.f5605x = layoutParams2.f5605x;
            layoutParams3.f5606y = layoutParams2.f5606y;
            layoutParams3.E = layoutParams2.E;
            layoutParams3.F = layoutParams2.F;
            layoutParams3.G = layoutParams2.G;
            return layoutParams3;
        }
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            LayoutParams layoutParams4 = new LayoutParams((ViewGroup.MarginLayoutParams) layoutParams);
            layoutParams4.f5600d = 1;
            layoutParams4.f5601e = 0.0f;
            layoutParams4.f5602i = 1.0f;
            layoutParams4.f5603v = -1;
            layoutParams4.f5604w = -1.0f;
            layoutParams4.f5605x = -1;
            layoutParams4.f5606y = -1;
            layoutParams4.E = 16777215;
            layoutParams4.F = 16777215;
            return layoutParams4;
        }
        LayoutParams layoutParams5 = new LayoutParams(layoutParams);
        layoutParams5.f5600d = 1;
        layoutParams5.f5601e = 0.0f;
        layoutParams5.f5602i = 1.0f;
        layoutParams5.f5603v = -1;
        layoutParams5.f5604w = -1.0f;
        layoutParams5.f5605x = -1;
        layoutParams5.f5606y = -1;
        layoutParams5.E = 16777215;
        layoutParams5.F = 16777215;
        return layoutParams5;
    }
}
