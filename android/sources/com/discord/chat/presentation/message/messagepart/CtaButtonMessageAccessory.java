package com.discord.chat.presentation.message.messagepart;

import a3.e;
import com.discord.chat.bridge.ctabutton.CtaButton;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0016\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B+\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\t\u0010\nJ\u0010\u0010\u0014\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0015\u0010\fJ\u0010\u0010\u0016\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0017\u0010\u000fJ\t\u0010\u0018\u001a\u00020\u0007HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0007HÆ\u0003J:\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0007HÆ\u0001¢\u0006\u0004\b\u001b\u0010\u001cJ\u0013\u0010\u001d\u001a\u00020\u001e2\b\u0010\u001f\u001a\u0004\u0018\u00010 HÖ\u0003J\t\u0010!\u001a\u00020\"HÖ\u0001J\t\u0010#\u001a\u00020$HÖ\u0001R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\r\u001a\u0004\b\u000b\u0010\fR\u0016\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010\u0010\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012¨\u0006%"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/CtaButtonMessageAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "channelId", "Lcom/discord/primitives/ChannelId;", "messageId", "Lcom/discord/primitives/MessageId;", "ctaButton", "Lcom/discord/chat/bridge/ctabutton/CtaButton;", "secondaryCtaButton", "<init>", "(JLjava/lang/String;Lcom/discord/chat/bridge/ctabutton/CtaButton;Lcom/discord/chat/bridge/ctabutton/CtaButton;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getChannelId-o4g7jtM", "()J", "J", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getCtaButton", "()Lcom/discord/chat/bridge/ctabutton/CtaButton;", "getSecondaryCtaButton", "component1", "component1-o4g7jtM", "component2", "component2-3Eiw7ao", "component3", "component4", "copy", "copy-JjTCmh4", "(JLjava/lang/String;Lcom/discord/chat/bridge/ctabutton/CtaButton;Lcom/discord/chat/bridge/ctabutton/CtaButton;)Lcom/discord/chat/presentation/message/messagepart/CtaButtonMessageAccessory;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class CtaButtonMessageAccessory extends MessageAccessory {
    private final long channelId;

    @NotNull
    private final CtaButton ctaButton;

    @NotNull
    private final String messageId;
    private final CtaButton secondaryCtaButton;

    public /* synthetic */ CtaButtonMessageAccessory(long j, String str, CtaButton ctaButton, CtaButton ctaButton2, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, ctaButton, ctaButton2);
    }

    /* renamed from: copy-JjTCmh4$default, reason: not valid java name */
    public static /* synthetic */ CtaButtonMessageAccessory m604copyJjTCmh4$default(CtaButtonMessageAccessory ctaButtonMessageAccessory, long j, String str, CtaButton ctaButton, CtaButton ctaButton2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = ctaButtonMessageAccessory.channelId;
        }
        long j5 = j;
        if ((i5 & 2) != 0) {
            str = ctaButtonMessageAccessory.messageId;
        }
        String str2 = str;
        if ((i5 & 4) != 0) {
            ctaButton = ctaButtonMessageAccessory.ctaButton;
        }
        CtaButton ctaButton3 = ctaButton;
        if ((i5 & 8) != 0) {
            ctaButton2 = ctaButtonMessageAccessory.secondaryCtaButton;
        }
        return ctaButtonMessageAccessory.m607copyJjTCmh4(j5, str2, ctaButton3, ctaButton2);
    }

    /* renamed from: component1-o4g7jtM, reason: not valid java name and from getter */
    public final long getChannelId() {
        return this.channelId;
    }

    @NotNull
    /* renamed from: component2-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final CtaButton getCtaButton() {
        return this.ctaButton;
    }

    /* renamed from: component4, reason: from getter */
    public final CtaButton getSecondaryCtaButton() {
        return this.secondaryCtaButton;
    }

    @NotNull
    /* renamed from: copy-JjTCmh4, reason: not valid java name */
    public final CtaButtonMessageAccessory m607copyJjTCmh4(long channelId, @NotNull String messageId, @NotNull CtaButton ctaButton, CtaButton secondaryCtaButton) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(ctaButton, "ctaButton");
        return new CtaButtonMessageAccessory(channelId, messageId, ctaButton, secondaryCtaButton, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CtaButtonMessageAccessory)) {
            return false;
        }
        CtaButtonMessageAccessory ctaButtonMessageAccessory = (CtaButtonMessageAccessory) other;
        return ChannelId.m1167equalsimpl0(this.channelId, ctaButtonMessageAccessory.channelId) && MessageId.m1193equalsimpl0(this.messageId, ctaButtonMessageAccessory.messageId) && Intrinsics.areEqual(this.ctaButton, ctaButtonMessageAccessory.ctaButton) && Intrinsics.areEqual(this.secondaryCtaButton, ctaButtonMessageAccessory.secondaryCtaButton);
    }

    /* renamed from: getChannelId-o4g7jtM, reason: not valid java name */
    public final long m608getChannelIdo4g7jtM() {
        return this.channelId;
    }

    @NotNull
    public final CtaButton getCtaButton() {
        return this.ctaButton;
    }

    @Override // com.discord.chat.presentation.message.messagepart.MessageAccessory
    @NotNull
    /* renamed from: getMessageId-3Eiw7ao */
    public String getMessageId() {
        return this.messageId;
    }

    public final CtaButton getSecondaryCtaButton() {
        return this.secondaryCtaButton;
    }

    public int hashCode() {
        int hashCode = (this.ctaButton.hashCode() + ((MessageId.m1194hashCodeimpl(this.messageId) + (ChannelId.m1168hashCodeimpl(this.channelId) * 31)) * 31)) * 31;
        CtaButton ctaButton = this.secondaryCtaButton;
        return hashCode + (ctaButton == null ? 0 : ctaButton.hashCode());
    }

    @NotNull
    public String toString() {
        String m1170toStringimpl = ChannelId.m1170toStringimpl(this.channelId);
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        CtaButton ctaButton = this.ctaButton;
        CtaButton ctaButton2 = this.secondaryCtaButton;
        StringBuilder t5 = e.t("CtaButtonMessageAccessory(channelId=", m1170toStringimpl, ", messageId=", m1196toStringimpl, ", ctaButton=");
        t5.append(ctaButton);
        t5.append(", secondaryCtaButton=");
        t5.append(ctaButton2);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ CtaButtonMessageAccessory(long j, String str, CtaButton ctaButton, CtaButton ctaButton2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, ctaButton, (i5 & 8) != 0 ? null : ctaButton2, null);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private CtaButtonMessageAccessory(long j, String messageId, CtaButton ctaButton, CtaButton ctaButton2) {
        super(messageId, "cta button", false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(ctaButton, "ctaButton");
        this.channelId = j;
        this.messageId = messageId;
        this.ctaButton = ctaButton;
        this.secondaryCtaButton = ctaButton2;
    }
}
