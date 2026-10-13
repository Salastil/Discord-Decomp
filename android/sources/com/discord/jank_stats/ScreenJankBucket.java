package com.discord.jank_stats;

import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\r\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\t¢\u0006\u0004\b\u000b\u0010\fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000eR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\n\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0014¨\u0006\u0016"}, d2 = {"Lcom/discord/jank_stats/ScreenJankBucket;", "", "screen", "", "interaction", "numFrames", "", "numJankFrames", "jankTimeNanos", "", "totalFrameTimeNanos", "<init>", "(Ljava/lang/String;Ljava/lang/String;IIJJ)V", "getScreen", "()Ljava/lang/String;", "getInteraction", "getNumFrames", "()I", "getNumJankFrames", "getJankTimeNanos", "()J", "getTotalFrameTimeNanos", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ScreenJankBucket {

    @NotNull
    private final String interaction;
    private final long jankTimeNanos;
    private final int numFrames;
    private final int numJankFrames;

    @NotNull
    private final String screen;
    private final long totalFrameTimeNanos;

    public ScreenJankBucket(@NotNull String screen, @NotNull String interaction, int i5, int i6, long j, long j5) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        this.screen = screen;
        this.interaction = interaction;
        this.numFrames = i5;
        this.numJankFrames = i6;
        this.jankTimeNanos = j;
        this.totalFrameTimeNanos = j5;
    }

    @NotNull
    public final String getInteraction() {
        return this.interaction;
    }

    public final long getJankTimeNanos() {
        return this.jankTimeNanos;
    }

    public final int getNumFrames() {
        return this.numFrames;
    }

    public final int getNumJankFrames() {
        return this.numJankFrames;
    }

    @NotNull
    public final String getScreen() {
        return this.screen;
    }

    public final long getTotalFrameTimeNanos() {
        return this.totalFrameTimeNanos;
    }
}
