package androidx.recyclerview.widget;

import android.content.Context;
import android.graphics.Rect;
import android.os.Bundle;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseIntArray;
import android.view.View;
import android.view.ViewGroup;
import android.widget.GridView;
import androidx.annotation.NonNull;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Objects;
import java.util.Set;
import java.util.TreeMap;

/* loaded from: classes.dex */
public class GridLayoutManager extends LinearLayoutManager {
    private static final boolean DEBUG = false;
    public static final int DEFAULT_SPAN_COUNT = -1;
    private static final int INVALID_POSITION = -1;
    private static final String TAG = "GridLayoutManager";
    private static final Set<Integer> sSupportedDirectionsForActionScrollInDirection = Collections.unmodifiableSet(new HashSet(Arrays.asList(17, 66, 33, 130)));
    int[] mCachedBorders;
    int mColumnWithAccessibilityFocus;
    final Rect mDecorInsets;
    boolean mPendingSpanCountChange;
    private int mPositionTargetedByScrollInDirection;
    final SparseIntArray mPreLayoutSpanIndexCache;
    final SparseIntArray mPreLayoutSpanSizeCache;
    int mRowWithAccessibilityFocus;
    View[] mSet;
    int mSpanCount;
    SpanSizeLookup mSpanSizeLookup;
    private boolean mUsingSpansToEstimateScrollBarDimensions;

    public static abstract class SpanSizeLookup {
        final SparseIntArray mSpanIndexCache = new SparseIntArray();
        final SparseIntArray mSpanGroupIndexCache = new SparseIntArray();
        private boolean mCacheSpanIndices = false;
        private boolean mCacheSpanGroupIndices = false;

        public static int findFirstKeyLessThan(SparseIntArray sparseIntArray, int i5) {
            int size = sparseIntArray.size() - 1;
            int i6 = 0;
            while (i6 <= size) {
                int i10 = (i6 + size) >>> 1;
                if (sparseIntArray.keyAt(i10) < i5) {
                    i6 = i10 + 1;
                } else {
                    size = i10 - 1;
                }
            }
            int i11 = i6 - 1;
            if (i11 < 0 || i11 >= sparseIntArray.size()) {
                return -1;
            }
            return sparseIntArray.keyAt(i11);
        }

        public int getCachedSpanGroupIndex(int i5, int i6) {
            if (!this.mCacheSpanGroupIndices) {
                return getSpanGroupIndex(i5, i6);
            }
            int i10 = this.mSpanGroupIndexCache.get(i5, -1);
            if (i10 != -1) {
                return i10;
            }
            int spanGroupIndex = getSpanGroupIndex(i5, i6);
            this.mSpanGroupIndexCache.put(i5, spanGroupIndex);
            return spanGroupIndex;
        }

        public int getCachedSpanIndex(int i5, int i6) {
            if (!this.mCacheSpanIndices) {
                return getSpanIndex(i5, i6);
            }
            int i10 = this.mSpanIndexCache.get(i5, -1);
            if (i10 != -1) {
                return i10;
            }
            int spanIndex = getSpanIndex(i5, i6);
            this.mSpanIndexCache.put(i5, spanIndex);
            return spanIndex;
        }

        public int getSpanGroupIndex(int i5, int i6) {
            int i10;
            int i11;
            int i12;
            int findFirstKeyLessThan;
            if (!this.mCacheSpanGroupIndices || (findFirstKeyLessThan = findFirstKeyLessThan(this.mSpanGroupIndexCache, i5)) == -1) {
                i10 = 0;
                i11 = 0;
                i12 = 0;
            } else {
                i11 = this.mSpanGroupIndexCache.get(findFirstKeyLessThan);
                i12 = findFirstKeyLessThan + 1;
                i10 = getSpanSize(findFirstKeyLessThan) + getCachedSpanIndex(findFirstKeyLessThan, i6);
                if (i10 == i6) {
                    i11++;
                    i10 = 0;
                }
            }
            int spanSize = getSpanSize(i5);
            while (i12 < i5) {
                int spanSize2 = getSpanSize(i12);
                i10 += spanSize2;
                if (i10 == i6) {
                    i11++;
                    i10 = 0;
                } else if (i10 > i6) {
                    i11++;
                    i10 = spanSize2;
                }
                i12++;
            }
            return i10 + spanSize > i6 ? i11 + 1 : i11;
        }

        /* JADX WARN: Removed duplicated region for block: B:12:0x0024  */
        /* JADX WARN: Removed duplicated region for block: B:17:0x0033  */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:14:0x002b -> B:10:0x0030). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:15:0x002d -> B:10:0x0030). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:16:0x002f -> B:10:0x0030). Please report as a decompilation issue!!! */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public int getSpanIndex(int i5, int i6) {
            int i10;
            int i11;
            int spanSize = getSpanSize(i5);
            if (spanSize == i6) {
                return 0;
            }
            if (!this.mCacheSpanIndices || (i10 = findFirstKeyLessThan(this.mSpanIndexCache, i5)) < 0) {
                i10 = 0;
                i11 = 0;
                if (i10 >= i5) {
                    int spanSize2 = getSpanSize(i10);
                    i11 += spanSize2;
                    if (i11 == i6) {
                        i11 = 0;
                    } else if (i11 > i6) {
                        i11 = spanSize2;
                    }
                    i10++;
                    if (i10 >= i5) {
                        if (spanSize + i11 <= i6) {
                            return i11;
                        }
                        return 0;
                    }
                }
            } else {
                i11 = getSpanSize(i10) + this.mSpanIndexCache.get(i10);
                i10++;
                if (i10 >= i5) {
                }
            }
        }

        public abstract int getSpanSize(int i5);

        public void invalidateSpanGroupIndexCache() {
            this.mSpanGroupIndexCache.clear();
        }

        public void invalidateSpanIndexCache() {
            this.mSpanIndexCache.clear();
        }

        public boolean isSpanGroupIndexCacheEnabled() {
            return this.mCacheSpanGroupIndices;
        }

        public boolean isSpanIndexCacheEnabled() {
            return this.mCacheSpanIndices;
        }

        public void setSpanGroupIndexCacheEnabled(boolean z5) {
            if (!z5) {
                this.mSpanGroupIndexCache.clear();
            }
            this.mCacheSpanGroupIndices = z5;
        }

        public void setSpanIndexCacheEnabled(boolean z5) {
            if (!z5) {
                this.mSpanGroupIndexCache.clear();
            }
            this.mCacheSpanIndices = z5;
        }
    }

    public GridLayoutManager(Context context, AttributeSet attributeSet, int i5, int i6) {
        super(context, attributeSet, i5, i6);
        this.mPendingSpanCountChange = false;
        this.mSpanCount = -1;
        this.mPreLayoutSpanSizeCache = new SparseIntArray();
        this.mPreLayoutSpanIndexCache = new SparseIntArray();
        this.mSpanSizeLookup = new e0();
        this.mDecorInsets = new Rect();
        this.mPositionTargetedByScrollInDirection = -1;
        this.mRowWithAccessibilityFocus = -1;
        this.mColumnWithAccessibilityFocus = -1;
        setSpanCount(RecyclerView.LayoutManager.getProperties(context, attributeSet, i5, i6).f2305b);
    }

    public static int[] calculateItemBorders(int[] iArr, int i5, int i6) {
        int i10;
        if (iArr == null || iArr.length != i5 + 1 || iArr[iArr.length - 1] != i6) {
            iArr = new int[i5 + 1];
        }
        int i11 = 0;
        iArr[0] = 0;
        int i12 = i6 / i5;
        int i13 = i6 % i5;
        int i14 = 0;
        for (int i15 = 1; i15 <= i5; i15++) {
            i11 += i13;
            if (i11 <= 0 || i5 - i11 >= i13) {
                i10 = i12;
            } else {
                i10 = i12 + 1;
                i11 -= i5;
            }
            i14 += i10;
            iArr[i15] = i14;
        }
        return iArr;
    }

    public final int A(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (!state.f2332g) {
            return this.mSpanSizeLookup.getSpanSize(i5);
        }
        int i6 = this.mPreLayoutSpanSizeCache.get(i5, -1);
        if (i6 != -1) {
            return i6;
        }
        int c6 = recycler.c(i5);
        if (c6 != -1) {
            return this.mSpanSizeLookup.getSpanSize(c6);
        }
        Log.w(TAG, "Cannot find span size for pre layout position. It is not cached, not in the adapter. Pos:" + i5);
        return 1;
    }

    public final void B(View view, int i5, boolean z5) {
        int i6;
        int i10;
        f0 f0Var = (f0) view.getLayoutParams();
        Rect rect = f0Var.f2309e;
        int i11 = rect.top + rect.bottom + ((ViewGroup.MarginLayoutParams) f0Var).topMargin + ((ViewGroup.MarginLayoutParams) f0Var).bottomMargin;
        int i12 = rect.left + rect.right + ((ViewGroup.MarginLayoutParams) f0Var).leftMargin + ((ViewGroup.MarginLayoutParams) f0Var).rightMargin;
        int spaceForSpanRange = getSpaceForSpanRange(f0Var.f2391w, f0Var.f2392x);
        if (this.mOrientation == 1) {
            i10 = RecyclerView.LayoutManager.getChildMeasureSpec(spaceForSpanRange, i5, i12, ((ViewGroup.MarginLayoutParams) f0Var).width, false);
            i6 = RecyclerView.LayoutManager.getChildMeasureSpec(this.mOrientationHelper.l(), getHeightMode(), i11, ((ViewGroup.MarginLayoutParams) f0Var).height, true);
        } else {
            int childMeasureSpec = RecyclerView.LayoutManager.getChildMeasureSpec(spaceForSpanRange, i5, i11, ((ViewGroup.MarginLayoutParams) f0Var).height, false);
            int childMeasureSpec2 = RecyclerView.LayoutManager.getChildMeasureSpec(this.mOrientationHelper.l(), getWidthMode(), i12, ((ViewGroup.MarginLayoutParams) f0Var).width, true);
            i6 = childMeasureSpec;
            i10 = childMeasureSpec2;
        }
        RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) view.getLayoutParams();
        if (z5 ? shouldReMeasureChild(view, i10, i6, layoutParams) : shouldMeasureChild(view, i10, i6, layoutParams)) {
            view.measure(i10, i6);
        }
    }

    public final void C() {
        int height;
        int paddingTop;
        if (getOrientation() == 1) {
            height = getWidth() - getPaddingRight();
            paddingTop = getPaddingLeft();
        } else {
            height = getHeight() - getPaddingBottom();
            paddingTop = getPaddingTop();
        }
        this.mCachedBorders = calculateItemBorders(this.mCachedBorders, this.mSpanCount, height - paddingTop);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean checkLayoutParams(RecyclerView.LayoutParams layoutParams) {
        return layoutParams instanceof f0;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager
    public void collectPrefetchPositionsForLayoutState(RecyclerView.State state, LinearLayoutManager.LayoutState layoutState, RecyclerView.LayoutManager.LayoutPrefetchRegistry layoutPrefetchRegistry) {
        int i5;
        int i6 = this.mSpanCount;
        for (int i10 = 0; i10 < this.mSpanCount && (i5 = layoutState.f2290d) >= 0 && i5 < state.b() && i6 > 0; i10++) {
            int i11 = layoutState.f2290d;
            layoutPrefetchRegistry.a(i11, Math.max(0, layoutState.f2293g));
            i6 -= this.mSpanSizeLookup.getSpanSize(i11);
            layoutState.f2290d += layoutState.f2291e;
        }
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int computeHorizontalScrollOffset(RecyclerView.State state) {
        return this.mUsingSpansToEstimateScrollBarDimensions ? r(state) : super.computeHorizontalScrollOffset(state);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int computeHorizontalScrollRange(RecyclerView.State state) {
        return this.mUsingSpansToEstimateScrollBarDimensions ? s(state) : super.computeHorizontalScrollRange(state);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int computeVerticalScrollOffset(RecyclerView.State state) {
        return this.mUsingSpansToEstimateScrollBarDimensions ? r(state) : super.computeVerticalScrollOffset(state);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int computeVerticalScrollRange(RecyclerView.State state) {
        return this.mUsingSpansToEstimateScrollBarDimensions ? s(state) : super.computeVerticalScrollRange(state);
    }

    public int findPositionOfFirstItemOnARowBelowForHorizontalGrid(int i5) {
        if (i5 < 0 || this.mOrientation == 1) {
            return -1;
        }
        TreeMap treeMap = new TreeMap();
        for (int i6 = 0; i6 < getItemCount(); i6++) {
            Iterator it = w(i6).iterator();
            while (it.hasNext()) {
                Integer num = (Integer) it.next();
                if (num.intValue() < 0) {
                    return -1;
                }
                if (!treeMap.containsKey(num)) {
                    treeMap.put(num, Integer.valueOf(i6));
                }
            }
        }
        for (Integer num2 : treeMap.keySet()) {
            int intValue = num2.intValue();
            if (intValue > i5) {
                int intValue2 = ((Integer) treeMap.get(num2)).intValue();
                this.mRowWithAccessibilityFocus = intValue;
                this.mColumnWithAccessibilityFocus = 0;
                return intValue2;
            }
        }
        return -1;
    }

    public int findPositionOfLastItemOnARowAboveForHorizontalGrid(int i5) {
        if (i5 < 0 || this.mOrientation == 1) {
            return -1;
        }
        TreeMap treeMap = new TreeMap(Collections.reverseOrder());
        for (int i6 = 0; i6 < getItemCount(); i6++) {
            Iterator it = w(i6).iterator();
            while (it.hasNext()) {
                Integer num = (Integer) it.next();
                if (num.intValue() < 0) {
                    return -1;
                }
                treeMap.put(num, Integer.valueOf(i6));
            }
        }
        for (Integer num2 : treeMap.keySet()) {
            int intValue = num2.intValue();
            if (intValue < i5) {
                int intValue2 = ((Integer) treeMap.get(num2)).intValue();
                this.mRowWithAccessibilityFocus = intValue;
                this.mColumnWithAccessibilityFocus = u(intValue2);
                return intValue2;
            }
        }
        return -1;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager
    public View findReferenceChild(RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5, boolean z6) {
        int i5;
        int i6;
        int childCount = getChildCount();
        int i10 = 1;
        if (z6) {
            i6 = getChildCount() - 1;
            i5 = -1;
            i10 = -1;
        } else {
            i5 = childCount;
            i6 = 0;
        }
        int b10 = state.b();
        ensureLayoutState();
        int k = this.mOrientationHelper.k();
        int g6 = this.mOrientationHelper.g();
        View view = null;
        View view2 = null;
        while (i6 != i5) {
            View childAt = getChildAt(i6);
            int position = getPosition(childAt);
            if (position >= 0 && position < b10 && z(position, recycler, state) == 0) {
                if (((RecyclerView.LayoutParams) childAt.getLayoutParams()).f2308d.isRemoved()) {
                    if (view2 == null) {
                        view2 = childAt;
                    }
                } else {
                    if (this.mOrientationHelper.e(childAt) < g6 && this.mOrientationHelper.b(childAt) >= k) {
                        return childAt;
                    }
                    if (view == null) {
                        view = childAt;
                    }
                }
            }
            i6 += i10;
        }
        return view != null ? view : view2;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public RecyclerView.LayoutParams generateDefaultLayoutParams() {
        return this.mOrientation == 0 ? new f0(-2, -1) : new f0(-1, -2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public RecyclerView.LayoutParams generateLayoutParams(Context context, AttributeSet attributeSet) {
        f0 f0Var = new f0(context, attributeSet);
        f0Var.f2391w = -1;
        f0Var.f2392x = 0;
        return f0Var;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int getColumnCountForAccessibility(RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (this.mOrientation == 1) {
            return Math.min(this.mSpanCount, getItemCount());
        }
        if (state.b() < 1) {
            return 0;
        }
        return y(state.b() - 1, recycler, state) + 1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int getRowCountForAccessibility(RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (this.mOrientation == 0) {
            return Math.min(this.mSpanCount, getItemCount());
        }
        if (state.b() < 1) {
            return 0;
        }
        return y(state.b() - 1, recycler, state) + 1;
    }

    public int getSpaceForSpanRange(int i5, int i6) {
        if (this.mOrientation != 1 || !isLayoutRTL()) {
            int[] iArr = this.mCachedBorders;
            return iArr[i6 + i5] - iArr[i5];
        }
        int[] iArr2 = this.mCachedBorders;
        int i10 = this.mSpanCount;
        return iArr2[i10 - i5] - iArr2[(i10 - i5) - i6];
    }

    public int getSpanCount() {
        return this.mSpanCount;
    }

    public SpanSizeLookup getSpanSizeLookup() {
        return this.mSpanSizeLookup;
    }

    public boolean isUsingSpansToEstimateScrollbarDimensions() {
        return this.mUsingSpansToEstimateScrollBarDimensions;
    }

    /* JADX WARN: Code restructure failed: missing block: B:32:0x008c, code lost:
    
        r21.f2285b = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x008e, code lost:
    
        return;
     */
    @Override // androidx.recyclerview.widget.LinearLayoutManager
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void layoutChunk(RecyclerView.Recycler recycler, RecyclerView.State state, LinearLayoutManager.LayoutState layoutState, LinearLayoutManager.LayoutChunkResult layoutChunkResult) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int childMeasureSpec;
        int i15;
        boolean z5;
        int i16;
        View b10;
        int j = this.mOrientationHelper.j();
        boolean z6 = j != 1073741824;
        int i17 = getChildCount() > 0 ? this.mCachedBorders[this.mSpanCount] : 0;
        if (z6) {
            C();
        }
        boolean z7 = layoutState.f2291e == 1;
        int i18 = this.mSpanCount;
        if (!z7) {
            i18 = z(layoutState.f2290d, recycler, state) + A(layoutState.f2290d, recycler, state);
        }
        int i19 = 0;
        while (i19 < this.mSpanCount && (i16 = layoutState.f2290d) >= 0 && i16 < state.b() && i18 > 0) {
            int i20 = layoutState.f2290d;
            int A = A(i20, recycler, state);
            if (A > this.mSpanCount) {
                throw new IllegalArgumentException(k0.d.m(a3.e.q(i20, "Item at position ", A, " requires ", " spans but GridLayoutManager has only "), this.mSpanCount, " spans."));
            }
            i18 -= A;
            if (i18 < 0 || (b10 = layoutState.b(recycler)) == null) {
                break;
            }
            this.mSet[i19] = b10;
            i19++;
        }
        if (z7) {
            i10 = 1;
            i6 = i19;
            i5 = 0;
        } else {
            i5 = i19 - 1;
            i6 = -1;
            i10 = -1;
        }
        int i21 = 0;
        while (i5 != i6) {
            View view = this.mSet[i5];
            f0 f0Var = (f0) view.getLayoutParams();
            int A2 = A(getPosition(view), recycler, state);
            f0Var.f2392x = A2;
            f0Var.f2391w = i21;
            i21 += A2;
            i5 += i10;
        }
        float f2 = 0.0f;
        int i22 = 0;
        for (int i23 = 0; i23 < i19; i23++) {
            View view2 = this.mSet[i23];
            if (layoutState.k != null) {
                z5 = false;
                if (z7) {
                    addDisappearingView(view2);
                } else {
                    addDisappearingView(view2, 0);
                }
            } else if (z7) {
                addView(view2);
                z5 = false;
            } else {
                z5 = false;
                addView(view2, 0);
            }
            calculateItemDecorationsForChild(view2, this.mDecorInsets);
            B(view2, j, z5);
            int c6 = this.mOrientationHelper.c(view2);
            if (c6 > i22) {
                i22 = c6;
            }
            float d6 = (this.mOrientationHelper.d(view2) * 1.0f) / ((f0) view2.getLayoutParams()).f2392x;
            if (d6 > f2) {
                f2 = d6;
            }
        }
        if (z6) {
            this.mCachedBorders = calculateItemBorders(this.mCachedBorders, this.mSpanCount, Math.max(Math.round(f2 * this.mSpanCount), i17));
            i22 = 0;
            for (int i24 = 0; i24 < i19; i24++) {
                View view3 = this.mSet[i24];
                B(view3, 1073741824, true);
                int c8 = this.mOrientationHelper.c(view3);
                if (c8 > i22) {
                    i22 = c8;
                }
            }
        }
        for (int i25 = 0; i25 < i19; i25++) {
            View view4 = this.mSet[i25];
            if (this.mOrientationHelper.c(view4) != i22) {
                f0 f0Var2 = (f0) view4.getLayoutParams();
                Rect rect = f0Var2.f2309e;
                int i26 = rect.top + rect.bottom + ((ViewGroup.MarginLayoutParams) f0Var2).topMargin + ((ViewGroup.MarginLayoutParams) f0Var2).bottomMargin;
                int i27 = rect.left + rect.right + ((ViewGroup.MarginLayoutParams) f0Var2).leftMargin + ((ViewGroup.MarginLayoutParams) f0Var2).rightMargin;
                int spaceForSpanRange = getSpaceForSpanRange(f0Var2.f2391w, f0Var2.f2392x);
                if (this.mOrientation == 1) {
                    i15 = RecyclerView.LayoutManager.getChildMeasureSpec(spaceForSpanRange, 1073741824, i27, ((ViewGroup.MarginLayoutParams) f0Var2).width, false);
                    childMeasureSpec = View.MeasureSpec.makeMeasureSpec(i22 - i26, 1073741824);
                } else {
                    int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(i22 - i27, 1073741824);
                    childMeasureSpec = RecyclerView.LayoutManager.getChildMeasureSpec(spaceForSpanRange, 1073741824, i26, ((ViewGroup.MarginLayoutParams) f0Var2).height, false);
                    i15 = makeMeasureSpec;
                }
                if (shouldReMeasureChild(view4, i15, childMeasureSpec, (RecyclerView.LayoutParams) view4.getLayoutParams())) {
                    view4.measure(i15, childMeasureSpec);
                }
            }
        }
        layoutChunkResult.a = i22;
        if (this.mOrientation != 1) {
            if (layoutState.f2292f == -1) {
                int i28 = layoutState.f2288b;
                i12 = i28 - i22;
                i11 = i28;
            } else {
                int i29 = layoutState.f2288b;
                i11 = i29 + i22;
                i12 = i29;
            }
            i13 = 0;
            i14 = 0;
        } else if (layoutState.f2292f == -1) {
            i14 = layoutState.f2288b;
            i13 = i14 - i22;
            i12 = 0;
            i11 = 0;
        } else {
            int i30 = layoutState.f2288b;
            i13 = i30;
            i11 = 0;
            i14 = i30 + i22;
            i12 = 0;
        }
        for (int i31 = 0; i31 < i19; i31++) {
            View view5 = this.mSet[i31];
            f0 f0Var3 = (f0) view5.getLayoutParams();
            if (this.mOrientation != 1) {
                i13 = getPaddingTop() + this.mCachedBorders[f0Var3.f2391w];
                i14 = this.mOrientationHelper.d(view5) + i13;
            } else if (isLayoutRTL()) {
                i11 = this.mCachedBorders[this.mSpanCount - f0Var3.f2391w] + getPaddingLeft();
                i12 = i11 - this.mOrientationHelper.d(view5);
            } else {
                i12 = getPaddingLeft() + this.mCachedBorders[f0Var3.f2391w];
                i11 = this.mOrientationHelper.d(view5) + i12;
            }
            int i32 = i11;
            int i33 = i12;
            int i34 = i14;
            layoutDecoratedWithMargins(view5, i33, i13, i32, i34);
            i12 = i33;
            i11 = i32;
            i14 = i34;
            if (f0Var3.f2308d.isRemoved() || f0Var3.f2308d.isUpdated()) {
                layoutChunkResult.f2286c = true;
            }
            layoutChunkResult.f2287d = view5.hasFocusable() | layoutChunkResult.f2287d;
        }
        Arrays.fill(this.mSet, (Object) null);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager
    public void onAnchorReady(RecyclerView.Recycler recycler, RecyclerView.State state, LinearLayoutManager.AnchorInfo anchorInfo, int i5) {
        super.onAnchorReady(recycler, state, anchorInfo, i5);
        C();
        if (state.b() > 0 && !state.f2332g) {
            boolean z5 = i5 == 1;
            int z6 = z(anchorInfo.f2281b, recycler, state);
            if (z5) {
                while (z6 > 0) {
                    int i6 = anchorInfo.f2281b;
                    if (i6 <= 0) {
                        break;
                    }
                    int i10 = i6 - 1;
                    anchorInfo.f2281b = i10;
                    z6 = z(i10, recycler, state);
                }
            } else {
                int b10 = state.b() - 1;
                int i11 = anchorInfo.f2281b;
                while (i11 < b10) {
                    int i12 = i11 + 1;
                    int z7 = z(i12, recycler, state);
                    if (z7 <= z6) {
                        break;
                    }
                    i11 = i12;
                    z6 = z7;
                }
                anchorInfo.f2281b = i11;
            }
        }
        t();
    }

    /* JADX WARN: Code restructure failed: missing block: B:64:0x00d3, code lost:
    
        if (r13 == (r2 > r15)) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x00f3, code lost:
    
        if (r13 == (r2 > r4)) goto L70;
     */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0111  */
    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public View onFocusSearchFailed(View view, int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        int childCount;
        int i6;
        int i10;
        View view2;
        View view3;
        View view4;
        int i11;
        int i12;
        int i13;
        RecyclerView.Recycler recycler2 = recycler;
        RecyclerView.State state2 = state;
        View findContainingItemView = findContainingItemView(view);
        View view5 = null;
        if (findContainingItemView == null) {
            return null;
        }
        f0 f0Var = (f0) findContainingItemView.getLayoutParams();
        int i14 = f0Var.f2391w;
        int i15 = f0Var.f2392x + i14;
        if (super.onFocusSearchFailed(view, i5, recycler, state) == null) {
            return null;
        }
        if ((convertFocusDirectionToLayoutDirection(i5) == 1) != this.mShouldReverseLayout) {
            i10 = getChildCount() - 1;
            childCount = -1;
            i6 = -1;
        } else {
            childCount = getChildCount();
            i6 = 1;
            i10 = 0;
        }
        boolean z5 = this.mOrientation == 1 && isLayoutRTL();
        int y5 = y(i10, recycler2, state2);
        int i16 = -1;
        int i17 = -1;
        int i18 = 0;
        int i19 = 0;
        int i20 = i10;
        View view6 = null;
        while (i20 != childCount) {
            int y6 = y(i20, recycler2, state2);
            View childAt = getChildAt(i20);
            if (childAt == findContainingItemView) {
                break;
            }
            if (!childAt.hasFocusable() || y6 == y5) {
                f0 f0Var2 = (f0) childAt.getLayoutParams();
                int i21 = f0Var2.f2391w;
                view2 = findContainingItemView;
                int i22 = f0Var2.f2392x + i21;
                if (childAt.hasFocusable() && i21 == i14 && i22 == i15) {
                    return childAt;
                }
                if (!(childAt.hasFocusable() && view5 == null) && (childAt.hasFocusable() || view6 != null)) {
                    view3 = view5;
                    int min = Math.min(i22, i15) - Math.max(i21, i14);
                    if (childAt.hasFocusable()) {
                        if (min <= i18) {
                            if (min == i18) {
                            }
                        }
                    } else if (view3 == null) {
                        view4 = view6;
                        i11 = i18;
                        if (isViewPartiallyVisible(childAt, false, true)) {
                            i12 = i19;
                            if (min > i12) {
                                i13 = i17;
                            } else {
                                if (min == i12) {
                                    i13 = i17;
                                } else {
                                    i13 = i17;
                                }
                                i17 = i13;
                                i19 = i12;
                                view6 = view4;
                                i18 = i11;
                                view5 = view3;
                                i20 += i6;
                                recycler2 = recycler;
                                state2 = state;
                                findContainingItemView = view2;
                            }
                            if (childAt.hasFocusable()) {
                                int i23 = f0Var2.f2391w;
                                i19 = Math.min(i22, i15) - Math.max(i21, i14);
                                view6 = childAt;
                                i17 = i23;
                                i18 = i11;
                                view5 = view3;
                                i20 += i6;
                                recycler2 = recycler;
                                state2 = state;
                                findContainingItemView = view2;
                            } else {
                                i17 = i13;
                                i19 = i12;
                                i16 = f0Var2.f2391w;
                                view6 = view4;
                                view5 = childAt;
                                i18 = Math.min(i22, i15) - Math.max(i21, i14);
                                i20 += i6;
                                recycler2 = recycler;
                                state2 = state;
                                findContainingItemView = view2;
                            }
                        }
                        i13 = i17;
                        i12 = i19;
                        i17 = i13;
                        i19 = i12;
                        view6 = view4;
                        i18 = i11;
                        view5 = view3;
                        i20 += i6;
                        recycler2 = recycler;
                        state2 = state;
                        findContainingItemView = view2;
                    }
                } else {
                    view3 = view5;
                }
                view4 = view6;
                i11 = i18;
                i13 = i17;
                i12 = i19;
                if (childAt.hasFocusable()) {
                }
            } else {
                if (view5 != null) {
                    break;
                }
                view2 = findContainingItemView;
                view3 = view5;
            }
            view4 = view6;
            i11 = i18;
            i13 = i17;
            i12 = i19;
            i17 = i13;
            i19 = i12;
            view6 = view4;
            i18 = i11;
            view5 = view3;
            i20 += i6;
            recycler2 = recycler;
            state2 = state;
            findContainingItemView = view2;
        }
        View view7 = view5;
        return view7 != null ? view7 : view6;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onInitializeAccessibilityNodeInfo(@NonNull RecyclerView.Recycler recycler, @NonNull RecyclerView.State state, @NonNull AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(recycler, state, accessibilityNodeInfoCompat);
        accessibilityNodeInfoCompat.o(GridView.class.getName());
        RecyclerView.Adapter adapter = this.mRecyclerView.mAdapter;
        if (adapter == null || adapter.getItemCount() <= 1) {
            return;
        }
        accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1563q);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onInitializeAccessibilityNodeInfoForItem(RecyclerView.Recycler recycler, RecyclerView.State state, View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (!(layoutParams instanceof f0)) {
            super.onInitializeAccessibilityNodeInfoForItem(view, accessibilityNodeInfoCompat);
            return;
        }
        f0 f0Var = (f0) layoutParams;
        int y5 = y(f0Var.f2308d.getLayoutPosition(), recycler, state);
        if (this.mOrientation == 0) {
            accessibilityNodeInfoCompat.r(l1.d.a(f0Var.f2391w, f0Var.f2392x, y5, 1, false));
        } else {
            accessibilityNodeInfoCompat.r(l1.d.a(y5, 1, f0Var.f2391w, f0Var.f2392x, false));
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onItemsAdded(RecyclerView recyclerView, int i5, int i6) {
        this.mSpanSizeLookup.invalidateSpanIndexCache();
        this.mSpanSizeLookup.invalidateSpanGroupIndexCache();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onItemsChanged(RecyclerView recyclerView) {
        this.mSpanSizeLookup.invalidateSpanIndexCache();
        this.mSpanSizeLookup.invalidateSpanGroupIndexCache();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onItemsMoved(RecyclerView recyclerView, int i5, int i6, int i10) {
        this.mSpanSizeLookup.invalidateSpanIndexCache();
        this.mSpanSizeLookup.invalidateSpanGroupIndexCache();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onItemsRemoved(RecyclerView recyclerView, int i5, int i6) {
        this.mSpanSizeLookup.invalidateSpanIndexCache();
        this.mSpanSizeLookup.invalidateSpanGroupIndexCache();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onItemsUpdated(RecyclerView recyclerView, int i5, int i6, Object obj) {
        this.mSpanSizeLookup.invalidateSpanIndexCache();
        this.mSpanSizeLookup.invalidateSpanGroupIndexCache();
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onLayoutChildren(RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (state.f2332g) {
            int childCount = getChildCount();
            for (int i5 = 0; i5 < childCount; i5++) {
                f0 f0Var = (f0) getChildAt(i5).getLayoutParams();
                int layoutPosition = f0Var.f2308d.getLayoutPosition();
                this.mPreLayoutSpanSizeCache.put(layoutPosition, f0Var.f2392x);
                this.mPreLayoutSpanIndexCache.put(layoutPosition, f0Var.f2391w);
            }
        }
        super.onLayoutChildren(recycler, state);
        this.mPreLayoutSpanSizeCache.clear();
        this.mPreLayoutSpanIndexCache.clear();
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onLayoutCompleted(RecyclerView.State state) {
        View findViewByPosition;
        super.onLayoutCompleted(state);
        this.mPendingSpanCountChange = false;
        int i5 = this.mPositionTargetedByScrollInDirection;
        if (i5 == -1 || (findViewByPosition = findViewByPosition(i5)) == null) {
            return;
        }
        findViewByPosition.sendAccessibilityEvent(67108864);
        this.mPositionTargetedByScrollInDirection = -1;
    }

    /* JADX WARN: Removed duplicated region for block: B:53:0x01a1  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x01a7  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x01ac  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x01b4  */
    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean performAccessibilityAction(int i5, Bundle bundle) {
        View view;
        RecyclerView.ViewHolder childViewHolder;
        int i6;
        if (i5 == androidx.core.view.accessibility.a.f1563q.a() && i5 != -1) {
            int i10 = 0;
            while (true) {
                if (i10 >= getChildCount()) {
                    view = null;
                    break;
                }
                View childAt = getChildAt(i10);
                Objects.requireNonNull(childAt);
                if (childAt.isAccessibilityFocused()) {
                    view = getChildAt(i10);
                    break;
                }
                i10++;
            }
            if (view != null && bundle != null) {
                int i11 = bundle.getInt("android.view.accessibility.action.ARGUMENT_DIRECTION_INT", -1);
                if (sSupportedDirectionsForActionScrollInDirection.contains(Integer.valueOf(i11)) && (childViewHolder = this.mRecyclerView.getChildViewHolder(view)) != null) {
                    int absoluteAdapterPosition = childViewHolder.getAbsoluteAdapterPosition();
                    int v5 = v(absoluteAdapterPosition);
                    int u5 = u(absoluteAdapterPosition);
                    if (v5 >= 0 && u5 >= 0) {
                        if (!w(absoluteAdapterPosition).contains(Integer.valueOf(this.mRowWithAccessibilityFocus)) || !x(u(absoluteAdapterPosition), absoluteAdapterPosition).contains(Integer.valueOf(this.mColumnWithAccessibilityFocus))) {
                            this.mRowWithAccessibilityFocus = v5;
                            this.mColumnWithAccessibilityFocus = u5;
                        }
                        int i12 = this.mRowWithAccessibilityFocus;
                        if (i12 == -1) {
                            i12 = v5;
                        }
                        int i13 = this.mColumnWithAccessibilityFocus;
                        if (i13 != -1) {
                            u5 = i13;
                        }
                        if (i11 == 17) {
                            i6 = absoluteAdapterPosition - 1;
                            while (i6 >= 0) {
                                int v6 = v(i6);
                                int u6 = u(i6);
                                if (v6 < 0 || u6 < 0) {
                                    break;
                                }
                                if (this.mOrientation != 1) {
                                    if (w(i6).contains(Integer.valueOf(i12)) && u6 < u5) {
                                        this.mColumnWithAccessibilityFocus = u6;
                                        break;
                                    }
                                    i6--;
                                } else {
                                    if ((v6 == i12 && u6 < u5) || v6 < i12) {
                                        this.mRowWithAccessibilityFocus = v6;
                                        this.mColumnWithAccessibilityFocus = u6;
                                        break;
                                    }
                                    i6--;
                                }
                            }
                            i6 = -1;
                            if (i6 == -1) {
                            }
                            if (i6 != -1) {
                            }
                        } else if (i11 == 33) {
                            i6 = absoluteAdapterPosition - 1;
                            while (i6 >= 0) {
                                int v7 = v(i6);
                                int u10 = u(i6);
                                if (v7 < 0 || u10 < 0) {
                                    break;
                                }
                                if (this.mOrientation == 1) {
                                    if (v7 < i12 && x(u(i6), i6).contains(Integer.valueOf(u5))) {
                                        this.mRowWithAccessibilityFocus = v7;
                                        break;
                                    }
                                    i6--;
                                } else {
                                    if (v7 < i12 && u10 == u5) {
                                        this.mRowWithAccessibilityFocus = ((Integer) Collections.max(w(i6))).intValue();
                                        break;
                                    }
                                    i6--;
                                }
                            }
                            i6 = -1;
                            if (i6 == -1) {
                            }
                            if (i6 != -1) {
                            }
                        } else if (i11 == 66) {
                            i6 = absoluteAdapterPosition + 1;
                            while (i6 < getItemCount()) {
                                int v9 = v(i6);
                                int u11 = u(i6);
                                if (v9 < 0 || u11 < 0) {
                                    break;
                                }
                                if (this.mOrientation != 1) {
                                    if (u11 > u5 && w(i6).contains(Integer.valueOf(i12))) {
                                        this.mColumnWithAccessibilityFocus = u11;
                                        break;
                                    }
                                    i6++;
                                } else {
                                    if ((v9 == i12 && u11 > u5) || v9 > i12) {
                                        this.mRowWithAccessibilityFocus = v9;
                                        this.mColumnWithAccessibilityFocus = u11;
                                        break;
                                    }
                                    i6++;
                                }
                            }
                            i6 = -1;
                            if (i6 == -1) {
                                if (i11 != 17) {
                                }
                            }
                            if (i6 != -1) {
                            }
                        } else if (i11 == 130) {
                            i6 = absoluteAdapterPosition + 1;
                            while (i6 < getItemCount()) {
                                int v10 = v(i6);
                                int u12 = u(i6);
                                if (v10 < 0 || u12 < 0) {
                                    break;
                                }
                                if (this.mOrientation == 1) {
                                    if (v10 > i12 && (u12 == u5 || x(u(i6), i6).contains(Integer.valueOf(u5)))) {
                                        this.mRowWithAccessibilityFocus = v10;
                                        break;
                                    }
                                    i6++;
                                } else {
                                    if (v10 > i12 && u12 == u5) {
                                        this.mRowWithAccessibilityFocus = v(i6);
                                        break;
                                    }
                                    i6++;
                                }
                            }
                            i6 = -1;
                            if (i6 == -1 && this.mOrientation == 0) {
                                if (i11 != 17) {
                                    i6 = findPositionOfLastItemOnARowAboveForHorizontalGrid(v5);
                                } else if (i11 == 66) {
                                    i6 = findPositionOfFirstItemOnARowBelowForHorizontalGrid(v5);
                                }
                            }
                            if (i6 != -1) {
                                scrollToPosition(i6);
                                this.mPositionTargetedByScrollInDirection = i6;
                                return true;
                            }
                        }
                    }
                }
            }
        } else {
            if (i5 != 16908343 || bundle == null) {
                return super.performAccessibilityAction(i5, bundle);
            }
            int i14 = bundle.getInt("android.view.accessibility.action.ARGUMENT_ROW_INT", -1);
            int i15 = bundle.getInt("android.view.accessibility.action.ARGUMENT_COLUMN_INT", -1);
            if (i14 != -1 && i15 != -1) {
                int itemCount = this.mRecyclerView.mAdapter.getItemCount();
                int i16 = 0;
                while (true) {
                    if (i16 >= itemCount) {
                        i16 = -1;
                        break;
                    }
                    RecyclerView recyclerView = this.mRecyclerView;
                    int z5 = z(i16, recyclerView.mRecycler, recyclerView.mState);
                    RecyclerView recyclerView2 = this.mRecyclerView;
                    int y5 = y(i16, recyclerView2.mRecycler, recyclerView2.mState);
                    if (this.mOrientation == 1) {
                        if (z5 == i15 && y5 == i14) {
                            break;
                        }
                        i16++;
                    } else {
                        if (z5 == i14 && y5 == i15) {
                            break;
                        }
                        i16++;
                    }
                }
                if (i16 > -1) {
                    scrollToPositionWithOffset(i16, 0);
                    return true;
                }
            }
        }
        return false;
    }

    public final int r(RecyclerView.State state) {
        if (getChildCount() != 0 && state.b() != 0) {
            ensureLayoutState();
            boolean isSmoothScrollbarEnabled = isSmoothScrollbarEnabled();
            boolean z5 = !isSmoothScrollbarEnabled;
            View findFirstVisibleChildClosestToStart = findFirstVisibleChildClosestToStart(z5, true);
            View findFirstVisibleChildClosestToEnd = findFirstVisibleChildClosestToEnd(z5, true);
            if (findFirstVisibleChildClosestToStart != null && findFirstVisibleChildClosestToEnd != null) {
                int cachedSpanGroupIndex = this.mSpanSizeLookup.getCachedSpanGroupIndex(getPosition(findFirstVisibleChildClosestToStart), this.mSpanCount);
                int cachedSpanGroupIndex2 = this.mSpanSizeLookup.getCachedSpanGroupIndex(getPosition(findFirstVisibleChildClosestToEnd), this.mSpanCount);
                int max = this.mShouldReverseLayout ? Math.max(0, ((this.mSpanSizeLookup.getCachedSpanGroupIndex(state.b() - 1, this.mSpanCount) + 1) - Math.max(cachedSpanGroupIndex, cachedSpanGroupIndex2)) - 1) : Math.max(0, Math.min(cachedSpanGroupIndex, cachedSpanGroupIndex2));
                if (isSmoothScrollbarEnabled) {
                    return Math.round((max * (Math.abs(this.mOrientationHelper.b(findFirstVisibleChildClosestToEnd) - this.mOrientationHelper.e(findFirstVisibleChildClosestToStart)) / ((this.mSpanSizeLookup.getCachedSpanGroupIndex(getPosition(findFirstVisibleChildClosestToEnd), this.mSpanCount) - this.mSpanSizeLookup.getCachedSpanGroupIndex(getPosition(findFirstVisibleChildClosestToStart), this.mSpanCount)) + 1))) + (this.mOrientationHelper.k() - this.mOrientationHelper.e(findFirstVisibleChildClosestToStart)));
                }
                return max;
            }
        }
        return 0;
    }

    public final int s(RecyclerView.State state) {
        if (getChildCount() == 0 || state.b() == 0) {
            return 0;
        }
        ensureLayoutState();
        View findFirstVisibleChildClosestToStart = findFirstVisibleChildClosestToStart(!isSmoothScrollbarEnabled(), true);
        View findFirstVisibleChildClosestToEnd = findFirstVisibleChildClosestToEnd(!isSmoothScrollbarEnabled(), true);
        if (findFirstVisibleChildClosestToStart == null || findFirstVisibleChildClosestToEnd == null) {
            return 0;
        }
        if (!isSmoothScrollbarEnabled()) {
            return this.mSpanSizeLookup.getCachedSpanGroupIndex(state.b() - 1, this.mSpanCount) + 1;
        }
        int b10 = this.mOrientationHelper.b(findFirstVisibleChildClosestToEnd) - this.mOrientationHelper.e(findFirstVisibleChildClosestToStart);
        int cachedSpanGroupIndex = this.mSpanSizeLookup.getCachedSpanGroupIndex(getPosition(findFirstVisibleChildClosestToStart), this.mSpanCount);
        return (int) ((b10 / ((this.mSpanSizeLookup.getCachedSpanGroupIndex(getPosition(findFirstVisibleChildClosestToEnd), this.mSpanCount) - cachedSpanGroupIndex) + 1)) * (this.mSpanSizeLookup.getCachedSpanGroupIndex(state.b() - 1, this.mSpanCount) + 1));
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int scrollHorizontallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        C();
        t();
        return super.scrollHorizontallyBy(i5, recycler, state);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public int scrollVerticallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        C();
        t();
        return super.scrollVerticallyBy(i5, recycler, state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void setMeasuredDimension(Rect rect, int i5, int i6) {
        int chooseSize;
        int chooseSize2;
        if (this.mCachedBorders == null) {
            super.setMeasuredDimension(rect, i5, i6);
        }
        int paddingRight = getPaddingRight() + getPaddingLeft();
        int paddingBottom = getPaddingBottom() + getPaddingTop();
        if (this.mOrientation == 1) {
            chooseSize2 = RecyclerView.LayoutManager.chooseSize(i6, rect.height() + paddingBottom, getMinimumHeight());
            int[] iArr = this.mCachedBorders;
            chooseSize = RecyclerView.LayoutManager.chooseSize(i5, iArr[iArr.length - 1] + paddingRight, getMinimumWidth());
        } else {
            chooseSize = RecyclerView.LayoutManager.chooseSize(i5, rect.width() + paddingRight, getMinimumWidth());
            int[] iArr2 = this.mCachedBorders;
            chooseSize2 = RecyclerView.LayoutManager.chooseSize(i6, iArr2[iArr2.length - 1] + paddingBottom, getMinimumHeight());
        }
        setMeasuredDimension(chooseSize, chooseSize2);
    }

    public void setSpanCount(int i5) {
        if (i5 == this.mSpanCount) {
            return;
        }
        this.mPendingSpanCountChange = true;
        if (i5 < 1) {
            throw new IllegalArgumentException(k0.d.i(i5, "Span count should be at least 1. Provided "));
        }
        this.mSpanCount = i5;
        this.mSpanSizeLookup.invalidateSpanIndexCache();
        requestLayout();
    }

    public void setSpanSizeLookup(SpanSizeLookup spanSizeLookup) {
        this.mSpanSizeLookup = spanSizeLookup;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager
    public void setStackFromEnd(boolean z5) {
        if (z5) {
            throw new UnsupportedOperationException("GridLayoutManager does not support stack from end. Consider using reverse layout");
        }
        super.setStackFromEnd(false);
    }

    public void setUsingSpansToEstimateScrollbarDimensions(boolean z5) {
        this.mUsingSpansToEstimateScrollBarDimensions = z5;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean supportsPredictiveItemAnimations() {
        return this.mPendingSavedState == null && !this.mPendingSpanCountChange;
    }

    public final void t() {
        View[] viewArr = this.mSet;
        if (viewArr == null || viewArr.length != this.mSpanCount) {
            this.mSet = new View[this.mSpanCount];
        }
    }

    public final int u(int i5) {
        if (this.mOrientation == 0) {
            RecyclerView recyclerView = this.mRecyclerView;
            return y(i5, recyclerView.mRecycler, recyclerView.mState);
        }
        RecyclerView recyclerView2 = this.mRecyclerView;
        return z(i5, recyclerView2.mRecycler, recyclerView2.mState);
    }

    public final int v(int i5) {
        if (this.mOrientation == 1) {
            RecyclerView recyclerView = this.mRecyclerView;
            return y(i5, recyclerView.mRecycler, recyclerView.mState);
        }
        RecyclerView recyclerView2 = this.mRecyclerView;
        return z(i5, recyclerView2.mRecycler, recyclerView2.mState);
    }

    public final HashSet w(int i5) {
        return x(v(i5), i5);
    }

    public final HashSet x(int i5, int i6) {
        HashSet hashSet = new HashSet();
        RecyclerView recyclerView = this.mRecyclerView;
        int A = A(i6, recyclerView.mRecycler, recyclerView.mState);
        for (int i10 = i5; i10 < i5 + A; i10++) {
            hashSet.add(Integer.valueOf(i10));
        }
        return hashSet;
    }

    public final int y(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (!state.f2332g) {
            return this.mSpanSizeLookup.getCachedSpanGroupIndex(i5, this.mSpanCount);
        }
        int c6 = recycler.c(i5);
        if (c6 != -1) {
            return this.mSpanSizeLookup.getCachedSpanGroupIndex(c6, this.mSpanCount);
        }
        Log.w(TAG, "Cannot find span size for pre layout position. " + i5);
        return 0;
    }

    public final int z(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (!state.f2332g) {
            return this.mSpanSizeLookup.getCachedSpanIndex(i5, this.mSpanCount);
        }
        int i6 = this.mPreLayoutSpanIndexCache.get(i5, -1);
        if (i6 != -1) {
            return i6;
        }
        int c6 = recycler.c(i5);
        if (c6 != -1) {
            return this.mSpanSizeLookup.getCachedSpanIndex(c6, this.mSpanCount);
        }
        Log.w(TAG, "Cannot find span size for pre layout position. It is not cached, not in the adapter. Pos:" + i5);
        return 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public RecyclerView.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            f0 f0Var = new f0((ViewGroup.MarginLayoutParams) layoutParams);
            f0Var.f2391w = -1;
            f0Var.f2392x = 0;
            return f0Var;
        }
        f0 f0Var2 = new f0(layoutParams);
        f0Var2.f2391w = -1;
        f0Var2.f2392x = 0;
        return f0Var2;
    }

    public GridLayoutManager(int i5) {
        this.mPendingSpanCountChange = false;
        this.mSpanCount = -1;
        this.mPreLayoutSpanSizeCache = new SparseIntArray();
        this.mPreLayoutSpanIndexCache = new SparseIntArray();
        this.mSpanSizeLookup = new e0();
        this.mDecorInsets = new Rect();
        this.mPositionTargetedByScrollInDirection = -1;
        this.mRowWithAccessibilityFocus = -1;
        this.mColumnWithAccessibilityFocus = -1;
        setSpanCount(i5);
    }

    public GridLayoutManager(int i5, int i6) {
        super(1, false);
        this.mPendingSpanCountChange = false;
        this.mSpanCount = -1;
        this.mPreLayoutSpanSizeCache = new SparseIntArray();
        this.mPreLayoutSpanIndexCache = new SparseIntArray();
        this.mSpanSizeLookup = new e0();
        this.mDecorInsets = new Rect();
        this.mPositionTargetedByScrollInDirection = -1;
        this.mRowWithAccessibilityFocus = -1;
        this.mColumnWithAccessibilityFocus = -1;
        setSpanCount(i5);
    }
}
