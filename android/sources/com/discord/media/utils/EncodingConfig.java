package com.discord.media.utils;

import a3.e;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.swmansion.reanimated.layoutReanimation.Snapshot;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0004\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u001c\n\u0002\u0010\u000e\n\u0000\b\u0080\b\u0018\u00002\u00020\u0001BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\u0006\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\u0006\u0012\u0006\u0010\f\u001a\u00020\u0003¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0006HÆ\u0003J\t\u0010\u001d\u001a\u00020\u0006HÆ\u0003J\t\u0010\u001e\u001a\u00020\u0006HÆ\u0003J\t\u0010\u001f\u001a\u00020\nHÆ\u0003J\t\u0010 \u001a\u00020\u0006HÆ\u0003J\t\u0010!\u001a\u00020\u0003HÆ\u0003JY\u0010\"\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\b\u001a\u00020\u00062\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\u00062\b\b\u0002\u0010\f\u001a\u00020\u0003HÆ\u0001J\u0013\u0010#\u001a\u00020\n2\b\u0010$\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010%\u001a\u00020\u0003HÖ\u0001J\t\u0010&\u001a\u00020'HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0013R\u0011\u0010\b\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0013R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\u000b\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0013R\u0011\u0010\f\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0010¨\u0006("}, d2 = {"Lcom/discord/media/utils/EncodingConfig;", "", Snapshot.TARGET_WIDTH, "", Snapshot.TARGET_HEIGHT, "frameRate", "", "keyFrameIntervalSeconds", "targetBitrate", "createHDR", "", "rotationDegrees", "progressUpdateGranularity", "<init>", "(IILjava/lang/Number;Ljava/lang/Number;Ljava/lang/Number;ZLjava/lang/Number;I)V", "getTargetWidth", "()I", "getTargetHeight", "getFrameRate", "()Ljava/lang/Number;", "getKeyFrameIntervalSeconds", "getTargetBitrate", "getCreateHDR", "()Z", "getRotationDegrees", "getProgressUpdateGranularity", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class EncodingConfig {
    private final boolean createHDR;

    @NotNull
    private final Number frameRate;

    @NotNull
    private final Number keyFrameIntervalSeconds;
    private final int progressUpdateGranularity;

    @NotNull
    private final Number rotationDegrees;

    @NotNull
    private final Number targetBitrate;
    private final int targetHeight;
    private final int targetWidth;

    public EncodingConfig(int i5, int i6, @NotNull Number frameRate, @NotNull Number keyFrameIntervalSeconds, @NotNull Number targetBitrate, boolean z5, @NotNull Number rotationDegrees, int i10) {
        Intrinsics.checkNotNullParameter(frameRate, "frameRate");
        Intrinsics.checkNotNullParameter(keyFrameIntervalSeconds, "keyFrameIntervalSeconds");
        Intrinsics.checkNotNullParameter(targetBitrate, "targetBitrate");
        Intrinsics.checkNotNullParameter(rotationDegrees, "rotationDegrees");
        this.targetWidth = i5;
        this.targetHeight = i6;
        this.frameRate = frameRate;
        this.keyFrameIntervalSeconds = keyFrameIntervalSeconds;
        this.targetBitrate = targetBitrate;
        this.createHDR = z5;
        this.rotationDegrees = rotationDegrees;
        this.progressUpdateGranularity = i10;
    }

    public static /* synthetic */ EncodingConfig copy$default(EncodingConfig encodingConfig, int i5, int i6, Number number, Number number2, Number number3, boolean z5, Number number4, int i10, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            i5 = encodingConfig.targetWidth;
        }
        if ((i11 & 2) != 0) {
            i6 = encodingConfig.targetHeight;
        }
        if ((i11 & 4) != 0) {
            number = encodingConfig.frameRate;
        }
        if ((i11 & 8) != 0) {
            number2 = encodingConfig.keyFrameIntervalSeconds;
        }
        if ((i11 & 16) != 0) {
            number3 = encodingConfig.targetBitrate;
        }
        if ((i11 & 32) != 0) {
            z5 = encodingConfig.createHDR;
        }
        if ((i11 & 64) != 0) {
            number4 = encodingConfig.rotationDegrees;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            i10 = encodingConfig.progressUpdateGranularity;
        }
        Number number5 = number4;
        int i12 = i10;
        Number number6 = number3;
        boolean z6 = z5;
        return encodingConfig.copy(i5, i6, number, number2, number6, z6, number5, i12);
    }

    /* renamed from: component1, reason: from getter */
    public final int getTargetWidth() {
        return this.targetWidth;
    }

    /* renamed from: component2, reason: from getter */
    public final int getTargetHeight() {
        return this.targetHeight;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final Number getFrameRate() {
        return this.frameRate;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final Number getKeyFrameIntervalSeconds() {
        return this.keyFrameIntervalSeconds;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final Number getTargetBitrate() {
        return this.targetBitrate;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getCreateHDR() {
        return this.createHDR;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final Number getRotationDegrees() {
        return this.rotationDegrees;
    }

    /* renamed from: component8, reason: from getter */
    public final int getProgressUpdateGranularity() {
        return this.progressUpdateGranularity;
    }

    @NotNull
    public final EncodingConfig copy(int targetWidth, int targetHeight, @NotNull Number frameRate, @NotNull Number keyFrameIntervalSeconds, @NotNull Number targetBitrate, boolean createHDR, @NotNull Number rotationDegrees, int progressUpdateGranularity) {
        Intrinsics.checkNotNullParameter(frameRate, "frameRate");
        Intrinsics.checkNotNullParameter(keyFrameIntervalSeconds, "keyFrameIntervalSeconds");
        Intrinsics.checkNotNullParameter(targetBitrate, "targetBitrate");
        Intrinsics.checkNotNullParameter(rotationDegrees, "rotationDegrees");
        return new EncodingConfig(targetWidth, targetHeight, frameRate, keyFrameIntervalSeconds, targetBitrate, createHDR, rotationDegrees, progressUpdateGranularity);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof EncodingConfig)) {
            return false;
        }
        EncodingConfig encodingConfig = (EncodingConfig) other;
        return this.targetWidth == encodingConfig.targetWidth && this.targetHeight == encodingConfig.targetHeight && Intrinsics.areEqual(this.frameRate, encodingConfig.frameRate) && Intrinsics.areEqual(this.keyFrameIntervalSeconds, encodingConfig.keyFrameIntervalSeconds) && Intrinsics.areEqual(this.targetBitrate, encodingConfig.targetBitrate) && this.createHDR == encodingConfig.createHDR && Intrinsics.areEqual(this.rotationDegrees, encodingConfig.rotationDegrees) && this.progressUpdateGranularity == encodingConfig.progressUpdateGranularity;
    }

    public final boolean getCreateHDR() {
        return this.createHDR;
    }

    @NotNull
    public final Number getFrameRate() {
        return this.frameRate;
    }

    @NotNull
    public final Number getKeyFrameIntervalSeconds() {
        return this.keyFrameIntervalSeconds;
    }

    public final int getProgressUpdateGranularity() {
        return this.progressUpdateGranularity;
    }

    @NotNull
    public final Number getRotationDegrees() {
        return this.rotationDegrees;
    }

    @NotNull
    public final Number getTargetBitrate() {
        return this.targetBitrate;
    }

    public final int getTargetHeight() {
        return this.targetHeight;
    }

    public final int getTargetWidth() {
        return this.targetWidth;
    }

    public int hashCode() {
        return Integer.hashCode(this.progressUpdateGranularity) + ((this.rotationDegrees.hashCode() + d.d((this.targetBitrate.hashCode() + ((this.keyFrameIntervalSeconds.hashCode() + ((this.frameRate.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.targetHeight, Integer.hashCode(this.targetWidth) * 31, 31)) * 31)) * 31)) * 31, 31, this.createHDR)) * 31);
    }

    @NotNull
    public String toString() {
        int i5 = this.targetWidth;
        int i6 = this.targetHeight;
        Number number = this.frameRate;
        Number number2 = this.keyFrameIntervalSeconds;
        Number number3 = this.targetBitrate;
        boolean z5 = this.createHDR;
        Number number4 = this.rotationDegrees;
        int i10 = this.progressUpdateGranularity;
        StringBuilder q5 = e.q(i5, "EncodingConfig(targetWidth=", i6, ", targetHeight=", ", frameRate=");
        q5.append(number);
        q5.append(", keyFrameIntervalSeconds=");
        q5.append(number2);
        q5.append(", targetBitrate=");
        q5.append(number3);
        q5.append(", createHDR=");
        q5.append(z5);
        q5.append(", rotationDegrees=");
        q5.append(number4);
        q5.append(", progressUpdateGranularity=");
        q5.append(i10);
        q5.append(")");
        return q5.toString();
    }
}
