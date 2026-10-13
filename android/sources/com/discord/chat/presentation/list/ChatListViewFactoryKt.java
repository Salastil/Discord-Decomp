package com.discord.chat.presentation.list;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.presentation.list.delegate.BaseChatListItemDelegate;
import com.discord.chat.presentation.list.delegate.RegularMessageDelegate;
import com.discord.chat.presentation.list.delegate.SeparatorDelegate;
import com.discord.chat.presentation.list.item.ChatListItem;
import com.discord.chat.presentation.message.MessageAccessoriesAdapter;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000B\n\u0000\n\u0002\u0010$\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001aJ\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2*\u0010\r\u001a&\u0012\u001c\u0012\u001a\u0012\u0016\b\u0001\u0012\u0012\u0012\u0006\b\u0001\u0012\u00020\u0006\u0012\u0006\b\u0001\u0012\u00020\u000e0\u00050\u0004\u0012\u0004\u0012\u00020\u00020\u00012\u0006\u0010\u000f\u001a\u00020\u0010\u001a\u001e\u0010\u0011\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0010\"\u001a\u0010\u0000\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000\"0\u0010\u0003\u001a$\u0012\u001a\b\u0001\u0012\u0016\u0012\u0012\b\u0001\u0012\u000e\u0012\u0006\b\u0001\u0012\u00020\u0006\u0012\u0002\b\u00030\u00050\u0004\u0012\u0004\u0012\u00020\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"accessoriesToCreate", "", "", "recycledViewPoolSizes", "Ljava/lang/Class;", "Lcom/discord/chat/presentation/list/delegate/BaseChatListItemDelegate;", "Lcom/discord/chat/presentation/list/item/ChatListItem;", "fillChatList", "", "recycler", "Landroidx/recyclerview/widget/RecyclerView;", "chatListAdapter", "Lcom/discord/chat/presentation/list/BaseChatListAdapter;", "delegateViewTypes", "Landroid/view/View;", "chatListViewPool", "Landroidx/recyclerview/widget/RecyclerView$RecycledViewPool;", "fillAccessories", "accessoriesAdapter", "Lcom/discord/chat/presentation/message/MessageAccessoriesAdapter;", "accessoriesViewPool", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ChatListViewFactoryKt {

    @NotNull
    private static final Map<Integer, Integer> accessoriesToCreate = v0.g(new Pair(0, 25), new Pair(4, 15), new Pair(1, 6), new Pair(12, 10), new Pair(26, 5), new Pair(50, 5), new Pair(49, 20));

    @NotNull
    private static final Map<? extends Class<? extends BaseChatListItemDelegate<? extends ChatListItem, ?>>, Integer> recycledViewPoolSizes = v0.g(new Pair(RegularMessageDelegate.class, 40), new Pair(SeparatorDelegate.class, 10));

    public static final void fillAccessories(@NotNull RecyclerView recycler, @NotNull MessageAccessoriesAdapter accessoriesAdapter, @NotNull RecyclerView.RecycledViewPool accessoriesViewPool) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        Intrinsics.checkNotNullParameter(accessoriesAdapter, "accessoriesAdapter");
        Intrinsics.checkNotNullParameter(accessoriesViewPool, "accessoriesViewPool");
        x.t(CoroutineViewUtilsKt.attachedScope(recycler, false), g0.a, new ChatListViewFactoryKt$fillAccessories$1(accessoriesAdapter, recycler, accessoriesViewPool, null), 2);
    }

    public static final void fillChatList(@NotNull RecyclerView recycler, @NotNull BaseChatListAdapter chatListAdapter, @NotNull Map<Class<? extends BaseChatListItemDelegate<? extends ChatListItem, ? extends View>>, Integer> delegateViewTypes, @NotNull RecyclerView.RecycledViewPool chatListViewPool) {
        Intrinsics.checkNotNullParameter(recycler, "recycler");
        Intrinsics.checkNotNullParameter(chatListAdapter, "chatListAdapter");
        Intrinsics.checkNotNullParameter(delegateViewTypes, "delegateViewTypes");
        Intrinsics.checkNotNullParameter(chatListViewPool, "chatListViewPool");
        x.t(CoroutineViewUtilsKt.attachedScope(recycler, false), g0.a, new ChatListViewFactoryKt$fillChatList$1(delegateViewTypes, chatListAdapter, recycler, chatListViewPool, null), 2);
    }
}
