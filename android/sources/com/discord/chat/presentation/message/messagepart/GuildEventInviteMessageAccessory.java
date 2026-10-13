package com.discord.chat.presentation.message.messagepart;

import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.codedlinks.GuildEventInviteEmbedImpl;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b!\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\u000b\u0012\u0006\u0010\r\u001a\u00020\u000b\u0012\u0006\u0010\u000e\u001a\u00020\u000b¢\u0006\u0004\b\u000f\u0010\u0010J\u0010\u0010\u001f\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b \u0010\u0012J\t\u0010!\u001a\u00020\u0005HÆ\u0003J\t\u0010\"\u001a\u00020\u0007HÆ\u0003J\t\u0010#\u001a\u00020\tHÆ\u0003J\t\u0010$\u001a\u00020\u000bHÆ\u0003J\t\u0010%\u001a\u00020\u000bHÆ\u0003J\t\u0010&\u001a\u00020\u000bHÆ\u0003J\t\u0010'\u001a\u00020\u000bHÆ\u0003J`\u0010(\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\u000b2\b\b\u0002\u0010\r\u001a\u00020\u000b2\b\b\u0002\u0010\u000e\u001a\u00020\u000bHÆ\u0001¢\u0006\u0004\b)\u0010*J\u0013\u0010+\u001a\u00020\u000b2\b\u0010,\u001a\u0004\u0018\u00010-HÖ\u0003J\t\u0010.\u001a\u00020\u0007HÖ\u0001J\t\u0010/\u001a\u000200HÖ\u0001R\u0016\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\n\n\u0002\u0010\u0013\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\f\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001bR\u0011\u0010\r\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001bR\u0011\u0010\u000e\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001b¨\u00061"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/GuildEventInviteMessageAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "messageId", "Lcom/discord/primitives/MessageId;", "margins", "Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "codedLinkIndex", "", "invite", "Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;", "shouldAnimateEmoji", "", "shouldShowLinkDecorations", "shouldShowRoleDot", "shouldShowRoleOnName", "<init>", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;ILcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;ZZZZLkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getMargins", "()Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "getCodedLinkIndex", "()I", "getInvite", "()Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;", "getShouldAnimateEmoji", "()Z", "getShouldShowLinkDecorations", "getShouldShowRoleDot", "getShouldShowRoleOnName", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "copy", "copy-NsYpSCE", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;ILcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;ZZZZ)Lcom/discord/chat/presentation/message/messagepart/GuildEventInviteMessageAccessory;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GuildEventInviteMessageAccessory extends MessageAccessory {
    private final int codedLinkIndex;

    @NotNull
    private final GuildEventInviteEmbedImpl invite;

    @NotNull
    private final MessageMargins margins;

    @NotNull
    private final String messageId;
    private final boolean shouldAnimateEmoji;
    private final boolean shouldShowLinkDecorations;
    private final boolean shouldShowRoleDot;
    private final boolean shouldShowRoleOnName;

    public /* synthetic */ GuildEventInviteMessageAccessory(String str, MessageMargins messageMargins, int i5, GuildEventInviteEmbedImpl guildEventInviteEmbedImpl, boolean z5, boolean z6, boolean z7, boolean z8, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, i5, guildEventInviteEmbedImpl, z5, z6, z7, z8);
    }

    /* renamed from: copy-NsYpSCE$default, reason: not valid java name */
    public static /* synthetic */ GuildEventInviteMessageAccessory m646copyNsYpSCE$default(GuildEventInviteMessageAccessory guildEventInviteMessageAccessory, String str, MessageMargins messageMargins, int i5, GuildEventInviteEmbedImpl guildEventInviteEmbedImpl, boolean z5, boolean z6, boolean z7, boolean z8, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = guildEventInviteMessageAccessory.messageId;
        }
        if ((i6 & 2) != 0) {
            messageMargins = guildEventInviteMessageAccessory.margins;
        }
        if ((i6 & 4) != 0) {
            i5 = guildEventInviteMessageAccessory.codedLinkIndex;
        }
        if ((i6 & 8) != 0) {
            guildEventInviteEmbedImpl = guildEventInviteMessageAccessory.invite;
        }
        if ((i6 & 16) != 0) {
            z5 = guildEventInviteMessageAccessory.shouldAnimateEmoji;
        }
        if ((i6 & 32) != 0) {
            z6 = guildEventInviteMessageAccessory.shouldShowLinkDecorations;
        }
        if ((i6 & 64) != 0) {
            z7 = guildEventInviteMessageAccessory.shouldShowRoleDot;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            z8 = guildEventInviteMessageAccessory.shouldShowRoleOnName;
        }
        boolean z10 = z7;
        boolean z11 = z8;
        boolean z12 = z5;
        boolean z13 = z6;
        return guildEventInviteMessageAccessory.m648copyNsYpSCE(str, messageMargins, i5, guildEventInviteEmbedImpl, z12, z13, z10, z11);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final MessageMargins getMargins() {
        return this.margins;
    }

    /* renamed from: component3, reason: from getter */
    public final int getCodedLinkIndex() {
        return this.codedLinkIndex;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final GuildEventInviteEmbedImpl getInvite() {
        return this.invite;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getShouldShowLinkDecorations() {
        return this.shouldShowLinkDecorations;
    }

    /* renamed from: component7, reason: from getter */
    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getShouldShowRoleOnName() {
        return this.shouldShowRoleOnName;
    }

    @NotNull
    /* renamed from: copy-NsYpSCE, reason: not valid java name */
    public final GuildEventInviteMessageAccessory m648copyNsYpSCE(@NotNull String messageId, @NotNull MessageMargins margins, int codedLinkIndex, @NotNull GuildEventInviteEmbedImpl invite, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldShowRoleDot, boolean shouldShowRoleOnName) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(invite, "invite");
        return new GuildEventInviteMessageAccessory(messageId, margins, codedLinkIndex, invite, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GuildEventInviteMessageAccessory)) {
            return false;
        }
        GuildEventInviteMessageAccessory guildEventInviteMessageAccessory = (GuildEventInviteMessageAccessory) other;
        return MessageId.m1193equalsimpl0(this.messageId, guildEventInviteMessageAccessory.messageId) && Intrinsics.areEqual(this.margins, guildEventInviteMessageAccessory.margins) && this.codedLinkIndex == guildEventInviteMessageAccessory.codedLinkIndex && Intrinsics.areEqual(this.invite, guildEventInviteMessageAccessory.invite) && this.shouldAnimateEmoji == guildEventInviteMessageAccessory.shouldAnimateEmoji && this.shouldShowLinkDecorations == guildEventInviteMessageAccessory.shouldShowLinkDecorations && this.shouldShowRoleDot == guildEventInviteMessageAccessory.shouldShowRoleDot && this.shouldShowRoleOnName == guildEventInviteMessageAccessory.shouldShowRoleOnName;
    }

    public final int getCodedLinkIndex() {
        return this.codedLinkIndex;
    }

    @NotNull
    public final GuildEventInviteEmbedImpl getInvite() {
        return this.invite;
    }

    @NotNull
    public final MessageMargins getMargins() {
        return this.margins;
    }

    @Override // com.discord.chat.presentation.message.messagepart.MessageAccessory
    @NotNull
    /* renamed from: getMessageId-3Eiw7ao */
    public String getMessageId() {
        return this.messageId;
    }

    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    public final boolean getShouldShowLinkDecorations() {
        return this.shouldShowLinkDecorations;
    }

    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    public final boolean getShouldShowRoleOnName() {
        return this.shouldShowRoleOnName;
    }

    public int hashCode() {
        return Boolean.hashCode(this.shouldShowRoleOnName) + d.d(d.d(d.d((this.invite.hashCode() + a.u(this.codedLinkIndex, (this.margins.hashCode() + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31, 31)) * 31, 31, this.shouldAnimateEmoji), 31, this.shouldShowLinkDecorations), 31, this.shouldShowRoleDot);
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        MessageMargins messageMargins = this.margins;
        int i5 = this.codedLinkIndex;
        GuildEventInviteEmbedImpl guildEventInviteEmbedImpl = this.invite;
        boolean z5 = this.shouldAnimateEmoji;
        boolean z6 = this.shouldShowLinkDecorations;
        boolean z7 = this.shouldShowRoleDot;
        boolean z8 = this.shouldShowRoleOnName;
        StringBuilder sb2 = new StringBuilder("GuildEventInviteMessageAccessory(messageId=");
        sb2.append(m1196toStringimpl);
        sb2.append(", margins=");
        sb2.append(messageMargins);
        sb2.append(", codedLinkIndex=");
        sb2.append(i5);
        sb2.append(", invite=");
        sb2.append(guildEventInviteEmbedImpl);
        sb2.append(", shouldAnimateEmoji=");
        a.s(sb2, z5, ", shouldShowLinkDecorations=", z6, ", shouldShowRoleDot=");
        sb2.append(z7);
        sb2.append(", shouldShowRoleOnName=");
        sb2.append(z8);
        sb2.append(")");
        return sb2.toString();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private GuildEventInviteMessageAccessory(String messageId, MessageMargins margins, int i5, GuildEventInviteEmbedImpl invite, boolean z5, boolean z6, boolean z7, boolean z8) {
        super(messageId, "guild scheduled event invite " + i5, false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(invite, "invite");
        this.messageId = messageId;
        this.margins = margins;
        this.codedLinkIndex = i5;
        this.invite = invite;
        this.shouldAnimateEmoji = z5;
        this.shouldShowLinkDecorations = z6;
        this.shouldShowRoleDot = z7;
        this.shouldShowRoleOnName = z8;
    }
}
