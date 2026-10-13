package com.discord.chat.presentation.list;

import android.view.KeyEvent;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.presentation.message.MessageAccessoriesAdapter;
import com.discord.chat.presentation.message.viewholder.MessagePartViewHolder;
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
@lo.d(c = "com.discord.chat.presentation.list.ChatListViewFactoryKt$fillAccessories$1", f = "ChatListViewFactory.kt", l = {90}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nChatListViewFactory.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChatListViewFactory.kt\ncom/discord/chat/presentation/list/ChatListViewFactoryKt$fillAccessories$1\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,104:1\n216#2,2:105\n*S KotlinDebug\n*F\n+ 1 ChatListViewFactory.kt\ncom/discord/chat/presentation/list/ChatListViewFactoryKt$fillAccessories$1\n*L\n79#1:105,2\n*E\n"})
/* loaded from: classes.dex */
public final class ChatListViewFactoryKt$fillAccessories$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ MessageAccessoriesAdapter $accessoriesAdapter;
    final /* synthetic */ RecyclerView.RecycledViewPool $accessoriesViewPool;
    final /* synthetic */ RecyclerView $recycler;
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatListViewFactoryKt$fillAccessories$1(MessageAccessoriesAdapter messageAccessoriesAdapter, RecyclerView recyclerView, RecyclerView.RecycledViewPool recycledViewPool, Continuation continuation) {
        super(2, continuation);
        this.$accessoriesAdapter = messageAccessoriesAdapter;
        this.$recycler = recyclerView;
        this.$accessoriesViewPool = recycledViewPool;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatListViewFactoryKt$fillAccessories$1(this.$accessoriesAdapter, this.$recycler, this.$accessoriesViewPool, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Map map;
        RecyclerView recyclerView;
        RecyclerView.RecycledViewPool recycledViewPool;
        MessageAccessoriesAdapter messageAccessoriesAdapter;
        Iterator it;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            map = ChatListViewFactoryKt.accessoriesToCreate;
            MessageAccessoriesAdapter messageAccessoriesAdapter2 = this.$accessoriesAdapter;
            RecyclerView recyclerView2 = this.$recycler;
            recyclerView = recyclerView2;
            recycledViewPool = this.$accessoriesViewPool;
            messageAccessoriesAdapter = messageAccessoriesAdapter2;
            it = map.entrySet().iterator();
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            it = (Iterator) this.L$3;
            recycledViewPool = (RecyclerView.RecycledViewPool) this.L$2;
            recyclerView = (RecyclerView) this.L$1;
            messageAccessoriesAdapter = (MessageAccessoriesAdapter) this.L$0;
            ki.b.R(obj);
        }
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            int intValue = ((Number) entry.getKey()).intValue();
            int intValue2 = ((Number) entry.getValue()).intValue();
            ArrayList arrayList = new ArrayList();
            for (int i6 = 0; i6 < intValue2; i6++) {
                RecyclerView.ViewHolder createViewHolder = messageAccessoriesAdapter.createViewHolder(recyclerView, intValue);
                Intrinsics.checkNotNullExpressionValue(createViewHolder, "createViewHolder(...)");
                MessagePartViewHolder messagePartViewHolder = (MessagePartViewHolder) createViewHolder;
                KeyEvent.Callback itemView = messagePartViewHolder.itemView;
                Intrinsics.checkNotNullExpressionValue(itemView, "itemView");
                if (itemView instanceof FactoryCreatable) {
                    ((FactoryCreatable) itemView).onFactoryCreate();
                }
                arrayList.add(messagePartViewHolder);
            }
            ur.e eVar = g0.a;
            or.d dVar = q.a;
            ChatListViewFactoryKt$fillAccessories$1$1$1 chatListViewFactoryKt$fillAccessories$1$1$1 = new ChatListViewFactoryKt$fillAccessories$1$1$1(arrayList, recycledViewPool, null);
            this.L$0 = messageAccessoriesAdapter;
            this.L$1 = recyclerView;
            this.L$2 = recycledViewPool;
            this.L$3 = it;
            this.label = 1;
            if (x.A(dVar, chatListViewFactoryKt$fillAccessories$1$1$1, this) == aVar) {
                return aVar;
            }
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChatListViewFactoryKt$fillAccessories$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
