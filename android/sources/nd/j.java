package nd;

import com.google.android.exoplayer2.Timeline;
import hc.s1;

/* loaded from: classes3.dex */
public abstract class j extends Timeline {

    /* renamed from: e, reason: collision with root package name */
    public final Timeline f15114e;

    public j(Timeline timeline) {
        this.f15114e = timeline;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int a(boolean z5) {
        return this.f15114e.a(z5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public int b(Object obj) {
        return this.f15114e.b(obj);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int c(boolean z5) {
        return this.f15114e.c(z5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int e(int i5, int i6, boolean z5) {
        return this.f15114e.e(i5, i6, z5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public s1 f(int i5, s1 s1Var, boolean z5) {
        return this.f15114e.f(i5, s1Var, z5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int h() {
        return this.f15114e.h();
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int k(int i5, int i6, boolean z5) {
        return this.f15114e.k(i5, i6, z5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public Object l(int i5) {
        return this.f15114e.l(i5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public Timeline.Window m(int i5, Timeline.Window window, long j) {
        return this.f15114e.m(i5, window, j);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int o() {
        return this.f15114e.o();
    }
}
