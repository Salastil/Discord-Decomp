package com.discord.chat.presentation.message.messagepart;

import a3.e;
import com.discord.chat.bridge.activities.ActivityInstanceEmbed;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0014\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u0010\u0010\u0015\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0016\u0010\rJ\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0019\u001a\u00020\tHÆ\u0003J8\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\tHÆ\u0001¢\u0006\u0004\b\u001b\u0010\u001cJ\u0013\u0010\u001d\u001a\u00020\u001e2\b\u0010\u001f\u001a\u0004\u0018\u00010 HÖ\u0003J\t\u0010!\u001a\u00020\tHÖ\u0001J\t\u0010\"\u001a\u00020#HÖ\u0001R\u0016\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014¨\u0006$"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/ActivityInstanceEmbedMessageAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "messageId", "Lcom/discord/primitives/MessageId;", "margins", "Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "activityInstanceEmbed", "Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;", "constrainedWidth", "", "<init>", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;ILkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getMargins", "()Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "getActivityInstanceEmbed", "()Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;", "getConstrainedWidth", "()I", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "copy", "copy-AFFcxXc", "(Ljava/lang/String;Lcom/discord/chat/presentation/message/messagepart/MessageMargins;Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;I)Lcom/discord/chat/presentation/message/messagepart/ActivityInstanceEmbedMessageAccessory;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ActivityInstanceEmbedMessageAccessory extends MessageAccessory {

    @NotNull
    private final ActivityInstanceEmbed activityInstanceEmbed;
    private final int constrainedWidth;

    @NotNull
    private final MessageMargins margins;

    @NotNull
    private final String messageId;

    public /* synthetic */ ActivityInstanceEmbedMessageAccessory(String str, MessageMargins messageMargins, ActivityInstanceEmbed activityInstanceEmbed, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, messageMargins, activityInstanceEmbed, i5);
    }

    /* renamed from: copy-AFFcxXc$default, reason: not valid java name */
    public static /* synthetic */ ActivityInstanceEmbedMessageAccessory m584copyAFFcxXc$default(ActivityInstanceEmbedMessageAccessory activityInstanceEmbedMessageAccessory, String str, MessageMargins messageMargins, ActivityInstanceEmbed activityInstanceEmbed, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = activityInstanceEmbedMessageAccessory.messageId;
        }
        if ((i6 & 2) != 0) {
            messageMargins = activityInstanceEmbedMessageAccessory.margins;
        }
        if ((i6 & 4) != 0) {
            activityInstanceEmbed = activityInstanceEmbedMessageAccessory.activityInstanceEmbed;
        }
        if ((i6 & 8) != 0) {
            i5 = activityInstanceEmbedMessageAccessory.constrainedWidth;
        }
        return activityInstanceEmbedMessageAccessory.m586copyAFFcxXc(str, messageMargins, activityInstanceEmbed, i5);
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

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final ActivityInstanceEmbed getActivityInstanceEmbed() {
        return this.activityInstanceEmbed;
    }

    /* renamed from: component4, reason: from getter */
    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    @NotNull
    /* renamed from: copy-AFFcxXc, reason: not valid java name */
    public final ActivityInstanceEmbedMessageAccessory m586copyAFFcxXc(@NotNull String messageId, @NotNull MessageMargins margins, @NotNull ActivityInstanceEmbed activityInstanceEmbed, int constrainedWidth) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(activityInstanceEmbed, "activityInstanceEmbed");
        return new ActivityInstanceEmbedMessageAccessory(messageId, margins, activityInstanceEmbed, constrainedWidth, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ActivityInstanceEmbedMessageAccessory)) {
            return false;
        }
        ActivityInstanceEmbedMessageAccessory activityInstanceEmbedMessageAccessory = (ActivityInstanceEmbedMessageAccessory) other;
        return MessageId.m1193equalsimpl0(this.messageId, activityInstanceEmbedMessageAccessory.messageId) && Intrinsics.areEqual(this.margins, activityInstanceEmbedMessageAccessory.margins) && Intrinsics.areEqual(this.activityInstanceEmbed, activityInstanceEmbedMessageAccessory.activityInstanceEmbed) && this.constrainedWidth == activityInstanceEmbedMessageAccessory.constrainedWidth;
    }

    @NotNull
    public final ActivityInstanceEmbed getActivityInstanceEmbed() {
        return this.activityInstanceEmbed;
    }

    public final int getConstrainedWidth() {
        return this.constrainedWidth;
    }

    @NotNull
    public final MessageMargins getMargins() {
        return this.margins;
    }

    @Override // com.discord.chat.presentation.message.messagepart.MessageAccessory
    @NotNull
    /* renamed from: getMessageId-3Eiw7ao, reason: not valid java name */
    public String getMessageId() {
        return this.messageId;
    }

    public int hashCode() {
        return Integer.hashCode(this.constrainedWidth) + ((this.activityInstanceEmbed.hashCode() + ((this.margins.hashCode() + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31)) * 31);
    }

    @NotNull
    public String toString() {
        return "ActivityInstanceEmbedMessageAccessory(messageId=" + MessageId.m1196toStringimpl(this.messageId) + ", margins=" + this.margins + ", activityInstanceEmbed=" + this.activityInstanceEmbed + ", constrainedWidth=" + this.constrainedWidth + ")";
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private ActivityInstanceEmbedMessageAccessory(String messageId, MessageMargins margins, ActivityInstanceEmbed activityInstanceEmbed, int i5) {
        super(messageId, e.k("activity instance ", activityInstanceEmbed.getInstanceId()), false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(activityInstanceEmbed, "activityInstanceEmbed");
        this.messageId = messageId;
        this.margins = margins;
        this.activityInstanceEmbed = activityInstanceEmbed;
        this.constrainedWidth = i5;
    }
}
