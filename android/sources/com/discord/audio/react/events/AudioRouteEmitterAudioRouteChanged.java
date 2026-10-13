package com.discord.audio.react.events;

import bs.h1;
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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 \"2\u00020\u0001:\u0002!\"B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007B-\b\u0010\u0012\u0006\u0010\b\u001a\u00020\t\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u0006\u0010\fJ\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00052\b\u0010\u0015\u001a\u0004\u0018\u00010\u0016HÖ\u0003J\t\u0010\u0017\u001a\u00020\tHÖ\u0001J\t\u0010\u0018\u001a\u00020\u0003HÖ\u0001J%\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u00002\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001fH\u0001¢\u0006\u0002\b R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010¨\u0006#"}, d2 = {"Lcom/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged;", "Lcom/discord/reactevents/ReactEvent;", "routeType", "", "multipleRoutesAvailable", "", "<init>", "(Ljava/lang/String;Z)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;ZLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getRouteType", "()Ljava/lang/String;", "getMultipleRoutesAvailable", "()Z", "component1", "component2", "copy", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$audio_release", "$serializer", "Companion", "audio_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class AudioRouteEmitterAudioRouteChanged implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final boolean multipleRoutesAvailable;

    @NotNull
    private final String routeType;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged;", "audio_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return AudioRouteEmitterAudioRouteChanged$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ AudioRouteEmitterAudioRouteChanged(int i5, String str, boolean z5, SerializationConstructorMarker serializationConstructorMarker) {
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, AudioRouteEmitterAudioRouteChanged$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.routeType = str;
        this.multipleRoutesAvailable = z5;
    }

    public static /* synthetic */ AudioRouteEmitterAudioRouteChanged copy$default(AudioRouteEmitterAudioRouteChanged audioRouteEmitterAudioRouteChanged, String str, boolean z5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = audioRouteEmitterAudioRouteChanged.routeType;
        }
        if ((i5 & 2) != 0) {
            z5 = audioRouteEmitterAudioRouteChanged.multipleRoutesAvailable;
        }
        return audioRouteEmitterAudioRouteChanged.copy(str, z5);
    }

    public static final /* synthetic */ void write$Self$audio_release(AudioRouteEmitterAudioRouteChanged self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.routeType);
        output.x(serialDesc, 1, self.multipleRoutesAvailable);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getRouteType() {
        return this.routeType;
    }

    /* renamed from: component2, reason: from getter */
    public final boolean getMultipleRoutesAvailable() {
        return this.multipleRoutesAvailable;
    }

    @NotNull
    public final AudioRouteEmitterAudioRouteChanged copy(@NotNull String routeType, boolean multipleRoutesAvailable) {
        Intrinsics.checkNotNullParameter(routeType, "routeType");
        return new AudioRouteEmitterAudioRouteChanged(routeType, multipleRoutesAvailable);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof AudioRouteEmitterAudioRouteChanged)) {
            return false;
        }
        AudioRouteEmitterAudioRouteChanged audioRouteEmitterAudioRouteChanged = (AudioRouteEmitterAudioRouteChanged) other;
        return Intrinsics.areEqual(this.routeType, audioRouteEmitterAudioRouteChanged.routeType) && this.multipleRoutesAvailable == audioRouteEmitterAudioRouteChanged.multipleRoutesAvailable;
    }

    public final boolean getMultipleRoutesAvailable() {
        return this.multipleRoutesAvailable;
    }

    @NotNull
    public final String getRouteType() {
        return this.routeType;
    }

    public int hashCode() {
        return Boolean.hashCode(this.multipleRoutesAvailable) + (this.routeType.hashCode() * 31);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        return "AudioRouteEmitterAudioRouteChanged(routeType=" + this.routeType + ", multipleRoutesAvailable=" + this.multipleRoutesAvailable + ")";
    }

    public AudioRouteEmitterAudioRouteChanged(@NotNull String routeType, boolean z5) {
        Intrinsics.checkNotNullParameter(routeType, "routeType");
        this.routeType = routeType;
        this.multipleRoutesAvailable = z5;
    }
}
