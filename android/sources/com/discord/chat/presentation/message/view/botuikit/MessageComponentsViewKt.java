package com.discord.chat.presentation.message.view.botuikit;

import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import com.discord.chat.bridge.botuikit.Component;
import com.facebook.react.uimanager.ViewProps;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000(\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\u001a>\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0014\u0010\u0003\u001a\u0010\u0012\f\u0012\n\u0012\u0006\b\u0001\u0012\u00020\u00060\u00050\u00042\b\u0010\u0007\u001a\u0004\u0018\u00010\b2\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\n\u001a\u0014\u0010\f\u001a\u00020\u0001*\u00020\u00022\b\u0010\u0007\u001a\u0004\u0018\u00010\b¨\u0006\r"}, d2 = {"replaceViews", "", "Landroid/view/ViewGroup;", "views", "", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentView;", "Lcom/discord/chat/bridge/botuikit/Component;", "componentProvider", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentProvider;", ViewProps.PADDING_BOTTOM, "", ViewProps.PADDING_RIGHT, "recycleChildComponents", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMessageComponentsView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MessageComponentsView.kt\ncom/discord/chat/presentation/message/view/botuikit/MessageComponentsViewKt\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,131:1\n1878#2,2:132\n1880#2:142\n327#3,4:134\n327#3,4:138\n*S KotlinDebug\n*F\n+ 1 MessageComponentsView.kt\ncom/discord/chat/presentation/message/view/botuikit/MessageComponentsViewKt\n*L\n81#1:132,2\n81#1:142\n94#1:134,4\n98#1:138,4\n*E\n"})
/* loaded from: classes.dex */
public final class MessageComponentsViewKt {
    public static final void recycleChildComponents(@NotNull ViewGroup viewGroup, ComponentProvider componentProvider) {
        Intrinsics.checkNotNullParameter(viewGroup, "<this>");
        int childCount = viewGroup.getChildCount();
        while (true) {
            childCount--;
            if (-1 >= childCount) {
                return;
            }
            if (componentProvider != null) {
                KeyEvent.Callback childAt = viewGroup.getChildAt(childCount);
                Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type com.discord.chat.presentation.message.view.botuikit.ComponentView<out com.discord.chat.bridge.botuikit.Component>");
                componentProvider.recycleComponentView((ComponentView) childAt);
            }
            viewGroup.removeViewAt(childCount);
        }
    }

    public static final void replaceViews(@NotNull ViewGroup viewGroup, @NotNull List<? extends ComponentView<? extends Component>> views, ComponentProvider componentProvider, int i5, int i6) {
        int childCount;
        int size;
        Intrinsics.checkNotNullParameter(viewGroup, "<this>");
        Intrinsics.checkNotNullParameter(views, "views");
        int i10 = 0;
        for (Object obj : views) {
            int i11 = i10 + 1;
            if (i10 < 0) {
                c0.k();
                throw null;
            }
            Object obj2 = (ComponentView) obj;
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type android.view.View");
            View view = (View) obj2;
            ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
            if (layoutParams == null) {
                layoutParams = new ViewGroup.MarginLayoutParams(-1, -2);
            }
            view.setLayoutParams(layoutParams);
            if (i10 < views.size() - 1) {
                ViewGroup.LayoutParams layoutParams2 = view.getLayoutParams();
                if (layoutParams2 == null) {
                    throw new NullPointerException("null cannot be cast to non-null type android.view.ViewGroup.MarginLayoutParams");
                }
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams2;
                marginLayoutParams.setMargins(0, 0, i6, i5);
                view.setLayoutParams(marginLayoutParams);
            } else {
                ViewGroup.LayoutParams layoutParams3 = view.getLayoutParams();
                if (layoutParams3 == null) {
                    throw new NullPointerException("null cannot be cast to non-null type android.view.ViewGroup.MarginLayoutParams");
                }
                ViewGroup.MarginLayoutParams marginLayoutParams2 = (ViewGroup.MarginLayoutParams) layoutParams3;
                marginLayoutParams2.setMargins(0, 0, 0, 0);
                view.setLayoutParams(marginLayoutParams2);
            }
            if (i10 >= viewGroup.getChildCount()) {
                viewGroup.addView(view, i10);
            } else if (viewGroup.getChildAt(i10) != obj2) {
                if (componentProvider != null) {
                    KeyEvent.Callback childAt = viewGroup.getChildAt(i10);
                    Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type com.discord.chat.presentation.message.view.botuikit.ComponentView<out com.discord.chat.bridge.botuikit.Component>");
                    componentProvider.recycleComponentView((ComponentView) childAt);
                }
                viewGroup.removeViewAt(i10);
                viewGroup.addView(view, i10);
            }
            i10 = i11;
        }
        if (views.size() >= viewGroup.getChildCount() || (size = views.size()) > viewGroup.getChildCount() - 1) {
            return;
        }
        while (true) {
            if (viewGroup.getChildAt(childCount) != null) {
                KeyEvent.Callback childAt2 = viewGroup.getChildAt(childCount);
                if (componentProvider != null) {
                    Intrinsics.checkNotNull(childAt2, "null cannot be cast to non-null type com.discord.chat.presentation.message.view.botuikit.ComponentView<out com.discord.chat.bridge.botuikit.Component>");
                    componentProvider.recycleComponentView((ComponentView) childAt2);
                }
                viewGroup.removeViewAt(childCount);
            }
            if (childCount == size) {
                return;
            } else {
                childCount--;
            }
        }
    }

    public static /* synthetic */ void replaceViews$default(ViewGroup viewGroup, List list, ComponentProvider componentProvider, int i5, int i6, int i10, Object obj) {
        if ((i10 & 4) != 0) {
            i5 = 0;
        }
        if ((i10 & 8) != 0) {
            i6 = 0;
        }
        replaceViews(viewGroup, list, componentProvider, i5, i6);
    }
}
