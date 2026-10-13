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
@Metadata(d1 = {"\u0000Z\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001b\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ;2\u00020\u0001:\u0002:;B?\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fBY\b\u0010\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u000e\u0010\u0014J\u0010\u0010!\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\"\u0010\u0016J\t\u0010#\u001a\u00020\u0005HÆ\u0003J\t\u0010$\u001a\u00020\u0005HÆ\u0003J\u0010\u0010%\u001a\u00020\bHÆ\u0003¢\u0006\u0004\b&\u0010\u001cJ\t\u0010'\u001a\u00020\u0005HÆ\u0003J\t\u0010(\u001a\u00020\u000bHÆ\u0003J\t\u0010)\u001a\u00020\rHÆ\u0003JV\u0010*\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\u00052\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\rHÆ\u0001¢\u0006\u0004\b+\u0010,J\u0013\u0010-\u001a\u00020\u000b2\b\u0010.\u001a\u0004\u0018\u00010/HÖ\u0003J\t\u00100\u001a\u00020\u0011HÖ\u0001J\t\u00101\u001a\u00020\rHÖ\u0001J%\u00102\u001a\u0002032\u0006\u00104\u001a\u00020\u00002\u0006\u00105\u001a\u0002062\u0006\u00107\u001a\u000208H\u0001¢\u0006\u0002\b9R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0017\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0019R\u0013\u0010\u0007\u001a\u00020\b¢\u0006\n\n\u0002\u0010\u001d\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u0019R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u001fR\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u0016¨\u0006<"}, d2 = {"Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "Lcom/discord/primitives/MessageId;", "totalDurationSecs", "", "endDurationSecs", "senderUserId", "Lcom/discord/primitives/UserId;", "durationListeningSecs", "isVoiceMessage", "", "attachmentId", "", "<init>", "(Ljava/lang/String;FFJFZLjava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;FFLcom/discord/primitives/UserId;FZLjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getTotalDurationSecs", "()F", "getEndDurationSecs", "getSenderUserId-re6GcUE", "()J", "J", "getDurationListeningSecs", "()Z", "getAttachmentId", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component4-re6GcUE", "component5", "component6", "component7", "copy", "copy-O97gnAM", "(Ljava/lang/String;FFJFZLjava/lang/String;)Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MediaAttachmentPlaybackEndedData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String attachmentId;
    private final float durationListeningSecs;
    private final float endDurationSecs;
    private final boolean isVoiceMessage;

    @NotNull
    private final String messageId;
    private final long senderUserId;
    private final float totalDurationSecs;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return MediaAttachmentPlaybackEndedData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ MediaAttachmentPlaybackEndedData(int i5, String str, float f2, float f10, UserId userId, float f11, boolean z5, String str2, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, f2, f10, userId, f11, z5, str2, serializationConstructorMarker);
    }

    /* renamed from: copy-O97gnAM$default, reason: not valid java name */
    public static /* synthetic */ MediaAttachmentPlaybackEndedData m843copyO97gnAM$default(MediaAttachmentPlaybackEndedData mediaAttachmentPlaybackEndedData, String str, float f2, float f10, long j, float f11, boolean z5, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = mediaAttachmentPlaybackEndedData.messageId;
        }
        if ((i5 & 2) != 0) {
            f2 = mediaAttachmentPlaybackEndedData.totalDurationSecs;
        }
        if ((i5 & 4) != 0) {
            f10 = mediaAttachmentPlaybackEndedData.endDurationSecs;
        }
        if ((i5 & 8) != 0) {
            j = mediaAttachmentPlaybackEndedData.senderUserId;
        }
        if ((i5 & 16) != 0) {
            f11 = mediaAttachmentPlaybackEndedData.durationListeningSecs;
        }
        if ((i5 & 32) != 0) {
            z5 = mediaAttachmentPlaybackEndedData.isVoiceMessage;
        }
        if ((i5 & 64) != 0) {
            str2 = mediaAttachmentPlaybackEndedData.attachmentId;
        }
        String str3 = str2;
        float f12 = f11;
        long j5 = j;
        float f13 = f10;
        return mediaAttachmentPlaybackEndedData.m846copyO97gnAM(str, f2, f13, j5, f12, z5, str3);
    }

    public static final /* synthetic */ void write$Self$chat_release(MediaAttachmentPlaybackEndedData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, MessageId$$serializer.INSTANCE, MessageId.m1189boximpl(self.messageId));
        output.l(serialDesc, 1, self.totalDurationSecs);
        output.l(serialDesc, 2, self.endDurationSecs);
        output.g(serialDesc, 3, UserId$$serializer.INSTANCE, UserId.m1241boximpl(self.senderUserId));
        output.l(serialDesc, 4, self.durationListeningSecs);
        output.x(serialDesc, 5, self.isVoiceMessage);
        output.y(serialDesc, 6, self.attachmentId);
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
    public final float getEndDurationSecs() {
        return this.endDurationSecs;
    }

    /* renamed from: component4-re6GcUE, reason: not valid java name and from getter */
    public final long getSenderUserId() {
        return this.senderUserId;
    }

    /* renamed from: component5, reason: from getter */
    public final float getDurationListeningSecs() {
        return this.durationListeningSecs;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getIsVoiceMessage() {
        return this.isVoiceMessage;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final String getAttachmentId() {
        return this.attachmentId;
    }

    @NotNull
    /* renamed from: copy-O97gnAM, reason: not valid java name */
    public final MediaAttachmentPlaybackEndedData m846copyO97gnAM(@NotNull String messageId, float totalDurationSecs, float endDurationSecs, long senderUserId, float durationListeningSecs, boolean isVoiceMessage, @NotNull String attachmentId) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(attachmentId, "attachmentId");
        return new MediaAttachmentPlaybackEndedData(messageId, totalDurationSecs, endDurationSecs, senderUserId, durationListeningSecs, isVoiceMessage, attachmentId, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MediaAttachmentPlaybackEndedData)) {
            return false;
        }
        MediaAttachmentPlaybackEndedData mediaAttachmentPlaybackEndedData = (MediaAttachmentPlaybackEndedData) other;
        return MessageId.m1193equalsimpl0(this.messageId, mediaAttachmentPlaybackEndedData.messageId) && Float.compare(this.totalDurationSecs, mediaAttachmentPlaybackEndedData.totalDurationSecs) == 0 && Float.compare(this.endDurationSecs, mediaAttachmentPlaybackEndedData.endDurationSecs) == 0 && UserId.m1245equalsimpl0(this.senderUserId, mediaAttachmentPlaybackEndedData.senderUserId) && Float.compare(this.durationListeningSecs, mediaAttachmentPlaybackEndedData.durationListeningSecs) == 0 && this.isVoiceMessage == mediaAttachmentPlaybackEndedData.isVoiceMessage && Intrinsics.areEqual(this.attachmentId, mediaAttachmentPlaybackEndedData.attachmentId);
    }

    @NotNull
    public final String getAttachmentId() {
        return this.attachmentId;
    }

    public final float getDurationListeningSecs() {
        return this.durationListeningSecs;
    }

    public final float getEndDurationSecs() {
        return this.endDurationSecs;
    }

    @NotNull
    /* renamed from: getMessageId-3Eiw7ao, reason: not valid java name */
    public final String m847getMessageId3Eiw7ao() {
        return this.messageId;
    }

    /* renamed from: getSenderUserId-re6GcUE, reason: not valid java name */
    public final long m848getSenderUserIdre6GcUE() {
        return this.senderUserId;
    }

    public final float getTotalDurationSecs() {
        return this.totalDurationSecs;
    }

    public int hashCode() {
        return this.attachmentId.hashCode() + d.d(a3.e.a((UserId.m1246hashCodeimpl(this.senderUserId) + a3.e.a(a3.e.a(MessageId.m1194hashCodeimpl(this.messageId) * 31, 31, this.totalDurationSecs), 31, this.endDurationSecs)) * 31, 31, this.durationListeningSecs), 31, this.isVoiceMessage);
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
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        float f2 = this.totalDurationSecs;
        float f10 = this.endDurationSecs;
        String m1248toStringimpl = UserId.m1248toStringimpl(this.senderUserId);
        float f11 = this.durationListeningSecs;
        boolean z5 = this.isVoiceMessage;
        String str = this.attachmentId;
        StringBuilder sb2 = new StringBuilder("MediaAttachmentPlaybackEndedData(messageId=");
        sb2.append(m1196toStringimpl);
        sb2.append(", totalDurationSecs=");
        sb2.append(f2);
        sb2.append(", endDurationSecs=");
        sb2.append(f10);
        sb2.append(", senderUserId=");
        sb2.append(m1248toStringimpl);
        sb2.append(", durationListeningSecs=");
        sb2.append(f11);
        sb2.append(", isVoiceMessage=");
        sb2.append(z5);
        sb2.append(", attachmentId=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, str, ")");
    }

    public /* synthetic */ MediaAttachmentPlaybackEndedData(String str, float f2, float f10, long j, float f11, boolean z5, String str2, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, f2, f10, j, f11, z5, str2);
    }

    private /* synthetic */ MediaAttachmentPlaybackEndedData(int i5, String str, float f2, float f10, UserId userId, float f11, boolean z5, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (127 != (i5 & 127)) {
            h1.l(i5, 127, MediaAttachmentPlaybackEndedData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.totalDurationSecs = f2;
        this.endDurationSecs = f10;
        this.senderUserId = userId.m1250unboximpl();
        this.durationListeningSecs = f11;
        this.isVoiceMessage = z5;
        this.attachmentId = str2;
    }

    private MediaAttachmentPlaybackEndedData(String messageId, float f2, float f10, long j, float f11, boolean z5, String attachmentId) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(attachmentId, "attachmentId");
        this.messageId = messageId;
        this.totalDurationSecs = f2;
        this.endDurationSecs = f10;
        this.senderUserId = j;
        this.durationListeningSecs = f11;
        this.isVoiceMessage = z5;
        this.attachmentId = attachmentId;
    }
}
