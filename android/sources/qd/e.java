package qd;

import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.Timeline;
import hc.o0;
import hc.s1;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class e extends Timeline {
    public final long E;
    public final rd.c F;
    public final MediaItem G;
    public final o0 H;

    /* renamed from: e, reason: collision with root package name */
    public final long f16824e;

    /* renamed from: i, reason: collision with root package name */
    public final long f16825i;

    /* renamed from: v, reason: collision with root package name */
    public final long f16826v;

    /* renamed from: w, reason: collision with root package name */
    public final int f16827w;

    /* renamed from: x, reason: collision with root package name */
    public final long f16828x;

    /* renamed from: y, reason: collision with root package name */
    public final long f16829y;

    public e(long j, long j5, long j7, int i5, long j10, long j11, long j12, rd.c cVar, MediaItem mediaItem, o0 o0Var) {
        ke.b.k(cVar.f17216d == (o0Var != null));
        this.f16824e = j;
        this.f16825i = j5;
        this.f16826v = j7;
        this.f16827w = i5;
        this.f16828x = j10;
        this.f16829y = j11;
        this.E = j12;
        this.F = cVar;
        this.G = mediaItem;
        this.H = o0Var;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int b(Object obj) {
        int intValue;
        if ((obj instanceof Integer) && (intValue = ((Integer) obj).intValue() - this.f16827w) >= 0 && intValue < h()) {
            return intValue;
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final s1 f(int i5, s1 s1Var, boolean z5) {
        ke.b.j(i5, h());
        rd.c cVar = this.F;
        String str = z5 ? cVar.b(i5).a : null;
        Integer valueOf = z5 ? Integer.valueOf(this.f16827w + i5) : null;
        long d6 = cVar.d(i5);
        long I = d0.I(cVar.b(i5).f17241b - cVar.b(0).f17241b) - this.f16828x;
        s1Var.getClass();
        s1Var.i(str, valueOf, 0, d6, I, od.b.f15830x, false);
        return s1Var;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int h() {
        return this.F.f17223m.size();
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Object l(int i5) {
        ke.b.j(i5, h());
        return Integer.valueOf(this.f16827w + i5);
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Timeline.Window m(int i5, Timeline.Window window, long j) {
        boolean z5;
        long j5;
        boolean z6;
        long j7;
        i c6;
        ke.b.j(i5, 1);
        rd.c cVar = this.F;
        boolean z7 = cVar.f17216d;
        long j10 = this.E;
        if (z7 && cVar.f17217e != -9223372036854775807L && cVar.f17214b == -9223372036854775807L) {
            long j11 = 0;
            if (j > 0) {
                j10 += j;
                if (j10 > this.f16829y) {
                    z5 = true;
                    z6 = false;
                    j10 = -9223372036854775807L;
                    j5 = -9223372036854775807L;
                    window.b(Timeline.Window.O, this.G, cVar, this.f16824e, this.f16825i, this.f16826v, true, (cVar.f17216d || cVar.f17217e == j5 || cVar.f17214b != j5) ? z6 : z5, this.H, j10, this.f16829y, 0, h() - 1, this.f16828x);
                    return window;
                }
            }
            long j12 = this.f16828x + j10;
            long d6 = cVar.d(0);
            int i6 = 0;
            while (i6 < cVar.f17223m.size() - 1 && j12 >= d6) {
                j12 -= d6;
                i6++;
                d6 = cVar.d(i6);
            }
            rd.h b10 = cVar.b(i6);
            List list = b10.f17242c;
            z5 = true;
            int size = list.size();
            j5 = -9223372036854775807L;
            int i10 = 0;
            while (true) {
                if (i10 >= size) {
                    j7 = j11;
                    i10 = -1;
                    break;
                }
                j7 = j11;
                if (((rd.a) list.get(i10)).f17206b == 2) {
                    break;
                }
                i10++;
                j11 = j7;
            }
            if (i10 != -1 && (c6 = ((rd.m) ((rd.a) b10.f17242c.get(i10)).f17207c.get(0)).c()) != null && c6.z(d6) != j7) {
                j10 = (c6.b(c6.m(j12, d6)) + j10) - j12;
            }
        } else {
            z5 = true;
            j5 = -9223372036854775807L;
        }
        z6 = false;
        window.b(Timeline.Window.O, this.G, cVar, this.f16824e, this.f16825i, this.f16826v, true, (cVar.f17216d || cVar.f17217e == j5 || cVar.f17214b != j5) ? z6 : z5, this.H, j10, this.f16829y, 0, h() - 1, this.f16828x);
        return window;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int o() {
        return 1;
    }
}
