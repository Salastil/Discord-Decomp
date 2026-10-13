package com.discord.media_player.reactevents;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.WritableNativeMap;
import es.b;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 )2\u00020\u0001:\u0002()B!\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bB5\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\b\u0010\u0013\u001a\u00020\u0014H\u0016J\u000b\u0010\u0015\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J)\u0010\u0018\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u001cHÖ\u0003J\t\u0010\u001d\u001a\u00020\nHÖ\u0001J\t\u0010\u001e\u001a\u00020\u001fHÖ\u0001J%\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00002\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0001¢\u0006\u0002\b'R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011¨\u0006*"}, d2 = {"Lcom/discord/media_player/reactevents/MediaPlayerPlaybackProgressUpdated;", "Lcom/discord/reactevents/ReactEvent;", "source", "Lcom/discord/media_player/reactevents/MediaPlayerPlaybackSource;", "time", "", "duration", "<init>", "(Lcom/discord/media_player/reactevents/MediaPlayerPlaybackSource;JJ)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILcom/discord/media_player/reactevents/MediaPlayerPlaybackSource;JJLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getSource", "()Lcom/discord/media_player/reactevents/MediaPlayerPlaybackSource;", "getTime", "()J", "getDuration", "serialize", "Lcom/facebook/react/bridge/WritableMap;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$media_player_release", "$serializer", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MediaPlayerPlaybackProgressUpdated implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final long duration;
    private final MediaPlayerPlaybackSource source;
    private final long time;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/media_player/reactevents/MediaPlayerPlaybackProgressUpdated$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/media_player/reactevents/MediaPlayerPlaybackProgressUpdated;", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return MediaPlayerPlaybackProgressUpdated$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ MediaPlayerPlaybackProgressUpdated(int i5, MediaPlayerPlaybackSource mediaPlayerPlaybackSource, long j, long j5, SerializationConstructorMarker serializationConstructorMarker) {
        if (7 != (i5 & 7)) {
            h1.l(i5, 7, MediaPlayerPlaybackProgressUpdated$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.source = mediaPlayerPlaybackSource;
        this.time = j;
        this.duration = j5;
    }

    public static /* synthetic */ MediaPlayerPlaybackProgressUpdated copy$default(MediaPlayerPlaybackProgressUpdated mediaPlayerPlaybackProgressUpdated, MediaPlayerPlaybackSource mediaPlayerPlaybackSource, long j, long j5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            mediaPlayerPlaybackSource = mediaPlayerPlaybackProgressUpdated.source;
        }
        if ((i5 & 2) != 0) {
            j = mediaPlayerPlaybackProgressUpdated.time;
        }
        if ((i5 & 4) != 0) {
            j5 = mediaPlayerPlaybackProgressUpdated.duration;
        }
        return mediaPlayerPlaybackProgressUpdated.copy(mediaPlayerPlaybackSource, j, j5);
    }

    public static final /* synthetic */ void write$Self$media_player_release(MediaPlayerPlaybackProgressUpdated self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.z(serialDesc, 0, MediaPlayerPlaybackSource$$serializer.INSTANCE, self.source);
        output.P(serialDesc, 1, self.time);
        output.P(serialDesc, 2, self.duration);
    }

    /* renamed from: component1, reason: from getter */
    public final MediaPlayerPlaybackSource getSource() {
        return this.source;
    }

    /* renamed from: component2, reason: from getter */
    public final long getTime() {
        return this.time;
    }

    /* renamed from: component3, reason: from getter */
    public final long getDuration() {
        return this.duration;
    }

    @NotNull
    public final MediaPlayerPlaybackProgressUpdated copy(MediaPlayerPlaybackSource source, long time, long duration) {
        return new MediaPlayerPlaybackProgressUpdated(source, time, duration);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MediaPlayerPlaybackProgressUpdated)) {
            return false;
        }
        MediaPlayerPlaybackProgressUpdated mediaPlayerPlaybackProgressUpdated = (MediaPlayerPlaybackProgressUpdated) other;
        return Intrinsics.areEqual(this.source, mediaPlayerPlaybackProgressUpdated.source) && this.time == mediaPlayerPlaybackProgressUpdated.time && this.duration == mediaPlayerPlaybackProgressUpdated.duration;
    }

    public final long getDuration() {
        return this.duration;
    }

    public final MediaPlayerPlaybackSource getSource() {
        return this.source;
    }

    public final long getTime() {
        return this.time;
    }

    public int hashCode() {
        MediaPlayerPlaybackSource mediaPlayerPlaybackSource = this.source;
        return Long.hashCode(this.duration) + a.g(this.time, (mediaPlayerPlaybackSource == null ? 0 : mediaPlayerPlaybackSource.hashCode()) * 31, 31);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        WritableNativeMap nativeMapOf = NativeMapExtensionsKt.nativeMapOf(new Pair("time", Long.valueOf(this.time)), new Pair("duration", Long.valueOf(this.duration)));
        if (this.source != null) {
            fs.a aVar = fs.a.f9061b;
            Intrinsics.checkNotNullParameter(MediaPlayerPlaybackSource.class, "type");
            nativeMapOf.putMap("source", NativeMapExtensionsKt.toNativeMap(aVar.a(zk.a.B(b.a, MediaPlayerPlaybackSource.class), this.source)));
        }
        return nativeMapOf;
    }

    @NotNull
    public String toString() {
        return "MediaPlayerPlaybackProgressUpdated(source=" + this.source + ", time=" + this.time + ", duration=" + this.duration + ")";
    }

    public MediaPlayerPlaybackProgressUpdated(MediaPlayerPlaybackSource mediaPlayerPlaybackSource, long j, long j5) {
        this.source = mediaPlayerPlaybackSource;
        this.time = j;
        this.duration = j5;
    }
}
