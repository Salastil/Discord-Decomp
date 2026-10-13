package com.discord.chat.presentation.message.messagepart;

import a3.e;
import android.view.View;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.embed.Embed;
import com.discord.chat.bridge.spoiler.SpoilerAttributes;
import com.discord.chat.presentation.media.PortalUiModel;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b3\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u00012\u00020\u0002B\u008d\u0001\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\b\u0012\u0006\u0010\f\u001a\u00020\b\u0012\u0006\u0010\r\u001a\u00020\u000e\u0012\u0006\u0010\u000f\u001a\u00020\u0010\u0012\u0006\u0010\u0011\u001a\u00020\u0010\u0012\u0006\u0010\u0012\u001a\u00020\u0010\u0012\b\b\u0002\u0010\u0013\u001a\u00020\u0010\u0012\u0006\u0010\u0014\u001a\u00020\u0010\u0012\u0006\u0010\u0015\u001a\u00020\u0010\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017\u0012\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019\u0012\u0006\u0010\u001a\u001a\u00020\u0010¢\u0006\u0004\b\u001b\u0010\u001cJ\u0010\u00106\u001a\u00020\u0004HÆ\u0003¢\u0006\u0004\b7\u0010\u001eJ\t\u00108\u001a\u00020\u0006HÆ\u0003J\t\u00109\u001a\u00020\bHÆ\u0003J\u0010\u0010:\u001a\u00020\nHÆ\u0003¢\u0006\u0004\b;\u0010%J\t\u0010<\u001a\u00020\bHÆ\u0003J\t\u0010=\u001a\u00020\bHÆ\u0003J\t\u0010>\u001a\u00020\u000eHÆ\u0003J\t\u0010?\u001a\u00020\u0010HÆ\u0003J\t\u0010@\u001a\u00020\u0010HÆ\u0003J\t\u0010A\u001a\u00020\u0010HÆ\u0003J\t\u0010B\u001a\u00020\u0010HÆ\u0003J\t\u0010C\u001a\u00020\u0010HÆ\u0003J\t\u0010D\u001a\u00020\u0010HÆ\u0003J\u000b\u0010E\u001a\u0004\u0018\u00010\u0017HÆ\u0003J\u000b\u0010F\u001a\u0004\u0018\u00010\u0019HÆ\u0003J\t\u0010G\u001a\u00020\u0010HÆ\u0003J´\u0001\u0010H\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\b2\b\b\u0002\u0010\f\u001a\u00020\b2\b\b\u0002\u0010\r\u001a\u00020\u000e2\b\b\u0002\u0010\u000f\u001a\u00020\u00102\b\b\u0002\u0010\u0011\u001a\u00020\u00102\b\b\u0002\u0010\u0012\u001a\u00020\u00102\b\b\u0002\u0010\u0013\u001a\u00020\u00102\b\b\u0002\u0010\u0014\u001a\u00020\u00102\b\b\u0002\u0010\u0015\u001a\u00020\u00102\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u00172\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\u00192\b\b\u0002\u0010\u001a\u001a\u00020\u0010HÆ\u0001¢\u0006\u0004\bI\u0010JJ\u0013\u0010K\u001a\u00020\u00102\b\u0010L\u001a\u0004\u0018\u00010MHÖ\u0003J\t\u0010N\u001a\u00020\bHÖ\u0001J\t\u0010O\u001a\u00020PHÖ\u0001R\u0016\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010\u001f\u001a\u0004\b\u001d\u0010\u001eR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u0014\u0010\u0007\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010#R\u0013\u0010\t\u001a\u00020\n¢\u0006\n\n\u0002\u0010&\u001a\u0004\b$\u0010%R\u0011\u0010\u000b\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b'\u0010#R\u0011\u0010\f\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b(\u0010#R\u0011\u0010\r\u001a\u00020\u000e¢\u0006\b\n\u0000\u001a\u0004\b)\u0010*R\u0011\u0010\u000f\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b+\u0010,R\u0011\u0010\u0011\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b-\u0010,R\u0011\u0010\u0012\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b.\u0010,R\u0011\u0010\u0013\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b/\u0010,R\u0011\u0010\u0014\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b0\u0010,R\u0011\u0010\u0015\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b1\u0010,R\u0013\u0010\u0016\u001a\u0004\u0018\u00010\u0017¢\u0006\b\n\u0000\u001a\u0004\b2\u00103R\u0013\u0010\u0018\u001a\u0004\u0018\u00010\u0019¢\u0006\b\n\u0000\u001a\u0004\b4\u00105R\u0011\u0010\u001a\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010,¨\u0006Q"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/EmbedMessageAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "Lcom/discord/chat/presentation/media/PortalUiModel;", "messageId", "Lcom/discord/primitives/MessageId;", "margins", "Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "index", "", "channelId", "Lcom/discord/primitives/ChannelId;", "constrainedWidth", "radiusPx", "embed", "Lcom/discord/chat/bridge/embed/Embed;", "shouldAutoPlayGifs", "", "shouldAnimateEmoji", "shouldShowLinkDecorations", "shouldForceRevealSpoilers", "shouldShowRoleDot", "shouldShowRoleOnName", "spoilerAttributes", "Lcom/discord/chat/bridge/spoiler/SpoilerAttributes;", "onLongClick", "Landroid/view/View$OnLongClickListener;", "isForwardedContent", "<init>", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;IJIILcom/discord/chat/bridge/embed/Embed;ZZZZZZLcom/discord/chat/bridge/spoiler/SpoilerAttributes;Landroid/view/View$OnLongClickListener;ZLkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getMargins", "()Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "getIndex", "()I", "getChannelId-o4g7jtM", "()J", "J", "getConstrainedWidth", "getRadiusPx", "getEmbed", "()Lcom/discord/chat/bridge/embed/Embed;", "getShouldAutoPlayGifs", "()Z", "getShouldAnimateEmoji", "getShouldShowLinkDecorations", "getShouldForceRevealSpoilers", "getShouldShowRoleDot", "getShouldShowRoleOnName", "getSpoilerAttributes", "()Lcom/discord/chat/bridge/spoiler/SpoilerAttributes;", "getOnLongClick", "()Landroid/view/View$OnLongClickListener;", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component4-o4g7jtM", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "copy", "copy-sCV3xDs", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;IJIILcom/discord/chat/bridge/embed/Embed;ZZZZZZLcom/discord/chat/bridge/spoiler/SpoilerAttributes;Landroid/view/View$OnLongClickListener;Z)Lcom/discord/chat/presentation/message/messagepart/EmbedMessageAccessory;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class EmbedMessageAccessory extends MessageAccessory implements PortalUiModel {
    private final long channelId;
    private final int constrainedWidth;

    @NotNull
    private final Embed embed;
    private final int index;
    private final boolean isForwardedContent;

    @NotNull
    private final MessageMargins margins;

    @NotNull
    private final String messageId;
    private final View.OnLongClickListener onLongClick;
    private final int radiusPx;
    private final boolean shouldAnimateEmoji;
    private final boolean shouldAutoPlayGifs;
    private final boolean shouldForceRevealSpoilers;
    private final boolean shouldShowLinkDecorations;
    private final boolean shouldShowRoleDot;
    private final boolean shouldShowRoleOnName;
    private final SpoilerAttributes spoilerAttributes;

    public /* synthetic */ EmbedMessageAccessory(String str, MessageMargins messageMargins, int i5, long j, int i6, int i10, Embed embed, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, SpoilerAttributes spoilerAttributes, View.OnLongClickListener onLongClickListener, boolean z12, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, i5, j, i6, i10, embed, z5, z6, z7, z8, z10, z11, spoilerAttributes, onLongClickListener, z12);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component10, reason: from getter */
    public final boolean getShouldShowLinkDecorations() {
        return this.shouldShowLinkDecorations;
    }

    /* renamed from: component11, reason: from getter */
    public final boolean getShouldForceRevealSpoilers() {
        return this.shouldForceRevealSpoilers;
    }

    /* renamed from: component12, reason: from getter */
    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    /* renamed from: component13, reason: from getter */
    public final boolean getShouldShowRoleOnName() {
        return this.shouldShowRoleOnName;
    }

    /* renamed from: component14, reason: from getter */
    public final SpoilerAttributes getSpoilerAttributes() {
        return this.spoilerAttributes;
    }

    /* renamed from: component15, reason: from getter */
    public final View.OnLongClickListener getOnLongClick() {
        return this.onLongClick;
    }

    /* renamed from: component16, reason: from getter */
    public final boolean getIsForwardedContent() {
        return this.isForwardedContent;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final MessageMargins getMargins() {
        return this.margins;
    }

    /* renamed from: component3, reason: from getter */
    public final int getIndex() {
        return this.index;
    }

    /* renamed from: component4-o4g7jtM, reason: not valid java name and from getter */
    public final long getChannelId() {
        return this.channelId;
    }

    /* renamed from: component5, reason: from getter */
    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    /* renamed from: component6, reason: from getter */
    public final int getRadiusPx() {
        return this.radiusPx;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final Embed getEmbed() {
        return this.embed;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getShouldAutoPlayGifs() {
        return this.shouldAutoPlayGifs;
    }

    /* renamed from: component9, reason: from getter */
    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    @NotNull
    /* renamed from: copy-sCV3xDs, reason: not valid java name */
    public final EmbedMessageAccessory m612copysCV3xDs(@NotNull String messageId, @NotNull MessageMargins margins, int index, long channelId, int constrainedWidth, int radiusPx, @NotNull Embed embed, boolean shouldAutoPlayGifs, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldForceRevealSpoilers, boolean shouldShowRoleDot, boolean shouldShowRoleOnName, SpoilerAttributes spoilerAttributes, View.OnLongClickListener onLongClick, boolean isForwardedContent) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(embed, "embed");
        return new EmbedMessageAccessory(messageId, margins, index, channelId, constrainedWidth, radiusPx, embed, shouldAutoPlayGifs, shouldAnimateEmoji, shouldShowLinkDecorations, shouldForceRevealSpoilers, shouldShowRoleDot, shouldShowRoleOnName, spoilerAttributes, onLongClick, isForwardedContent, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof EmbedMessageAccessory)) {
            return false;
        }
        EmbedMessageAccessory embedMessageAccessory = (EmbedMessageAccessory) other;
        return MessageId.m1193equalsimpl0(this.messageId, embedMessageAccessory.messageId) && Intrinsics.areEqual(this.margins, embedMessageAccessory.margins) && this.index == embedMessageAccessory.index && ChannelId.m1167equalsimpl0(this.channelId, embedMessageAccessory.channelId) && this.constrainedWidth == embedMessageAccessory.constrainedWidth && this.radiusPx == embedMessageAccessory.radiusPx && Intrinsics.areEqual(this.embed, embedMessageAccessory.embed) && this.shouldAutoPlayGifs == embedMessageAccessory.shouldAutoPlayGifs && this.shouldAnimateEmoji == embedMessageAccessory.shouldAnimateEmoji && this.shouldShowLinkDecorations == embedMessageAccessory.shouldShowLinkDecorations && this.shouldForceRevealSpoilers == embedMessageAccessory.shouldForceRevealSpoilers && this.shouldShowRoleDot == embedMessageAccessory.shouldShowRoleDot && this.shouldShowRoleOnName == embedMessageAccessory.shouldShowRoleOnName && Intrinsics.areEqual(this.spoilerAttributes, embedMessageAccessory.spoilerAttributes) && Intrinsics.areEqual(this.onLongClick, embedMessageAccessory.onLongClick) && this.isForwardedContent == embedMessageAccessory.isForwardedContent;
    }

    /* renamed from: getChannelId-o4g7jtM, reason: not valid java name */
    public final long m613getChannelIdo4g7jtM() {
        return this.channelId;
    }

    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    @NotNull
    public final Embed getEmbed() {
        return this.embed;
    }

    @Override // com.discord.chat.presentation.media.PortalUiModel
    public int getIndex() {
        return this.index;
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

    public final View.OnLongClickListener getOnLongClick() {
        return this.onLongClick;
    }

    @Override // com.discord.chat.presentation.media.PortalUiModel
    public double getPortal() {
        return PortalUiModel.DefaultImpls.getPortal(this);
    }

    public final int getRadiusPx() {
        return this.radiusPx;
    }

    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    public final boolean getShouldAutoPlayGifs() {
        return this.shouldAutoPlayGifs;
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

    public final SpoilerAttributes getSpoilerAttributes() {
        return this.spoilerAttributes;
    }

    public int hashCode() {
        int d6 = d.d(d.d(d.d(d.d(d.d(d.d((this.embed.hashCode() + a.u(this.radiusPx, a.u(this.constrainedWidth, d.e(this.channelId, a.u(this.index, (this.margins.hashCode() + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31, 31), 31), 31), 31)) * 31, 31, this.shouldAutoPlayGifs), 31, this.shouldAnimateEmoji), 31, this.shouldShowLinkDecorations), 31, this.shouldForceRevealSpoilers), 31, this.shouldShowRoleDot), 31, this.shouldShowRoleOnName);
        SpoilerAttributes spoilerAttributes = this.spoilerAttributes;
        int hashCode = (d6 + (spoilerAttributes == null ? 0 : spoilerAttributes.hashCode())) * 31;
        View.OnLongClickListener onLongClickListener = this.onLongClick;
        return Boolean.hashCode(this.isForwardedContent) + ((hashCode + (onLongClickListener != null ? onLongClickListener.hashCode() : 0)) * 31);
    }

    public final boolean isForwardedContent() {
        return this.isForwardedContent;
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        MessageMargins messageMargins = this.margins;
        int i5 = this.index;
        String m1170toStringimpl = ChannelId.m1170toStringimpl(this.channelId);
        int i6 = this.constrainedWidth;
        int i10 = this.radiusPx;
        Embed embed = this.embed;
        boolean z5 = this.shouldAutoPlayGifs;
        boolean z6 = this.shouldAnimateEmoji;
        boolean z7 = this.shouldShowLinkDecorations;
        boolean z8 = this.shouldForceRevealSpoilers;
        boolean z10 = this.shouldShowRoleDot;
        boolean z11 = this.shouldShowRoleOnName;
        SpoilerAttributes spoilerAttributes = this.spoilerAttributes;
        View.OnLongClickListener onLongClickListener = this.onLongClick;
        boolean z12 = this.isForwardedContent;
        StringBuilder sb2 = new StringBuilder("EmbedMessageAccessory(messageId=");
        sb2.append(m1196toStringimpl);
        sb2.append(", margins=");
        sb2.append(messageMargins);
        sb2.append(", index=");
        e.z(sb2, i5, ", channelId=", m1170toStringimpl, ", constrainedWidth=");
        e.y(sb2, i6, ", radiusPx=", i10, ", embed=");
        sb2.append(embed);
        sb2.append(", shouldAutoPlayGifs=");
        sb2.append(z5);
        sb2.append(", shouldAnimateEmoji=");
        a.s(sb2, z6, ", shouldShowLinkDecorations=", z7, ", shouldForceRevealSpoilers=");
        a.s(sb2, z8, ", shouldShowRoleDot=", z10, ", shouldShowRoleOnName=");
        sb2.append(z11);
        sb2.append(", spoilerAttributes=");
        sb2.append(spoilerAttributes);
        sb2.append(", onLongClick=");
        sb2.append(onLongClickListener);
        sb2.append(", isForwardedContent=");
        sb2.append(z12);
        sb2.append(")");
        return sb2.toString();
    }

    public /* synthetic */ EmbedMessageAccessory(String str, MessageMargins messageMargins, int i5, long j, int i6, int i10, Embed embed, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, SpoilerAttributes spoilerAttributes, View.OnLongClickListener onLongClickListener, boolean z12, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, i5, j, i6, i10, embed, z5, z6, z7, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? false : z8, z10, z11, spoilerAttributes, onLongClickListener, z12, null);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private EmbedMessageAccessory(String messageId, MessageMargins margins, int i5, long j, int i6, int i10, Embed embed, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, SpoilerAttributes spoilerAttributes, View.OnLongClickListener onLongClickListener, boolean z12) {
        super(messageId, "embed " + i5, false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(embed, "embed");
        this.messageId = messageId;
        this.margins = margins;
        this.index = i5;
        this.channelId = j;
        this.constrainedWidth = i6;
        this.radiusPx = i10;
        this.embed = embed;
        this.shouldAutoPlayGifs = z5;
        this.shouldAnimateEmoji = z6;
        this.shouldShowLinkDecorations = z7;
        this.shouldForceRevealSpoilers = z8;
        this.shouldShowRoleDot = z10;
        this.shouldShowRoleOnName = z11;
        this.spoilerAttributes = spoilerAttributes;
        this.onLongClick = onLongClickListener;
        this.isForwardedContent = z12;
    }
}
