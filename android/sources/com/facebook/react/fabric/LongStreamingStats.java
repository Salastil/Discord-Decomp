package com.facebook.react.fabric;

import java.util.PriorityQueue;
import java.util.Queue;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0004\b\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0006R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u001e\u0010\n\u001a\u00020\t2\u0006\u0010\b\u001a\u00020\t@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u000e\u0010\r\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u001e\u0010\u000f\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u0006@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0015\u001a\u00020\t8F¢\u0006\u0006\u001a\u0004\b\u0016\u0010\f¨\u0006\u0017"}, d2 = {"Lcom/facebook/react/fabric/LongStreamingStats;", "", "<init>", "()V", "minHeap", "Ljava/util/Queue;", "", "maxHeap", "value", "", "average", "getAverage", "()D", "len", "", "max", "getMax", "()J", "add", "", "n", "median", "getMedian", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class LongStreamingStats {
    private double average;
    private int len;
    private long max;

    @NotNull
    private final Queue<Long> maxHeap;

    @NotNull
    private final Queue<Long> minHeap = new PriorityQueue(11);

    public LongStreamingStats() {
        ho.c cVar = ho.c.f10143d;
        Intrinsics.checkNotNull(cVar, "null cannot be cast to non-null type java.util.Comparator<T of kotlin.comparisons.ComparisonsKt__ComparisonsKt.reverseOrder>");
        this.maxHeap = new PriorityQueue(11, cVar);
    }

    public final void add(long n6) {
        double d6;
        if (n6 != 0) {
            if (this.minHeap.size() == this.maxHeap.size()) {
                this.maxHeap.offer(Long.valueOf(n6));
                this.minHeap.offer(this.maxHeap.poll());
            } else {
                this.minHeap.offer(Long.valueOf(n6));
                this.maxHeap.offer(this.minHeap.poll());
            }
        }
        int i5 = this.len + 1;
        this.len = i5;
        if (i5 == 1) {
            d6 = n6;
        } else {
            d6 = (n6 / i5) + (this.average / (i5 / r0));
        }
        this.average = d6;
        long j = this.max;
        if (n6 <= j) {
            n6 = j;
        }
        this.max = n6;
    }

    public final double getAverage() {
        return this.average;
    }

    public final long getMax() {
        return this.max;
    }

    public final double getMedian() {
        Long valueOf;
        if (this.minHeap.isEmpty() && this.maxHeap.isEmpty()) {
            return 0.0d;
        }
        if (this.minHeap.size() > this.maxHeap.size()) {
            valueOf = this.minHeap.peek();
        } else {
            Long peek = this.minHeap.peek();
            long longValue = peek != null ? peek.longValue() : 0L;
            Long peek2 = this.maxHeap.peek();
            valueOf = Long.valueOf((longValue + (peek2 != null ? peek2.longValue() : 0L)) / 2);
        }
        return valueOf.longValue();
    }
}
