package com.discord.chat.presentation.message.messagepart;

import a3.e;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.truncation.Truncation;
import com.discord.fonts.DiscordFont;
import com.discord.jank_stats.JankRecordStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.primitives.MessageId;
import com.discord.theme.DiscordThemeObject;
import com.discord.theme.ThemeManagerKt;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b<\n\u0002\u0010\u0000\n\u0002\b\u0003\b\u0086\b\u0018\u00002\u00020\u0001B¿\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\t\u0012\b\b\u0002\u0010\u000b\u001a\u00020\t\u0012\u0006\u0010\f\u001a\u00020\t\u0012\u0006\u0010\r\u001a\u00020\t\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\b\b\u0001\u0010\u0010\u001a\u00020\u000f\u0012\u0006\u0010\u0011\u001a\u00020\u000f\u0012\u0006\u0010\u0012\u001a\u00020\u0013\u0012\u0006\u0010\u0014\u001a\u00020\u000f\u0012\u0006\u0010\u0015\u001a\u00020\t\u0012\u0006\u0010\u0016\u001a\u00020\u000f\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u000f\u0012\u0006\u0010\u001b\u001a\u00020\t\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u001d\u0012\b\b\u0002\u0010\u001e\u001a\u00020\u001f¢\u0006\u0004\b \u0010!J\u0010\u0010A\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\bB\u0010#J\t\u0010C\u001a\u00020\u0005HÆ\u0003J\t\u0010D\u001a\u00020\u0007HÆ\u0003J\t\u0010E\u001a\u00020\tHÆ\u0003J\t\u0010F\u001a\u00020\tHÆ\u0003J\t\u0010G\u001a\u00020\tHÆ\u0003J\t\u0010H\u001a\u00020\tHÆ\u0003J\t\u0010I\u001a\u00020\tHÆ\u0003J\t\u0010J\u001a\u00020\u000fHÆ\u0003J\t\u0010K\u001a\u00020\u000fHÆ\u0003J\t\u0010L\u001a\u00020\u000fHÆ\u0003J\t\u0010M\u001a\u00020\u0013HÆ\u0003J\t\u0010N\u001a\u00020\u000fHÆ\u0003J\t\u0010O\u001a\u00020\tHÆ\u0003J\t\u0010P\u001a\u00020\u000fHÆ\u0003J\u000b\u0010Q\u001a\u0004\u0018\u00010\u0018HÆ\u0003J\u000b\u0010R\u001a\u0004\u0018\u00010\u0018HÆ\u0003J\u0010\u0010S\u001a\u0004\u0018\u00010\u000fHÆ\u0003¢\u0006\u0002\u0010;J\t\u0010T\u001a\u00020\tHÆ\u0003J\u000b\u0010U\u001a\u0004\u0018\u00010\u001dHÆ\u0003J\t\u0010V\u001a\u00020\u001fHÆ\u0003Jê\u0001\u0010W\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\t2\b\b\u0002\u0010\u000b\u001a\u00020\t2\b\b\u0002\u0010\f\u001a\u00020\t2\b\b\u0002\u0010\r\u001a\u00020\t2\b\b\u0002\u0010\u000e\u001a\u00020\u000f2\b\b\u0003\u0010\u0010\u001a\u00020\u000f2\b\b\u0002\u0010\u0011\u001a\u00020\u000f2\b\b\u0002\u0010\u0012\u001a\u00020\u00132\b\b\u0002\u0010\u0014\u001a\u00020\u000f2\b\b\u0002\u0010\u0015\u001a\u00020\t2\b\b\u0002\u0010\u0016\u001a\u00020\u000f2\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u000f2\b\b\u0002\u0010\u001b\u001a\u00020\t2\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u001d2\b\b\u0002\u0010\u001e\u001a\u00020\u001fHÆ\u0001¢\u0006\u0004\bX\u0010YJ\u0013\u0010Z\u001a\u00020\t2\b\u0010[\u001a\u0004\u0018\u00010\\HÖ\u0003J\t\u0010]\u001a\u00020\u000fHÖ\u0001J\t\u0010^\u001a\u00020\u0018HÖ\u0001R\u0016\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\n\n\u0002\u0010$\u001a\u0004\b\"\u0010#R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b%\u0010&R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b'\u0010(R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b)\u0010*R\u0011\u0010\n\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b+\u0010*R\u0011\u0010\u000b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b,\u0010*R\u0011\u0010\f\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b-\u0010*R\u0011\u0010\r\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b.\u0010*R\u0011\u0010\u000e\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b/\u00100R\u0011\u0010\u0010\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b1\u00100R\u0011\u0010\u0011\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b2\u00100R\u0011\u0010\u0012\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b3\u00104R\u0011\u0010\u0014\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b5\u00100R\u0011\u0010\u0015\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b6\u0010*R\u0011\u0010\u0016\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b7\u00100R\u0013\u0010\u0017\u001a\u0004\u0018\u00010\u0018¢\u0006\b\n\u0000\u001a\u0004\b8\u0010#R\u0013\u0010\u0019\u001a\u0004\u0018\u00010\u0018¢\u0006\b\n\u0000\u001a\u0004\b9\u0010#R\u0015\u0010\u001a\u001a\u0004\u0018\u00010\u000f¢\u0006\n\n\u0002\u0010<\u001a\u0004\b:\u0010;R\u0011\u0010\u001b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010*R\u0013\u0010\u001c\u001a\u0004\u0018\u00010\u001d¢\u0006\b\n\u0000\u001a\u0004\b=\u0010>R\u0011\u0010\u001e\u001a\u00020\u001f¢\u0006\b\n\u0000\u001a\u0004\b?\u0010@¨\u0006_"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/MessageContentAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "messageId", "Lcom/discord/primitives/MessageId;", "margins", "Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "messageContent", "Lcom/discord/chat/bridge/structurabletext/StructurableText;", "shouldAnimateEmoji", "", "shouldShowLinkDecorations", "shouldForceRevealSpoilers", "shouldShowRoleDot", "shouldShowRoleOnName", "bottomSpacingPx", "", "linkColor", "messageTextColor", "messageFont", "Lcom/discord/fonts/DiscordFont;", "textSizeSp", "boldLinkText", "constrainedWidth", "editedLabel", "", "editedTimestamp", "editedLabelTextColor", "isForwardedContent", "truncation", "Lcom/discord/chat/bridge/truncation/Truncation;", "theme", "Lcom/discord/theme/DiscordThemeObject;", "<init>", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;Lcom/discord/chat/bridge/structurabletext/StructurableText;ZZZZZIIILcom/discord/fonts/DiscordFont;IZILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;ZLcom/discord/chat/bridge/truncation/Truncation;Lcom/discord/theme/DiscordThemeObject;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getMargins", "()Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "getMessageContent", "()Lcom/discord/chat/bridge/structurabletext/StructurableText;", "getShouldAnimateEmoji", "()Z", "getShouldShowLinkDecorations", "getShouldForceRevealSpoilers", "getShouldShowRoleDot", "getShouldShowRoleOnName", "getBottomSpacingPx", "()I", "getLinkColor", "getMessageTextColor", "getMessageFont", "()Lcom/discord/fonts/DiscordFont;", "getTextSizeSp", "getBoldLinkText", "getConstrainedWidth", "getEditedLabel", "getEditedTimestamp", "getEditedLabelTextColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getTruncation", "()Lcom/discord/chat/bridge/truncation/Truncation;", "getTheme", "()Lcom/discord/theme/DiscordThemeObject;", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "copy", "copy-CgeVRR0", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;Lcom/discord/chat/bridge/structurabletext/StructurableText;ZZZZZIIILcom/discord/fonts/DiscordFont;IZILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;ZLcom/discord/chat/bridge/truncation/Truncation;Lcom/discord/theme/DiscordThemeObject;)Lcom/discord/chat/presentation/message/messagepart/MessageContentAccessory;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MessageContentAccessory extends MessageAccessory {
    private final boolean boldLinkText;
    private final int bottomSpacingPx;
    private final int constrainedWidth;
    private final String editedLabel;
    private final Integer editedLabelTextColor;
    private final String editedTimestamp;
    private final boolean isForwardedContent;
    private final int linkColor;

    @NotNull
    private final MessageMargins margins;

    @NotNull
    private final StructurableText messageContent;

    @NotNull
    private final DiscordFont messageFont;

    @NotNull
    private final String messageId;
    private final int messageTextColor;
    private final boolean shouldAnimateEmoji;
    private final boolean shouldForceRevealSpoilers;
    private final boolean shouldShowLinkDecorations;
    private final boolean shouldShowRoleDot;
    private final boolean shouldShowRoleOnName;
    private final int textSizeSp;

    @NotNull
    private final DiscordThemeObject theme;
    private final Truncation truncation;

    public /* synthetic */ MessageContentAccessory(String str, MessageMargins messageMargins, StructurableText structurableText, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, int i5, int i6, int i10, DiscordFont discordFont, int i11, boolean z11, int i12, String str2, String str3, Integer num, boolean z12, Truncation truncation, DiscordThemeObject discordThemeObject, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, structurableText, z5, z6, z7, z8, z10, i5, i6, i10, discordFont, i11, z11, i12, str2, str3, num, z12, truncation, discordThemeObject);
    }

    /* renamed from: copy-CgeVRR0$default, reason: not valid java name */
    public static /* synthetic */ MessageContentAccessory m677copyCgeVRR0$default(MessageContentAccessory messageContentAccessory, String str, MessageMargins messageMargins, StructurableText structurableText, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, int i5, int i6, int i10, DiscordFont discordFont, int i11, boolean z11, int i12, String str2, String str3, Integer num, boolean z12, Truncation truncation, DiscordThemeObject discordThemeObject, int i13, Object obj) {
        DiscordThemeObject discordThemeObject2;
        Truncation truncation2;
        String str4 = (i13 & 1) != 0 ? messageContentAccessory.messageId : str;
        MessageMargins messageMargins2 = (i13 & 2) != 0 ? messageContentAccessory.margins : messageMargins;
        StructurableText structurableText2 = (i13 & 4) != 0 ? messageContentAccessory.messageContent : structurableText;
        boolean z13 = (i13 & 8) != 0 ? messageContentAccessory.shouldAnimateEmoji : z5;
        boolean z14 = (i13 & 16) != 0 ? messageContentAccessory.shouldShowLinkDecorations : z6;
        boolean z15 = (i13 & 32) != 0 ? messageContentAccessory.shouldForceRevealSpoilers : z7;
        boolean z16 = (i13 & 64) != 0 ? messageContentAccessory.shouldShowRoleDot : z8;
        boolean z17 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? messageContentAccessory.shouldShowRoleOnName : z10;
        int i14 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? messageContentAccessory.bottomSpacingPx : i5;
        int i15 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? messageContentAccessory.linkColor : i6;
        int i16 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? messageContentAccessory.messageTextColor : i10;
        DiscordFont discordFont2 = (i13 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? messageContentAccessory.messageFont : discordFont;
        int i17 = (i13 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? messageContentAccessory.textSizeSp : i11;
        boolean z18 = (i13 & 8192) != 0 ? messageContentAccessory.boldLinkText : z11;
        String str5 = str4;
        int i18 = (i13 & 16384) != 0 ? messageContentAccessory.constrainedWidth : i12;
        String str6 = (i13 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? messageContentAccessory.editedLabel : str2;
        String str7 = (i13 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? messageContentAccessory.editedTimestamp : str3;
        Integer num2 = (i13 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? messageContentAccessory.editedLabelTextColor : num;
        boolean z19 = (i13 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? messageContentAccessory.isForwardedContent : z12;
        Truncation truncation3 = (i13 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? messageContentAccessory.truncation : truncation;
        if ((i13 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0) {
            truncation2 = truncation3;
            discordThemeObject2 = messageContentAccessory.theme;
        } else {
            discordThemeObject2 = discordThemeObject;
            truncation2 = truncation3;
        }
        return messageContentAccessory.m679copyCgeVRR0(str5, messageMargins2, structurableText2, z13, z14, z15, z16, z17, i14, i15, i16, discordFont2, i17, z18, i18, str6, str7, num2, z19, truncation2, discordThemeObject2);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component10, reason: from getter */
    public final int getLinkColor() {
        return this.linkColor;
    }

    /* renamed from: component11, reason: from getter */
    public final int getMessageTextColor() {
        return this.messageTextColor;
    }

    @NotNull
    /* renamed from: component12, reason: from getter */
    public final DiscordFont getMessageFont() {
        return this.messageFont;
    }

    /* renamed from: component13, reason: from getter */
    public final int getTextSizeSp() {
        return this.textSizeSp;
    }

    /* renamed from: component14, reason: from getter */
    public final boolean getBoldLinkText() {
        return this.boldLinkText;
    }

    /* renamed from: component15, reason: from getter */
    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    /* renamed from: component16, reason: from getter */
    public final String getEditedLabel() {
        return this.editedLabel;
    }

    /* renamed from: component17, reason: from getter */
    public final String getEditedTimestamp() {
        return this.editedTimestamp;
    }

    /* renamed from: component18, reason: from getter */
    public final Integer getEditedLabelTextColor() {
        return this.editedLabelTextColor;
    }

    /* renamed from: component19, reason: from getter */
    public final boolean getIsForwardedContent() {
        return this.isForwardedContent;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final MessageMargins getMargins() {
        return this.margins;
    }

    /* renamed from: component20, reason: from getter */
    public final Truncation getTruncation() {
        return this.truncation;
    }

    @NotNull
    /* renamed from: component21, reason: from getter */
    public final DiscordThemeObject getTheme() {
        return this.theme;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final StructurableText getMessageContent() {
        return this.messageContent;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getShouldShowLinkDecorations() {
        return this.shouldShowLinkDecorations;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getShouldForceRevealSpoilers() {
        return this.shouldForceRevealSpoilers;
    }

    /* renamed from: component7, reason: from getter */
    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getShouldShowRoleOnName() {
        return this.shouldShowRoleOnName;
    }

    /* renamed from: component9, reason: from getter */
    public final int getBottomSpacingPx() {
        return this.bottomSpacingPx;
    }

    @NotNull
    /* renamed from: copy-CgeVRR0, reason: not valid java name */
    public final MessageContentAccessory m679copyCgeVRR0(@NotNull String messageId, @NotNull MessageMargins margins, @NotNull StructurableText messageContent, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldForceRevealSpoilers, boolean shouldShowRoleDot, boolean shouldShowRoleOnName, int bottomSpacingPx, int linkColor, int messageTextColor, @NotNull DiscordFont messageFont, int textSizeSp, boolean boldLinkText, int constrainedWidth, String editedLabel, String editedTimestamp, Integer editedLabelTextColor, boolean isForwardedContent, Truncation truncation, @NotNull DiscordThemeObject theme) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(messageContent, "messageContent");
        Intrinsics.checkNotNullParameter(messageFont, "messageFont");
        Intrinsics.checkNotNullParameter(theme, "theme");
        return new MessageContentAccessory(messageId, margins, messageContent, shouldAnimateEmoji, shouldShowLinkDecorations, shouldForceRevealSpoilers, shouldShowRoleDot, shouldShowRoleOnName, bottomSpacingPx, linkColor, messageTextColor, messageFont, textSizeSp, boldLinkText, constrainedWidth, editedLabel, editedTimestamp, editedLabelTextColor, isForwardedContent, truncation, theme, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MessageContentAccessory)) {
            return false;
        }
        MessageContentAccessory messageContentAccessory = (MessageContentAccessory) other;
        return MessageId.m1193equalsimpl0(this.messageId, messageContentAccessory.messageId) && Intrinsics.areEqual(this.margins, messageContentAccessory.margins) && Intrinsics.areEqual(this.messageContent, messageContentAccessory.messageContent) && this.shouldAnimateEmoji == messageContentAccessory.shouldAnimateEmoji && this.shouldShowLinkDecorations == messageContentAccessory.shouldShowLinkDecorations && this.shouldForceRevealSpoilers == messageContentAccessory.shouldForceRevealSpoilers && this.shouldShowRoleDot == messageContentAccessory.shouldShowRoleDot && this.shouldShowRoleOnName == messageContentAccessory.shouldShowRoleOnName && this.bottomSpacingPx == messageContentAccessory.bottomSpacingPx && this.linkColor == messageContentAccessory.linkColor && this.messageTextColor == messageContentAccessory.messageTextColor && this.messageFont == messageContentAccessory.messageFont && this.textSizeSp == messageContentAccessory.textSizeSp && this.boldLinkText == messageContentAccessory.boldLinkText && this.constrainedWidth == messageContentAccessory.constrainedWidth && Intrinsics.areEqual(this.editedLabel, messageContentAccessory.editedLabel) && Intrinsics.areEqual(this.editedTimestamp, messageContentAccessory.editedTimestamp) && Intrinsics.areEqual(this.editedLabelTextColor, messageContentAccessory.editedLabelTextColor) && this.isForwardedContent == messageContentAccessory.isForwardedContent && Intrinsics.areEqual(this.truncation, messageContentAccessory.truncation) && Intrinsics.areEqual(this.theme, messageContentAccessory.theme);
    }

    public final boolean getBoldLinkText() {
        return this.boldLinkText;
    }

    public final int getBottomSpacingPx() {
        return this.bottomSpacingPx;
    }

    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    public final String getEditedLabel() {
        return this.editedLabel;
    }

    public final Integer getEditedLabelTextColor() {
        return this.editedLabelTextColor;
    }

    public final String getEditedTimestamp() {
        return this.editedTimestamp;
    }

    public final int getLinkColor() {
        return this.linkColor;
    }

    @NotNull
    public final MessageMargins getMargins() {
        return this.margins;
    }

    @NotNull
    public final StructurableText getMessageContent() {
        return this.messageContent;
    }

    @NotNull
    public final DiscordFont getMessageFont() {
        return this.messageFont;
    }

    @Override // com.discord.chat.presentation.message.messagepart.MessageAccessory
    @NotNull
    /* renamed from: getMessageId-3Eiw7ao */
    public String getMessageId() {
        return this.messageId;
    }

    public final int getMessageTextColor() {
        return this.messageTextColor;
    }

    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    public final boolean getShouldForceRevealSpoilers() {
        return this.shouldForceRevealSpoilers;
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

    public final int getTextSizeSp() {
        return this.textSizeSp;
    }

    @NotNull
    public final DiscordThemeObject getTheme() {
        return this.theme;
    }

    public final Truncation getTruncation() {
        return this.truncation;
    }

    public int hashCode() {
        int u5 = a.u(this.constrainedWidth, d.d(a.u(this.textSizeSp, (this.messageFont.hashCode() + a.u(this.messageTextColor, a.u(this.linkColor, a.u(this.bottomSpacingPx, d.d(d.d(d.d(d.d(d.d((this.messageContent.hashCode() + ((this.margins.hashCode() + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31)) * 31, 31, this.shouldAnimateEmoji), 31, this.shouldShowLinkDecorations), 31, this.shouldForceRevealSpoilers), 31, this.shouldShowRoleDot), 31, this.shouldShowRoleOnName), 31), 31), 31)) * 31, 31), 31, this.boldLinkText), 31);
        String str = this.editedLabel;
        int hashCode = (u5 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.editedTimestamp;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        Integer num = this.editedLabelTextColor;
        int d6 = d.d((hashCode2 + (num == null ? 0 : num.hashCode())) * 31, 31, this.isForwardedContent);
        Truncation truncation = this.truncation;
        return this.theme.hashCode() + ((d6 + (truncation != null ? truncation.hashCode() : 0)) * 31);
    }

    public final boolean isForwardedContent() {
        return this.isForwardedContent;
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        MessageMargins messageMargins = this.margins;
        StructurableText structurableText = this.messageContent;
        boolean z5 = this.shouldAnimateEmoji;
        boolean z6 = this.shouldShowLinkDecorations;
        boolean z7 = this.shouldForceRevealSpoilers;
        boolean z8 = this.shouldShowRoleDot;
        boolean z10 = this.shouldShowRoleOnName;
        int i5 = this.bottomSpacingPx;
        int i6 = this.linkColor;
        int i10 = this.messageTextColor;
        DiscordFont discordFont = this.messageFont;
        int i11 = this.textSizeSp;
        boolean z11 = this.boldLinkText;
        int i12 = this.constrainedWidth;
        String str = this.editedLabel;
        String str2 = this.editedTimestamp;
        Integer num = this.editedLabelTextColor;
        boolean z12 = this.isForwardedContent;
        Truncation truncation = this.truncation;
        DiscordThemeObject discordThemeObject = this.theme;
        StringBuilder sb2 = new StringBuilder("MessageContentAccessory(messageId=");
        sb2.append(m1196toStringimpl);
        sb2.append(", margins=");
        sb2.append(messageMargins);
        sb2.append(", messageContent=");
        sb2.append(structurableText);
        sb2.append(", shouldAnimateEmoji=");
        sb2.append(z5);
        sb2.append(", shouldShowLinkDecorations=");
        a.s(sb2, z6, ", shouldForceRevealSpoilers=", z7, ", shouldShowRoleDot=");
        a.s(sb2, z8, ", shouldShowRoleOnName=", z10, ", bottomSpacingPx=");
        e.y(sb2, i5, ", linkColor=", i6, ", messageTextColor=");
        sb2.append(i10);
        sb2.append(", messageFont=");
        sb2.append(discordFont);
        sb2.append(", textSizeSp=");
        sb2.append(i11);
        sb2.append(", boldLinkText=");
        sb2.append(z11);
        sb2.append(", constrainedWidth=");
        e.z(sb2, i12, ", editedLabel=", str, ", editedTimestamp=");
        a.r(num, str2, ", editedLabelTextColor=", ", isForwardedContent=", sb2);
        sb2.append(z12);
        sb2.append(", truncation=");
        sb2.append(truncation);
        sb2.append(", theme=");
        sb2.append(discordThemeObject);
        sb2.append(")");
        return sb2.toString();
    }

    public /* synthetic */ MessageContentAccessory(String str, MessageMargins messageMargins, StructurableText structurableText, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, int i5, int i6, int i10, DiscordFont discordFont, int i11, boolean z11, int i12, String str2, String str3, Integer num, boolean z12, Truncation truncation, DiscordThemeObject discordThemeObject, int i13, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, structurableText, z5, z6, (i13 & 32) != 0 ? false : z7, z8, z10, i5, i6, i10, discordFont, i11, z11, i12, str2, str3, num, z12, (i13 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? null : truncation, (i13 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? ThemeManagerKt.getTheme() : discordThemeObject, null);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private MessageContentAccessory(String messageId, MessageMargins margins, StructurableText messageContent, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, int i5, int i6, int i10, DiscordFont messageFont, int i11, boolean z11, int i12, String str, String str2, Integer num, boolean z12, Truncation truncation, DiscordThemeObject theme) {
        super(messageId, "message content", false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(messageContent, "messageContent");
        Intrinsics.checkNotNullParameter(messageFont, "messageFont");
        Intrinsics.checkNotNullParameter(theme, "theme");
        this.messageId = messageId;
        this.margins = margins;
        this.messageContent = messageContent;
        this.shouldAnimateEmoji = z5;
        this.shouldShowLinkDecorations = z6;
        this.shouldForceRevealSpoilers = z7;
        this.shouldShowRoleDot = z8;
        this.shouldShowRoleOnName = z10;
        this.bottomSpacingPx = i5;
        this.linkColor = i6;
        this.messageTextColor = i10;
        this.messageFont = messageFont;
        this.textSizeSp = i11;
        this.boldLinkText = z11;
        this.constrainedWidth = i12;
        this.editedLabel = str;
        this.editedTimestamp = str2;
        this.editedLabelTextColor = num;
        this.isForwardedContent = z12;
        this.truncation = truncation;
        this.theme = theme;
    }
}
