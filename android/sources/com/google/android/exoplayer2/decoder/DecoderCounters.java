package com.google.android.exoplayer2.decoder;

import a3.e;
import java.util.Locale;
import ke.d0;

/* loaded from: classes3.dex */
public final class DecoderCounters {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f5378b;

    /* renamed from: c, reason: collision with root package name */
    public int f5379c;

    /* renamed from: d, reason: collision with root package name */
    public int f5380d;

    /* renamed from: e, reason: collision with root package name */
    public int f5381e;

    /* renamed from: f, reason: collision with root package name */
    public int f5382f;

    /* renamed from: g, reason: collision with root package name */
    public int f5383g;

    /* renamed from: h, reason: collision with root package name */
    public int f5384h;

    /* renamed from: i, reason: collision with root package name */
    public int f5385i;
    public int j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public int f5386l;

    public final String toString() {
        int i5 = this.a;
        int i6 = this.f5378b;
        int i10 = this.f5379c;
        int i11 = this.f5380d;
        int i12 = this.f5381e;
        int i13 = this.f5382f;
        int i14 = this.f5383g;
        int i15 = this.f5384h;
        int i16 = this.f5385i;
        int i17 = this.j;
        long j = this.k;
        int i18 = this.f5386l;
        int i19 = d0.a;
        Locale locale = Locale.US;
        StringBuilder q5 = e.q(i5, "DecoderCounters {\n decoderInits=", i6, ",\n decoderReleases=", "\n queuedInputBuffers=");
        e.y(q5, i10, "\n skippedInputBuffers=", i11, "\n renderedOutputBuffers=");
        e.y(q5, i12, "\n skippedOutputBuffers=", i13, "\n droppedBuffers=");
        e.y(q5, i14, "\n droppedInputBuffers=", i15, "\n maxConsecutiveDroppedBuffers=");
        e.y(q5, i16, "\n droppedToKeyframeEvents=", i17, "\n totalVideoFrameProcessingOffsetUs=");
        q5.append(j);
        q5.append("\n videoFrameProcessingOffsetCount=");
        q5.append(i18);
        q5.append("\n}");
        return q5.toString();
    }
}
