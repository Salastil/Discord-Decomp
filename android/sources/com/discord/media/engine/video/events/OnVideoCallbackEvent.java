package com.discord.media.engine.video.events;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
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
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 .2\u00020\u0001:\u0002-.B3\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\u0010\u0006\u001a\u00060\u0007j\u0002`\b\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\u0006\u0010\n\u001a\u00020\u0005¢\u0006\u0004\b\u000b\u0010\fBI\b\u0010\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f¢\u0006\u0004\b\u000b\u0010\u0010J\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0005HÆ\u0003J\r\u0010\u001b\u001a\u00060\u0007j\u0002`\bHÆ\u0003J\t\u0010\u001c\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001d\u001a\u00020\u0005HÆ\u0003J?\u0010\u001e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\f\b\u0002\u0010\u0006\u001a\u00060\u0007j\u0002`\b2\b\b\u0002\u0010\t\u001a\u00020\u00052\b\b\u0002\u0010\n\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u001f\u001a\u00020 2\b\u0010!\u001a\u0004\u0018\u00010\"HÖ\u0003J\t\u0010#\u001a\u00020\u0003HÖ\u0001J\t\u0010$\u001a\u00020\u0005HÖ\u0001J%\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020\u00002\u0006\u0010(\u001a\u00020)2\u0006\u0010*\u001a\u00020+H\u0001¢\u0006\u0002\b,R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0015\u0010\u0006\u001a\u00060\u0007j\u0002`\b¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0014R\u0011\u0010\n\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0014¨\u0006/"}, d2 = {"Lcom/discord/media/engine/video/events/OnVideoCallbackEvent;", "Lcom/discord/reactevents/ReactEvent;", "connectionId", "", "userId", "", "ssrc", "", "Lcom/discord/media/engine/types/SSRC64;", "streamId", "videoStreamParametersJSON", "<init>", "(ILjava/lang/String;JLjava/lang/String;Ljava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;JLjava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getConnectionId", "()I", "getUserId", "()Ljava/lang/String;", "getSsrc", "()J", "getStreamId", "getVideoStreamParametersJSON", "component1", "component2", "component3", "component4", "component5", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$media_engine_release", "$serializer", "Companion", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class OnVideoCallbackEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int connectionId;
    private final long ssrc;

    @NotNull
    private final String streamId;

    @NotNull
    private final String userId;

    @NotNull
    private final String videoStreamParametersJSON;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/media/engine/video/events/OnVideoCallbackEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/media/engine/video/events/OnVideoCallbackEvent;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return OnVideoCallbackEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ OnVideoCallbackEvent(int i5, int i6, String str, long j, String str2, String str3, SerializationConstructorMarker serializationConstructorMarker) {
        if (31 != (i5 & 31)) {
            h1.l(i5, 31, OnVideoCallbackEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.connectionId = i6;
        this.userId = str;
        this.ssrc = j;
        this.streamId = str2;
        this.videoStreamParametersJSON = str3;
    }

    public static /* synthetic */ OnVideoCallbackEvent copy$default(OnVideoCallbackEvent onVideoCallbackEvent, int i5, String str, long j, String str2, String str3, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = onVideoCallbackEvent.connectionId;
        }
        if ((i6 & 2) != 0) {
            str = onVideoCallbackEvent.userId;
        }
        if ((i6 & 4) != 0) {
            j = onVideoCallbackEvent.ssrc;
        }
        if ((i6 & 8) != 0) {
            str2 = onVideoCallbackEvent.streamId;
        }
        if ((i6 & 16) != 0) {
            str3 = onVideoCallbackEvent.videoStreamParametersJSON;
        }
        long j5 = j;
        return onVideoCallbackEvent.copy(i5, str, j5, str2, str3);
    }

    public static final /* synthetic */ void write$Self$media_engine_release(OnVideoCallbackEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.connectionId, serialDesc);
        output.y(serialDesc, 1, self.userId);
        output.P(serialDesc, 2, self.ssrc);
        output.y(serialDesc, 3, self.streamId);
        output.y(serialDesc, 4, self.videoStreamParametersJSON);
    }

    /* renamed from: component1, reason: from getter */
    public final int getConnectionId() {
        return this.connectionId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getUserId() {
        return this.userId;
    }

    /* renamed from: component3, reason: from getter */
    public final long getSsrc() {
        return this.ssrc;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getStreamId() {
        return this.streamId;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getVideoStreamParametersJSON() {
        return this.videoStreamParametersJSON;
    }

    @NotNull
    public final OnVideoCallbackEvent copy(int connectionId, @NotNull String userId, long ssrc, @NotNull String streamId, @NotNull String videoStreamParametersJSON) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(videoStreamParametersJSON, "videoStreamParametersJSON");
        return new OnVideoCallbackEvent(connectionId, userId, ssrc, streamId, videoStreamParametersJSON);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof OnVideoCallbackEvent)) {
            return false;
        }
        OnVideoCallbackEvent onVideoCallbackEvent = (OnVideoCallbackEvent) other;
        return this.connectionId == onVideoCallbackEvent.connectionId && Intrinsics.areEqual(this.userId, onVideoCallbackEvent.userId) && this.ssrc == onVideoCallbackEvent.ssrc && Intrinsics.areEqual(this.streamId, onVideoCallbackEvent.streamId) && Intrinsics.areEqual(this.videoStreamParametersJSON, onVideoCallbackEvent.videoStreamParametersJSON);
    }

    public final int getConnectionId() {
        return this.connectionId;
    }

    public final long getSsrc() {
        return this.ssrc;
    }

    @NotNull
    public final String getStreamId() {
        return this.streamId;
    }

    @NotNull
    public final String getUserId() {
        return this.userId;
    }

    @NotNull
    public final String getVideoStreamParametersJSON() {
        return this.videoStreamParametersJSON;
    }

    public int hashCode() {
        return this.videoStreamParametersJSON.hashCode() + a3.e.d(a.g(this.ssrc, a3.e.d(Integer.hashCode(this.connectionId) * 31, 31, this.userId), 31), 31, this.streamId);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        int i5 = this.connectionId;
        String str = this.userId;
        long j = this.ssrc;
        String str2 = this.streamId;
        String str3 = this.videoStreamParametersJSON;
        StringBuilder n6 = a.n("OnVideoCallbackEvent(connectionId=", ", userId=", str, i5, ", ssrc=");
        n6.append(j);
        n6.append(", streamId=");
        n6.append(str2);
        return a3.e.n(n6, ", videoStreamParametersJSON=", str3, ")");
    }

    public OnVideoCallbackEvent(int i5, @NotNull String userId, long j, @NotNull String streamId, @NotNull String videoStreamParametersJSON) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(videoStreamParametersJSON, "videoStreamParametersJSON");
        this.connectionId = i5;
        this.userId = userId;
        this.ssrc = j;
        this.streamId = streamId;
        this.videoStreamParametersJSON = videoStreamParametersJSON;
    }
}
