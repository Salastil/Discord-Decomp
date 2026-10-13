package nd;

import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.Timeline;
import hc.s1;

/* loaded from: classes3.dex */
public final class n extends Timeline {

    /* renamed from: e, reason: collision with root package name */
    public final MediaItem f15142e;

    public n(MediaItem mediaItem) {
        this.f15142e = mediaItem;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int b(Object obj) {
        return obj == m.f15137w ? 0 : -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final s1 f(int i5, s1 s1Var, boolean z5) {
        s1Var.i(z5 ? 0 : null, z5 ? m.f15137w : null, 0, -9223372036854775807L, 0L, od.b.f15830x, true);
        return s1Var;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int h() {
        return 1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Object l(int i5) {
        return m.f15137w;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Timeline.Window m(int i5, Timeline.Window window, long j) {
        window.b(Timeline.Window.O, this.f15142e, null, -9223372036854775807L, -9223372036854775807L, -9223372036854775807L, false, true, null, 0L, -9223372036854775807L, 0, 0, 0L);
        window.I = true;
        return window;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int o() {
        return 1;
    }
}
