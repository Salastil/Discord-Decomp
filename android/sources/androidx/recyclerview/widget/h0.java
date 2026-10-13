package androidx.recyclerview.widget;

import android.annotation.SuppressLint;
import android.graphics.Canvas;
import android.view.View;
import android.view.animation.Interpolator;
import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public abstract class h0 {
    private static final int ABS_HORIZONTAL_DIR_FLAGS = 789516;
    public static final int DEFAULT_DRAG_ANIMATION_DURATION = 200;
    public static final int DEFAULT_SWIPE_ANIMATION_DURATION = 250;
    private static final long DRAG_SCROLL_ACCELERATION_LIMIT_TIME_MS = 2000;
    static final int RELATIVE_DIR_FLAGS = 3158064;
    private static final Interpolator sDragScrollInterpolator = new g0(0);
    private static final Interpolator sDragViewScrollCapInterpolator = new g0(1);
    private int mCachedMaxScrollSpeed = -1;

    public static int convertToRelativeDirection(int i5, int i6) {
        int i10;
        int i11 = i5 & ABS_HORIZONTAL_DIR_FLAGS;
        if (i11 == 0) {
            return i5;
        }
        int i12 = i5 & (~i11);
        if (i6 == 0) {
            i10 = i11 << 2;
        } else {
            int i13 = i11 << 1;
            i12 |= (-789517) & i13;
            i10 = (i13 & ABS_HORIZONTAL_DIR_FLAGS) << 2;
        }
        return i12 | i10;
    }

    @NonNull
    public static ItemTouchUIUtil getDefaultUIUtil() {
        return j0.a;
    }

    public static int makeFlag(int i5, int i6) {
        return i6 << (i5 * 8);
    }

    public static int makeMovementFlags(int i5, int i6) {
        return makeFlag(2, i5) | makeFlag(1, i6) | makeFlag(0, i6 | i5);
    }

    public boolean canDropOver(@NonNull RecyclerView recyclerView, @NonNull RecyclerView.ViewHolder viewHolder, @NonNull RecyclerView.ViewHolder viewHolder2) {
        return true;
    }

    @SuppressLint({"UnknownNullness"})
    public RecyclerView.ViewHolder chooseDropTarget(@NonNull RecyclerView.ViewHolder viewHolder, @NonNull List<RecyclerView.ViewHolder> list, int i5, int i6) {
        int bottom;
        int abs;
        int top;
        int abs2;
        int left;
        int abs3;
        int right;
        int abs4;
        int width = viewHolder.itemView.getWidth() + i5;
        int height = viewHolder.itemView.getHeight() + i6;
        int left2 = i5 - viewHolder.itemView.getLeft();
        int top2 = i6 - viewHolder.itemView.getTop();
        int size = list.size();
        RecyclerView.ViewHolder viewHolder2 = null;
        int i10 = -1;
        for (int i11 = 0; i11 < size; i11++) {
            RecyclerView.ViewHolder viewHolder3 = list.get(i11);
            if (left2 > 0 && (right = viewHolder3.itemView.getRight() - width) < 0 && viewHolder3.itemView.getRight() > viewHolder.itemView.getRight() && (abs4 = Math.abs(right)) > i10) {
                viewHolder2 = viewHolder3;
                i10 = abs4;
            }
            if (left2 < 0 && (left = viewHolder3.itemView.getLeft() - i5) > 0 && viewHolder3.itemView.getLeft() < viewHolder.itemView.getLeft() && (abs3 = Math.abs(left)) > i10) {
                viewHolder2 = viewHolder3;
                i10 = abs3;
            }
            if (top2 < 0 && (top = viewHolder3.itemView.getTop() - i6) > 0 && viewHolder3.itemView.getTop() < viewHolder.itemView.getTop() && (abs2 = Math.abs(top)) > i10) {
                viewHolder2 = viewHolder3;
                i10 = abs2;
            }
            if (top2 > 0 && (bottom = viewHolder3.itemView.getBottom() - height) < 0 && viewHolder3.itemView.getBottom() > viewHolder.itemView.getBottom() && (abs = Math.abs(bottom)) > i10) {
                viewHolder2 = viewHolder3;
                i10 = abs;
            }
        }
        return viewHolder2;
    }

    public void clearView(@NonNull RecyclerView recyclerView, @NonNull RecyclerView.ViewHolder viewHolder) {
        View view = viewHolder.itemView;
        Object tag = view.getTag(R.id.item_touch_helper_previous_elevation);
        if (tag instanceof Float) {
            float floatValue = ((Float) tag).floatValue();
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            androidx.core.view.j0.k(view, floatValue);
        }
        view.setTag(R.id.item_touch_helper_previous_elevation, null);
        view.setTranslationX(0.0f);
        view.setTranslationY(0.0f);
    }

    public int convertToAbsoluteDirection(int i5, int i6) {
        int i10;
        int i11 = i5 & RELATIVE_DIR_FLAGS;
        if (i11 == 0) {
            return i5;
        }
        int i12 = i5 & (~i11);
        if (i6 == 0) {
            i10 = i11 >> 2;
        } else {
            int i13 = i11 >> 1;
            i12 |= (-3158065) & i13;
            i10 = (i13 & RELATIVE_DIR_FLAGS) >> 2;
        }
        return i12 | i10;
    }

    public long getAnimationDuration(@NonNull RecyclerView recyclerView, int i5, float f2, float f10) {
        RecyclerView.ItemAnimator itemAnimator = recyclerView.getItemAnimator();
        return itemAnimator == null ? i5 == 8 ? 200L : 250L : i5 == 8 ? itemAnimator.getMoveDuration() : itemAnimator.getRemoveDuration();
    }

    public int getBoundingBoxMargin() {
        return 0;
    }

    public float getMoveThreshold(@NonNull RecyclerView.ViewHolder viewHolder) {
        return 0.5f;
    }

    public abstract int getMovementFlags(@NonNull RecyclerView recyclerView, @NonNull RecyclerView.ViewHolder viewHolder);

    public float getSwipeEscapeVelocity(float f2) {
        return f2;
    }

    public float getSwipeThreshold(@NonNull RecyclerView.ViewHolder viewHolder) {
        return 0.5f;
    }

    public float getSwipeVelocityThreshold(float f2) {
        return f2;
    }

    public boolean hasSwipeFlag(RecyclerView recyclerView, RecyclerView.ViewHolder viewHolder) {
        return (convertToAbsoluteDirection(getMovementFlags(recyclerView, viewHolder), recyclerView.getLayoutDirection()) & 65280) != 0;
    }

    public int interpolateOutOfBoundsScroll(@NonNull RecyclerView recyclerView, int i5, int i6, int i10, long j) {
        if (this.mCachedMaxScrollSpeed == -1) {
            this.mCachedMaxScrollSpeed = recyclerView.getResources().getDimensionPixelSize(R.dimen.item_touch_helper_max_drag_scroll_per_frame);
        }
        int interpolation = (int) (sDragScrollInterpolator.getInterpolation(j <= DRAG_SCROLL_ACCELERATION_LIMIT_TIME_MS ? j / 2000.0f : 1.0f) * ((int) (sDragViewScrollCapInterpolator.getInterpolation(Math.min(1.0f, (Math.abs(i6) * 1.0f) / i5)) * ((int) Math.signum(i6)) * this.mCachedMaxScrollSpeed)));
        return interpolation == 0 ? i6 > 0 ? 1 : -1 : interpolation;
    }

    public boolean isItemViewSwipeEnabled() {
        return true;
    }

    public boolean isLongPressDragEnabled() {
        return true;
    }

    public void onChildDraw(@NonNull Canvas canvas, @NonNull RecyclerView recyclerView, @NonNull RecyclerView.ViewHolder viewHolder, float f2, float f10, int i5, boolean z5) {
        View view = viewHolder.itemView;
        if (z5 && view.getTag(R.id.item_touch_helper_previous_elevation) == null) {
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            Float valueOf = Float.valueOf(androidx.core.view.j0.e(view));
            int childCount = recyclerView.getChildCount();
            float f11 = 0.0f;
            for (int i6 = 0; i6 < childCount; i6++) {
                View childAt = recyclerView.getChildAt(i6);
                if (childAt != view) {
                    WeakHashMap weakHashMap2 = androidx.core.view.s0.a;
                    float e9 = androidx.core.view.j0.e(childAt);
                    if (e9 > f11) {
                        f11 = e9;
                    }
                }
            }
            androidx.core.view.j0.k(view, f11 + 1.0f);
            view.setTag(R.id.item_touch_helper_previous_elevation, valueOf);
        }
        view.setTranslationX(f2);
        view.setTranslationY(f10);
    }

    public void onChildDrawOver(@NonNull Canvas canvas, @NonNull RecyclerView recyclerView, @SuppressLint({"UnknownNullness"}) RecyclerView.ViewHolder viewHolder, float f2, float f10, int i5, boolean z5) {
        View view = viewHolder.itemView;
    }

    public abstract boolean onMove(@NonNull RecyclerView recyclerView, @NonNull RecyclerView.ViewHolder viewHolder, @NonNull RecyclerView.ViewHolder viewHolder2);

    /* JADX WARN: Multi-variable type inference failed */
    public void onMoved(@NonNull RecyclerView recyclerView, @NonNull RecyclerView.ViewHolder viewHolder, int i5, @NonNull RecyclerView.ViewHolder viewHolder2, int i6, int i10, int i11) {
        RecyclerView.LayoutManager layoutManager = recyclerView.getLayoutManager();
        if (layoutManager instanceof i0) {
            ((i0) layoutManager).prepareForDrop(viewHolder.itemView, viewHolder2.itemView, i10, i11);
            return;
        }
        if (layoutManager.canScrollHorizontally()) {
            if (layoutManager.getDecoratedLeft(viewHolder2.itemView) <= recyclerView.getPaddingLeft()) {
                recyclerView.scrollToPosition(i6);
            }
            if (layoutManager.getDecoratedRight(viewHolder2.itemView) >= recyclerView.getWidth() - recyclerView.getPaddingRight()) {
                recyclerView.scrollToPosition(i6);
            }
        }
        if (layoutManager.canScrollVertically()) {
            if (layoutManager.getDecoratedTop(viewHolder2.itemView) <= recyclerView.getPaddingTop()) {
                recyclerView.scrollToPosition(i6);
            }
            if (layoutManager.getDecoratedBottom(viewHolder2.itemView) >= recyclerView.getHeight() - recyclerView.getPaddingBottom()) {
                recyclerView.scrollToPosition(i6);
            }
        }
    }

    public void onSelectedChanged(RecyclerView.ViewHolder viewHolder, int i5) {
    }

    public abstract void onSwiped(@NonNull RecyclerView.ViewHolder viewHolder, int i5);
}
