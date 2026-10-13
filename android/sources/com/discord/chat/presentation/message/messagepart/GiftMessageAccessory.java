package com.discord.chat.presentation.message.messagepart;

import a3.e;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.gift.GiftEmbed;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0010\u0010\u0011\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0012\u0010\u000bJ\t\u0010\u0013\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0007HÆ\u0003J.\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u0016\u0010\u0017J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bHÖ\u0003J\t\u0010\u001c\u001a\u00020\u0005HÖ\u0001J\t\u0010\u001d\u001a\u00020\u001eHÖ\u0001R\u0016\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010¨\u0006\u001f"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/GiftMessageAccessory;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "messageId", "Lcom/discord/primitives/MessageId;", "index", "", "gift", "Lcom/discord/chat/bridge/gift/GiftEmbed;", "<init>", "(Ljava/lang/String;ILcom/discord/chat/bridge/gift/GiftEmbed;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getIndex", "()I", "getGift", "()Lcom/discord/chat/bridge/gift/GiftEmbed;", "component1", "component1-3Eiw7ao", "component2", "component3", "copy", "copy-u7_MRrM", "(Ljava/lang/String;ILcom/discord/chat/bridge/gift/GiftEmbed;)Lcom/discord/chat/presentation/message/messagepart/GiftMessageAccessory;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GiftMessageAccessory extends MessageAccessory {

    @NotNull
    private final GiftEmbed gift;
    private final int index;

    @NotNull
    private final String messageId;

    public /* synthetic */ GiftMessageAccessory(String str, int i5, GiftEmbed giftEmbed, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, i5, giftEmbed);
    }

    /* renamed from: copy-u7_MRrM$default, reason: not valid java name */
    public static /* synthetic */ GiftMessageAccessory m643copyu7_MRrM$default(GiftMessageAccessory giftMessageAccessory, String str, int i5, GiftEmbed giftEmbed, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = giftMessageAccessory.messageId;
        }
        if ((i6 & 2) != 0) {
            i5 = giftMessageAccessory.index;
        }
        if ((i6 & 4) != 0) {
            giftEmbed = giftMessageAccessory.gift;
        }
        return giftMessageAccessory.m645copyu7_MRrM(str, i5, giftEmbed);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component2, reason: from getter */
    public final int getIndex() {
        return this.index;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final GiftEmbed getGift() {
        return this.gift;
    }

    @NotNull
    /* renamed from: copy-u7_MRrM, reason: not valid java name */
    public final GiftMessageAccessory m645copyu7_MRrM(@NotNull String messageId, int index, @NotNull GiftEmbed gift) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(gift, "gift");
        return new GiftMessageAccessory(messageId, index, gift, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GiftMessageAccessory)) {
            return false;
        }
        GiftMessageAccessory giftMessageAccessory = (GiftMessageAccessory) other;
        return MessageId.m1193equalsimpl0(this.messageId, giftMessageAccessory.messageId) && this.index == giftMessageAccessory.index && Intrinsics.areEqual(this.gift, giftMessageAccessory.gift);
    }

    @NotNull
    public final GiftEmbed getGift() {
        return this.gift;
    }

    public final int getIndex() {
        return this.index;
    }

    @Override // com.discord.chat.presentation.message.messagepart.MessageAccessory
    @NotNull
    /* renamed from: getMessageId-3Eiw7ao */
    public String getMessageId() {
        return this.messageId;
    }

    public int hashCode() {
        return this.gift.hashCode() + a.u(this.index, MessageId.m1194hashCodeimpl(this.messageId) * 31, 31);
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        int i5 = this.index;
        GiftEmbed giftEmbed = this.gift;
        StringBuilder s2 = e.s("GiftMessageAccessory(messageId=", m1196toStringimpl, ", index=", i5, ", gift=");
        s2.append(giftEmbed);
        s2.append(")");
        return s2.toString();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private GiftMessageAccessory(String messageId, int i5, GiftEmbed gift) {
        super(messageId, "gift " + i5, false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(gift, "gift");
        this.messageId = messageId;
        this.index = i5;
        this.gift = gift;
    }
}
