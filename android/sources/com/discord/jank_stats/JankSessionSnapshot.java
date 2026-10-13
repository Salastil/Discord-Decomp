package com.discord.jank_stats;

import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u000f\u0018\u00002\u00020\u0001BE\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\t¢\u0006\u0004\b\r\u0010\u000eR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0010R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0010R\u0017\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\f\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019¨\u0006\u001a"}, d2 = {"Lcom/discord/jank_stats/JankSessionSnapshot;", "", "totalFrames", "", "jankFrames", "totalFrameTimeNanos", "jankTimeNanos", "buckets", "", "Lcom/discord/jank_stats/ScreenJankBucket;", "pendingFrames", "", "openSegment", "<init>", "(JJJJLjava/util/List;ILcom/discord/jank_stats/ScreenJankBucket;)V", "getTotalFrames", "()J", "getJankFrames", "getTotalFrameTimeNanos", "getJankTimeNanos", "getBuckets", "()Ljava/util/List;", "getPendingFrames", "()I", "getOpenSegment", "()Lcom/discord/jank_stats/ScreenJankBucket;", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class JankSessionSnapshot {

    @NotNull
    private final List<ScreenJankBucket> buckets;
    private final long jankFrames;
    private final long jankTimeNanos;

    @NotNull
    private final ScreenJankBucket openSegment;
    private final int pendingFrames;
    private final long totalFrameTimeNanos;
    private final long totalFrames;

    public JankSessionSnapshot(long j, long j5, long j7, long j10, @NotNull List<ScreenJankBucket> buckets, int i5, @NotNull ScreenJankBucket openSegment) {
        Intrinsics.checkNotNullParameter(buckets, "buckets");
        Intrinsics.checkNotNullParameter(openSegment, "openSegment");
        this.totalFrames = j;
        this.jankFrames = j5;
        this.totalFrameTimeNanos = j7;
        this.jankTimeNanos = j10;
        this.buckets = buckets;
        this.pendingFrames = i5;
        this.openSegment = openSegment;
    }

    @NotNull
    public final List<ScreenJankBucket> getBuckets() {
        return this.buckets;
    }

    public final long getJankFrames() {
        return this.jankFrames;
    }

    public final long getJankTimeNanos() {
        return this.jankTimeNanos;
    }

    @NotNull
    public final ScreenJankBucket getOpenSegment() {
        return this.openSegment;
    }

    public final int getPendingFrames() {
        return this.pendingFrames;
    }

    public final long getTotalFrameTimeNanos() {
        return this.totalFrameTimeNanos;
    }

    public final long getTotalFrames() {
        return this.totalFrames;
    }
}
