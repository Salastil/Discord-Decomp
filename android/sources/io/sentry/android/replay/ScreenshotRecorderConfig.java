package io.sentry.android.replay;

import a3.e;
import android.content.Context;
import com.discord.jank_stats.JankRecordStore;
import io.sentry.z5;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import uo.c;

@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0014\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0087\b\u0018\u0000 !2\u00020\u0001:\u0001!B\u0017\b\u0010\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0002\u0010\u0005B5\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0007\u0012\u0006\u0010\n\u001a\u00020\u0007¢\u0006\u0002\u0010\u000bJ\t\u0010\u0014\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0007HÆ\u0003JE\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00072\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00072\b\b\u0002\u0010\n\u001a\u00020\u0007HÆ\u0001J\u0013\u0010\u001b\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001e\u001a\u00020\u0007HÖ\u0001J\t\u0010\u001f\u001a\u00020 HÖ\u0001R\u0011\u0010\n\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\t\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\rR\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\rR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\rR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012¨\u0006\""}, d2 = {"Lio/sentry/android/replay/ScreenshotRecorderConfig;", "", "scaleFactorX", "", "scaleFactorY", "(FF)V", "recordingWidth", "", "recordingHeight", "frameRate", "bitRate", "(IIFFII)V", "getBitRate", "()I", "getFrameRate", "getRecordingHeight", "getRecordingWidth", "getScaleFactorX", "()F", "getScaleFactorY", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "Companion", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class ScreenshotRecorderConfig {
    public static final int $stable = 0;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int bitRate;
    private final int frameRate;
    private final int recordingHeight;
    private final int recordingWidth;
    private final float scaleFactorX;
    private final float scaleFactorY;

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0080\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0005\u001a\u00020\u0004*\u00020\u0004H\u0002¢\u0006\u0004\b\u0005\u0010\u0006J-\u0010\u000e\u001a\u00020\r2\u0006\u0010\b\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u0004¢\u0006\u0004\b\u000e\u0010\u000f¨\u0006\u0010"}, d2 = {"Lio/sentry/android/replay/ScreenshotRecorderConfig$Companion;", "", "<init>", "()V", "", "adjustToBlockSize", "(I)I", "Landroid/content/Context;", "context", "Lio/sentry/z5;", "sessionReplay", "windowWidth", "windowHeight", "Lio/sentry/android/replay/ScreenshotRecorderConfig;", "fromSize", "(Landroid/content/Context;Lio/sentry/z5;II)Lio/sentry/android/replay/ScreenshotRecorderConfig;", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final int adjustToBlockSize(int i5) {
            int i6 = i5 % 16;
            return i6 <= 8 ? Math.max(16, i5 - i6) : (16 - i6) + i5;
        }

        @NotNull
        public final ScreenshotRecorderConfig fromSize(@NotNull Context context, @NotNull z5 sessionReplay, int windowWidth, int windowHeight) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(sessionReplay, "sessionReplay");
            float f2 = windowHeight;
            Integer valueOf = Integer.valueOf(adjustToBlockSize(c.b((f2 / context.getResources().getDisplayMetrics().density) * sessionReplay.f12108g.sizeScale)));
            float f10 = windowWidth;
            Integer valueOf2 = Integer.valueOf(adjustToBlockSize(c.b((f10 / context.getResources().getDisplayMetrics().density) * sessionReplay.f12108g.sizeScale)));
            int intValue = valueOf.intValue();
            int intValue2 = valueOf2.intValue();
            return new ScreenshotRecorderConfig(intValue2, intValue, intValue2 / f10, intValue / f2, sessionReplay.f12109h, sessionReplay.f12108g.bitRate);
        }

        private Companion() {
        }
    }

    public ScreenshotRecorderConfig(int i5, int i6, float f2, float f10, int i10, int i11) {
        this.recordingWidth = i5;
        this.recordingHeight = i6;
        this.scaleFactorX = f2;
        this.scaleFactorY = f10;
        this.frameRate = i10;
        this.bitRate = i11;
    }

    public static /* synthetic */ ScreenshotRecorderConfig copy$default(ScreenshotRecorderConfig screenshotRecorderConfig, int i5, int i6, float f2, float f10, int i10, int i11, int i12, Object obj) {
        if ((i12 & 1) != 0) {
            i5 = screenshotRecorderConfig.recordingWidth;
        }
        if ((i12 & 2) != 0) {
            i6 = screenshotRecorderConfig.recordingHeight;
        }
        if ((i12 & 4) != 0) {
            f2 = screenshotRecorderConfig.scaleFactorX;
        }
        if ((i12 & 8) != 0) {
            f10 = screenshotRecorderConfig.scaleFactorY;
        }
        if ((i12 & 16) != 0) {
            i10 = screenshotRecorderConfig.frameRate;
        }
        if ((i12 & 32) != 0) {
            i11 = screenshotRecorderConfig.bitRate;
        }
        int i13 = i10;
        int i14 = i11;
        return screenshotRecorderConfig.copy(i5, i6, f2, f10, i13, i14);
    }

    /* renamed from: component1, reason: from getter */
    public final int getRecordingWidth() {
        return this.recordingWidth;
    }

    /* renamed from: component2, reason: from getter */
    public final int getRecordingHeight() {
        return this.recordingHeight;
    }

    /* renamed from: component3, reason: from getter */
    public final float getScaleFactorX() {
        return this.scaleFactorX;
    }

    /* renamed from: component4, reason: from getter */
    public final float getScaleFactorY() {
        return this.scaleFactorY;
    }

    /* renamed from: component5, reason: from getter */
    public final int getFrameRate() {
        return this.frameRate;
    }

    /* renamed from: component6, reason: from getter */
    public final int getBitRate() {
        return this.bitRate;
    }

    @NotNull
    public final ScreenshotRecorderConfig copy(int recordingWidth, int recordingHeight, float scaleFactorX, float scaleFactorY, int frameRate, int bitRate) {
        return new ScreenshotRecorderConfig(recordingWidth, recordingHeight, scaleFactorX, scaleFactorY, frameRate, bitRate);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ScreenshotRecorderConfig)) {
            return false;
        }
        ScreenshotRecorderConfig screenshotRecorderConfig = (ScreenshotRecorderConfig) other;
        return this.recordingWidth == screenshotRecorderConfig.recordingWidth && this.recordingHeight == screenshotRecorderConfig.recordingHeight && Float.compare(this.scaleFactorX, screenshotRecorderConfig.scaleFactorX) == 0 && Float.compare(this.scaleFactorY, screenshotRecorderConfig.scaleFactorY) == 0 && this.frameRate == screenshotRecorderConfig.frameRate && this.bitRate == screenshotRecorderConfig.bitRate;
    }

    public final int getBitRate() {
        return this.bitRate;
    }

    public final int getFrameRate() {
        return this.frameRate;
    }

    public final int getRecordingHeight() {
        return this.recordingHeight;
    }

    public final int getRecordingWidth() {
        return this.recordingWidth;
    }

    public final float getScaleFactorX() {
        return this.scaleFactorX;
    }

    public final float getScaleFactorY() {
        return this.scaleFactorY;
    }

    public int hashCode() {
        return Integer.hashCode(this.bitRate) + com.discord.chat.bridge.botuikit.a.u(this.frameRate, e.a(e.a(com.discord.chat.bridge.botuikit.a.u(this.recordingHeight, Integer.hashCode(this.recordingWidth) * 31, 31), 31, this.scaleFactorX), 31, this.scaleFactorY), 31);
    }

    @NotNull
    public String toString() {
        StringBuilder sb2 = new StringBuilder("ScreenshotRecorderConfig(recordingWidth=");
        sb2.append(this.recordingWidth);
        sb2.append(", recordingHeight=");
        sb2.append(this.recordingHeight);
        sb2.append(", scaleFactorX=");
        sb2.append(this.scaleFactorX);
        sb2.append(", scaleFactorY=");
        sb2.append(this.scaleFactorY);
        sb2.append(", frameRate=");
        sb2.append(this.frameRate);
        sb2.append(", bitRate=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.bitRate, ')');
    }

    public ScreenshotRecorderConfig(float f2, float f10) {
        this(0, 0, f2, f10, 0, 0);
    }
}
