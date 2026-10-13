package androidx.recyclerview.widget;

import android.os.Trace;
import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes.dex */
public final class GapWorker implements Runnable {

    /* renamed from: w, reason: collision with root package name */
    public static final ThreadLocal f2272w = new ThreadLocal();

    /* renamed from: x, reason: collision with root package name */
    public static final s f2273x = new s(1);

    /* renamed from: e, reason: collision with root package name */
    public long f2275e;

    /* renamed from: i, reason: collision with root package name */
    public long f2276i;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f2274d = new ArrayList();

    /* renamed from: v, reason: collision with root package name */
    public final ArrayList f2277v = new ArrayList();

    public static class LayoutPrefetchRegistryImpl implements RecyclerView.LayoutManager.LayoutPrefetchRegistry {
        public int a;

        /* renamed from: b, reason: collision with root package name */
        public int f2278b;

        /* renamed from: c, reason: collision with root package name */
        public int[] f2279c;

        /* renamed from: d, reason: collision with root package name */
        public int f2280d;

        @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry
        public final void a(int i5, int i6) {
            if (i5 < 0) {
                throw new IllegalArgumentException("Layout positions must be non-negative");
            }
            if (i6 < 0) {
                throw new IllegalArgumentException("Pixel distance must be non-negative");
            }
            int i10 = this.f2280d;
            int i11 = i10 * 2;
            int[] iArr = this.f2279c;
            if (iArr == null) {
                int[] iArr2 = new int[4];
                this.f2279c = iArr2;
                Arrays.fill(iArr2, -1);
            } else if (i11 >= iArr.length) {
                int[] iArr3 = new int[i10 * 4];
                this.f2279c = iArr3;
                System.arraycopy(iArr, 0, iArr3, 0, iArr.length);
            }
            int[] iArr4 = this.f2279c;
            iArr4[i11] = i5;
            iArr4[i11 + 1] = i6;
            this.f2280d++;
        }

        public final void b(boolean z5, RecyclerView recyclerView) {
            this.f2280d = 0;
            int[] iArr = this.f2279c;
            if (iArr != null) {
                Arrays.fill(iArr, -1);
            }
            RecyclerView.LayoutManager layoutManager = recyclerView.mLayout;
            if (recyclerView.mAdapter == null || layoutManager == null || !layoutManager.isItemPrefetchEnabled()) {
                return;
            }
            if (z5) {
                if (!recyclerView.mAdapterHelper.g()) {
                    layoutManager.collectInitialPrefetchPositions(recyclerView.mAdapter.getItemCount(), this);
                }
            } else if (!recyclerView.hasPendingAdapterUpdates()) {
                layoutManager.collectAdjacentPrefetchPositions(this.a, this.f2278b, recyclerView.mState, this);
            }
            int i5 = this.f2280d;
            if (i5 > layoutManager.mPrefetchMaxCountObserved) {
                layoutManager.mPrefetchMaxCountObserved = i5;
                layoutManager.mPrefetchMaxObservedInInitialPrefetch = z5;
                recyclerView.mRecycler.o();
            }
        }
    }

    public static RecyclerView.ViewHolder c(RecyclerView recyclerView, int i5, long j) {
        int h6 = recyclerView.mChildHelper.h();
        for (int i6 = 0; i6 < h6; i6++) {
            RecyclerView.ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(recyclerView.mChildHelper.g(i6));
            if (childViewHolderInt.mPosition == i5 && !childViewHolderInt.isInvalid()) {
                return null;
            }
        }
        RecyclerView.Recycler recycler = recyclerView.mRecycler;
        if (j == LongCompanionObject.MAX_VALUE) {
            try {
                if (f1.e.a()) {
                    Trace.beginSection("RV Prefetch forced - needed next frame");
                }
            } catch (Throwable th2) {
                recyclerView.onExitLayoutOrScroll(false);
                Trace.endSection();
                throw th2;
            }
        }
        recyclerView.onEnterLayoutOrScroll();
        RecyclerView.ViewHolder m5 = recycler.m(i5, j);
        if (m5 != null) {
            if (!m5.isBound() || m5.isInvalid()) {
                recycler.a(m5, false);
            } else {
                recycler.j(m5.itemView);
            }
        }
        recyclerView.onExitLayoutOrScroll(false);
        Trace.endSection();
        return m5;
    }

    public final void a(RecyclerView recyclerView, int i5, int i6) {
        if (recyclerView.isAttachedToWindow()) {
            if (RecyclerView.sDebugAssertionsEnabled && !this.f2274d.contains(recyclerView)) {
                throw new IllegalStateException("attempting to post unregistered view!");
            }
            if (this.f2275e == 0) {
                this.f2275e = recyclerView.getNanoTime();
                recyclerView.post(this);
            }
        }
        LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl = recyclerView.mPrefetchRegistry;
        layoutPrefetchRegistryImpl.a = i5;
        layoutPrefetchRegistryImpl.f2278b = i6;
    }

    public final void b(long j) {
        d0 d0Var;
        RecyclerView recyclerView;
        RecyclerView recyclerView2;
        d0 d0Var2;
        ArrayList arrayList = this.f2274d;
        int size = arrayList.size();
        int i5 = 0;
        int i6 = 0;
        for (int i10 = 0; i10 < size; i10++) {
            RecyclerView recyclerView3 = (RecyclerView) arrayList.get(i10);
            if (recyclerView3.getWindowVisibility() == 0) {
                recyclerView3.mPrefetchRegistry.b(false, recyclerView3);
                i6 += recyclerView3.mPrefetchRegistry.f2280d;
            }
        }
        ArrayList arrayList2 = this.f2277v;
        arrayList2.ensureCapacity(i6);
        int i11 = 0;
        int i12 = 0;
        while (i11 < size) {
            RecyclerView recyclerView4 = (RecyclerView) arrayList.get(i11);
            if (recyclerView4.getWindowVisibility() == 0) {
                LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl = recyclerView4.mPrefetchRegistry;
                int abs = Math.abs(layoutPrefetchRegistryImpl.f2278b) + Math.abs(layoutPrefetchRegistryImpl.a);
                for (int i13 = i5; i13 < layoutPrefetchRegistryImpl.f2280d * 2; i13 += 2) {
                    if (i12 >= arrayList2.size()) {
                        d0Var2 = new d0();
                        arrayList2.add(d0Var2);
                    } else {
                        d0Var2 = (d0) arrayList2.get(i12);
                    }
                    int[] iArr = layoutPrefetchRegistryImpl.f2279c;
                    int i14 = iArr[i13 + 1];
                    d0Var2.a = i14 <= abs;
                    d0Var2.f2385b = abs;
                    d0Var2.f2386c = i14;
                    d0Var2.f2387d = recyclerView4;
                    d0Var2.f2388e = iArr[i13];
                    i12++;
                }
            }
            i11++;
            i5 = 0;
        }
        Collections.sort(arrayList2, f2273x);
        for (int i15 = 0; i15 < arrayList2.size() && (recyclerView = (d0Var = (d0) arrayList2.get(i15)).f2387d) != null; i15++) {
            RecyclerView.ViewHolder c6 = c(recyclerView, d0Var.f2388e, d0Var.a ? Long.MAX_VALUE : j);
            if (c6 != null && c6.mNestedRecyclerView != null && c6.isBound() && !c6.isInvalid() && (recyclerView2 = c6.mNestedRecyclerView.get()) != null) {
                if (recyclerView2.mDataSetHasChangedAfterLayout && recyclerView2.mChildHelper.h() != 0) {
                    recyclerView2.removeAndRecycleViews();
                }
                LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl2 = recyclerView2.mPrefetchRegistry;
                layoutPrefetchRegistryImpl2.b(true, recyclerView2);
                if (layoutPrefetchRegistryImpl2.f2280d != 0) {
                    try {
                        Trace.beginSection(j == LongCompanionObject.MAX_VALUE ? "RV Nested Prefetch" : "RV Nested Prefetch forced - needed next frame");
                        RecyclerView.State state = recyclerView2.mState;
                        RecyclerView.Adapter adapter = recyclerView2.mAdapter;
                        state.f2329d = 1;
                        state.f2330e = adapter.getItemCount();
                        state.f2332g = false;
                        state.f2333h = false;
                        state.f2334i = false;
                        for (int i16 = 0; i16 < layoutPrefetchRegistryImpl2.f2280d * 2; i16 += 2) {
                            c(recyclerView2, layoutPrefetchRegistryImpl2.f2279c[i16], j);
                        }
                        Trace.endSection();
                        d0Var.a = false;
                        d0Var.f2385b = 0;
                        d0Var.f2386c = 0;
                        d0Var.f2387d = null;
                        d0Var.f2388e = 0;
                    } catch (Throwable th2) {
                        Trace.endSection();
                        throw th2;
                    }
                }
            }
            d0Var.a = false;
            d0Var.f2385b = 0;
            d0Var.f2386c = 0;
            d0Var.f2387d = null;
            d0Var.f2388e = 0;
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        ArrayList arrayList = this.f2274d;
        try {
            Trace.beginSection("RV Prefetch");
            if (!arrayList.isEmpty()) {
                int size = arrayList.size();
                long j = 0;
                for (int i5 = 0; i5 < size; i5++) {
                    RecyclerView recyclerView = (RecyclerView) arrayList.get(i5);
                    if (recyclerView.getWindowVisibility() == 0) {
                        j = Math.max(recyclerView.getDrawingTime(), j);
                    }
                }
                if (j != 0) {
                    b(TimeUnit.MILLISECONDS.toNanos(j) + this.f2276i);
                }
            }
        } finally {
            this.f2275e = 0L;
            Trace.endSection();
        }
    }
}
