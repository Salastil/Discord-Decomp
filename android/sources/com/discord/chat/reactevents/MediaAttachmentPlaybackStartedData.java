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
@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0019\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 82\u00020\u0001:\u000278B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eBQ\b\u0010\u0012\u0006\u0010\u000f\u001a\u00020\u0010\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012¢\u0006\u0004\b\r\u0010\u0013J\u0010\u0010\u001f\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b \u0010\u0015J\t\u0010!\u001a\u00020\u0005HÆ\u0003J\t\u0010\"\u001a\u00020\u0005HÆ\u0003J\u0010\u0010#\u001a\u00020\bHÆ\u0003¢\u0006\u0004\b$\u0010\u001bJ\t\u0010%\u001a\u00020\nHÆ\u0003J\t\u0010&\u001a\u00020\fHÆ\u0003JL\u0010'\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\fHÆ\u0001¢\u0006\u0004\b(\u0010)J\u0013\u0010*\u001a\u00020\n2\b\u0010+\u001a\u0004\u0018\u00010,HÖ\u0003J\t\u0010-\u001a\u00020\u0010HÖ\u0001J\t\u0010.\u001a\u00020\fHÖ\u0001J%\u0010/\u001a\u0002002\u0006\u00101\u001a\u00020\u00002\u0006\u00102\u001a\u0002032\u0006\u00104\u001a\u000205H\u0001¢\u0006\u0002\b6R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0016\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0018R\u0013\u0010\u0007\u001a\u00020\b¢\u0006\n\n\u0002\u0010\u001c\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u001dR\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u0015¨\u00069"}, d2 = {"Lcom/discord/chat/reactevents/MediaAttachmentPlaybackStartedData;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "Lcom/discord/primitives/MessageId;", "totalDurationSecs", "", "startDurationSecs", "senderUserId", "Lcom/discord/primitives/UserId;", "isVoiceMessage", "", "attachmentId", "", "<init>", "(Ljava/lang/String;FFJZLjava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;FFLcom/discord/primitives/UserId;ZLjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getTotalDurationSecs", "()F", "getStartDurationSecs", "getSenderUserId-re6GcUE", "()J", "J", "()Z", "getAttachmentId", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component4-re6GcUE", "component5", "component6", "copy", "copy-jd4C3YQ", "(Ljava/lang/String;FFJZLjava/lang/String;)Lcom/discord/chat/reactevents/MediaAttachmentPlaybackStartedData;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MediaAttachmentPlaybackStartedData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String attachmentId;
    private final boolean isVoiceMessage;

    @NotNull
    private final String messageId;
    private final long senderUserId;
    private final float startDurationSecs;
    private final float totalDurationSecs;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/MediaAttachmentPlaybackStartedData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/MediaAttachmentPlaybackStartedData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return MediaAttachmentPlaybackStartedData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ MediaAttachmentPlaybackStartedData(int i5, String str, float f2, float f10, UserId userId, boolean z5, String str2, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, f2, f10, userId, z5, str2, serializationConstructorMarker);
    }

    /* renamed from: copy-jd4C3YQ$default, reason: not valid java name */
    public static /* synthetic */ MediaAttachmentPlaybackStartedData m849copyjd4C3YQ$default(MediaAttachmentPlaybackStartedData mediaAttachmentPlaybackStartedData, String str, float f2, float f10, long j, boolean z5, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = mediaAttachmentPlaybackStartedData.messageId;
        }
        if ((i5 & 2) != 0) {
            f2 = mediaAttachmentPlaybackStartedData.totalDurationSecs;
        }
        if ((i5 & 4) != 0) {
            f10 = mediaAttachmentPlaybackStartedData.startDurationSecs;
        }
        if ((i5 & 8) != 0) {
            j = mediaAttachmentPlaybackStartedData.senderUserId;
        }
        if ((i5 & 16) != 0) {
            z5 = mediaAttachmentPlaybackStartedData.isVoiceMessage;
        }
        if ((i5 & 32) != 0) {
            str2 = mediaAttachmentPlaybackStartedData.attachmentId;
        }
        long j5 = j;
        float f11 = f10;
        return mediaAttachmentPlaybackStartedData.m852copyjd4C3YQ(str, f2, f11, j5, z5, str2);
    }

    public static final /* synthetic */ void write$Self$chat_release(MediaAttachmentPlaybackStartedData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, MessageId$$serializer.INSTANCE, MessageId.m1189boximpl(self.messageId));
        output.l(serialDesc, 1, self.totalDurationSecs);
        output.l(serialDesc, 2, self.startDurationSecs);
        output.g(serialDesc, 3, UserId$$serializer.INSTANCE, UserId.m1241boximpl(self.senderUserId));
        output.x(serialDesc, 4, self.isVoiceMessage);
        output.y(serialDesc, 5, self.attachmentId);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component2, reason: from getter */
    public final float getTotalDurationSecs() {
        return this.totalDurationSecs;
    }

    /* renamed from: component3, reason: from getter */
    public final float getStartDurationSecs() {
        return this.startDurationSecs;
    }

    /* renamed from: component4-re6GcUE, reason: not valid java name and from getter */
    public final long getSenderUserId() {
        return this.senderUserId;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getIsVoiceMessage() {
        return this.isVoiceMessage;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final String getAttachmentId() {
        return this.attachmentId;
    }

    @NotNull
    /* renamed from: copy-jd4C3YQ, reason: not valid java name */
    public final MediaAttachmentPlaybackStartedData m852copyjd4C3YQ(@NotNull String messageId, float totalDurationSecs, float startDurationSecs, long senderUserId, boolean isVoiceMessage, @NotNull String attachmentId) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(attachmentId, "attachmentId");
        return new MediaAttachmentPlaybackStartedData(messageId, totalDurationSecs, startDurationSecs, senderUserId, isVoiceMessage, attachmentId, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MediaAttachmentPlaybackStartedData)) {
            return false;
        }
        MediaAttachmentPlaybackStartedData mediaAttachmentPlaybackStartedData = (MediaAttachmentPlaybackStartedData) other;
        return MessageId.m1193equalsimpl0(this.messageId, mediaAttachmentPlaybackStartedData.messageId) && Float.compare(this.totalDurationSecs, mediaAttachmentPlaybackStartedData.totalDurationSecs) == 0 && Float.compare(this.startDurationSecs, mediaAttachmentPlaybackStartedData.startDurationSecs) == 0 && UserId.m1245equalsimpl0(this.senderUserId, mediaAttachmentPlaybackStartedData.senderUserId) && this.isVoiceMessage == mediaAttachmentPlaybackStartedData.isVoiceMessage && Intrinsics.areEqual(this.attachmentId, mediaAttachmentPlaybackStartedData.attachmentId);
    }

    @NotNull
    public final String getAttachmentId() {
        return this.attachmentId;
    }

    @NotNull
    /* renamed from: getMessageId-3Eiw7ao, reason: not valid java name */
    public final String m853getMessageId3Eiw7ao() {
        return this.messageId;
    }

    /* renamed from: getSenderUserId-re6GcUE, reason: not valid java name */
    public final long m854getSenderUserIdre6GcUE() {
        return this.senderUserId;
    }

    public final float getStartDurationSecs() {
        return this.startDurationSecs;
    }

    public final float getTotalDurationSecs() {
        return this.totalDurationSecs;
    }

    public int hashCode() {
        return this.attachmentId.hashCode() + d.d((UserId.m1246hashCodeimpl(this.senderUserId) + a3.e.a(a3.e.a(MessageId.m1194hashCodeimpl(this.messageId) * 31, 31, this.totalDurationSecs), 31, this.startDurationSecs)) * 31, 31, this.isVoiceMessage);
    }

    public final boolean isVoiceMessage() {
        return this.isVoiceMessage;
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        return "MediaAttachmentPlaybackStartedData(messageId=" + MessageId.m1196toStringimpl(this.messageId) + ", totalDurationSecs=" + this.totalDurationSecs + ", startDurationSecs=" + this.startDurationSecs + ", senderUserId=" + UserId.m1248toStringimpl(this.senderUserId) + ", isVoiceMessage=" + this.isVoiceMessage + ", attachmentId=" + this.attachmentId + ")";
    }

    public /* synthetic */ MediaAttachmentPlaybackStartedData(String str, float f2, float f10, long j, boolean z5, String str2, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, f2, f10, j, z5, str2);
    }

    private /* synthetic */ MediaAttachmentPlaybackStartedData(int i5, String str, float f2, float f10, UserId userId, boolean z5, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (63 != (i5 & 63)) {
            h1.l(i5, 63, MediaAttachmentPlaybackStartedData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.totalDurationSecs = f2;
        this.startDurationSecs = f10;
        this.senderUserId = userId.m1250unboximpl();
        this.isVoiceMessage = z5;
        this.attachmentId = str2;
    }

    private MediaAttachmentPlaybackStartedData(String messageId, float f2, float f10, long j, boolean z5, String attachmentId) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(attachmentId, "attachmentId");
        this.messageId = messageId;
        this.totalDurationSecs = f2;
        this.startDurationSecs = f10;
        this.senderUserId = j;
        this.isVoiceMessage = z5;
        this.attachmentId = attachmentId;
    }
}
