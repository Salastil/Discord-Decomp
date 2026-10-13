package com.discord.chat.presentation.message.messagepart;

import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.codedlinks.EmbeddedActivityInviteEmbedImpl;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0017\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u0007¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\u0017\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0018\u0010\u000eJ\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001b\u001a\u00020\tHÆ\u0003J\t\u0010\u001c\u001a\u00020\u0007HÆ\u0003JB\u0010\u001d\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u001e\u0010\u001fJ\u0013\u0010 \u001a\u00020!2\b\u0010\"\u001a\u0004\u0018\u00010#HÖ\u0003J\t\u0010$\u001a\u00020\u0007HÖ\u0001J\t\u0010%\u001a\u00020&HÖ\u0001R\u0016\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\n\n\u0002\u0010\u000f\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\n\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0013¨\u0006'"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/EmbeddedActivityInviteMessageAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "messageId", "Lcom/discord/primitives/MessageId;", "margins", "Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "codedLinkIndex", "", "embeddedActivityInviteEmbed", "Lcom/discord/chat/bridge/codedlinks/EmbeddedActivityInviteEmbedImpl;", "constrainedWidth", "<init>", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;ILcom/discord/chat/bridge/codedlinks/EmbeddedActivityInviteEmbedImpl;ILkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getMargins", "()Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "getCodedLinkIndex", "()I", "getEmbeddedActivityInviteEmbed", "()Lcom/discord/chat/bridge/codedlinks/EmbeddedActivityInviteEmbedImpl;", "getConstrainedWidth", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component5", "copy", "copy-pPZZVto", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;ILcom/discord/chat/bridge/codedlinks/EmbeddedActivityInviteEmbedImpl;I)Lcom/discord/chat/presentation/message/messagepart/EmbeddedActivityInviteMessageAccessory;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class EmbeddedActivityInviteMessageAccessory extends MessageAccessory {
    private final int codedLinkIndex;
    private final int constrainedWidth;

    @NotNull
    private final EmbeddedActivityInviteEmbedImpl embeddedActivityInviteEmbed;

    @NotNull
    private final MessageMargins margins;

    @NotNull
    private final String messageId;

    public /* synthetic */ EmbeddedActivityInviteMessageAccessory(String str, MessageMargins messageMargins, int i5, EmbeddedActivityInviteEmbedImpl embeddedActivityInviteEmbedImpl, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, i5, embeddedActivityInviteEmbedImpl, i6);
    }

    /* renamed from: copy-pPZZVto$default, reason: not valid java name */
    public static /* synthetic */ EmbeddedActivityInviteMessageAccessory m614copypPZZVto$default(EmbeddedActivityInviteMessageAccessory embeddedActivityInviteMessageAccessory, String str, MessageMargins messageMargins, int i5, EmbeddedActivityInviteEmbedImpl embeddedActivityInviteEmbedImpl, int i6, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            str = embeddedActivityInviteMessageAccessory.messageId;
        }
        if ((i10 & 2) != 0) {
            messageMargins = embeddedActivityInviteMessageAccessory.margins;
        }
        if ((i10 & 4) != 0) {
            i5 = embeddedActivityInviteMessageAccessory.codedLinkIndex;
        }
        if ((i10 & 8) != 0) {
            embeddedActivityInviteEmbedImpl = embeddedActivityInviteMessageAccessory.embeddedActivityInviteEmbed;
        }
        if ((i10 & 16) != 0) {
            i6 = embeddedActivityInviteMessageAccessory.constrainedWidth;
        }
        int i11 = i6;
        int i12 = i5;
        return embeddedActivityInviteMessageAccessory.m616copypPZZVto(str, messageMargins, i12, embeddedActivityInviteEmbedImpl, i11);
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
    public final EmbeddedActivityInviteEmbedImpl getEmbeddedActivityInviteEmbed() {
        return this.embeddedActivityInviteEmbed;
    }

    /* renamed from: component5, reason: from getter */
    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    @NotNull
    /* renamed from: copy-pPZZVto, reason: not valid java name */
    public final EmbeddedActivityInviteMessageAccessory m616copypPZZVto(@NotNull String messageId, @NotNull MessageMargins margins, int codedLinkIndex, @NotNull EmbeddedActivityInviteEmbedImpl embeddedActivityInviteEmbed, int constrainedWidth) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(embeddedActivityInviteEmbed, "embeddedActivityInviteEmbed");
        return new EmbeddedActivityInviteMessageAccessory(messageId, margins, codedLinkIndex, embeddedActivityInviteEmbed, constrainedWidth, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof EmbeddedActivityInviteMessageAccessory)) {
            return false;
        }
        EmbeddedActivityInviteMessageAccessory embeddedActivityInviteMessageAccessory = (EmbeddedActivityInviteMessageAccessory) other;
        return MessageId.m1193equalsimpl0(this.messageId, embeddedActivityInviteMessageAccessory.messageId) && Intrinsics.areEqual(this.margins, embeddedActivityInviteMessageAccessory.margins) && this.codedLinkIndex == embeddedActivityInviteMessageAccessory.codedLinkIndex && Intrinsics.areEqual(this.embeddedActivityInviteEmbed, embeddedActivityInviteMessageAccessory.embeddedActivityInviteEmbed) && this.constrainedWidth == embeddedActivityInviteMessageAccessory.constrainedWidth;
    }

    public final int getCodedLinkIndex() {
        return this.codedLinkIndex;
    }

    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    @NotNull
    public final EmbeddedActivityInviteEmbedImpl getEmbeddedActivityInviteEmbed() {
        return this.embeddedActivityInviteEmbed;
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

    public int hashCode() {
        return Integer.hashCode(this.constrainedWidth) + ((this.embeddedActivityInviteEmbed.hashCode() + a.u(this.codedLinkIndex, (this.margins.hashCode() + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31, 31)) * 31);
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        MessageMargins messageMargins = this.margins;
        int i5 = this.codedLinkIndex;
        EmbeddedActivityInviteEmbedImpl embeddedActivityInviteEmbedImpl = this.embeddedActivityInviteEmbed;
        int i6 = this.constrainedWidth;
        StringBuilder sb2 = new StringBuilder("EmbeddedActivityInviteMessageAccessory(messageId=");
        sb2.append(m1196toStringimpl);
        sb2.append(", margins=");
        sb2.append(messageMargins);
        sb2.append(", codedLinkIndex=");
        sb2.append(i5);
        sb2.append(", embeddedActivityInviteEmbed=");
        sb2.append(embeddedActivityInviteEmbedImpl);
        sb2.append(", constrainedWidth=");
        return d.m(sb2, i6, ")");
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private EmbeddedActivityInviteMessageAccessory(String messageId, MessageMargins margins, int i5, EmbeddedActivityInviteEmbedImpl embeddedActivityInviteEmbed, int i6) {
        super(messageId, "embedded activity invite " + i5, false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(embeddedActivityInviteEmbed, "embeddedActivityInviteEmbed");
        this.messageId = messageId;
        this.margins = margins;
        this.codedLinkIndex = i5;
        this.embeddedActivityInviteEmbed = embeddedActivityInviteEmbed;
        this.constrainedWidth = i6;
    }
}
