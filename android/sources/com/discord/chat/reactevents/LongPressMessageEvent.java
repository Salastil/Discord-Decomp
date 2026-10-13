package com.discord.chat.reactevents;

import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
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
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0014\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 12\u00020\u0001:\u000201B;\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0006¢\u0006\u0004\b\n\u0010\u000bBU\b\u0010\u0012\u0006\u0010\f\u001a\u00020\u0006\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\n\u0010\u000fJ\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0006HÆ\u0003J\t\u0010\u001d\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001e\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u0010\u001f\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\u0018JN\u0010 \u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00032\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0006HÆ\u0001¢\u0006\u0002\u0010!J\u0013\u0010\"\u001a\u00020#2\b\u0010$\u001a\u0004\u0018\u00010%HÖ\u0003J\t\u0010&\u001a\u00020\u0006HÖ\u0001J\t\u0010'\u001a\u00020\u0003HÖ\u0001J%\u0010(\u001a\u00020)2\u0006\u0010*\u001a\u00020\u00002\u0006\u0010+\u001a\u00020,2\u0006\u0010-\u001a\u00020.H\u0001¢\u0006\u0002\b/R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0007\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0011R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0011R\u0015\u0010\t\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u0019\u001a\u0004\b\u0017\u0010\u0018¨\u00062"}, d2 = {"Lcom/discord/chat/reactevents/LongPressMessageEvent;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "", "channelId", "mediaIndex", "", "mediaType", "componentId", "componentMediaIndex", "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getMessageId", "()Ljava/lang/String;", "getChannelId", "getMediaIndex", "()I", "getMediaType", "getComponentId", "getComponentMediaIndex", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)Lcom/discord/chat/reactevents/LongPressMessageEvent;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class LongPressMessageEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String channelId;
    private final String componentId;
    private final Integer componentMediaIndex;
    private final int mediaIndex;

    @NotNull
    private final String mediaType;

    @NotNull
    private final String messageId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/LongPressMessageEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/LongPressMessageEvent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return LongPressMessageEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ LongPressMessageEvent(int i5, String str, String str2, int i6, String str3, String str4, Integer num, SerializationConstructorMarker serializationConstructorMarker) {
        if (63 != (i5 & 63)) {
            h1.l(i5, 63, LongPressMessageEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.channelId = str2;
        this.mediaIndex = i6;
        this.mediaType = str3;
        this.componentId = str4;
        this.componentMediaIndex = num;
    }

    public static /* synthetic */ LongPressMessageEvent copy$default(LongPressMessageEvent longPressMessageEvent, String str, String str2, int i5, String str3, String str4, Integer num, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = longPressMessageEvent.messageId;
        }
        if ((i6 & 2) != 0) {
            str2 = longPressMessageEvent.channelId;
        }
        if ((i6 & 4) != 0) {
            i5 = longPressMessageEvent.mediaIndex;
        }
        if ((i6 & 8) != 0) {
            str3 = longPressMessageEvent.mediaType;
        }
        if ((i6 & 16) != 0) {
            str4 = longPressMessageEvent.componentId;
        }
        if ((i6 & 32) != 0) {
            num = longPressMessageEvent.componentMediaIndex;
        }
        String str5 = str4;
        Integer num2 = num;
        return longPressMessageEvent.copy(str, str2, i5, str3, str5, num2);
    }

    public static final /* synthetic */ void write$Self$chat_release(LongPressMessageEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.messageId);
        output.y(serialDesc, 1, self.channelId);
        output.n(2, self.mediaIndex, serialDesc);
        output.y(serialDesc, 3, self.mediaType);
        output.z(serialDesc, 4, v1.a, self.componentId);
        output.z(serialDesc, 5, o0.a, self.componentMediaIndex);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getChannelId() {
        return this.channelId;
    }

    /* renamed from: component3, reason: from getter */
    public final int getMediaIndex() {
        return this.mediaIndex;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getMediaType() {
        return this.mediaType;
    }

    /* renamed from: component5, reason: from getter */
    public final String getComponentId() {
        return this.componentId;
    }

    /* renamed from: component6, reason: from getter */
    public final Integer getComponentMediaIndex() {
        return this.componentMediaIndex;
    }

    @NotNull
    public final LongPressMessageEvent copy(@NotNull String messageId, @NotNull String channelId, int mediaIndex, @NotNull String mediaType, String componentId, Integer componentMediaIndex) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        Intrinsics.checkNotNullParameter(mediaType, "mediaType");
        return new LongPressMessageEvent(messageId, channelId, mediaIndex, mediaType, componentId, componentMediaIndex);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof LongPressMessageEvent)) {
            return false;
        }
        LongPressMessageEvent longPressMessageEvent = (LongPressMessageEvent) other;
        return Intrinsics.areEqual(this.messageId, longPressMessageEvent.messageId) && Intrinsics.areEqual(this.channelId, longPressMessageEvent.channelId) && this.mediaIndex == longPressMessageEvent.mediaIndex && Intrinsics.areEqual(this.mediaType, longPressMessageEvent.mediaType) && Intrinsics.areEqual(this.componentId, longPressMessageEvent.componentId) && Intrinsics.areEqual(this.componentMediaIndex, longPressMessageEvent.componentMediaIndex);
    }

    @NotNull
    public final String getChannelId() {
        return this.channelId;
    }

    public final String getComponentId() {
        return this.componentId;
    }

    public final Integer getComponentMediaIndex() {
        return this.componentMediaIndex;
    }

    public final int getMediaIndex() {
        return this.mediaIndex;
    }

    @NotNull
    public final String getMediaType() {
        return this.mediaType;
    }

    @NotNull
    public final String getMessageId() {
        return this.messageId;
    }

    public int hashCode() {
        int d6 = a3.e.d(com.discord.chat.bridge.botuikit.a.u(this.mediaIndex, a3.e.d(this.messageId.hashCode() * 31, 31, this.channelId), 31), 31, this.mediaType);
        String str = this.componentId;
        int hashCode = (d6 + (str == null ? 0 : str.hashCode())) * 31;
        Integer num = this.componentMediaIndex;
        return hashCode + (num != null ? num.hashCode() : 0);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        String str = this.messageId;
        String str2 = this.channelId;
        int i5 = this.mediaIndex;
        String str3 = this.mediaType;
        String str4 = this.componentId;
        Integer num = this.componentMediaIndex;
        StringBuilder t5 = a3.e.t("LongPressMessageEvent(messageId=", str, ", channelId=", str2, ", mediaIndex=");
        a3.e.z(t5, i5, ", mediaType=", str3, ", componentId=");
        t5.append(str4);
        t5.append(", componentMediaIndex=");
        t5.append(num);
        t5.append(")");
        return t5.toString();
    }

    public LongPressMessageEvent(@NotNull String messageId, @NotNull String channelId, int i5, @NotNull String mediaType, String str, Integer num) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        Intrinsics.checkNotNullParameter(mediaType, "mediaType");
        this.messageId = messageId;
        this.channelId = channelId;
        this.mediaIndex = i5;
        this.mediaType = mediaType;
        this.componentId = str;
        this.componentMediaIndex = num;
    }
}
