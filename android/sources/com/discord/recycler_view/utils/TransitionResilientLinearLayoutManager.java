package com.discord.recycler_view.utils;

import android.content.Context;
import android.view.View;
import androidx.lifecycle.s0;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.mobile_voice_overlay.views.e;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0016\u0018\u00002\u00020\u0001BA\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0004\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006\u0012\u001c\b\u0002\u0010\u000b\u001a\u0016\u0012\b\u0012\u00060\tj\u0002`\n\u0012\b\u0012\u00060\tj\u0002`\n0\b¢\u0006\u0004\b\f\u0010\rJ\u0015\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u0006¢\u0006\u0004\b\u000e\u0010\u0010J#\u0010\u0016\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u00112\n\u0010\u0015\u001a\u00060\u0013R\u00020\u0014H\u0016¢\u0006\u0004\b\u0016\u0010\u0017J\u001b\u0010\u0018\u001a\u00020\u000f2\n\u0010\u0015\u001a\u00060\u0013R\u00020\u0014H\u0016¢\u0006\u0004\b\u0018\u0010\u0019J#\u0010\u001b\u001a\u00020\u000f2\u0006\u0010\u001a\u001a\u00020\u00042\n\u0010\u0015\u001a\u00060\u0013R\u00020\u0014H\u0016¢\u0006\u0004\b\u001b\u0010\u001cJ#\u0010\u001f\u001a\u00020\u000f2\n\u0010\u0015\u001a\u00060\u0013R\u00020\u00142\u0006\u0010\u001e\u001a\u00020\u001dH\u0016¢\u0006\u0004\b\u001f\u0010 J\u001b\u0010!\u001a\u00020\u000f2\n\u0010\u0015\u001a\u00060\u0013R\u00020\u0014H\u0016¢\u0006\u0004\b!\u0010\u0019R\u0014\u0010#\u001a\u00020\"8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b#\u0010$¨\u0006%"}, d2 = {"Lcom/discord/recycler_view/utils/TransitionResilientLinearLayoutManager;", "Landroidx/recyclerview/widget/LinearLayoutManager;", "Landroid/content/Context;", "context", "", "orientation", "", "reverseLayout", "Lkotlin/Function1;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "onModifyCapturedException", "<init>", "(Landroid/content/Context;IZLkotlin/jvm/functions/Function1;)V", "disableRecycling", "", "(Z)V", "Landroid/view/View;", "child", "Landroidx/recyclerview/widget/RecyclerView$Recycler;", "Landroidx/recyclerview/widget/RecyclerView;", "recycler", "removeAndRecycleView", "(Landroid/view/View;Landroidx/recyclerview/widget/RecyclerView$Recycler;)V", "removeAndRecycleAllViews", "(Landroidx/recyclerview/widget/RecyclerView$Recycler;)V", "index", "removeAndRecycleViewAt", "(ILandroidx/recyclerview/widget/RecyclerView$Recycler;)V", "Landroidx/recyclerview/widget/RecyclerView$State;", "state", "onLayoutChildren", "(Landroidx/recyclerview/widget/RecyclerView$Recycler;Landroidx/recyclerview/widget/RecyclerView$State;)V", "detachAndScrapAttachedViews", "Lcom/discord/recycler_view/utils/TransitionResilientRecyclingDelegate;", "recyclingDelegate", "Lcom/discord/recycler_view/utils/TransitionResilientRecyclingDelegate;", "recycler_view_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public class TransitionResilientLinearLayoutManager extends LinearLayoutManager {

    @NotNull
    private final TransitionResilientRecyclingDelegate recyclingDelegate;

    public /* synthetic */ TransitionResilientLinearLayoutManager(Context context, int i5, boolean z5, Function1 function1, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? 1 : i5, (i6 & 4) != 0 ? false : z5, (i6 & 8) != 0 ? new e(10) : function1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Exception _init_$lambda$0(Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        return e9;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onLayoutChildren$lambda$7(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, RecyclerView.Recycler rec, RecyclerView.State st) {
        Intrinsics.checkNotNullParameter(rec, "rec");
        Intrinsics.checkNotNullParameter(st, "st");
        super.onLayoutChildren(rec, st);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit removeAndRecycleAllViews$lambda$3(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager) {
        super.removeAllViews();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit removeAndRecycleAllViews$lambda$4(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, RecyclerView.Recycler rec) {
        Intrinsics.checkNotNullParameter(rec, "rec");
        super.removeAndRecycleAllViews(rec);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit removeAndRecycleView$lambda$1(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        super.removeView(it);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit removeAndRecycleView$lambda$2(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, View view, RecyclerView.Recycler rec) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(rec, "rec");
        super.removeAndRecycleView(view, rec);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit removeAndRecycleViewAt$lambda$5(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, int i5) {
        super.removeViewAt(i5);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit removeAndRecycleViewAt$lambda$6(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, int i5, RecyclerView.Recycler rec) {
        Intrinsics.checkNotNullParameter(rec, "rec");
        super.removeAndRecycleViewAt(i5, rec);
        return Unit.a;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void detachAndScrapAttachedViews(@NotNull RecyclerView.Recycler recycler) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        super.detachAndScrapAttachedViews(recycler);
        this.recyclingDelegate.deferRecyclingFromScrap(recycler);
    }

    public final void disableRecycling(boolean disableRecycling) {
        this.recyclingDelegate.disableRecycling(disableRecycling);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onLayoutChildren(@NotNull RecyclerView.Recycler recycler, @NotNull RecyclerView.State state) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        Intrinsics.checkNotNullParameter(state, "state");
        this.recyclingDelegate.handleOnLayoutChildren(recycler, state, new d(this, 1));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void removeAndRecycleAllViews(@NotNull RecyclerView.Recycler recycler) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        this.recyclingDelegate.safeRemoveAndRecycleAllViews(recycler, new s0(26, this), new c(this, 1));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void removeAndRecycleView(@NotNull View child, @NotNull RecyclerView.Recycler recycler) {
        Intrinsics.checkNotNullParameter(child, "child");
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        this.recyclingDelegate.safeRemoveAndRecycleView(child, recycler, new c(this, 0), new d(this, 0));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void removeAndRecycleViewAt(int index, @NotNull RecyclerView.Recycler recycler) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        this.recyclingDelegate.safeRemoveAndRecycleViewAt(index, recycler, new c(this, 2), new d(this, 2));
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public TransitionResilientLinearLayoutManager(@NotNull Context context, int i5, boolean z5, @NotNull Function1<? super Exception, ? extends Exception> onModifyCapturedException) {
        super(i5, z5);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onModifyCapturedException, "onModifyCapturedException");
        this.recyclingDelegate = new TransitionResilientRecyclingDelegate(onModifyCapturedException);
    }
}
