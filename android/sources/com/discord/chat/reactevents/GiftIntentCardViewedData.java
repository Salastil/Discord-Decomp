package com.discord.chat.reactevents;

import bs.h1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 02\u00020\u0001:\u0002/0B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tB7\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\b\u0010\rJ\b\u0010\u0016\u001a\u00020\u0017H\u0016J\u0010\u0010\u0018\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0019\u0010\u000fJ\u0010\u0010\u001a\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u001b\u0010\u0012J\t\u0010\u001c\u001a\u00020\u0007HÆ\u0003J.\u0010\u001d\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u001e\u0010\u001fJ\u0013\u0010 \u001a\u00020!2\b\u0010\"\u001a\u0004\u0018\u00010#HÖ\u0003J\t\u0010$\u001a\u00020\u0007HÖ\u0001J\t\u0010%\u001a\u00020&HÖ\u0001J%\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020\u00002\u0006\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020-H\u0001¢\u0006\u0002\b.R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0010\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010\u0013\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015¨\u00061"}, d2 = {"Lcom/discord/chat/reactevents/GiftIntentCardViewedData;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "Lcom/discord/primitives/MessageId;", "recipientUserId", "Lcom/discord/primitives/UserId;", "giftIntentType", "", "<init>", "(Ljava/lang/String;JILkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lcom/discord/primitives/UserId;ILkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getRecipientUserId-re6GcUE", "()J", "J", "getGiftIntentType", "()I", "serialize", "Lcom/facebook/react/bridge/WritableMap;", "component1", "component1-3Eiw7ao", "component2", "component2-re6GcUE", "component3", "copy", "copy-gzHKzLY", "(Ljava/lang/String;JI)Lcom/discord/chat/reactevents/GiftIntentCardViewedData;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GiftIntentCardViewedData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int giftIntentType;

    @NotNull
    private final String messageId;
    private final long recipientUserId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/GiftIntentCardViewedData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/GiftIntentCardViewedData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return GiftIntentCardViewedData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ GiftIntentCardViewedData(int i5, String str, UserId userId, int i6, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, userId, i6, serializationConstructorMarker);
    }

    /* renamed from: copy-gzHKzLY$default, reason: not valid java name */
    public static /* synthetic */ GiftIntentCardViewedData m796copygzHKzLY$default(GiftIntentCardViewedData giftIntentCardViewedData, String str, long j, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = giftIntentCardViewedData.messageId;
        }
        if ((i6 & 2) != 0) {
            j = giftIntentCardViewedData.recipientUserId;
        }
        if ((i6 & 4) != 0) {
            i5 = giftIntentCardViewedData.giftIntentType;
        }
        return giftIntentCardViewedData.m799copygzHKzLY(str, j, i5);
    }

    public static final /* synthetic */ void write$Self$chat_release(GiftIntentCardViewedData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, MessageId$$serializer.INSTANCE, MessageId.m1189boximpl(self.messageId));
        output.g(serialDesc, 1, UserId$$serializer.INSTANCE, UserId.m1241boximpl(self.recipientUserId));
        output.n(2, self.giftIntentType, serialDesc);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component2-re6GcUE, reason: not valid java name and from getter */
    public final long getRecipientUserId() {
        return this.recipientUserId;
    }

    /* renamed from: component3, reason: from getter */
    public final int getGiftIntentType() {
        return this.giftIntentType;
    }

    @NotNull
    /* renamed from: copy-gzHKzLY, reason: not valid java name */
    public final GiftIntentCardViewedData m799copygzHKzLY(@NotNull String messageId, long recipientUserId, int giftIntentType) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        return new GiftIntentCardViewedData(messageId, recipientUserId, giftIntentType, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GiftIntentCardViewedData)) {
            return false;
        }
        GiftIntentCardViewedData giftIntentCardViewedData = (GiftIntentCardViewedData) other;
        return MessageId.m1193equalsimpl0(this.messageId, giftIntentCardViewedData.messageId) && UserId.m1245equalsimpl0(this.recipientUserId, giftIntentCardViewedData.recipientUserId) && this.giftIntentType == giftIntentCardViewedData.giftIntentType;
    }

    public final int getGiftIntentType() {
        return this.giftIntentType;
    }

    @NotNull
    /* renamed from: getMessageId-3Eiw7ao, reason: not valid java name */
    public final String m800getMessageId3Eiw7ao() {
        return this.messageId;
    }

    /* renamed from: getRecipientUserId-re6GcUE, reason: not valid java name */
    public final long m801getRecipientUserIdre6GcUE() {
        return this.recipientUserId;
    }

    public int hashCode() {
        return Integer.hashCode(this.giftIntentType) + ((UserId.m1246hashCodeimpl(this.recipientUserId) + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return GiftIntentCardViewedDataKt.m802serializeGiftIntentEventgzHKzLY(this.messageId, this.recipientUserId, this.giftIntentType);
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        String m1248toStringimpl = UserId.m1248toStringimpl(this.recipientUserId);
        return d.m(a3.e.t("GiftIntentCardViewedData(messageId=", m1196toStringimpl, ", recipientUserId=", m1248toStringimpl, ", giftIntentType="), this.giftIntentType, ")");
    }

    public /* synthetic */ GiftIntentCardViewedData(String str, long j, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, j, i5);
    }

    private /* synthetic */ GiftIntentCardViewedData(int i5, String str, UserId userId, int i6, SerializationConstructorMarker serializationConstructorMarker) {
        if (7 != (i5 & 7)) {
            h1.l(i5, 7, GiftIntentCardViewedData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.recipientUserId = userId.m1250unboximpl();
        this.giftIntentType = i6;
    }

    private GiftIntentCardViewedData(String messageId, long j, int i5) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        this.messageId = messageId;
        this.recipientUserId = j;
        this.giftIntentType = i5;
    }
}
