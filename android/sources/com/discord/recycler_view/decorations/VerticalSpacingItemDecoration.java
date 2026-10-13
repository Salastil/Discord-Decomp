package com.discord.recycler_view.decorations;

import android.graphics.Rect;
import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\n\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u00002\u00020\u0001:\u0001 B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ(\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aH\u0016J\f\u0010\u001b\u001a\u00020\u0007*\u00020\u001cH\u0002J\f\u0010\u001d\u001a\u00020\u0007*\u00020\u001cH\u0002J\u0014\u0010\u001e\u001a\u00020\u0007*\u00020\u001c2\u0006\u0010\u001f\u001a\u00020\u0003H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0005\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u001a\u0010\u0006\u001a\u00020\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u000e\"\u0004\b\u000f\u0010\u0010¨\u0006!"}, d2 = {"Lcom/discord/recycler_view/decorations/VerticalSpacingItemDecoration;", "Landroidx/recyclerview/widget/RecyclerView$ItemDecoration;", "spacingPx", "", "firstItemSpacingPx", "endItemSpacingPx", "isRecyclerLayoutReversed", "", "<init>", "(IIIZ)V", "getEndItemSpacingPx", "()I", "setEndItemSpacingPx", "(I)V", "()Z", "setRecyclerLayoutReversed", "(Z)V", "getItemOffsets", "", "outRect", "Landroid/graphics/Rect;", "view", "Landroid/view/View;", "parent", "Landroidx/recyclerview/widget/RecyclerView;", "state", "Landroidx/recyclerview/widget/RecyclerView$State;", "isOrWasAtLastItemPosition", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "isOrWasAtFirstItemPosition", "validateItemPosition", ViewProps.POSITION, "SpacingProviderView", "recycler_view_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class VerticalSpacingItemDecoration extends RecyclerView.ItemDecoration {
    private int endItemSpacingPx;
    private final int firstItemSpacingPx;
    private boolean isRecyclerLayoutReversed;
    private final int spacingPx;

    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\bf\u0018\u00002\u00020\u0001J\u000f\u0010\u0002\u001a\u0004\u0018\u00010\u0003H&¢\u0006\u0002\u0010\u0004¨\u0006\u0005"}, d2 = {"Lcom/discord/recycler_view/decorations/VerticalSpacingItemDecoration$SpacingProviderView;", "", "spacingPxOverride", "", "()Ljava/lang/Integer;", "recycler_view_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface SpacingProviderView {
        /* renamed from: spacingPxOverride */
        Integer getBottomSpacingPx();
    }

    public /* synthetic */ VerticalSpacingItemDecoration(int i5, int i6, int i10, boolean z5, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, (i11 & 2) != 0 ? 0 : i6, (i11 & 4) != 0 ? 0 : i10, (i11 & 8) != 0 ? false : z5);
    }

    private final boolean isOrWasAtFirstItemPosition(RecyclerView.ViewHolder viewHolder) {
        int i5;
        if (this.isRecyclerLayoutReversed) {
            RecyclerView.Adapter bindingAdapter = viewHolder.getBindingAdapter();
            Intrinsics.checkNotNull(bindingAdapter);
            i5 = bindingAdapter.getItemCount() - 1;
        } else {
            i5 = 0;
        }
        return validateItemPosition(viewHolder, i5);
    }

    private final boolean isOrWasAtLastItemPosition(RecyclerView.ViewHolder viewHolder) {
        int itemCount;
        if (this.isRecyclerLayoutReversed) {
            itemCount = 0;
        } else {
            RecyclerView.Adapter bindingAdapter = viewHolder.getBindingAdapter();
            Intrinsics.checkNotNull(bindingAdapter);
            itemCount = bindingAdapter.getItemCount() - 1;
        }
        return validateItemPosition(viewHolder, itemCount);
    }

    private final boolean validateItemPosition(RecyclerView.ViewHolder viewHolder, int i5) {
        if (viewHolder.getBindingAdapterPosition() != i5) {
            return viewHolder.getBindingAdapterPosition() == -1 && viewHolder.getOldPosition() == i5;
        }
        return true;
    }

    public final int getEndItemSpacingPx() {
        return this.endItemSpacingPx;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public void getItemOffsets(@NotNull Rect outRect, @NotNull View view, @NotNull RecyclerView parent, @NotNull RecyclerView.State state) {
        Integer bottomSpacingPx;
        Intrinsics.checkNotNullParameter(outRect, "outRect");
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(state, "state");
        RecyclerView.ViewHolder childViewHolder = parent.getChildViewHolder(view);
        Intrinsics.checkNotNull(childViewHolder);
        boolean isOrWasAtLastItemPosition = isOrWasAtLastItemPosition(childViewHolder);
        boolean isOrWasAtFirstItemPosition = isOrWasAtFirstItemPosition(childViewHolder);
        SpacingProviderView spacingProviderView = view instanceof SpacingProviderView ? (SpacingProviderView) view : null;
        int intValue = (spacingProviderView == null || (bottomSpacingPx = spacingProviderView.getBottomSpacingPx()) == null) ? this.spacingPx : bottomSpacingPx.intValue();
        if (isOrWasAtLastItemPosition) {
            intValue = this.endItemSpacingPx;
        }
        outRect.bottom = intValue;
        if (isOrWasAtFirstItemPosition) {
            outRect.top = this.firstItemSpacingPx;
        }
    }

    /* renamed from: isRecyclerLayoutReversed, reason: from getter */
    public final boolean getIsRecyclerLayoutReversed() {
        return this.isRecyclerLayoutReversed;
    }

    public final void setEndItemSpacingPx(int i5) {
        this.endItemSpacingPx = i5;
    }

    public final void setRecyclerLayoutReversed(boolean z5) {
        this.isRecyclerLayoutReversed = z5;
    }

    public VerticalSpacingItemDecoration(int i5, int i6, int i10, boolean z5) {
        this.spacingPx = i5;
        this.firstItemSpacingPx = i6;
        this.endItemSpacingPx = i10;
        this.isRecyclerLayoutReversed = z5;
    }
}
