package com.discord.recycler_view.utils;

import androidx.recyclerview.widget.LinearLayoutManager;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\u001a#\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0001H\u0000¢\u0006\u0002\u0010\u0006¨\u0006\u0007"}, d2 = {"isPositionVisible", "", "Landroidx/recyclerview/widget/LinearLayoutManager;", ViewProps.POSITION, "", "prioritizeCompletelyVisible", "(Landroidx/recyclerview/widget/LinearLayoutManager;IZ)Ljava/lang/Boolean;", "recycler_view_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nLayoutManagerUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 LayoutManagerUtils.kt\ncom/discord/recycler_view/utils/LayoutManagerUtilsKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,32:1\n1#2:33\n*E\n"})
/* loaded from: classes.dex */
public final class LayoutManagerUtilsKt {
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0046, code lost:
    
        if (r4 != (-1)) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0049, code lost:
    
        r2 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x0053, code lost:
    
        if (r4 != (-1)) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x002c, code lost:
    
        if (r2 != (-1)) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x001f, code lost:
    
        if (r2 != (-1)) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0022, code lost:
    
        r3 = null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Boolean isPositionVisible(@NotNull LinearLayoutManager linearLayoutManager, int i5, boolean z5) {
        Integer valueOf;
        Integer valueOf2;
        Intrinsics.checkNotNullParameter(linearLayoutManager, "<this>");
        if (z5) {
            int findFirstCompletelyVisibleItemPosition = linearLayoutManager.findFirstCompletelyVisibleItemPosition();
            valueOf = Integer.valueOf(findFirstCompletelyVisibleItemPosition);
            if (findFirstCompletelyVisibleItemPosition == -1) {
                valueOf = null;
            }
            if (valueOf == null) {
                int findFirstVisibleItemPosition = linearLayoutManager.findFirstVisibleItemPosition();
                valueOf = Integer.valueOf(findFirstVisibleItemPosition);
            }
        } else {
            int findFirstVisibleItemPosition2 = linearLayoutManager.findFirstVisibleItemPosition();
            valueOf = Integer.valueOf(findFirstVisibleItemPosition2);
        }
        if (z5) {
            int findLastCompletelyVisibleItemPosition = linearLayoutManager.findLastCompletelyVisibleItemPosition();
            valueOf2 = Integer.valueOf(findLastCompletelyVisibleItemPosition);
            if (findLastCompletelyVisibleItemPosition == -1) {
                valueOf2 = null;
            }
            if (valueOf2 == null) {
                int findLastVisibleItemPosition = linearLayoutManager.findLastVisibleItemPosition();
                valueOf2 = Integer.valueOf(findLastVisibleItemPosition);
            }
        } else {
            int findLastVisibleItemPosition2 = linearLayoutManager.findLastVisibleItemPosition();
            valueOf2 = Integer.valueOf(findLastVisibleItemPosition2);
        }
        if (valueOf == null || valueOf2 == null) {
            return null;
        }
        int intValue = valueOf.intValue();
        return Boolean.valueOf(intValue <= i5 && i5 <= new IntRange(intValue, valueOf2.intValue(), 1).f13546e);
    }
}
