package com.discord.chat.presentation.list;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.view.botuikit.ComponentProvider;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3882d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ChatListView f3883e;

    public /* synthetic */ d(ChatListView chatListView, int i5) {
        this.f3882d = i5;
        this.f3883e = chatListView;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit chatListAdapter$lambda$0;
        Unit scrollToPosition$lambda$9;
        Unit scrollToPosition$lambda$11;
        ChatEventHandler chatListAdapter$lambda$1;
        ComponentProvider componentProvider;
        Unit _init_$lambda$5;
        Unit _init_$lambda$6;
        Unit forceRecreateAllViewHolders$lambda$12;
        ChatEventHandler forceRecreateAllViewHolders$lambda$13;
        ComponentProvider componentProvider2;
        switch (this.f3882d) {
            case 0:
                chatListAdapter$lambda$0 = ChatListView.chatListAdapter$lambda$0(this.f3883e);
                return chatListAdapter$lambda$0;
            case 1:
                scrollToPosition$lambda$9 = ChatListView.scrollToPosition$lambda$9(this.f3883e);
                return scrollToPosition$lambda$9;
            case 2:
                scrollToPosition$lambda$11 = ChatListView.scrollToPosition$lambda$11(this.f3883e);
                return scrollToPosition$lambda$11;
            case 3:
                chatListAdapter$lambda$1 = ChatListView.chatListAdapter$lambda$1(this.f3883e);
                return chatListAdapter$lambda$1;
            case 4:
                componentProvider = this.f3883e.componentProvider;
                return componentProvider;
            case 5:
                _init_$lambda$5 = ChatListView._init_$lambda$5(this.f3883e);
                return _init_$lambda$5;
            case 6:
                _init_$lambda$6 = ChatListView._init_$lambda$6(this.f3883e);
                return _init_$lambda$6;
            case 7:
                forceRecreateAllViewHolders$lambda$12 = ChatListView.forceRecreateAllViewHolders$lambda$12(this.f3883e);
                return forceRecreateAllViewHolders$lambda$12;
            case 8:
                forceRecreateAllViewHolders$lambda$13 = ChatListView.forceRecreateAllViewHolders$lambda$13(this.f3883e);
                return forceRecreateAllViewHolders$lambda$13;
            default:
                componentProvider2 = this.f3883e.componentProvider;
                return componentProvider2;
        }
    }
}
