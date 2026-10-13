package com.discord.chat.presentation.list.item;

import a3.e;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import java.util.List;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010 \n\u0002\b\u001c\n\u0002\u0010\u0000\n\u0002\b\u0003\b\u0086\b\u0018\u00002\u00020\u0001BY\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\u0006\u0012\u0006\u0010\t\u001a\u00020\n\u0012\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00010\f\u0012\b\b\u0002\u0010\r\u001a\u00020\n\u0012\b\b\u0002\u0010\u000e\u001a\u00020\u0003¢\u0006\u0004\b\u000f\u0010\u0010J\t\u0010\u001d\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001f\u001a\u00020\u0006HÆ\u0003J\t\u0010 \u001a\u00020\u0006HÆ\u0003J\t\u0010!\u001a\u00020\u0006HÆ\u0003J\t\u0010\"\u001a\u00020\nHÆ\u0003J\u000f\u0010#\u001a\b\u0012\u0004\u0012\u00020\u00010\fHÆ\u0003J\t\u0010$\u001a\u00020\nHÆ\u0003J\t\u0010%\u001a\u00020\u0003HÆ\u0003Ji\u0010&\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\b\u001a\u00020\u00062\b\b\u0002\u0010\t\u001a\u00020\n2\u000e\b\u0002\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00010\f2\b\b\u0002\u0010\r\u001a\u00020\n2\b\b\u0002\u0010\u000e\u001a\u00020\u0003HÆ\u0001J\u0013\u0010'\u001a\u00020\n2\b\u0010(\u001a\u0004\u0018\u00010)HÖ\u0003J\t\u0010*\u001a\u00020\u0006HÖ\u0001J\t\u0010+\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0014\u0010\u0004\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0015R\u0011\u0010\b\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0015R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0018R\u0017\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00010\f¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0011\u0010\r\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0018R\u0011\u0010\u000e\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u0012¨\u0006,"}, d2 = {"Lcom/discord/chat/presentation/list/item/BlockedGroupChatListItem;", "Lcom/discord/chat/presentation/list/item/ChatListItem;", "text", "", StackTraceHelper.ID_KEY, "textColor", "", ViewProps.BACKGROUND_COLOR, ViewProps.BORDER_COLOR, "isRevealed", "", "content", "", "canUncollapse", "actionType", "<init>", "(Ljava/lang/String;Ljava/lang/String;IIIZLjava/util/List;ZLjava/lang/String;)V", "getText", "()Ljava/lang/String;", "getId", "getTextColor", "()I", "getBackgroundColor", "getBorderColor", "()Z", "getContent", "()Ljava/util/List;", "getCanUncollapse", "getActionType", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "copy", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class BlockedGroupChatListItem extends ChatListItem {

    @NotNull
    private final String actionType;
    private final int backgroundColor;
    private final int borderColor;
    private final boolean canUncollapse;

    @NotNull
    private final List<ChatListItem> content;

    @NotNull
    private final String id;
    private final boolean isRevealed;

    @NotNull
    private final String text;
    private final int textColor;

    public /* synthetic */ BlockedGroupChatListItem(String str, String str2, int i5, int i6, int i10, boolean z5, List list, boolean z6, String str3, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, i5, i6, i10, z5, list, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? true : z6, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? "toggle" : str3);
    }

    public static /* synthetic */ BlockedGroupChatListItem copy$default(BlockedGroupChatListItem blockedGroupChatListItem, String str, String str2, int i5, int i6, int i10, boolean z5, List list, boolean z6, String str3, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            str = blockedGroupChatListItem.text;
        }
        if ((i11 & 2) != 0) {
            str2 = blockedGroupChatListItem.id;
        }
        if ((i11 & 4) != 0) {
            i5 = blockedGroupChatListItem.textColor;
        }
        if ((i11 & 8) != 0) {
            i6 = blockedGroupChatListItem.backgroundColor;
        }
        if ((i11 & 16) != 0) {
            i10 = blockedGroupChatListItem.borderColor;
        }
        if ((i11 & 32) != 0) {
            z5 = blockedGroupChatListItem.isRevealed;
        }
        if ((i11 & 64) != 0) {
            list = blockedGroupChatListItem.content;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            z6 = blockedGroupChatListItem.canUncollapse;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            str3 = blockedGroupChatListItem.actionType;
        }
        boolean z7 = z6;
        String str4 = str3;
        boolean z8 = z5;
        List list2 = list;
        int i12 = i10;
        int i13 = i5;
        return blockedGroupChatListItem.copy(str, str2, i13, i6, i12, z8, list2, z7, str4);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getText() {
        return this.text;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component3, reason: from getter */
    public final int getTextColor() {
        return this.textColor;
    }

    /* renamed from: component4, reason: from getter */
    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component5, reason: from getter */
    public final int getBorderColor() {
        return this.borderColor;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getIsRevealed() {
        return this.isRevealed;
    }

    @NotNull
    public final List<ChatListItem> component7() {
        return this.content;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getCanUncollapse() {
        return this.canUncollapse;
    }

    @NotNull
    /* renamed from: component9, reason: from getter */
    public final String getActionType() {
        return this.actionType;
    }

    @NotNull
    public final BlockedGroupChatListItem copy(@NotNull String text, @NotNull String id2, int textColor, int backgroundColor, int borderColor, boolean isRevealed, @NotNull List<? extends ChatListItem> content, boolean canUncollapse, @NotNull String actionType) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(actionType, "actionType");
        return new BlockedGroupChatListItem(text, id2, textColor, backgroundColor, borderColor, isRevealed, content, canUncollapse, actionType);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof BlockedGroupChatListItem)) {
            return false;
        }
        BlockedGroupChatListItem blockedGroupChatListItem = (BlockedGroupChatListItem) other;
        return Intrinsics.areEqual(this.text, blockedGroupChatListItem.text) && Intrinsics.areEqual(this.id, blockedGroupChatListItem.id) && this.textColor == blockedGroupChatListItem.textColor && this.backgroundColor == blockedGroupChatListItem.backgroundColor && this.borderColor == blockedGroupChatListItem.borderColor && this.isRevealed == blockedGroupChatListItem.isRevealed && Intrinsics.areEqual(this.content, blockedGroupChatListItem.content) && this.canUncollapse == blockedGroupChatListItem.canUncollapse && Intrinsics.areEqual(this.actionType, blockedGroupChatListItem.actionType);
    }

    @NotNull
    public final String getActionType() {
        return this.actionType;
    }

    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    public final int getBorderColor() {
        return this.borderColor;
    }

    public final boolean getCanUncollapse() {
        return this.canUncollapse;
    }

    @NotNull
    public final List<ChatListItem> getContent() {
        return this.content;
    }

    @Override // com.discord.chat.presentation.list.item.ChatListItem
    @NotNull
    public String getId() {
        return this.id;
    }

    @NotNull
    public final String getText() {
        return this.text;
    }

    public final int getTextColor() {
        return this.textColor;
    }

    public int hashCode() {
        return this.actionType.hashCode() + d.d(e.e(this.content, d.d(a.u(this.borderColor, a.u(this.backgroundColor, a.u(this.textColor, e.d(this.text.hashCode() * 31, 31, this.id), 31), 31), 31), 31, this.isRevealed), 31), 31, this.canUncollapse);
    }

    public final boolean isRevealed() {
        return this.isRevealed;
    }

    @NotNull
    public String toString() {
        String str = this.text;
        String str2 = this.id;
        int i5 = this.textColor;
        int i6 = this.backgroundColor;
        int i10 = this.borderColor;
        boolean z5 = this.isRevealed;
        List<ChatListItem> list = this.content;
        boolean z6 = this.canUncollapse;
        String str3 = this.actionType;
        StringBuilder t5 = e.t("BlockedGroupChatListItem(text=", str, ", id=", str2, ", textColor=");
        e.y(t5, i5, ", backgroundColor=", i6, ", borderColor=");
        t5.append(i10);
        t5.append(", isRevealed=");
        t5.append(z5);
        t5.append(", content=");
        t5.append(list);
        t5.append(", canUncollapse=");
        t5.append(z6);
        t5.append(", actionType=");
        return a.j(t5, str3, ")");
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BlockedGroupChatListItem(@NotNull String text, @NotNull String id2, int i5, int i6, int i10, boolean z5, @NotNull List<? extends ChatListItem> content, boolean z6, @NotNull String actionType) {
        super(id2, null);
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(actionType, "actionType");
        this.text = text;
        this.id = id2;
        this.textColor = i5;
        this.backgroundColor = i6;
        this.borderColor = i10;
        this.isRevealed = z5;
        this.content = content;
        this.canUncollapse = z6;
        this.actionType = actionType;
    }
}
