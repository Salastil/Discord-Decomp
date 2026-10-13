package com.discord.jank_stats;

import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.WritableNativeMap;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* JADX INFO: Access modifiers changed from: package-private */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u001a\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&J\u0006\u0010'\u001a\u00020(R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u001a\u0010\b\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u001a\u0010\u000e\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u000b\"\u0004\b\u0010\u0010\rR\u001a\u0010\u0011\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0012\u0010\u000b\"\u0004\b\u0013\u0010\rR\u001a\u0010\u0014\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0015\u0010\u000b\"\u0004\b\u0016\u0010\rR\u001a\u0010\u0017\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u000b\"\u0004\b\u0019\u0010\rR\u001a\u0010\u001a\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001b\u0010\u000b\"\u0004\b\u001c\u0010\rR\u001a\u0010\u001d\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u000b\"\u0004\b\u001f\u0010\rR\u001a\u0010 \u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b!\u0010\u000b\"\u0004\b\"\u0010\r¨\u0006)"}, d2 = {"Lcom/discord/jank_stats/ScreenRollup;", "", "screen", "", "<init>", "(Ljava/lang/String;)V", "getScreen", "()Ljava/lang/String;", "transitionFrames", "", "getTransitionFrames", "()J", "setTransitionFrames", "(J)V", "transitionJankFrames", "getTransitionJankFrames", "setTransitionJankFrames", "transitionJankTimeNanos", "getTransitionJankTimeNanos", "setTransitionJankTimeNanos", "transitionTotalFrameTimeNanos", "getTransitionTotalFrameTimeNanos", "setTransitionTotalFrameTimeNanos", "steadyFrames", "getSteadyFrames", "setSteadyFrames", "steadyJankFrames", "getSteadyJankFrames", "setSteadyJankFrames", "steadyJankTimeNanos", "getSteadyJankTimeNanos", "setSteadyJankTimeNanos", "steadyTotalFrameTimeNanos", "getSteadyTotalFrameTimeNanos", "setSteadyTotalFrameTimeNanos", "add", "", "bucket", "Lcom/discord/jank_stats/ScreenJankBucket;", "toNativeMap", "Lcom/facebook/react/bridge/WritableNativeMap;", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ScreenRollup {

    @NotNull
    private final String screen;
    private long steadyFrames;
    private long steadyJankFrames;
    private long steadyJankTimeNanos;
    private long steadyTotalFrameTimeNanos;
    private long transitionFrames;
    private long transitionJankFrames;
    private long transitionJankTimeNanos;
    private long transitionTotalFrameTimeNanos;

    public ScreenRollup(@NotNull String screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        this.screen = screen;
    }

    public final void add(@NotNull ScreenJankBucket bucket) {
        Intrinsics.checkNotNullParameter(bucket, "bucket");
        if (Intrinsics.areEqual(bucket.getInteraction(), JankScreenContext.INTERACTION_TRANSITION)) {
            this.transitionFrames += bucket.getNumFrames();
            this.transitionJankFrames += bucket.getNumJankFrames();
            this.transitionJankTimeNanos = bucket.getJankTimeNanos() + this.transitionJankTimeNanos;
            this.transitionTotalFrameTimeNanos = bucket.getTotalFrameTimeNanos() + this.transitionTotalFrameTimeNanos;
            return;
        }
        this.steadyFrames += bucket.getNumFrames();
        this.steadyJankFrames += bucket.getNumJankFrames();
        this.steadyJankTimeNanos = bucket.getJankTimeNanos() + this.steadyJankTimeNanos;
        this.steadyTotalFrameTimeNanos = bucket.getTotalFrameTimeNanos() + this.steadyTotalFrameTimeNanos;
    }

    @NotNull
    public final String getScreen() {
        return this.screen;
    }

    public final long getSteadyFrames() {
        return this.steadyFrames;
    }

    public final long getSteadyJankFrames() {
        return this.steadyJankFrames;
    }

    public final long getSteadyJankTimeNanos() {
        return this.steadyJankTimeNanos;
    }

    public final long getSteadyTotalFrameTimeNanos() {
        return this.steadyTotalFrameTimeNanos;
    }

    public final long getTransitionFrames() {
        return this.transitionFrames;
    }

    public final long getTransitionJankFrames() {
        return this.transitionJankFrames;
    }

    public final long getTransitionJankTimeNanos() {
        return this.transitionJankTimeNanos;
    }

    public final long getTransitionTotalFrameTimeNanos() {
        return this.transitionTotalFrameTimeNanos;
    }

    public final void setSteadyFrames(long j) {
        this.steadyFrames = j;
    }

    public final void setSteadyJankFrames(long j) {
        this.steadyJankFrames = j;
    }

    public final void setSteadyJankTimeNanos(long j) {
        this.steadyJankTimeNanos = j;
    }

    public final void setSteadyTotalFrameTimeNanos(long j) {
        this.steadyTotalFrameTimeNanos = j;
    }

    public final void setTransitionFrames(long j) {
        this.transitionFrames = j;
    }

    public final void setTransitionJankFrames(long j) {
        this.transitionJankFrames = j;
    }

    public final void setTransitionJankTimeNanos(long j) {
        this.transitionJankTimeNanos = j;
    }

    public final void setTransitionTotalFrameTimeNanos(long j) {
        this.transitionTotalFrameTimeNanos = j;
    }

    @NotNull
    public final WritableNativeMap toNativeMap() {
        return NativeMapExtensionsKt.nativeMapOf(new Pair("screen", this.screen), new Pair("transitionFrameCount", Double.valueOf(this.transitionFrames)), new Pair("transitionJankFrameCount", Double.valueOf(this.transitionJankFrames)), new Pair("transitionJankFrameTimeMs", Double.valueOf(this.transitionJankTimeNanos / 1000000.0d)), new Pair("transitionTotalFrameTimeMs", Double.valueOf(this.transitionTotalFrameTimeNanos / 1000000.0d)), new Pair("steadyFrameCount", Double.valueOf(this.steadyFrames)), new Pair("steadyJankFrameCount", Double.valueOf(this.steadyJankFrames)), new Pair("steadyJankFrameTimeMs", Double.valueOf(this.steadyJankTimeNanos / 1000000.0d)), new Pair("steadyTotalFrameTimeMs", Double.valueOf(this.steadyTotalFrameTimeNanos / 1000000.0d)));
    }
}
