package com.google.android.exoplayer2;

import com.google.android.exoplayer2.Timeline;
import hc.s1;

/* loaded from: classes3.dex */
public final class i extends nd.j {

    /* renamed from: i, reason: collision with root package name */
    public final Timeline.Window f5426i;

    public i(Timeline timeline) {
        super(timeline);
        this.f5426i = new Timeline.Window();
    }

    @Override // nd.j, com.google.android.exoplayer2.Timeline
    public final s1 f(int i5, s1 s1Var, boolean z5) {
        Timeline timeline = this.f15114e;
        s1 f2 = timeline.f(i5, s1Var, z5);
        if (timeline.m(f2.f9871i, this.f5426i, 0L).a()) {
            f2.i(s1Var.f9869d, s1Var.f9870e, s1Var.f9871i, s1Var.f9872v, s1Var.f9873w, od.b.f15830x, true);
            return f2;
        }
        f2.f9874x = true;
        return f2;
    }
}
