package com.discord.chat.presentation.message.view.mosaic_recycler;

import a3.e;
import android.content.Context;
import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.R;
import com.discord.logging.Log;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;
import uo.c;

@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\f\u001a\u00020\rH\u0016J\b\u0010\u000e\u001a\u00020\rH\u0016J\b\u0010\u000f\u001a\u00020\u0010H\u0016J\u001e\u0010\u0011\u001a\u00020\u00122\n\u0010\u0013\u001a\u00060\u0014R\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0016J\b\u0010\u0018\u001a\u00020\rH\u0016J\u000e\u0010\u0019\u001a\u00020\u00122\u0006\u0010\u000b\u001a\u00020\tJ\u0016\u0010\u001a\u001a\u00020\u00122\f\u0010\u0013\u001a\b\u0018\u00010\u0014R\u00020\u0015H\u0002R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001b"}, d2 = {"Lcom/discord/chat/presentation/message/view/mosaic_recycler/MosaicLayoutManager;", "Landroidx/recyclerview/widget/RecyclerView$LayoutManager;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "getContext", "()Landroid/content/Context;", "spacingPx", "", "mediaMaxHeight", "availableWidth", "canScrollHorizontally", "", "canScrollVertically", "generateDefaultLayoutParams", "Landroidx/recyclerview/widget/RecyclerView$LayoutParams;", "onLayoutChildren", "", "recycler", "Landroidx/recyclerview/widget/RecyclerView$Recycler;", "Landroidx/recyclerview/widget/RecyclerView;", "state", "Landroidx/recyclerview/widget/RecyclerView$State;", "isAutoMeasureEnabled", "setAvailableWidth", "fill", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MosaicLayoutManager extends RecyclerView.LayoutManager {
    private int availableWidth;

    @NotNull
    private final Context context;
    private final int mediaMaxHeight;
    private final int spacingPx;

    public MosaicLayoutManager(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.spacingPx = context.getResources().getDimensionPixelSize(R.dimen.message_media_grid_spacing);
        this.mediaMaxHeight = context.getResources().getDimensionPixelSize(R.dimen.message_media_max_height);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0114  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0123  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void fill(RecyclerView.Recycler recycler) {
        Pair pair;
        int i5;
        int i6;
        int itemCount;
        int i10;
        int i11;
        int i12;
        int i13;
        MosaicLayoutManager mosaicLayoutManager = this;
        RecyclerView.Recycler recycler2 = recycler;
        int i14 = 3;
        Integer num = 3;
        int i15 = 2;
        if (recycler2 == null) {
            return;
        }
        int i16 = 1;
        if (mosaicLayoutManager.getChildCount() > 0) {
            try {
                detachAndScrapAttachedViews(recycler);
            } catch (IllegalArgumentException e9) {
                String message = e9.getMessage();
                if (message == null || !StringsKt.D(message, "Scrapped or attached views may not be recycled", false)) {
                    throw e9;
                }
                Log.e$default(Log.INSTANCE, "MosaicLayoutManager", e.k("Skipping layout due to nested RecyclerView timing conflict: ", e9.getMessage()), (Throwable) null, 4, (Object) null);
                return;
            }
        }
        int i17 = (mosaicLayoutManager.availableWidth - (mosaicLayoutManager.spacingPx * 2)) / 3;
        int itemCount2 = mosaicLayoutManager.getItemCount();
        int i18 = 0;
        int i19 = 0;
        int i20 = 0;
        int i21 = 0;
        MosaicLayoutManager mosaicLayoutManager2 = mosaicLayoutManager;
        while (i21 < itemCount2) {
            int itemCount3 = mosaicLayoutManager2.getItemCount();
            if (itemCount3 != i16) {
                if (itemCount3 != i15) {
                    if (itemCount3 == i14) {
                        pair = i21 == 0 ? new Pair(2, 4) : new Pair(2, 2);
                    } else if (itemCount3 != 4) {
                        int itemCount4 = mosaicLayoutManager2.getItemCount() % i14;
                        pair = i21 < itemCount4 ? new Pair(Integer.valueOf(itemCount4), Integer.valueOf(6 / itemCount4)) : new Pair(num, 2);
                    }
                }
                pair = new Pair(2, num);
            } else {
                pair = new Pair(Integer.valueOf(i16), 6);
            }
            int intValue = ((Number) pair.f13474d).intValue();
            int intValue2 = ((Number) pair.f13475e).intValue();
            int i22 = i18;
            View e10 = recycler2.e(i21);
            Intrinsics.checkNotNullExpressionValue(e10, "getViewForPosition(...)");
            boolean z5 = e10 instanceof MosaicView;
            MosaicView mosaicView = z5 ? (MosaicView) e10 : null;
            float singleAspectRatio = mosaicView != null ? mosaicView.getSingleAspectRatio() : 1.0f;
            if (mosaicLayoutManager2.getItemCount() == i16) {
                i6 = mosaicLayoutManager2.availableWidth;
                int i23 = (int) (i6 / singleAspectRatio);
                int i24 = mosaicLayoutManager2.mediaMaxHeight;
                if (i23 > i24) {
                    i6 = (int) (i24 * singleAspectRatio);
                    int i25 = i19;
                    i12 = i24;
                    i13 = i25;
                } else {
                    i13 = i19;
                    i12 = i23;
                }
            } else {
                if (mosaicLayoutManager2.getItemCount() != 3) {
                    i5 = (mosaicLayoutManager2.availableWidth - ((intValue - 1) * mosaicLayoutManager2.spacingPx)) / intValue;
                } else if (i21 == 0) {
                    i5 = (i17 * 2) + mosaicLayoutManager2.spacingPx;
                } else {
                    i6 = i17;
                    itemCount = mosaicLayoutManager2.getItemCount();
                    if (itemCount == 3) {
                        i10 = i19;
                        i11 = (itemCount == 4 || intValue >= 3) ? i17 : (i17 * 2) + mosaicLayoutManager2.spacingPx;
                    } else {
                        i10 = i19;
                        i11 = i6;
                    }
                    if (mosaicLayoutManager2.getItemCount() == 3 && i21 == 2) {
                        i12 = i11;
                        i13 = mosaicLayoutManager2.spacingPx * 2;
                        i22 += 4;
                    }
                    i12 = i11;
                    i13 = i10;
                }
                i6 = i5;
                itemCount = mosaicLayoutManager2.getItemCount();
                if (itemCount == 3) {
                }
                if (mosaicLayoutManager2.getItemCount() == 3) {
                    i12 = i11;
                    i13 = mosaicLayoutManager2.spacingPx * 2;
                    i22 += 4;
                }
                i12 = i11;
                i13 = i10;
            }
            mosaicLayoutManager2.addView(e10);
            mosaicLayoutManager2.measureChildWithMargins(e10, 0, 0);
            if (mosaicLayoutManager2.getItemCount() != 3) {
                intValue--;
            }
            int i26 = i13;
            int b10 = c.b((float) Math.ceil((((mosaicLayoutManager2.availableWidth - (intValue * mosaicLayoutManager2.spacingPx)) / 6.0f) * i22) + i13));
            int i27 = i12;
            Integer num2 = num;
            MosaicLayoutManager mosaicLayoutManager3 = this;
            mosaicLayoutManager3.layoutDecoratedWithMargins(e10, b10, i20, b10 + i6, i20 + i12);
            MosaicView mosaicView2 = z5 ? (MosaicView) e10 : null;
            if (mosaicView2 != null) {
                mosaicView2.setMosaicSize(i6, i27);
            }
            if (mosaicLayoutManager3.getItemCount() > 1) {
                i22 += intValue2;
                int i28 = mosaicLayoutManager3.spacingPx + i26;
                i14 = 3;
                if (mosaicLayoutManager3.getItemCount() == 3) {
                    i28 += mosaicLayoutManager3.spacingPx;
                }
                if (i22 >= 6) {
                    i20 += i27 + mosaicLayoutManager3.spacingPx;
                    i18 = 0;
                    i26 = 0;
                    i21++;
                    int i29 = i26;
                    i16 = 1;
                    i19 = i29;
                    recycler2 = recycler;
                    num = num2;
                    i15 = 2;
                    mosaicLayoutManager2 = mosaicLayoutManager3;
                } else {
                    i26 = i28;
                }
            } else {
                i14 = 3;
            }
            i18 = i22;
            i21++;
            int i292 = i26;
            i16 = 1;
            i19 = i292;
            recycler2 = recycler;
            num = num2;
            i15 = 2;
            mosaicLayoutManager2 = mosaicLayoutManager3;
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean canScrollHorizontally() {
        return false;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean canScrollVertically() {
        return false;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    @NotNull
    public RecyclerView.LayoutParams generateDefaultLayoutParams() {
        return new RecyclerView.LayoutParams(-2, -2);
    }

    @NotNull
    public final Context getContext() {
        return this.context;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public boolean isAutoMeasureEnabled() {
        return true;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onLayoutChildren(@NotNull RecyclerView.Recycler recycler, RecyclerView.State state) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        fill(recycler);
    }

    public final void setAvailableWidth(int availableWidth) {
        this.availableWidth = availableWidth;
    }
}
