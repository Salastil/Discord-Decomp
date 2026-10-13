package nd;

import android.net.Uri;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.Timeline;
import hc.s1;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class u0 extends Timeline {
    public static final Object K = new Object();
    public final boolean E;
    public final boolean F;
    public final boolean G;
    public final Object H;
    public final MediaItem I;
    public final hc.o0 J;

    /* renamed from: e, reason: collision with root package name */
    public final long f15178e;

    /* renamed from: i, reason: collision with root package name */
    public final long f15179i;

    /* renamed from: v, reason: collision with root package name */
    public final long f15180v;

    /* renamed from: w, reason: collision with root package name */
    public final long f15181w;

    /* renamed from: x, reason: collision with root package name */
    public final long f15182x;

    /* renamed from: y, reason: collision with root package name */
    public final long f15183y;

    static {
        hc.j0 j0Var = new hc.j0();
        hc.m0 m0Var = new hc.m0();
        m0Var.f9786c = fi.w0.f8728y;
        fi.c0 c0Var = fi.e0.f8656e;
        fi.r0 r0Var = fi.r0.f8704w;
        m0Var.f9790g = r0Var;
        List list = Collections.EMPTY_LIST;
        hc.q0 q0Var = hc.q0.f9843i;
        Uri uri = Uri.EMPTY;
        ke.b.k(m0Var.f9785b == null || m0Var.a != null);
        if (uri != null) {
            new hc.p0(uri, null, m0Var.a != null ? new hc.n0(m0Var) : null, null, list, null, r0Var);
        }
        new hc.l0(j0Var);
        MediaMetadata mediaMetadata = MediaMetadata.f5241f0;
    }

    public u0(long j, boolean z5, boolean z6, MediaItem mediaItem) {
        this(j, j, 0L, 0L, z5, false, z6, null, mediaItem);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int b(Object obj) {
        return K.equals(obj) ? 0 : -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final s1 f(int i5, s1 s1Var, boolean z5) {
        ke.b.j(i5, 1);
        Object obj = z5 ? K : null;
        long j = -this.f15182x;
        s1Var.getClass();
        s1Var.i(null, obj, 0, this.f15180v, j, od.b.f15830x, false);
        return s1Var;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int h() {
        return 1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Object l(int i5) {
        ke.b.j(i5, 1);
        return K;
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x002a, code lost:
    
        if (r1 > r3) goto L10;
     */
    @Override // com.google.android.exoplayer2.Timeline
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Timeline.Window m(int i5, Timeline.Window window, long j) {
        long j5;
        ke.b.j(i5, 1);
        long j7 = this.f15183y;
        boolean z5 = this.F;
        if (z5 && !this.G && j != 0) {
            long j10 = this.f15181w;
            if (j10 != -9223372036854775807L) {
                j7 += j;
            }
            j5 = -9223372036854775807L;
            window.b(Timeline.Window.O, this.I, this.H, this.f15178e, this.f15179i, -9223372036854775807L, this.E, z5, this.J, j5, this.f15181w, 0, 0, this.f15182x);
            return window;
        }
        j5 = j7;
        window.b(Timeline.Window.O, this.I, this.H, this.f15178e, this.f15179i, -9223372036854775807L, this.E, z5, this.J, j5, this.f15181w, 0, 0, this.f15182x);
        return window;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int o() {
        return 1;
    }

    public u0(long j, long j5, long j7, long j10, boolean z5, boolean z6, boolean z7, Object obj, MediaItem mediaItem) {
        this(-9223372036854775807L, -9223372036854775807L, j, j5, j7, j10, z5, z6, false, obj, mediaItem, z7 ? mediaItem.f5237v : null);
    }

    public u0(long j, long j5, long j7, long j10, long j11, long j12, boolean z5, boolean z6, boolean z7, Object obj, MediaItem mediaItem, hc.o0 o0Var) {
        this.f15178e = j;
        this.f15179i = j5;
        this.f15180v = j7;
        this.f15181w = j10;
        this.f15182x = j11;
        this.f15183y = j12;
        this.E = z5;
        this.F = z6;
        this.G = z7;
        this.H = obj;
        mediaItem.getClass();
        this.I = mediaItem;
        this.J = o0Var;
    }
}
