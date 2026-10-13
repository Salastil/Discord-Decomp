package com.discord.chat.presentation.list;

import com.discord.chat.listmanager.ChatListAction;
import com.discord.chat.listmanager.ListOperation;
import com.discord.chat.presentation.list.ChannelChatListAdapter;
import fo.n;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.c0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b2\u0018\u00002\u00020\u0001:\u0004\u0004\u0005\u0006\u0007B\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0004\b\t\n\u000b¨\u0006\f"}, d2 = {"Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem;", "", "<init>", "()V", "ChatList", "PortalView", "PortalViewRemovalFromChatListItemUpdate", "NoOpDataSetChanged", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$ChatList;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$NoOpDataSetChanged;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$PortalView;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$PortalViewRemovalFromChatListItemUpdate;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
abstract class ChatListAdapterUpdateLogItem {

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\b\u001a\u00020\tH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\n"}, d2 = {"Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$ChatList;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem;", "chatListItemUpdate", "Lcom/discord/chat/presentation/list/ChatListItemUpdate;", "<init>", "(Lcom/discord/chat/presentation/list/ChatListItemUpdate;)V", "getChatListItemUpdate", "()Lcom/discord/chat/presentation/list/ChatListItemUpdate;", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nChatListAdapterUpdateLog.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChatListAdapterUpdateLog.kt\ncom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$ChatList\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,99:1\n1818#2,4:100\n*S KotlinDebug\n*F\n+ 1 ChatListAdapterUpdateLog.kt\ncom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$ChatList\n*L\n12#1:100,4\n*E\n"})
    public static final class ChatList extends ChatListAdapterUpdateLogItem {

        @NotNull
        private final ChatListItemUpdate chatListItemUpdate;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ChatList(@NotNull ChatListItemUpdate chatListItemUpdate) {
            super(null);
            Intrinsics.checkNotNullParameter(chatListItemUpdate, "chatListItemUpdate");
            this.chatListItemUpdate = chatListItemUpdate;
        }

        @NotNull
        public final ChatListItemUpdate getChatListItemUpdate() {
            return this.chatListItemUpdate;
        }

        /* JADX WARN: Code restructure failed: missing block: B:20:0x003b, code lost:
        
            if (r4 == null) goto L17;
         */
        /* JADX WARN: Code restructure failed: missing block: B:23:0x0047, code lost:
        
            r0 = com.discord.chat.presentation.list.ChatListAdapterUpdateLogKt.label(r0);
         */
        @NotNull
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public String toString() {
            String str;
            String str2;
            String label;
            List<ListOperation> listOperations = this.chatListItemUpdate.getListOperations();
            if (listOperations != null) {
                int i5 = 0;
                str = "";
                for (Object obj : listOperations) {
                    int i6 = i5 + 1;
                    if (i5 < 0) {
                        c0.k();
                        throw null;
                    }
                    label = ChatListAdapterUpdateLogKt.label((ListOperation) obj);
                    str = k0.d.l(str, label, i5 != listOperations.size() + (-1) ? "-" : "");
                    i5 = i6;
                }
            }
            str = "EMPTY";
            ChatListAction chatListAction = this.chatListItemUpdate.getChatListAction();
            if (chatListAction == null || str2 == null) {
                str2 = "NoAction";
            }
            return com.discord.chat.bridge.botuikit.a.j(a3.e.t("ChatList - ", "Actions: ".concat(str2), ", ", k0.d.i(this.chatListItemUpdate.getItems().size(), "Items: "), ", "), "Operations: ".concat(str), ", \n");
        }
    }

    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\u0004\u001a\u00020\u0005H\u0016¨\u0006\u0006"}, d2 = {"Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$NoOpDataSetChanged;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem;", "<init>", "()V", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class NoOpDataSetChanged extends ChatListAdapterUpdateLogItem {

        @NotNull
        public static final NoOpDataSetChanged INSTANCE = new NoOpDataSetChanged();

        private NoOpDataSetChanged() {
            super(null);
        }

        @NotNull
        public String toString() {
            return "NoOpDataSetChanged";
        }
    }

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\b\u001a\u00020\tH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\n"}, d2 = {"Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$PortalView;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem;", "updateType", "Lcom/discord/chat/presentation/list/ChannelChatListAdapter$PortalViewUpdateType;", "<init>", "(Lcom/discord/chat/presentation/list/ChannelChatListAdapter$PortalViewUpdateType;)V", "getUpdateType", "()Lcom/discord/chat/presentation/list/ChannelChatListAdapter$PortalViewUpdateType;", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class PortalView extends ChatListAdapterUpdateLogItem {

        @NotNull
        private final ChannelChatListAdapter.PortalViewUpdateType updateType;

        @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
        public /* synthetic */ class WhenMappings {
            public static final /* synthetic */ int[] $EnumSwitchMapping$0;

            static {
                int[] iArr = new int[ChannelChatListAdapter.PortalViewUpdateType.values().length];
                try {
                    iArr[ChannelChatListAdapter.PortalViewUpdateType.ADD.ordinal()] = 1;
                } catch (NoSuchFieldError unused) {
                }
                try {
                    iArr[ChannelChatListAdapter.PortalViewUpdateType.CHANGE.ordinal()] = 2;
                } catch (NoSuchFieldError unused2) {
                }
                try {
                    iArr[ChannelChatListAdapter.PortalViewUpdateType.REMOVE.ordinal()] = 3;
                } catch (NoSuchFieldError unused3) {
                }
                $EnumSwitchMapping$0 = iArr;
            }
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public PortalView(@NotNull ChannelChatListAdapter.PortalViewUpdateType updateType) {
            super(null);
            Intrinsics.checkNotNullParameter(updateType, "updateType");
            this.updateType = updateType;
        }

        @NotNull
        public final ChannelChatListAdapter.PortalViewUpdateType getUpdateType() {
            return this.updateType;
        }

        @NotNull
        public String toString() {
            String str;
            int i5 = WhenMappings.$EnumSwitchMapping$0[this.updateType.ordinal()];
            if (i5 == 1) {
                str = "PortalViewUpdateType.ADD";
            } else if (i5 == 2) {
                str = "PortalViewUpdateType.CHANGE";
            } else {
                if (i5 != 3) {
                    throw new n();
                }
                str = "PortalViewUpdateType.REMOVE";
            }
            return "PortalView - ".concat(str);
        }
    }

    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\u0004\u001a\u00020\u0005H\u0016¨\u0006\u0006"}, d2 = {"Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem$PortalViewRemovalFromChatListItemUpdate;", "Lcom/discord/chat/presentation/list/ChatListAdapterUpdateLogItem;", "<init>", "()V", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class PortalViewRemovalFromChatListItemUpdate extends ChatListAdapterUpdateLogItem {

        @NotNull
        public static final PortalViewRemovalFromChatListItemUpdate INSTANCE = new PortalViewRemovalFromChatListItemUpdate();

        private PortalViewRemovalFromChatListItemUpdate() {
            super(null);
        }

        @NotNull
        public String toString() {
            return "PortalViewRemovalFromChatListItemUpdate";
        }
    }

    public /* synthetic */ ChatListAdapterUpdateLogItem(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private ChatListAdapterUpdateLogItem() {
    }
}
