package com.discord.media_player.reactevents;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 (2\u00020\u0001:\u0002'(B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bB;\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J1\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bHÖ\u0003J\t\u0010\u001c\u001a\u00020\nHÖ\u0001J\t\u0010\u001d\u001a\u00020\u001eHÖ\u0001J%\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020\u00002\u0006\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020%H\u0001¢\u0006\u0002\b&R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000f¨\u0006)"}, d2 = {"Lcom/discord/media_player/reactevents/MediaPlayerDownloadProgress;", "Lcom/discord/reactevents/ReactEvent;", StackTraceHelper.ID_KEY, "", "progressSeconds", "progressPercent", "totalDurationSeconds", "<init>", "(DDDD)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IDDDDLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getId", "()D", "getProgressSeconds", "getProgressPercent", "getTotalDurationSeconds", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$media_player_release", "$serializer", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MediaPlayerDownloadProgress implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final double id;
    private final double progressPercent;
    private final double progressSeconds;
    private final double totalDurationSeconds;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/media_player/reactevents/MediaPlayerDownloadProgress$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/media_player/reactevents/MediaPlayerDownloadProgress;", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return MediaPlayerDownloadProgress$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ MediaPlayerDownloadProgress(int i5, double d6, double d7, double d8, double d10, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, MediaPlayerDownloadProgress$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = d6;
        this.progressSeconds = d7;
        this.progressPercent = d8;
        this.totalDurationSeconds = d10;
    }

    public static /* synthetic */ MediaPlayerDownloadProgress copy$default(MediaPlayerDownloadProgress mediaPlayerDownloadProgress, double d6, double d7, double d8, double d10, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            d6 = mediaPlayerDownloadProgress.id;
        }
        double d11 = d6;
        if ((i5 & 2) != 0) {
            d7 = mediaPlayerDownloadProgress.progressSeconds;
        }
        double d12 = d7;
        if ((i5 & 4) != 0) {
            d8 = mediaPlayerDownloadProgress.progressPercent;
        }
        return mediaPlayerDownloadProgress.copy(d11, d12, d8, (i5 & 8) != 0 ? mediaPlayerDownloadProgress.totalDurationSeconds : d10);
    }

    public static final /* synthetic */ void write$Self$media_player_release(MediaPlayerDownloadProgress self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.N(serialDesc, 0, self.id);
        output.N(serialDesc, 1, self.progressSeconds);
        output.N(serialDesc, 2, self.progressPercent);
        output.N(serialDesc, 3, self.totalDurationSeconds);
    }

    /* renamed from: component1, reason: from getter */
    public final double getId() {
        return this.id;
    }

    /* renamed from: component2, reason: from getter */
    public final double getProgressSeconds() {
        return this.progressSeconds;
    }

    /* renamed from: component3, reason: from getter */
    public final double getProgressPercent() {
        return this.progressPercent;
    }

    /* renamed from: component4, reason: from getter */
    public final double getTotalDurationSeconds() {
        return this.totalDurationSeconds;
    }

    @NotNull
    public final MediaPlayerDownloadProgress copy(double id2, double progressSeconds, double progressPercent, double totalDurationSeconds) {
        return new MediaPlayerDownloadProgress(id2, progressSeconds, progressPercent, totalDurationSeconds);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MediaPlayerDownloadProgress)) {
            return false;
        }
        MediaPlayerDownloadProgress mediaPlayerDownloadProgress = (MediaPlayerDownloadProgress) other;
        return Double.compare(this.id, mediaPlayerDownloadProgress.id) == 0 && Double.compare(this.progressSeconds, mediaPlayerDownloadProgress.progressSeconds) == 0 && Double.compare(this.progressPercent, mediaPlayerDownloadProgress.progressPercent) == 0 && Double.compare(this.totalDurationSeconds, mediaPlayerDownloadProgress.totalDurationSeconds) == 0;
    }

    public final double getId() {
        return this.id;
    }

    public final double getProgressPercent() {
        return this.progressPercent;
    }

    public final double getProgressSeconds() {
        return this.progressSeconds;
    }

    public final double getTotalDurationSeconds() {
        return this.totalDurationSeconds;
    }

    public int hashCode() {
        return Double.hashCode(this.totalDurationSeconds) + a.c(a.c(Double.hashCode(this.id) * 31, this.progressSeconds, 31), this.progressPercent, 31);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        return "MediaPlayerDownloadProgress(id=" + this.id + ", progressSeconds=" + this.progressSeconds + ", progressPercent=" + this.progressPercent + ", totalDurationSeconds=" + this.totalDurationSeconds + ")";
    }

    public MediaPlayerDownloadProgress(double d6, double d7, double d8, double d10) {
        this.id = d6;
        this.progressSeconds = d7;
        this.progressPercent = d8;
        this.totalDurationSeconds = d10;
    }
}
