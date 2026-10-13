package com.discord.media_player.reactevents;

import androidx.recyclerview.widget.RecyclerView;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000T\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b&\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 M2\u00020\u0001:\u0002LMB\u0083\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\n\u0012\u0006\u0010\u000e\u001a\u00020\u0006\u0012\u0006\u0010\u000f\u001a\u00020\u0006\u0012\u0006\u0010\u0010\u001a\u00020\u0003\u0012\u0006\u0010\u0011\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u0014\u0010\u0015B\u0093\u0001\b\u0010\u0012\u0006\u0010\u0016\u001a\u00020\u0006\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\n\u0012\u0006\u0010\u000e\u001a\u00020\u0006\u0012\u0006\u0010\u000f\u001a\u00020\u0006\u0012\u0006\u0010\u0010\u001a\u00020\u0003\u0012\u0006\u0010\u0011\u001a\u00020\u0003\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\n\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018¢\u0006\u0004\b\u0014\u0010\u0019J\t\u0010.\u001a\u00020\u0003HÆ\u0003J\t\u0010/\u001a\u00020\u0003HÆ\u0003J\t\u00100\u001a\u00020\u0006HÆ\u0003J\t\u00101\u001a\u00020\u0006HÆ\u0003J\t\u00102\u001a\u00020\u0003HÆ\u0003J\u000b\u00103\u001a\u0004\u0018\u00010\nHÆ\u0003J\t\u00104\u001a\u00020\fHÆ\u0003J\u000b\u00105\u001a\u0004\u0018\u00010\nHÆ\u0003J\t\u00106\u001a\u00020\u0006HÆ\u0003J\t\u00107\u001a\u00020\u0006HÆ\u0003J\t\u00108\u001a\u00020\u0003HÆ\u0003J\t\u00109\u001a\u00020\u0003HÆ\u0003J\u0010\u0010:\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010+J\u000b\u0010;\u001a\u0004\u0018\u00010\nHÆ\u0003J¢\u0001\u0010<\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\b\u001a\u00020\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\n2\b\b\u0002\u0010\u000b\u001a\u00020\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\n2\b\b\u0002\u0010\u000e\u001a\u00020\u00062\b\b\u0002\u0010\u000f\u001a\u00020\u00062\b\b\u0002\u0010\u0010\u001a\u00020\u00032\b\b\u0002\u0010\u0011\u001a\u00020\u00032\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\nHÆ\u0001¢\u0006\u0002\u0010=J\u0013\u0010>\u001a\u00020?2\b\u0010@\u001a\u0004\u0018\u00010AHÖ\u0003J\t\u0010B\u001a\u00020\u0006HÖ\u0001J\t\u0010C\u001a\u00020\nHÖ\u0001J%\u0010D\u001a\u00020E2\u0006\u0010F\u001a\u00020\u00002\u0006\u0010G\u001a\u00020H2\u0006\u0010I\u001a\u00020JH\u0001¢\u0006\u0002\bKR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001bR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001eR\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u001eR\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u001bR\u0013\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\u0013\u0010\r\u001a\u0004\u0018\u00010\n¢\u0006\b\n\u0000\u001a\u0004\b%\u0010\"R\u0011\u0010\u000e\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b&\u0010\u001eR\u0011\u0010\u000f\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\u001eR\u0011\u0010\u0010\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b(\u0010\u001bR\u0011\u0010\u0011\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b)\u0010\u001bR\u0015\u0010\u0012\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010,\u001a\u0004\b*\u0010+R\u0013\u0010\u0013\u001a\u0004\u0018\u00010\n¢\u0006\b\n\u0000\u001a\u0004\b-\u0010\"¨\u0006N"}, d2 = {"Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "Lcom/discord/reactevents/ReactEvent;", "playWallTimeMs", "", "stallMs", "stallCount", "", "seekCount", "firstPlayWaitingMs", "mediaSource", "", "fileDurationSec", "", "mimeType", "fatalErrorCount", "nonFatalErrorCount", "totalDroppedFrames", "totalBandwidthBytes", "errorCode", "errorMessage", "<init>", "(JJIIJLjava/lang/String;FLjava/lang/String;IIJJLjava/lang/Integer;Ljava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IJJIIJLjava/lang/String;FLjava/lang/String;IIJJLjava/lang/Integer;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getPlayWallTimeMs", "()J", "getStallMs", "getStallCount", "()I", "getSeekCount", "getFirstPlayWaitingMs", "getMediaSource", "()Ljava/lang/String;", "getFileDurationSec", "()F", "getMimeType", "getFatalErrorCount", "getNonFatalErrorCount", "getTotalDroppedFrames", "getTotalBandwidthBytes", "getErrorCode", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getErrorMessage", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "copy", "(JJIIJLjava/lang/String;FLjava/lang/String;IIJJLjava/lang/Integer;Ljava/lang/String;)Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$media_player_release", "$serializer", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MediaPlayFinishedAnalytics implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final Integer errorCode;
    private final String errorMessage;
    private final int fatalErrorCount;
    private final float fileDurationSec;
    private final long firstPlayWaitingMs;
    private final String mediaSource;
    private final String mimeType;
    private final int nonFatalErrorCount;
    private final long playWallTimeMs;
    private final int seekCount;
    private final int stallCount;
    private final long stallMs;
    private final long totalBandwidthBytes;
    private final long totalDroppedFrames;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return MediaPlayFinishedAnalytics$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ MediaPlayFinishedAnalytics(int i5, long j, long j5, int i6, int i10, long j7, String str, float f2, String str2, int i11, int i12, long j10, long j11, Integer num, String str3, SerializationConstructorMarker serializationConstructorMarker) {
        if (4095 != (i5 & 4095)) {
            h1.l(i5, 4095, MediaPlayFinishedAnalytics$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.playWallTimeMs = j;
        this.stallMs = j5;
        this.stallCount = i6;
        this.seekCount = i10;
        this.firstPlayWaitingMs = j7;
        this.mediaSource = str;
        this.fileDurationSec = f2;
        this.mimeType = str2;
        this.fatalErrorCount = i11;
        this.nonFatalErrorCount = i12;
        this.totalDroppedFrames = j10;
        this.totalBandwidthBytes = j11;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.errorCode = null;
        } else {
            this.errorCode = num;
        }
        if ((i5 & 8192) == 0) {
            this.errorMessage = null;
        } else {
            this.errorMessage = str3;
        }
    }

    public static /* synthetic */ MediaPlayFinishedAnalytics copy$default(MediaPlayFinishedAnalytics mediaPlayFinishedAnalytics, long j, long j5, int i5, int i6, long j7, String str, float f2, String str2, int i10, int i11, long j10, long j11, Integer num, String str3, int i12, Object obj) {
        long j12;
        long j13;
        long j14 = (i12 & 1) != 0 ? mediaPlayFinishedAnalytics.playWallTimeMs : j;
        long j15 = (i12 & 2) != 0 ? mediaPlayFinishedAnalytics.stallMs : j5;
        int i13 = (i12 & 4) != 0 ? mediaPlayFinishedAnalytics.stallCount : i5;
        int i14 = (i12 & 8) != 0 ? mediaPlayFinishedAnalytics.seekCount : i6;
        long j16 = (i12 & 16) != 0 ? mediaPlayFinishedAnalytics.firstPlayWaitingMs : j7;
        String str4 = (i12 & 32) != 0 ? mediaPlayFinishedAnalytics.mediaSource : str;
        float f10 = (i12 & 64) != 0 ? mediaPlayFinishedAnalytics.fileDurationSec : f2;
        String str5 = (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? mediaPlayFinishedAnalytics.mimeType : str2;
        int i15 = (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? mediaPlayFinishedAnalytics.fatalErrorCount : i10;
        int i16 = (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? mediaPlayFinishedAnalytics.nonFatalErrorCount : i11;
        if ((i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
            j12 = j14;
            j13 = mediaPlayFinishedAnalytics.totalDroppedFrames;
        } else {
            j12 = j14;
            j13 = j10;
        }
        return mediaPlayFinishedAnalytics.copy(j12, j15, i13, i14, j16, str4, f10, str5, i15, i16, j13, (i12 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? mediaPlayFinishedAnalytics.totalBandwidthBytes : j11, (i12 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? mediaPlayFinishedAnalytics.errorCode : num, (i12 & 8192) != 0 ? mediaPlayFinishedAnalytics.errorMessage : str3);
    }

    public static final /* synthetic */ void write$Self$media_player_release(MediaPlayFinishedAnalytics self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.P(serialDesc, 0, self.playWallTimeMs);
        output.P(serialDesc, 1, self.stallMs);
        output.n(2, self.stallCount, serialDesc);
        output.n(3, self.seekCount, serialDesc);
        output.P(serialDesc, 4, self.firstPlayWaitingMs);
        v1 v1Var = v1.a;
        output.z(serialDesc, 5, v1Var, self.mediaSource);
        output.l(serialDesc, 6, self.fileDurationSec);
        output.z(serialDesc, 7, v1Var, self.mimeType);
        output.n(8, self.fatalErrorCount, serialDesc);
        output.n(9, self.nonFatalErrorCount, serialDesc);
        output.P(serialDesc, 10, self.totalDroppedFrames);
        output.P(serialDesc, 11, self.totalBandwidthBytes);
        if (output.I(serialDesc, 12) || self.errorCode != null) {
            output.z(serialDesc, 12, o0.a, self.errorCode);
        }
        if (!output.I(serialDesc, 13) && self.errorMessage == null) {
            return;
        }
        output.z(serialDesc, 13, v1Var, self.errorMessage);
    }

    /* renamed from: component1, reason: from getter */
    public final long getPlayWallTimeMs() {
        return this.playWallTimeMs;
    }

    /* renamed from: component10, reason: from getter */
    public final int getNonFatalErrorCount() {
        return this.nonFatalErrorCount;
    }

    /* renamed from: component11, reason: from getter */
    public final long getTotalDroppedFrames() {
        return this.totalDroppedFrames;
    }

    /* renamed from: component12, reason: from getter */
    public final long getTotalBandwidthBytes() {
        return this.totalBandwidthBytes;
    }

    /* renamed from: component13, reason: from getter */
    public final Integer getErrorCode() {
        return this.errorCode;
    }

    /* renamed from: component14, reason: from getter */
    public final String getErrorMessage() {
        return this.errorMessage;
    }

    /* renamed from: component2, reason: from getter */
    public final long getStallMs() {
        return this.stallMs;
    }

    /* renamed from: component3, reason: from getter */
    public final int getStallCount() {
        return this.stallCount;
    }

    /* renamed from: component4, reason: from getter */
    public final int getSeekCount() {
        return this.seekCount;
    }

    /* renamed from: component5, reason: from getter */
    public final long getFirstPlayWaitingMs() {
        return this.firstPlayWaitingMs;
    }

    /* renamed from: component6, reason: from getter */
    public final String getMediaSource() {
        return this.mediaSource;
    }

    /* renamed from: component7, reason: from getter */
    public final float getFileDurationSec() {
        return this.fileDurationSec;
    }

    /* renamed from: component8, reason: from getter */
    public final String getMimeType() {
        return this.mimeType;
    }

    /* renamed from: component9, reason: from getter */
    public final int getFatalErrorCount() {
        return this.fatalErrorCount;
    }

    @NotNull
    public final MediaPlayFinishedAnalytics copy(long playWallTimeMs, long stallMs, int stallCount, int seekCount, long firstPlayWaitingMs, String mediaSource, float fileDurationSec, String mimeType, int fatalErrorCount, int nonFatalErrorCount, long totalDroppedFrames, long totalBandwidthBytes, Integer errorCode, String errorMessage) {
        return new MediaPlayFinishedAnalytics(playWallTimeMs, stallMs, stallCount, seekCount, firstPlayWaitingMs, mediaSource, fileDurationSec, mimeType, fatalErrorCount, nonFatalErrorCount, totalDroppedFrames, totalBandwidthBytes, errorCode, errorMessage);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MediaPlayFinishedAnalytics)) {
            return false;
        }
        MediaPlayFinishedAnalytics mediaPlayFinishedAnalytics = (MediaPlayFinishedAnalytics) other;
        return this.playWallTimeMs == mediaPlayFinishedAnalytics.playWallTimeMs && this.stallMs == mediaPlayFinishedAnalytics.stallMs && this.stallCount == mediaPlayFinishedAnalytics.stallCount && this.seekCount == mediaPlayFinishedAnalytics.seekCount && this.firstPlayWaitingMs == mediaPlayFinishedAnalytics.firstPlayWaitingMs && Intrinsics.areEqual(this.mediaSource, mediaPlayFinishedAnalytics.mediaSource) && Float.compare(this.fileDurationSec, mediaPlayFinishedAnalytics.fileDurationSec) == 0 && Intrinsics.areEqual(this.mimeType, mediaPlayFinishedAnalytics.mimeType) && this.fatalErrorCount == mediaPlayFinishedAnalytics.fatalErrorCount && this.nonFatalErrorCount == mediaPlayFinishedAnalytics.nonFatalErrorCount && this.totalDroppedFrames == mediaPlayFinishedAnalytics.totalDroppedFrames && this.totalBandwidthBytes == mediaPlayFinishedAnalytics.totalBandwidthBytes && Intrinsics.areEqual(this.errorCode, mediaPlayFinishedAnalytics.errorCode) && Intrinsics.areEqual(this.errorMessage, mediaPlayFinishedAnalytics.errorMessage);
    }

    public final Integer getErrorCode() {
        return this.errorCode;
    }

    public final String getErrorMessage() {
        return this.errorMessage;
    }

    public final int getFatalErrorCount() {
        return this.fatalErrorCount;
    }

    public final float getFileDurationSec() {
        return this.fileDurationSec;
    }

    public final long getFirstPlayWaitingMs() {
        return this.firstPlayWaitingMs;
    }

    public final String getMediaSource() {
        return this.mediaSource;
    }

    public final String getMimeType() {
        return this.mimeType;
    }

    public final int getNonFatalErrorCount() {
        return this.nonFatalErrorCount;
    }

    public final long getPlayWallTimeMs() {
        return this.playWallTimeMs;
    }

    public final int getSeekCount() {
        return this.seekCount;
    }

    public final int getStallCount() {
        return this.stallCount;
    }

    public final long getStallMs() {
        return this.stallMs;
    }

    public final long getTotalBandwidthBytes() {
        return this.totalBandwidthBytes;
    }

    public final long getTotalDroppedFrames() {
        return this.totalDroppedFrames;
    }

    public int hashCode() {
        int g6 = a.g(this.firstPlayWaitingMs, a.u(this.seekCount, a.u(this.stallCount, a.g(this.stallMs, Long.hashCode(this.playWallTimeMs) * 31, 31), 31), 31), 31);
        String str = this.mediaSource;
        int a = a3.e.a((g6 + (str == null ? 0 : str.hashCode())) * 31, 31, this.fileDurationSec);
        String str2 = this.mimeType;
        int g10 = a.g(this.totalBandwidthBytes, a.g(this.totalDroppedFrames, a.u(this.nonFatalErrorCount, a.u(this.fatalErrorCount, (a + (str2 == null ? 0 : str2.hashCode())) * 31, 31), 31), 31), 31);
        Integer num = this.errorCode;
        int hashCode = (g10 + (num == null ? 0 : num.hashCode())) * 31;
        String str3 = this.errorMessage;
        return hashCode + (str3 != null ? str3.hashCode() : 0);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        long j = this.playWallTimeMs;
        long j5 = this.stallMs;
        int i5 = this.stallCount;
        int i6 = this.seekCount;
        long j7 = this.firstPlayWaitingMs;
        String str = this.mediaSource;
        float f2 = this.fileDurationSec;
        String str2 = this.mimeType;
        int i10 = this.fatalErrorCount;
        int i11 = this.nonFatalErrorCount;
        long j10 = this.totalDroppedFrames;
        long j11 = this.totalBandwidthBytes;
        Integer num = this.errorCode;
        String str3 = this.errorMessage;
        StringBuilder n6 = d.n(j, "MediaPlayFinishedAnalytics(playWallTimeMs=", ", stallMs=");
        n6.append(j5);
        n6.append(", stallCount=");
        n6.append(i5);
        n6.append(", seekCount=");
        n6.append(i6);
        n6.append(", firstPlayWaitingMs=");
        n6.append(j7);
        n6.append(", mediaSource=");
        n6.append(str);
        n6.append(", fileDurationSec=");
        n6.append(f2);
        n6.append(", mimeType=");
        n6.append(str2);
        n6.append(", fatalErrorCount=");
        n6.append(i10);
        n6.append(", nonFatalErrorCount=");
        n6.append(i11);
        n6.append(", totalDroppedFrames=");
        n6.append(j10);
        n6.append(", totalBandwidthBytes=");
        n6.append(j11);
        n6.append(", errorCode=");
        n6.append(num);
        return a3.e.n(n6, ", errorMessage=", str3, ")");
    }

    public MediaPlayFinishedAnalytics(long j, long j5, int i5, int i6, long j7, String str, float f2, String str2, int i10, int i11, long j10, long j11, Integer num, String str3) {
        this.playWallTimeMs = j;
        this.stallMs = j5;
        this.stallCount = i5;
        this.seekCount = i6;
        this.firstPlayWaitingMs = j7;
        this.mediaSource = str;
        this.fileDurationSec = f2;
        this.mimeType = str2;
        this.fatalErrorCount = i10;
        this.nonFatalErrorCount = i11;
        this.totalDroppedFrames = j10;
        this.totalBandwidthBytes = j11;
        this.errorCode = num;
        this.errorMessage = str3;
    }

    public /* synthetic */ MediaPlayFinishedAnalytics(long j, long j5, int i5, int i6, long j7, String str, float f2, String str2, int i10, int i11, long j10, long j11, Integer num, String str3, int i12, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, j5, i5, i6, j7, str, f2, str2, i10, i11, j10, j11, (i12 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : num, (i12 & 8192) != 0 ? null : str3);
    }
}
