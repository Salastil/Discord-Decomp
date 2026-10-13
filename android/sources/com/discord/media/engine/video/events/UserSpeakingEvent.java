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
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 )2\u00020\u0001:\u0002()B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nB=\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\t\u0010\u000eJ\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\bHÆ\u0003J1\u0010\u0019\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\bHÆ\u0001J\u0013\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dHÖ\u0003J\t\u0010\u001e\u001a\u00020\u0003HÖ\u0001J\t\u0010\u001f\u001a\u00020\u0005HÖ\u0001J%\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00002\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0001¢\u0006\u0002\b'R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0010R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014¨\u0006*"}, d2 = {"Lcom/discord/media/engine/video/events/UserSpeakingEvent;", "Lcom/discord/reactevents/ReactEvent;", "connectionId", "", "userId", "", "isSpeaking", "voiceDb", "", "<init>", "(ILjava/lang/String;IF)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;IFLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getConnectionId", "()I", "getUserId", "()Ljava/lang/String;", "getVoiceDb", "()F", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$media_engine_release", "$serializer", "Companion", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class UserSpeakingEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int connectionId;
    private final int isSpeaking;

    @NotNull
    private final String userId;
    private final float voiceDb;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/media/engine/video/events/UserSpeakingEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/media/engine/video/events/UserSpeakingEvent;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return UserSpeakingEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ UserSpeakingEvent(int i5, int i6, String str, int i10, float f2, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, UserSpeakingEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.connectionId = i6;
        this.userId = str;
        this.isSpeaking = i10;
        this.voiceDb = f2;
    }

    public static /* synthetic */ UserSpeakingEvent copy$default(UserSpeakingEvent userSpeakingEvent, int i5, String str, int i6, float f2, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            i5 = userSpeakingEvent.connectionId;
        }
        if ((i10 & 2) != 0) {
            str = userSpeakingEvent.userId;
        }
        if ((i10 & 4) != 0) {
            i6 = userSpeakingEvent.isSpeaking;
        }
        if ((i10 & 8) != 0) {
            f2 = userSpeakingEvent.voiceDb;
        }
        return userSpeakingEvent.copy(i5, str, i6, f2);
    }

    public static final /* synthetic */ void write$Self$media_engine_release(UserSpeakingEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.connectionId, serialDesc);
        output.y(serialDesc, 1, self.userId);
        output.n(2, self.isSpeaking, serialDesc);
        output.l(serialDesc, 3, self.voiceDb);
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
    public final int getIsSpeaking() {
        return this.isSpeaking;
    }

    /* renamed from: component4, reason: from getter */
    public final float getVoiceDb() {
        return this.voiceDb;
    }

    @NotNull
    public final UserSpeakingEvent copy(int connectionId, @NotNull String userId, int isSpeaking, float voiceDb) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        return new UserSpeakingEvent(connectionId, userId, isSpeaking, voiceDb);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof UserSpeakingEvent)) {
            return false;
        }
        UserSpeakingEvent userSpeakingEvent = (UserSpeakingEvent) other;
        return this.connectionId == userSpeakingEvent.connectionId && Intrinsics.areEqual(this.userId, userSpeakingEvent.userId) && this.isSpeaking == userSpeakingEvent.isSpeaking && Float.compare(this.voiceDb, userSpeakingEvent.voiceDb) == 0;
    }

    public final int getConnectionId() {
        return this.connectionId;
    }

    @NotNull
    public final String getUserId() {
        return this.userId;
    }

    public final float getVoiceDb() {
        return this.voiceDb;
    }

    public int hashCode() {
        return Float.hashCode(this.voiceDb) + a.u(this.isSpeaking, a3.e.d(Integer.hashCode(this.connectionId) * 31, 31, this.userId), 31);
    }

    public final int isSpeaking() {
        return this.isSpeaking;
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
        int i6 = this.isSpeaking;
        float f2 = this.voiceDb;
        StringBuilder n6 = a.n("UserSpeakingEvent(connectionId=", ", userId=", str, i5, ", isSpeaking=");
        n6.append(i6);
        n6.append(", voiceDb=");
        n6.append(f2);
        n6.append(")");
        return n6.toString();
    }

    public UserSpeakingEvent(int i5, @NotNull String userId, int i6, float f2) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        this.connectionId = i5;
        this.userId = userId;
        this.isSpeaking = i6;
        this.voiceDb = f2;
    }
}
