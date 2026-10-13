package com.discord.chat.presentation.list;

import android.view.KeyEvent;
import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.presentation.list.delegate.BaseChatListItemDelegate;
import com.discord.chat.presentation.list.item.ChatListItem;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.g0;
import nr.x;
import sr.q;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.list.ChatListViewFactoryKt$fillChatList$1", f = "ChatListViewFactory.kt", l = {ChatViewRecyclerTypes.REFERRAL_REDESIGN}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nChatListViewFactory.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChatListViewFactory.kt\ncom/discord/chat/presentation/list/ChatListViewFactoryKt$fillChatList$1\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,104:1\n216#2,2:105\n*S KotlinDebug\n*F\n+ 1 ChatListViewFactory.kt\ncom/discord/chat/presentation/list/ChatListViewFactoryKt$fillChatList$1\n*L\n46#1:105,2\n*E\n"})
/* loaded from: classes.dex */
public final class ChatListViewFactoryKt$fillChatList$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ BaseChatListAdapter $chatListAdapter;
    final /* synthetic */ RecyclerView.RecycledViewPool $chatListViewPool;
    final /* synthetic */ Map<Class<? extends BaseChatListItemDelegate<? extends ChatListItem, ? extends View>>, Integer> $delegateViewTypes;
    final /* synthetic */ RecyclerView $recycler;
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatListViewFactoryKt$fillChatList$1(Map<Class<? extends BaseChatListItemDelegate<? extends ChatListItem, ? extends View>>, Integer> map, BaseChatListAdapter baseChatListAdapter, RecyclerView recyclerView, RecyclerView.RecycledViewPool recycledViewPool, Continuation continuation) {
        super(2, continuation);
        this.$delegateViewTypes = map;
        this.$chatListAdapter = baseChatListAdapter;
        this.$recycler = recyclerView;
        this.$chatListViewPool = recycledViewPool;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatListViewFactoryKt$fillChatList$1(this.$delegateViewTypes, this.$chatListAdapter, this.$recycler, this.$chatListViewPool, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Map map;
        RecyclerView recyclerView;
        BaseChatListAdapter baseChatListAdapter;
        RecyclerView.RecycledViewPool recycledViewPool;
        Map<Class<? extends BaseChatListItemDelegate<? extends ChatListItem, ? extends View>>, Integer> map2;
        Iterator it;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            map = ChatListViewFactoryKt.recycledViewPoolSizes;
            Map<Class<? extends BaseChatListItemDelegate<? extends ChatListItem, ? extends View>>, Integer> map3 = this.$delegateViewTypes;
            BaseChatListAdapter baseChatListAdapter2 = this.$chatListAdapter;
            recyclerView = this.$recycler;
            baseChatListAdapter = baseChatListAdapter2;
            recycledViewPool = this.$chatListViewPool;
            map2 = map3;
            it = map.entrySet().iterator();
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            it = (Iterator) this.L$4;
            recycledViewPool = (RecyclerView.RecycledViewPool) this.L$3;
            recyclerView = (RecyclerView) this.L$2;
            baseChatListAdapter = (BaseChatListAdapter) this.L$1;
            map2 = (Map) this.L$0;
            ki.b.R(obj);
        }
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            Class cls = (Class) entry.getKey();
            int intValue = ((Number) entry.getValue()).intValue();
            Integer num = map2.get(cls);
            Intrinsics.checkNotNull(num);
            int intValue2 = num.intValue();
            ArrayList arrayList = new ArrayList();
            for (int i6 = 0; i6 < intValue; i6++) {
                RecyclerView.ViewHolder createViewHolder = baseChatListAdapter.createViewHolder(recyclerView, intValue2);
                KeyEvent.Callback itemView = createViewHolder.itemView;
                Intrinsics.checkNotNullExpressionValue(itemView, "itemView");
                if (itemView instanceof FactoryCreatable) {
                    ((FactoryCreatable) itemView).onFactoryCreate();
                }
                arrayList.add(createViewHolder);
            }
            ur.e eVar = g0.a;
            or.d dVar = q.a;
            ChatListViewFactoryKt$fillChatList$1$1$1 chatListViewFactoryKt$fillChatList$1$1$1 = new ChatListViewFactoryKt$fillChatList$1$1$1(arrayList, recycledViewPool, null);
            this.L$0 = map2;
            this.L$1 = baseChatListAdapter;
            this.L$2 = recyclerView;
            this.L$3 = recycledViewPool;
            this.L$4 = it;
            this.label = 1;
            if (x.A(dVar, chatListViewFactoryKt$fillChatList$1$1$1, this) == aVar) {
                return aVar;
            }
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChatListViewFactoryKt$fillChatList$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
