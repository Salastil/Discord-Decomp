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
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 +2\u00020\u0001:\u0002*+B+\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\u0010\u0006\u001a\u00060\u0007j\u0002`\b\u0012\u0006\u0010\t\u001a\u00020\u0005¢\u0006\u0004\b\n\u0010\u000bB?\b\u0010\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\n\u0010\u000fJ\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0005HÆ\u0003J\r\u0010\u0019\u001a\u00060\u0007j\u0002`\bHÆ\u0003J\t\u0010\u001a\u001a\u00020\u0005HÆ\u0003J5\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\f\b\u0002\u0010\u0006\u001a\u00060\u0007j\u0002`\b2\b\b\u0002\u0010\t\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fHÖ\u0003J\t\u0010 \u001a\u00020\u0003HÖ\u0001J\t\u0010!\u001a\u00020\u0005HÖ\u0001J%\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020\u00002\u0006\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020(H\u0001¢\u0006\u0002\b)R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0015\u0010\u0006\u001a\u00060\u0007j\u0002`\b¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0013¨\u0006,"}, d2 = {"Lcom/discord/media/engine/video/events/FirstFrameCallbackEvent;", "Lcom/discord/reactevents/ReactEvent;", "connectionId", "", "userId", "", "ssrc", "", "Lcom/discord/media/engine/types/SSRC64;", "streamId", "<init>", "(ILjava/lang/String;JLjava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;JLjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getConnectionId", "()I", "getUserId", "()Ljava/lang/String;", "getSsrc", "()J", "getStreamId", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$media_engine_release", "$serializer", "Companion", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class FirstFrameCallbackEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int connectionId;
    private final long ssrc;

    @NotNull
    private final String streamId;

    @NotNull
    private final String userId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/media/engine/video/events/FirstFrameCallbackEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/media/engine/video/events/FirstFrameCallbackEvent;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return FirstFrameCallbackEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ FirstFrameCallbackEvent(int i5, int i6, String str, long j, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, FirstFrameCallbackEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.connectionId = i6;
        this.userId = str;
        this.ssrc = j;
        this.streamId = str2;
    }

    public static /* synthetic */ FirstFrameCallbackEvent copy$default(FirstFrameCallbackEvent firstFrameCallbackEvent, int i5, String str, long j, String str2, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = firstFrameCallbackEvent.connectionId;
        }
        if ((i6 & 2) != 0) {
            str = firstFrameCallbackEvent.userId;
        }
        if ((i6 & 4) != 0) {
            j = firstFrameCallbackEvent.ssrc;
        }
        if ((i6 & 8) != 0) {
            str2 = firstFrameCallbackEvent.streamId;
        }
        String str3 = str2;
        return firstFrameCallbackEvent.copy(i5, str, j, str3);
    }

    public static final /* synthetic */ void write$Self$media_engine_release(FirstFrameCallbackEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.connectionId, serialDesc);
        output.y(serialDesc, 1, self.userId);
        output.P(serialDesc, 2, self.ssrc);
        output.y(serialDesc, 3, self.streamId);
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
    public final FirstFrameCallbackEvent copy(int connectionId, @NotNull String userId, long ssrc, @NotNull String streamId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        return new FirstFrameCallbackEvent(connectionId, userId, ssrc, streamId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof FirstFrameCallbackEvent)) {
            return false;
        }
        FirstFrameCallbackEvent firstFrameCallbackEvent = (FirstFrameCallbackEvent) other;
        return this.connectionId == firstFrameCallbackEvent.connectionId && Intrinsics.areEqual(this.userId, firstFrameCallbackEvent.userId) && this.ssrc == firstFrameCallbackEvent.ssrc && Intrinsics.areEqual(this.streamId, firstFrameCallbackEvent.streamId);
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

    public int hashCode() {
        return this.streamId.hashCode() + a.g(this.ssrc, a3.e.d(Integer.hashCode(this.connectionId) * 31, 31, this.userId), 31);
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
        StringBuilder n6 = a.n("FirstFrameCallbackEvent(connectionId=", ", userId=", str, i5, ", ssrc=");
        n6.append(j);
        n6.append(", streamId=");
        n6.append(str2);
        n6.append(")");
        return n6.toString();
    }

    public FirstFrameCallbackEvent(int i5, @NotNull String userId, long j, @NotNull String streamId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        this.connectionId = i5;
        this.userId = userId;
        this.ssrc = j;
        this.streamId = streamId;
    }
}
