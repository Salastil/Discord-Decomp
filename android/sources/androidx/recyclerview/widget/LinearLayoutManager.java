package androidx.recyclerview.widget;

import android.annotation.SuppressLint;
import android.content.Context;
import android.graphics.PointF;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import androidx.annotation.NonNull;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.recyclerview.widget.RecyclerView;
import java.util.List;

/* loaded from: classes.dex */
public class LinearLayoutManager extends RecyclerView.LayoutManager implements i0, i1 {
    static final boolean DEBUG = false;
    public static final int HORIZONTAL = 0;
    public static final int INVALID_OFFSET = Integer.MIN_VALUE;
    private static final float MAX_SCROLL_FACTOR = 0.33333334f;
    private static final String TAG = "LinearLayoutManager";
    public static final int VERTICAL = 1;
    final AnchorInfo mAnchorInfo;
    private int mInitialPrefetchItemCount;
    private boolean mLastStackFromEnd;
    private final LayoutChunkResult mLayoutChunkResult;
    private LayoutState mLayoutState;
    int mOrientation;
    OrientationHelper mOrientationHelper;
    SavedState mPendingSavedState;
    int mPendingScrollPosition;
    int mPendingScrollPositionOffset;
    private boolean mRecycleChildrenOnDetach;
    private int[] mReusableIntPair;
    private boolean mReverseLayout;
    boolean mShouldReverseLayout;
    private boolean mSmoothScrollbarEnabled;
    private boolean mStackFromEnd;

    public static class AnchorInfo {
        public OrientationHelper a;

        /* renamed from: b, reason: collision with root package name */
        public int f2281b;

        /* renamed from: c, reason: collision with root package name */
        public int f2282c;

        /* renamed from: d, reason: collision with root package name */
        public boolean f2283d;

        /* renamed from: e, reason: collision with root package name */
        public boolean f2284e;

        public AnchorInfo() {
            d();
        }

        public final void a() {
            this.f2282c = this.f2283d ? this.a.g() : this.a.k();
        }

        public final void b(int i5, View view) {
            if (this.f2283d) {
                this.f2282c = this.a.m() + this.a.b(view);
            } else {
                this.f2282c = this.a.e(view);
            }
            this.f2281b = i5;
        }

        public final void c(int i5, View view) {
            int m5 = this.a.m();
            if (m5 >= 0) {
                b(i5, view);
                return;
            }
            this.f2281b = i5;
            if (!this.f2283d) {
                int e9 = this.a.e(view);
                int k = e9 - this.a.k();
                this.f2282c = e9;
                if (k > 0) {
                    int g6 = (this.a.g() - Math.min(0, (this.a.g() - m5) - this.a.b(view))) - (this.a.c(view) + e9);
                    if (g6 < 0) {
                        this.f2282c -= Math.min(k, -g6);
                        return;
                    }
                    return;
                }
                return;
            }
            int g10 = (this.a.g() - m5) - this.a.b(view);
            this.f2282c = this.a.g() - g10;
            if (g10 > 0) {
                int c6 = this.f2282c - this.a.c(view);
                int k5 = this.a.k();
                int min = c6 - (Math.min(this.a.e(view) - k5, 0) + k5);
                if (min < 0) {
                    this.f2282c = Math.min(g10, -min) + this.f2282c;
                }
            }
        }

        public final void d() {
            this.f2281b = -1;
            this.f2282c = Integer.MIN_VALUE;
            this.f2283d = false;
            this.f2284e = false;
        }

        public final String toString() {
            return "AnchorInfo{mPosition=" + this.f2281b + ", mCoordinate=" + this.f2282c + ", mLayoutFromEnd=" + this.f2283d + ", mValid=" + this.f2284e + '}';
        }
    }

    public static class LayoutChunkResult {
        public int a;

        /* renamed from: b, reason: collision with root package name */
        public boolean f2285b;

        /* renamed from: c, reason: collision with root package name */
        public boolean f2286c;

        /* renamed from: d, reason: collision with root package name */
        public boolean f2287d;
    }

    public static class LayoutState {
        public boolean a;

        /* renamed from: b, reason: collision with root package name */
        public int f2288b;

        /* renamed from: c, reason: collision with root package name */
        public int f2289c;

        /* renamed from: d, reason: collision with root package name */
        public int f2290d;

        /* renamed from: e, reason: collision with root package name */
        public int f2291e;

        /* renamed from: f, reason: collision with root package name */
        public int f2292f;

        /* renamed from: g, reason: collision with root package name */
        public int f2293g;

        /* renamed from: h, reason: collision with root package name */
        public int f2294h;

        /* renamed from: i, reason: collision with root package name */
        public int f2295i;
        public int j;
        public List k;

        /* renamed from: l, reason: collision with root package name */
        public boolean f2296l;

        public final void a(View view) {
            int layoutPosition;
            int size = this.k.size();
            View view2 = null;
            int i5 = Integer.MAX_VALUE;
            for (int i6 = 0; i6 < size; i6++) {
                View view3 = ((RecyclerView.ViewHolder) this.k.get(i6)).itemView;
                RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) view3.getLayoutParams();
                if (view3 != view && !layoutParams.f2308d.isRemoved() && (layoutPosition = (layoutParams.f2308d.getLayoutPosition() - this.f2290d) * this.f2291e) >= 0 && layoutPosition < i5) {
                    view2 = view3;
                    if (layoutPosition == 0) {
                        break;
                    } else {
                        i5 = layoutPosition;
                    }
                }
            }
            if (view2 == null) {
                this.f2290d = -1;
            } else {
                this.f2290d = ((RecyclerView.LayoutParams) view2.getLayoutParams()).f2308d.getLayoutPosition();
            }
        }

        public final View b(RecyclerView.Recycler recycler) {
            List list = this.k;
            if (list == null) {
                View e9 = recycler.e(this.f2290d);
                this.f2290d += this.f2291e;
                return e9;
            }
            int size = list.size();
            for (int i5 = 0; i5 < size; i5++) {
                View view = ((RecyclerView.ViewHolder) this.k.get(i5)).itemView;
                RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) view.getLayoutParams();
                if (!layoutParams.f2308d.isRemoved() && this.f2290d == layoutParams.f2308d.getLayoutPosition()) {
                    a(view);
                    return view;
                }
            }
            return null;
        }
    }

    public static class SavedState implements Parcelable {
        public static final Parcelable.Creator<SavedState> CREATOR = new l0();

        /* renamed from: d, reason: collision with root package name */
        public int f2297d;

        /* renamed from: e, reason: collision with root package name */
        public int f2298e;

        /* renamed from: i, reason: collision with root package name */
        public boolean f2299i;

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i5) {
            parcel.writeInt(this.f2297d);
            parcel.writeInt(this.f2298e);
            parcel.writeInt(this.f2299i ? 1 : 0);
        }
    }

    public LinearLayoutManager() {
        this(1, false);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void assertNotInLayoutOrScroll(String str) {
        if (this.mPendingSavedState == null) {
            super.assertNotInLayoutOrScroll(str);
        }
    }

    public void calculateExtraLayoutSpace(@NonNull RecyclerView.State state, @NonNull int[] iArr) {
        int i5;
        int extraLayoutSpace = getExtraLayoutSpace(state);
        if (this.mLayoutState.f2292f == -1) {
            i5 = 0;
        } else {
            i5 = extraLayoutSpace;
            extraLayoutSpace = 0;
        }
        iArr[0] = extraLayoutSpace;
        iArr[1] = i5;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean canScrollHorizontally() {
        return this.mOrientation == 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean canScrollVertically() {
        return this.mOrientation == 1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void collectAdjacentPrefetchPositions(int i5, int i6, RecyclerView.State state, RecyclerView.LayoutManager.LayoutPrefetchRegistry layoutPrefetchRegistry) {
        if (this.mOrientation != 0) {
            i5 = i6;
        }
        if (getChildCount() == 0 || i5 == 0) {
            return;
        }
        ensureLayoutState();
        o(i5 > 0 ? 1 : -1, Math.abs(i5), true, state);
        collectPrefetchPositionsForLayoutState(state, this.mLayoutState, layoutPrefetchRegistry);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void collectInitialPrefetchPositions(int i5, RecyclerView.LayoutManager.LayoutPrefetchRegistry layoutPrefetchRegistry) {
        boolean z5;
        int i6;
        SavedState savedState = this.mPendingSavedState;
        if (savedState == null || (i6 = savedState.f2297d) < 0) {
            n();
            z5 = this.mShouldReverseLayout;
            i6 = this.mPendingScrollPosition;
            if (i6 == -1) {
                i6 = z5 ? i5 - 1 : 0;
            }
        } else {
            z5 = savedState.f2299i;
        }
        int i10 = z5 ? -1 : 1;
        for (int i11 = 0; i11 < this.mInitialPrefetchItemCount && i6 >= 0 && i6 < i5; i11++) {
            layoutPrefetchRegistry.a(i6, 0);
            i6 += i10;
        }
    }

    public void collectPrefetchPositionsForLayoutState(RecyclerView.State state, LayoutState layoutState, RecyclerView.LayoutManager.LayoutPrefetchRegistry layoutPrefetchRegistry) {
        int i5 = layoutState.f2290d;
        if (i5 < 0 || i5 >= state.b()) {
            return;
        }
        layoutPrefetchRegistry.a(i5, Math.max(0, layoutState.f2293g));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int computeHorizontalScrollExtent(RecyclerView.State state) {
        return d(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int computeHorizontalScrollOffset(RecyclerView.State state) {
        return e(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int computeHorizontalScrollRange(RecyclerView.State state) {
        return f(state);
    }

    @Override // androidx.recyclerview.widget.i1
    @SuppressLint({"UnknownNullness"})
    public PointF computeScrollVectorForPosition(int i5) {
        if (getChildCount() == 0) {
            return null;
        }
        int i6 = (i5 < getPosition(getChildAt(0))) != this.mShouldReverseLayout ? -1 : 1;
        return this.mOrientation == 0 ? new PointF(i6, 0.0f) : new PointF(0.0f, i6);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int computeVerticalScrollExtent(RecyclerView.State state) {
        return d(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int computeVerticalScrollOffset(RecyclerView.State state) {
        return e(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int computeVerticalScrollRange(RecyclerView.State state) {
        return f(state);
    }

    public int convertFocusDirectionToLayoutDirection(int i5) {
        return i5 != 1 ? i5 != 2 ? i5 != 17 ? i5 != 33 ? i5 != 66 ? (i5 == 130 && this.mOrientation == 1) ? 1 : Integer.MIN_VALUE : this.mOrientation == 0 ? 1 : Integer.MIN_VALUE : this.mOrientation == 1 ? -1 : Integer.MIN_VALUE : this.mOrientation == 0 ? -1 : Integer.MIN_VALUE : (this.mOrientation != 1 && isLayoutRTL()) ? -1 : 1 : (this.mOrientation != 1 && isLayoutRTL()) ? 1 : -1;
    }

    public LayoutState createLayoutState() {
        LayoutState layoutState = new LayoutState();
        layoutState.a = true;
        layoutState.f2294h = 0;
        layoutState.f2295i = 0;
        layoutState.k = null;
        return layoutState;
    }

    public final int d(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        ensureLayoutState();
        return k1.a(state, this.mOrientationHelper, findFirstVisibleChildClosestToStart(!this.mSmoothScrollbarEnabled, true), findFirstVisibleChildClosestToEnd(!this.mSmoothScrollbarEnabled, true), this, this.mSmoothScrollbarEnabled);
    }

    public final int e(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        ensureLayoutState();
        return k1.b(state, this.mOrientationHelper, findFirstVisibleChildClosestToStart(!this.mSmoothScrollbarEnabled, true), findFirstVisibleChildClosestToEnd(!this.mSmoothScrollbarEnabled, true), this, this.mSmoothScrollbarEnabled, this.mShouldReverseLayout);
    }

    public void ensureLayoutState() {
        if (this.mLayoutState == null) {
            this.mLayoutState = createLayoutState();
        }
    }

    public final int f(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        ensureLayoutState();
        return k1.c(state, this.mOrientationHelper, findFirstVisibleChildClosestToStart(!this.mSmoothScrollbarEnabled, true), findFirstVisibleChildClosestToEnd(!this.mSmoothScrollbarEnabled, true), this, this.mSmoothScrollbarEnabled);
    }

    public int fill(RecyclerView.Recycler recycler, LayoutState layoutState, RecyclerView.State state, boolean z5) {
        int i5;
        int i6 = layoutState.f2289c;
        int i10 = layoutState.f2293g;
        if (i10 != Integer.MIN_VALUE) {
            if (i6 < 0) {
                layoutState.f2293g = i10 + i6;
            }
            l(recycler, layoutState);
        }
        int i11 = layoutState.f2289c + layoutState.f2294h;
        LayoutChunkResult layoutChunkResult = this.mLayoutChunkResult;
        while (true) {
            if ((!layoutState.f2296l && i11 <= 0) || (i5 = layoutState.f2290d) < 0 || i5 >= state.b()) {
                break;
            }
            layoutChunkResult.a = 0;
            layoutChunkResult.f2285b = false;
            layoutChunkResult.f2286c = false;
            layoutChunkResult.f2287d = false;
            layoutChunk(recycler, state, layoutState, layoutChunkResult);
            if (!layoutChunkResult.f2285b) {
                int i12 = layoutState.f2288b;
                int i13 = layoutChunkResult.a;
                layoutState.f2288b = (layoutState.f2292f * i13) + i12;
                if (!layoutChunkResult.f2286c || layoutState.k != null || !state.f2332g) {
                    layoutState.f2289c -= i13;
                    i11 -= i13;
                }
                int i14 = layoutState.f2293g;
                if (i14 != Integer.MIN_VALUE) {
                    int i15 = i14 + i13;
                    layoutState.f2293g = i15;
                    int i16 = layoutState.f2289c;
                    if (i16 < 0) {
                        layoutState.f2293g = i15 + i16;
                    }
                    l(recycler, layoutState);
                }
                if (z5 && layoutChunkResult.f2287d) {
                    break;
                }
            } else {
                break;
            }
        }
        return i6 - layoutState.f2289c;
    }

    public int findFirstCompletelyVisibleItemPosition() {
        View findOneVisibleChild = findOneVisibleChild(0, getChildCount(), true, false);
        if (findOneVisibleChild == null) {
            return -1;
        }
        return getPosition(findOneVisibleChild);
    }

    public View findFirstVisibleChildClosestToEnd(boolean z5, boolean z6) {
        return this.mShouldReverseLayout ? findOneVisibleChild(0, getChildCount(), z5, z6) : findOneVisibleChild(getChildCount() - 1, -1, z5, z6);
    }

    public View findFirstVisibleChildClosestToStart(boolean z5, boolean z6) {
        return this.mShouldReverseLayout ? findOneVisibleChild(getChildCount() - 1, -1, z5, z6) : findOneVisibleChild(0, getChildCount(), z5, z6);
    }

    public int findFirstVisibleItemPosition() {
        View findOneVisibleChild = findOneVisibleChild(0, getChildCount(), false, true);
        if (findOneVisibleChild == null) {
            return -1;
        }
        return getPosition(findOneVisibleChild);
    }

    public int findLastCompletelyVisibleItemPosition() {
        View findOneVisibleChild = findOneVisibleChild(getChildCount() - 1, -1, true, false);
        if (findOneVisibleChild == null) {
            return -1;
        }
        return getPosition(findOneVisibleChild);
    }

    public int findLastVisibleItemPosition() {
        View findOneVisibleChild = findOneVisibleChild(getChildCount() - 1, -1, false, true);
        if (findOneVisibleChild == null) {
            return -1;
        }
        return getPosition(findOneVisibleChild);
    }

    public View findOnePartiallyOrCompletelyInvisibleChild(int i5, int i6) {
        int i10;
        int i11;
        ensureLayoutState();
        if (i6 <= i5 && i6 >= i5) {
            return getChildAt(i5);
        }
        if (this.mOrientationHelper.e(getChildAt(i5)) < this.mOrientationHelper.k()) {
            i10 = 16644;
            i11 = 16388;
        } else {
            i10 = 4161;
            i11 = 4097;
        }
        return this.mOrientation == 0 ? this.mHorizontalBoundCheck.a(i5, i6, i10, i11) : this.mVerticalBoundCheck.a(i5, i6, i10, i11);
    }

    public View findOneVisibleChild(int i5, int i6, boolean z5, boolean z6) {
        ensureLayoutState();
        int i10 = z5 ? 24579 : 320;
        int i11 = z6 ? 320 : 0;
        return this.mOrientation == 0 ? this.mHorizontalBoundCheck.a(i5, i6, i10, i11) : this.mVerticalBoundCheck.a(i5, i6, i10, i11);
    }

    public View findReferenceChild(RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5, boolean z6) {
        int i5;
        int i6;
        int i10;
        ensureLayoutState();
        int childCount = getChildCount();
        if (z6) {
            i6 = getChildCount() - 1;
            i5 = -1;
            i10 = -1;
        } else {
            i5 = childCount;
            i6 = 0;
            i10 = 1;
        }
        int b10 = state.b();
        int k = this.mOrientationHelper.k();
        int g6 = this.mOrientationHelper.g();
        View view = null;
        View view2 = null;
        View view3 = null;
        while (i6 != i5) {
            View childAt = getChildAt(i6);
            int position = getPosition(childAt);
            int e9 = this.mOrientationHelper.e(childAt);
            int b11 = this.mOrientationHelper.b(childAt);
            if (position >= 0 && position < b10) {
                if (!((RecyclerView.LayoutParams) childAt.getLayoutParams()).f2308d.isRemoved()) {
                    boolean z7 = b11 <= k && e9 < k;
                    boolean z8 = e9 >= g6 && b11 > g6;
                    if (!z7 && !z8) {
                        return childAt;
                    }
                    if (z5) {
                        if (!z8) {
                            if (view != null) {
                            }
                            view = childAt;
                        }
                        view2 = childAt;
                    } else {
                        if (!z7) {
                            if (view != null) {
                            }
                            view = childAt;
                        }
                        view2 = childAt;
                    }
                } else if (view3 == null) {
                    view3 = childAt;
                }
            }
            i6 += i10;
        }
        return view != null ? view : view2 != null ? view2 : view3;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public View findViewByPosition(int i5) {
        int childCount = getChildCount();
        if (childCount == 0) {
            return null;
        }
        int position = i5 - getPosition(getChildAt(0));
        if (position >= 0 && position < childCount) {
            View childAt = getChildAt(position);
            if (getPosition(childAt) == i5) {
                return childAt;
            }
        }
        return super.findViewByPosition(i5);
    }

    public final int g(int i5, RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        int g6;
        int g10 = this.mOrientationHelper.g() - i5;
        if (g10 <= 0) {
            return 0;
        }
        int i6 = -scrollBy(-g10, recycler, state);
        int i10 = i5 + i6;
        if (!z5 || (g6 = this.mOrientationHelper.g() - i10) <= 0) {
            return i6;
        }
        this.mOrientationHelper.p(g6);
        return g6 + i6;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public RecyclerView.LayoutParams generateDefaultLayoutParams() {
        return new RecyclerView.LayoutParams(-2, -2);
    }

    @Deprecated
    public int getExtraLayoutSpace(RecyclerView.State state) {
        if (state.a != -1) {
            return this.mOrientationHelper.l();
        }
        return 0;
    }

    public int getInitialPrefetchItemCount() {
        return this.mInitialPrefetchItemCount;
    }

    public int getOrientation() {
        return this.mOrientation;
    }

    public boolean getRecycleChildrenOnDetach() {
        return this.mRecycleChildrenOnDetach;
    }

    public boolean getReverseLayout() {
        return this.mReverseLayout;
    }

    public boolean getStackFromEnd() {
        return this.mStackFromEnd;
    }

    public final int h(int i5, RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        int k;
        int k5 = i5 - this.mOrientationHelper.k();
        if (k5 <= 0) {
            return 0;
        }
        int i6 = -scrollBy(k5, recycler, state);
        int i10 = i5 + i6;
        if (!z5 || (k = i10 - this.mOrientationHelper.k()) <= 0) {
            return i6;
        }
        this.mOrientationHelper.p(-k);
        return i6 - k;
    }

    public final View i() {
        return getChildAt(this.mShouldReverseLayout ? 0 : getChildCount() - 1);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean isAutoMeasureEnabled() {
        return true;
    }

    public boolean isLayoutRTL() {
        return getLayoutDirection() == 1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean isLayoutReversed() {
        return this.mReverseLayout;
    }

    public boolean isSmoothScrollbarEnabled() {
        return this.mSmoothScrollbarEnabled;
    }

    public final View j() {
        return getChildAt(this.mShouldReverseLayout ? getChildCount() - 1 : 0);
    }

    public final void k() {
        Log.d(TAG, "internal representation of views on the screen");
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            Log.d(TAG, "item " + getPosition(childAt) + ", coord:" + this.mOrientationHelper.e(childAt));
        }
        Log.d(TAG, "==============");
    }

    public final void l(RecyclerView.Recycler recycler, LayoutState layoutState) {
        if (!layoutState.a || layoutState.f2296l) {
            return;
        }
        int i5 = layoutState.f2293g;
        int i6 = layoutState.f2295i;
        if (layoutState.f2292f == -1) {
            int childCount = getChildCount();
            if (i5 < 0) {
                return;
            }
            int f2 = (this.mOrientationHelper.f() - i5) + i6;
            if (this.mShouldReverseLayout) {
                for (int i10 = 0; i10 < childCount; i10++) {
                    View childAt = getChildAt(i10);
                    if (this.mOrientationHelper.e(childAt) < f2 || this.mOrientationHelper.o(childAt) < f2) {
                        m(recycler, 0, i10);
                        return;
                    }
                }
                return;
            }
            int i11 = childCount - 1;
            for (int i12 = i11; i12 >= 0; i12--) {
                View childAt2 = getChildAt(i12);
                if (this.mOrientationHelper.e(childAt2) < f2 || this.mOrientationHelper.o(childAt2) < f2) {
                    m(recycler, i11, i12);
                    return;
                }
            }
            return;
        }
        if (i5 < 0) {
            return;
        }
        int i13 = i5 - i6;
        int childCount2 = getChildCount();
        if (!this.mShouldReverseLayout) {
            for (int i14 = 0; i14 < childCount2; i14++) {
                View childAt3 = getChildAt(i14);
                if (this.mOrientationHelper.b(childAt3) > i13 || this.mOrientationHelper.n(childAt3) > i13) {
                    m(recycler, 0, i14);
                    return;
                }
            }
            return;
        }
        int i15 = childCount2 - 1;
        for (int i16 = i15; i16 >= 0; i16--) {
            View childAt4 = getChildAt(i16);
            if (this.mOrientationHelper.b(childAt4) > i13 || this.mOrientationHelper.n(childAt4) > i13) {
                m(recycler, i15, i16);
                return;
            }
        }
    }

    public void layoutChunk(RecyclerView.Recycler recycler, RecyclerView.State state, LayoutState layoutState, LayoutChunkResult layoutChunkResult) {
        int i5;
        int i6;
        int i10;
        int i11;
        int paddingLeft;
        int d6;
        int i12;
        int i13;
        View b10 = layoutState.b(recycler);
        if (b10 == null) {
            layoutChunkResult.f2285b = true;
            return;
        }
        RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) b10.getLayoutParams();
        if (layoutState.k == null) {
            if (this.mShouldReverseLayout == (layoutState.f2292f == -1)) {
                addView(b10);
            } else {
                addView(b10, 0);
            }
        } else {
            if (this.mShouldReverseLayout == (layoutState.f2292f == -1)) {
                addDisappearingView(b10);
            } else {
                addDisappearingView(b10, 0);
            }
        }
        measureChildWithMargins(b10, 0, 0);
        layoutChunkResult.a = this.mOrientationHelper.c(b10);
        if (this.mOrientation == 1) {
            if (isLayoutRTL()) {
                d6 = getWidth() - getPaddingRight();
                paddingLeft = d6 - this.mOrientationHelper.d(b10);
            } else {
                paddingLeft = getPaddingLeft();
                d6 = this.mOrientationHelper.d(b10) + paddingLeft;
            }
            if (layoutState.f2292f == -1) {
                i13 = layoutState.f2288b;
                i12 = i13 - layoutChunkResult.a;
            } else {
                i12 = layoutState.f2288b;
                i13 = layoutChunkResult.a + i12;
            }
            int i14 = paddingLeft;
            i11 = i12;
            i10 = i14;
            i6 = i13;
            i5 = d6;
        } else {
            int paddingTop = getPaddingTop();
            int d7 = this.mOrientationHelper.d(b10) + paddingTop;
            if (layoutState.f2292f == -1) {
                int i15 = layoutState.f2288b;
                i10 = i15 - layoutChunkResult.a;
                i5 = i15;
                i6 = d7;
            } else {
                int i16 = layoutState.f2288b;
                i5 = layoutChunkResult.a + i16;
                i6 = d7;
                i10 = i16;
            }
            i11 = paddingTop;
        }
        layoutDecoratedWithMargins(b10, i10, i11, i5, i6);
        if (layoutParams.f2308d.isRemoved() || layoutParams.f2308d.isUpdated()) {
            layoutChunkResult.f2286c = true;
        }
        layoutChunkResult.f2287d = b10.hasFocusable();
    }

    public final void m(RecyclerView.Recycler recycler, int i5, int i6) {
        if (i5 == i6) {
            return;
        }
        if (i6 <= i5) {
            while (i5 > i6) {
                removeAndRecycleViewAt(i5, recycler);
                i5--;
            }
        } else {
            for (int i10 = i6 - 1; i10 >= i5; i10--) {
                removeAndRecycleViewAt(i10, recycler);
            }
        }
    }

    public final void n() {
        if (this.mOrientation == 1 || !isLayoutRTL()) {
            this.mShouldReverseLayout = this.mReverseLayout;
        } else {
            this.mShouldReverseLayout = !this.mReverseLayout;
        }
    }

    public final void o(int i5, int i6, boolean z5, RecyclerView.State state) {
        int k;
        this.mLayoutState.f2296l = resolveIsInfinite();
        this.mLayoutState.f2292f = i5;
        int[] iArr = this.mReusableIntPair;
        iArr[0] = 0;
        iArr[1] = 0;
        calculateExtraLayoutSpace(state, iArr);
        int max = Math.max(0, this.mReusableIntPair[0]);
        int max2 = Math.max(0, this.mReusableIntPair[1]);
        boolean z6 = i5 == 1;
        LayoutState layoutState = this.mLayoutState;
        int i10 = z6 ? max2 : max;
        layoutState.f2294h = i10;
        if (!z6) {
            max = max2;
        }
        layoutState.f2295i = max;
        if (z6) {
            layoutState.f2294h = this.mOrientationHelper.h() + i10;
            View i11 = i();
            LayoutState layoutState2 = this.mLayoutState;
            layoutState2.f2291e = this.mShouldReverseLayout ? -1 : 1;
            int position = getPosition(i11);
            LayoutState layoutState3 = this.mLayoutState;
            layoutState2.f2290d = position + layoutState3.f2291e;
            layoutState3.f2288b = this.mOrientationHelper.b(i11);
            k = this.mOrientationHelper.b(i11) - this.mOrientationHelper.g();
        } else {
            View j = j();
            LayoutState layoutState4 = this.mLayoutState;
            layoutState4.f2294h = this.mOrientationHelper.k() + layoutState4.f2294h;
            LayoutState layoutState5 = this.mLayoutState;
            layoutState5.f2291e = this.mShouldReverseLayout ? 1 : -1;
            int position2 = getPosition(j);
            LayoutState layoutState6 = this.mLayoutState;
            layoutState5.f2290d = position2 + layoutState6.f2291e;
            layoutState6.f2288b = this.mOrientationHelper.e(j);
            k = (-this.mOrientationHelper.e(j)) + this.mOrientationHelper.k();
        }
        LayoutState layoutState7 = this.mLayoutState;
        layoutState7.f2289c = i6;
        if (z5) {
            layoutState7.f2289c = i6 - k;
        }
        layoutState7.f2293g = k;
    }

    public void onAnchorReady(RecyclerView.Recycler recycler, RecyclerView.State state, AnchorInfo anchorInfo, int i5) {
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void onDetachedFromWindow(RecyclerView recyclerView, RecyclerView.Recycler recycler) {
        super.onDetachedFromWindow(recyclerView, recycler);
        if (this.mRecycleChildrenOnDetach) {
            removeAndRecycleAllViews(recycler);
            recycler.b();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public View onFocusSearchFailed(View view, int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        int convertFocusDirectionToLayoutDirection;
        n();
        if (getChildCount() != 0 && (convertFocusDirectionToLayoutDirection = convertFocusDirectionToLayoutDirection(i5)) != Integer.MIN_VALUE) {
            ensureLayoutState();
            o(convertFocusDirectionToLayoutDirection, (int) (this.mOrientationHelper.l() * MAX_SCROLL_FACTOR), false, state);
            LayoutState layoutState = this.mLayoutState;
            layoutState.f2293g = Integer.MIN_VALUE;
            layoutState.a = false;
            fill(recycler, layoutState, state, true);
            View findOnePartiallyOrCompletelyInvisibleChild = convertFocusDirectionToLayoutDirection == -1 ? this.mShouldReverseLayout ? findOnePartiallyOrCompletelyInvisibleChild(getChildCount() - 1, -1) : findOnePartiallyOrCompletelyInvisibleChild(0, getChildCount()) : this.mShouldReverseLayout ? findOnePartiallyOrCompletelyInvisibleChild(0, getChildCount()) : findOnePartiallyOrCompletelyInvisibleChild(getChildCount() - 1, -1);
            View j = convertFocusDirectionToLayoutDirection == -1 ? j() : i();
            if (!j.hasFocusable()) {
                return findOnePartiallyOrCompletelyInvisibleChild;
            }
            if (findOnePartiallyOrCompletelyInvisibleChild != null) {
                return j;
            }
        }
        return null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        if (getChildCount() > 0) {
            accessibilityEvent.setFromIndex(findFirstVisibleItemPosition());
            accessibilityEvent.setToIndex(findLastVisibleItemPosition());
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onInitializeAccessibilityNodeInfo(@NonNull RecyclerView.Recycler recycler, @NonNull RecyclerView.State state, @NonNull AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(recycler, state, accessibilityNodeInfoCompat);
        RecyclerView.Adapter adapter = this.mRecyclerView.mAdapter;
        if (adapter == null || adapter.getItemCount() <= 0) {
            return;
        }
        accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1560n);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void onLayoutChildren(RecyclerView.Recycler recycler, RecyclerView.State state) {
        View findReferenceChild;
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int g6;
        int i13;
        View findViewByPosition;
        int e9;
        int i14;
        int i15;
        int i16 = -1;
        if (!(this.mPendingSavedState == null && this.mPendingScrollPosition == -1) && state.b() == 0) {
            removeAndRecycleAllViews(recycler);
            return;
        }
        SavedState savedState = this.mPendingSavedState;
        if (savedState != null && (i15 = savedState.f2297d) >= 0) {
            this.mPendingScrollPosition = i15;
        }
        ensureLayoutState();
        this.mLayoutState.a = false;
        n();
        View focusedChild = getFocusedChild();
        AnchorInfo anchorInfo = this.mAnchorInfo;
        if (!anchorInfo.f2284e || this.mPendingScrollPosition != -1 || this.mPendingSavedState != null) {
            anchorInfo.d();
            AnchorInfo anchorInfo2 = this.mAnchorInfo;
            anchorInfo2.f2283d = this.mShouldReverseLayout ^ this.mStackFromEnd;
            if (!state.f2332g && (i5 = this.mPendingScrollPosition) != -1) {
                if (i5 < 0 || i5 >= state.b()) {
                    this.mPendingScrollPosition = -1;
                    this.mPendingScrollPositionOffset = Integer.MIN_VALUE;
                } else {
                    int i17 = this.mPendingScrollPosition;
                    anchorInfo2.f2281b = i17;
                    SavedState savedState2 = this.mPendingSavedState;
                    if (savedState2 != null && savedState2.f2297d >= 0) {
                        boolean z5 = savedState2.f2299i;
                        anchorInfo2.f2283d = z5;
                        if (z5) {
                            anchorInfo2.f2282c = this.mOrientationHelper.g() - this.mPendingSavedState.f2298e;
                        } else {
                            anchorInfo2.f2282c = this.mOrientationHelper.k() + this.mPendingSavedState.f2298e;
                        }
                    } else if (this.mPendingScrollPositionOffset == Integer.MIN_VALUE) {
                        View findViewByPosition2 = findViewByPosition(i17);
                        if (findViewByPosition2 == null) {
                            if (getChildCount() > 0) {
                                anchorInfo2.f2283d = (this.mPendingScrollPosition < getPosition(getChildAt(0))) == this.mShouldReverseLayout;
                            }
                            anchorInfo2.a();
                        } else if (this.mOrientationHelper.c(findViewByPosition2) > this.mOrientationHelper.l()) {
                            anchorInfo2.a();
                        } else if (this.mOrientationHelper.e(findViewByPosition2) - this.mOrientationHelper.k() < 0) {
                            anchorInfo2.f2282c = this.mOrientationHelper.k();
                            anchorInfo2.f2283d = false;
                        } else if (this.mOrientationHelper.g() - this.mOrientationHelper.b(findViewByPosition2) < 0) {
                            anchorInfo2.f2282c = this.mOrientationHelper.g();
                            anchorInfo2.f2283d = true;
                        } else {
                            anchorInfo2.f2282c = anchorInfo2.f2283d ? this.mOrientationHelper.m() + this.mOrientationHelper.b(findViewByPosition2) : this.mOrientationHelper.e(findViewByPosition2);
                        }
                    } else {
                        boolean z6 = this.mShouldReverseLayout;
                        anchorInfo2.f2283d = z6;
                        if (z6) {
                            anchorInfo2.f2282c = this.mOrientationHelper.g() - this.mPendingScrollPositionOffset;
                        } else {
                            anchorInfo2.f2282c = this.mOrientationHelper.k() + this.mPendingScrollPositionOffset;
                        }
                    }
                    this.mAnchorInfo.f2284e = true;
                }
            }
            if (getChildCount() != 0) {
                View focusedChild2 = getFocusedChild();
                if (focusedChild2 != null) {
                    RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) focusedChild2.getLayoutParams();
                    if (!layoutParams.f2308d.isRemoved() && layoutParams.f2308d.getLayoutPosition() >= 0 && layoutParams.f2308d.getLayoutPosition() < state.b()) {
                        anchorInfo2.c(getPosition(focusedChild2), focusedChild2);
                        this.mAnchorInfo.f2284e = true;
                    }
                }
                boolean z7 = this.mLastStackFromEnd;
                boolean z8 = this.mStackFromEnd;
                if (z7 == z8 && (findReferenceChild = findReferenceChild(recycler, state, anchorInfo2.f2283d, z8)) != null) {
                    anchorInfo2.b(getPosition(findReferenceChild), findReferenceChild);
                    if (!state.f2332g && supportsPredictiveItemAnimations()) {
                        int e10 = this.mOrientationHelper.e(findReferenceChild);
                        int b10 = this.mOrientationHelper.b(findReferenceChild);
                        int k = this.mOrientationHelper.k();
                        int g10 = this.mOrientationHelper.g();
                        boolean z10 = b10 <= k && e10 < k;
                        boolean z11 = e10 >= g10 && b10 > g10;
                        if (z10 || z11) {
                            if (anchorInfo2.f2283d) {
                                k = g10;
                            }
                            anchorInfo2.f2282c = k;
                        }
                    }
                    this.mAnchorInfo.f2284e = true;
                }
            }
            anchorInfo2.a();
            anchorInfo2.f2281b = this.mStackFromEnd ? state.b() - 1 : 0;
            this.mAnchorInfo.f2284e = true;
        } else if (focusedChild != null && (this.mOrientationHelper.e(focusedChild) >= this.mOrientationHelper.g() || this.mOrientationHelper.b(focusedChild) <= this.mOrientationHelper.k())) {
            this.mAnchorInfo.c(getPosition(focusedChild), focusedChild);
        }
        LayoutState layoutState = this.mLayoutState;
        layoutState.f2292f = layoutState.j >= 0 ? 1 : -1;
        int[] iArr = this.mReusableIntPair;
        iArr[0] = 0;
        iArr[1] = 0;
        calculateExtraLayoutSpace(state, iArr);
        int k5 = this.mOrientationHelper.k() + Math.max(0, this.mReusableIntPair[0]);
        int h6 = this.mOrientationHelper.h() + Math.max(0, this.mReusableIntPair[1]);
        if (state.f2332g && (i13 = this.mPendingScrollPosition) != -1 && this.mPendingScrollPositionOffset != Integer.MIN_VALUE && (findViewByPosition = findViewByPosition(i13)) != null) {
            if (this.mShouldReverseLayout) {
                i14 = this.mOrientationHelper.g() - this.mOrientationHelper.b(findViewByPosition);
                e9 = this.mPendingScrollPositionOffset;
            } else {
                e9 = this.mOrientationHelper.e(findViewByPosition) - this.mOrientationHelper.k();
                i14 = this.mPendingScrollPositionOffset;
            }
            int i18 = i14 - e9;
            if (i18 > 0) {
                k5 += i18;
            } else {
                h6 -= i18;
            }
        }
        AnchorInfo anchorInfo3 = this.mAnchorInfo;
        if (!anchorInfo3.f2283d ? !this.mShouldReverseLayout : this.mShouldReverseLayout) {
            i16 = 1;
        }
        onAnchorReady(recycler, state, anchorInfo3, i16);
        detachAndScrapAttachedViews(recycler);
        this.mLayoutState.f2296l = resolveIsInfinite();
        this.mLayoutState.getClass();
        this.mLayoutState.f2295i = 0;
        AnchorInfo anchorInfo4 = this.mAnchorInfo;
        if (anchorInfo4.f2283d) {
            q(anchorInfo4.f2281b, anchorInfo4.f2282c);
            LayoutState layoutState2 = this.mLayoutState;
            layoutState2.f2294h = k5;
            fill(recycler, layoutState2, state, false);
            LayoutState layoutState3 = this.mLayoutState;
            i10 = layoutState3.f2288b;
            int i19 = layoutState3.f2290d;
            int i20 = layoutState3.f2289c;
            if (i20 > 0) {
                h6 += i20;
            }
            AnchorInfo anchorInfo5 = this.mAnchorInfo;
            p(anchorInfo5.f2281b, anchorInfo5.f2282c);
            LayoutState layoutState4 = this.mLayoutState;
            layoutState4.f2294h = h6;
            layoutState4.f2290d += layoutState4.f2291e;
            fill(recycler, layoutState4, state, false);
            LayoutState layoutState5 = this.mLayoutState;
            i6 = layoutState5.f2288b;
            int i21 = layoutState5.f2289c;
            if (i21 > 0) {
                q(i19, i10);
                LayoutState layoutState6 = this.mLayoutState;
                layoutState6.f2294h = i21;
                fill(recycler, layoutState6, state, false);
                i10 = this.mLayoutState.f2288b;
            }
        } else {
            p(anchorInfo4.f2281b, anchorInfo4.f2282c);
            LayoutState layoutState7 = this.mLayoutState;
            layoutState7.f2294h = h6;
            fill(recycler, layoutState7, state, false);
            LayoutState layoutState8 = this.mLayoutState;
            i6 = layoutState8.f2288b;
            int i22 = layoutState8.f2290d;
            int i23 = layoutState8.f2289c;
            if (i23 > 0) {
                k5 += i23;
            }
            AnchorInfo anchorInfo6 = this.mAnchorInfo;
            q(anchorInfo6.f2281b, anchorInfo6.f2282c);
            LayoutState layoutState9 = this.mLayoutState;
            layoutState9.f2294h = k5;
            layoutState9.f2290d += layoutState9.f2291e;
            fill(recycler, layoutState9, state, false);
            LayoutState layoutState10 = this.mLayoutState;
            int i24 = layoutState10.f2288b;
            int i25 = layoutState10.f2289c;
            if (i25 > 0) {
                p(i22, i6);
                LayoutState layoutState11 = this.mLayoutState;
                layoutState11.f2294h = i25;
                fill(recycler, layoutState11, state, false);
                i6 = this.mLayoutState.f2288b;
            }
            i10 = i24;
        }
        if (getChildCount() > 0) {
            if (this.mShouldReverseLayout ^ this.mStackFromEnd) {
                int g11 = g(i6, recycler, state, true);
                i11 = i10 + g11;
                i12 = i6 + g11;
                g6 = h(i11, recycler, state, false);
            } else {
                int h7 = h(i10, recycler, state, true);
                i11 = i10 + h7;
                i12 = i6 + h7;
                g6 = g(i12, recycler, state, false);
            }
            i10 = i11 + g6;
            i6 = i12 + g6;
        }
        if (state.k && getChildCount() != 0 && !state.f2332g && supportsPredictiveItemAnimations()) {
            List list = recycler.f2314d;
            int size = list.size();
            int position = getPosition(getChildAt(0));
            int i26 = 0;
            int i27 = 0;
            for (int i28 = 0; i28 < size; i28++) {
                RecyclerView.ViewHolder viewHolder = (RecyclerView.ViewHolder) list.get(i28);
                if (!viewHolder.isRemoved()) {
                    if ((viewHolder.getLayoutPosition() < position) != this.mShouldReverseLayout) {
                        i26 += this.mOrientationHelper.c(viewHolder.itemView);
                    } else {
                        i27 += this.mOrientationHelper.c(viewHolder.itemView);
                    }
                }
            }
            this.mLayoutState.k = list;
            if (i26 > 0) {
                q(getPosition(j()), i10);
                LayoutState layoutState12 = this.mLayoutState;
                layoutState12.f2294h = i26;
                layoutState12.f2289c = 0;
                layoutState12.a(null);
                fill(recycler, this.mLayoutState, state, false);
            }
            if (i27 > 0) {
                p(getPosition(i()), i6);
                LayoutState layoutState13 = this.mLayoutState;
                layoutState13.f2294h = i27;
                layoutState13.f2289c = 0;
                layoutState13.a(null);
                fill(recycler, this.mLayoutState, state, false);
            }
            this.mLayoutState.k = null;
        }
        if (state.f2332g) {
            this.mAnchorInfo.d();
        } else {
            OrientationHelper orientationHelper = this.mOrientationHelper;
            orientationHelper.f2300b = orientationHelper.l();
        }
        this.mLastStackFromEnd = this.mStackFromEnd;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void onLayoutCompleted(RecyclerView.State state) {
        super.onLayoutCompleted(state);
        this.mPendingSavedState = null;
        this.mPendingScrollPosition = -1;
        this.mPendingScrollPositionOffset = Integer.MIN_VALUE;
        this.mAnchorInfo.d();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void onRestoreInstanceState(Parcelable parcelable) {
        if (parcelable instanceof SavedState) {
            SavedState savedState = (SavedState) parcelable;
            this.mPendingSavedState = savedState;
            if (this.mPendingScrollPosition != -1) {
                savedState.f2297d = -1;
            }
            requestLayout();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public Parcelable onSaveInstanceState() {
        SavedState savedState = this.mPendingSavedState;
        if (savedState != null) {
            SavedState savedState2 = new SavedState();
            savedState2.f2297d = savedState.f2297d;
            savedState2.f2298e = savedState.f2298e;
            savedState2.f2299i = savedState.f2299i;
            return savedState2;
        }
        SavedState savedState3 = new SavedState();
        if (getChildCount() <= 0) {
            savedState3.f2297d = -1;
            return savedState3;
        }
        ensureLayoutState();
        boolean z5 = this.mLastStackFromEnd ^ this.mShouldReverseLayout;
        savedState3.f2299i = z5;
        if (z5) {
            View i5 = i();
            savedState3.f2298e = this.mOrientationHelper.g() - this.mOrientationHelper.b(i5);
            savedState3.f2297d = getPosition(i5);
            return savedState3;
        }
        View j = j();
        savedState3.f2297d = getPosition(j);
        savedState3.f2298e = this.mOrientationHelper.e(j) - this.mOrientationHelper.k();
        return savedState3;
    }

    public final void p(int i5, int i6) {
        this.mLayoutState.f2289c = this.mOrientationHelper.g() - i6;
        LayoutState layoutState = this.mLayoutState;
        layoutState.f2291e = this.mShouldReverseLayout ? -1 : 1;
        layoutState.f2290d = i5;
        layoutState.f2292f = 1;
        layoutState.f2288b = i6;
        layoutState.f2293g = Integer.MIN_VALUE;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean performAccessibilityAction(int i5, Bundle bundle) {
        int min;
        if (super.performAccessibilityAction(i5, bundle)) {
            return true;
        }
        if (i5 == 16908343 && bundle != null) {
            if (this.mOrientation == 1) {
                int i6 = bundle.getInt("android.view.accessibility.action.ARGUMENT_ROW_INT", -1);
                if (i6 < 0) {
                    return false;
                }
                RecyclerView recyclerView = this.mRecyclerView;
                min = Math.min(i6, getRowCountForAccessibility(recyclerView.mRecycler, recyclerView.mState) - 1);
            } else {
                int i10 = bundle.getInt("android.view.accessibility.action.ARGUMENT_COLUMN_INT", -1);
                if (i10 < 0) {
                    return false;
                }
                RecyclerView recyclerView2 = this.mRecyclerView;
                min = Math.min(i10, getColumnCountForAccessibility(recyclerView2.mRecycler, recyclerView2.mState) - 1);
            }
            if (min >= 0) {
                scrollToPositionWithOffset(min, 0);
                return true;
            }
        }
        return false;
    }

    @Override // androidx.recyclerview.widget.i0
    public void prepareForDrop(@NonNull View view, @NonNull View view2, int i5, int i6) {
        assertNotInLayoutOrScroll("Cannot drop a view during a scroll or layout calculation");
        ensureLayoutState();
        n();
        int position = getPosition(view);
        int position2 = getPosition(view2);
        char c6 = position < position2 ? (char) 1 : (char) 65535;
        if (this.mShouldReverseLayout) {
            if (c6 == 1) {
                scrollToPositionWithOffset(position2, this.mOrientationHelper.g() - (this.mOrientationHelper.c(view) + this.mOrientationHelper.e(view2)));
                return;
            } else {
                scrollToPositionWithOffset(position2, this.mOrientationHelper.g() - this.mOrientationHelper.b(view2));
                return;
            }
        }
        if (c6 == 65535) {
            scrollToPositionWithOffset(position2, this.mOrientationHelper.e(view2));
        } else {
            scrollToPositionWithOffset(position2, this.mOrientationHelper.b(view2) - this.mOrientationHelper.c(view));
        }
    }

    public final void q(int i5, int i6) {
        this.mLayoutState.f2289c = i6 - this.mOrientationHelper.k();
        LayoutState layoutState = this.mLayoutState;
        layoutState.f2290d = i5;
        layoutState.f2291e = this.mShouldReverseLayout ? 1 : -1;
        layoutState.f2292f = -1;
        layoutState.f2288b = i6;
        layoutState.f2293g = Integer.MIN_VALUE;
    }

    public boolean resolveIsInfinite() {
        return this.mOrientationHelper.i() == 0 && this.mOrientationHelper.f() == 0;
    }

    public int scrollBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (getChildCount() == 0 || i5 == 0) {
            return 0;
        }
        ensureLayoutState();
        this.mLayoutState.a = true;
        int i6 = i5 > 0 ? 1 : -1;
        int abs = Math.abs(i5);
        o(i6, abs, true, state);
        LayoutState layoutState = this.mLayoutState;
        int fill = fill(recycler, layoutState, state, false) + layoutState.f2293g;
        if (fill < 0) {
            return 0;
        }
        if (abs > fill) {
            i5 = i6 * fill;
        }
        this.mOrientationHelper.p(-i5);
        this.mLayoutState.j = i5;
        return i5;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int scrollHorizontallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (this.mOrientation == 1) {
            return 0;
        }
        return scrollBy(i5, recycler, state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void scrollToPosition(int i5) {
        this.mPendingScrollPosition = i5;
        this.mPendingScrollPositionOffset = Integer.MIN_VALUE;
        SavedState savedState = this.mPendingSavedState;
        if (savedState != null) {
            savedState.f2297d = -1;
        }
        requestLayout();
    }

    public void scrollToPositionWithOffset(int i5, int i6) {
        this.mPendingScrollPosition = i5;
        this.mPendingScrollPositionOffset = i6;
        SavedState savedState = this.mPendingSavedState;
        if (savedState != null) {
            savedState.f2297d = -1;
        }
        requestLayout();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public int scrollVerticallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (this.mOrientation == 0) {
            return 0;
        }
        return scrollBy(i5, recycler, state);
    }

    public void setInitialPrefetchItemCount(int i5) {
        this.mInitialPrefetchItemCount = i5;
    }

    public void setOrientation(int i5) {
        if (i5 != 0 && i5 != 1) {
            throw new IllegalArgumentException(k0.d.i(i5, "invalid orientation:"));
        }
        assertNotInLayoutOrScroll(null);
        if (i5 != this.mOrientation || this.mOrientationHelper == null) {
            OrientationHelper a = OrientationHelper.a(this, i5);
            this.mOrientationHelper = a;
            this.mAnchorInfo.a = a;
            this.mOrientation = i5;
            requestLayout();
        }
    }

    public void setRecycleChildrenOnDetach(boolean z5) {
        this.mRecycleChildrenOnDetach = z5;
    }

    public void setReverseLayout(boolean z5) {
        assertNotInLayoutOrScroll(null);
        if (z5 == this.mReverseLayout) {
            return;
        }
        this.mReverseLayout = z5;
        requestLayout();
    }

    public void setSmoothScrollbarEnabled(boolean z5) {
        this.mSmoothScrollbarEnabled = z5;
    }

    public void setStackFromEnd(boolean z5) {
        assertNotInLayoutOrScroll(null);
        if (this.mStackFromEnd == z5) {
            return;
        }
        this.mStackFromEnd = z5;
        requestLayout();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean shouldMeasureTwice() {
        return (getHeightMode() == 1073741824 || getWidthMode() == 1073741824 || !hasFlexibleChildInBothOrientations()) ? false : true;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @SuppressLint({"UnknownNullness"})
    public void smoothScrollToPosition(RecyclerView recyclerView, RecyclerView.State state, int i5) {
        m0 m0Var = new m0(recyclerView.getContext());
        m0Var.setTargetPosition(i5);
        startSmoothScroll(m0Var);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean supportsPredictiveItemAnimations() {
        return this.mPendingSavedState == null && this.mLastStackFromEnd == this.mStackFromEnd;
    }

    public void validateChildOrder() {
        Log.d(TAG, "validating child count " + getChildCount());
        if (getChildCount() < 1) {
            return;
        }
        int position = getPosition(getChildAt(0));
        int e9 = this.mOrientationHelper.e(getChildAt(0));
        if (this.mShouldReverseLayout) {
            for (int i5 = 1; i5 < getChildCount(); i5++) {
                View childAt = getChildAt(i5);
                int position2 = getPosition(childAt);
                int e10 = this.mOrientationHelper.e(childAt);
                if (position2 < position) {
                    k();
                    StringBuilder sb2 = new StringBuilder("detected invalid position. loc invalid? ");
                    sb2.append(e10 < e9);
                    throw new RuntimeException(sb2.toString());
                }
                if (e10 > e9) {
                    k();
                    throw new RuntimeException("detected invalid location");
                }
            }
            return;
        }
        for (int i6 = 1; i6 < getChildCount(); i6++) {
            View childAt2 = getChildAt(i6);
            int position3 = getPosition(childAt2);
            int e11 = this.mOrientationHelper.e(childAt2);
            if (position3 < position) {
                k();
                StringBuilder sb3 = new StringBuilder("detected invalid position. loc invalid? ");
                sb3.append(e11 < e9);
                throw new RuntimeException(sb3.toString());
            }
            if (e11 < e9) {
                k();
                throw new RuntimeException("detected invalid location");
            }
        }
    }

    public LinearLayoutManager(int i5, boolean z5) {
        this.mOrientation = 1;
        this.mReverseLayout = false;
        this.mShouldReverseLayout = false;
        this.mStackFromEnd = false;
        this.mSmoothScrollbarEnabled = true;
        this.mPendingScrollPosition = -1;
        this.mPendingScrollPositionOffset = Integer.MIN_VALUE;
        this.mPendingSavedState = null;
        this.mAnchorInfo = new AnchorInfo();
        this.mLayoutChunkResult = new LayoutChunkResult();
        this.mInitialPrefetchItemCount = 2;
        this.mReusableIntPair = new int[2];
        setOrientation(i5);
        setReverseLayout(z5);
    }

    @SuppressLint({"UnknownNullness"})
    public LinearLayoutManager(Context context, AttributeSet attributeSet, int i5, int i6) {
        this.mOrientation = 1;
        this.mReverseLayout = false;
        this.mShouldReverseLayout = false;
        this.mStackFromEnd = false;
        this.mSmoothScrollbarEnabled = true;
        this.mPendingScrollPosition = -1;
        this.mPendingScrollPositionOffset = Integer.MIN_VALUE;
        this.mPendingSavedState = null;
        this.mAnchorInfo = new AnchorInfo();
        this.mLayoutChunkResult = new LayoutChunkResult();
        this.mInitialPrefetchItemCount = 2;
        this.mReusableIntPair = new int[2];
        RecyclerView.LayoutManager.Properties properties = RecyclerView.LayoutManager.getProperties(context, attributeSet, i5, i6);
        setOrientation(properties.a);
        setReverseLayout(properties.f2306c);
        setStackFromEnd(properties.f2307d);
    }
}
