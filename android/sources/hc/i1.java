package hc;

import android.os.SystemClock;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.Timeline;
import java.util.List;

/* loaded from: classes3.dex */
public final class i1 {

    /* renamed from: t, reason: collision with root package name */
    public static final nd.s f9731t = new nd.s(new Object());
    public final Timeline a;

    /* renamed from: b, reason: collision with root package name */
    public final nd.s f9732b;

    /* renamed from: c, reason: collision with root package name */
    public final long f9733c;

    /* renamed from: d, reason: collision with root package name */
    public final long f9734d;

    /* renamed from: e, reason: collision with root package name */
    public final int f9735e;

    /* renamed from: f, reason: collision with root package name */
    public final com.google.android.exoplayer2.c f9736f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f9737g;

    /* renamed from: h, reason: collision with root package name */
    public final nd.a1 f9738h;

    /* renamed from: i, reason: collision with root package name */
    public final ge.u f9739i;
    public final List j;
    public final nd.s k;

    /* renamed from: l, reason: collision with root package name */
    public final boolean f9740l;

    /* renamed from: m, reason: collision with root package name */
    public final int f9741m;

    /* renamed from: n, reason: collision with root package name */
    public final PlaybackParameters f9742n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f9743o;

    /* renamed from: p, reason: collision with root package name */
    public volatile long f9744p;

    /* renamed from: q, reason: collision with root package name */
    public volatile long f9745q;

    /* renamed from: r, reason: collision with root package name */
    public volatile long f9746r;

    /* renamed from: s, reason: collision with root package name */
    public volatile long f9747s;

    public i1(Timeline timeline, nd.s sVar, long j, long j5, int i5, com.google.android.exoplayer2.c cVar, boolean z5, nd.a1 a1Var, ge.u uVar, List list, nd.s sVar2, boolean z6, int i6, PlaybackParameters playbackParameters, long j7, long j10, long j11, long j12, boolean z7) {
        this.a = timeline;
        this.f9732b = sVar;
        this.f9733c = j;
        this.f9734d = j5;
        this.f9735e = i5;
        this.f9736f = cVar;
        this.f9737g = z5;
        this.f9738h = a1Var;
        this.f9739i = uVar;
        this.j = list;
        this.k = sVar2;
        this.f9740l = z6;
        this.f9741m = i6;
        this.f9742n = playbackParameters;
        this.f9744p = j7;
        this.f9745q = j10;
        this.f9746r = j11;
        this.f9747s = j12;
        this.f9743o = z7;
    }

    public static i1 i(ge.u uVar) {
        com.google.android.exoplayer2.j jVar = Timeline.f5288d;
        nd.a1 a1Var = nd.a1.f15063v;
        fi.r0 r0Var = fi.r0.f8704w;
        PlaybackParameters playbackParameters = PlaybackParameters.f5274v;
        nd.s sVar = f9731t;
        return new i1(jVar, sVar, -9223372036854775807L, 0L, 1, null, false, a1Var, uVar, r0Var, sVar, false, 0, playbackParameters, 0L, 0L, 0L, 0L, false);
    }

    public final i1 a() {
        return new i1(this.a, this.f9732b, this.f9733c, this.f9734d, this.f9735e, this.f9736f, this.f9737g, this.f9738h, this.f9739i, this.j, this.k, this.f9740l, this.f9741m, this.f9742n, this.f9744p, this.f9745q, j(), SystemClock.elapsedRealtime(), this.f9743o);
    }

    public final i1 b(nd.s sVar) {
        return new i1(this.a, this.f9732b, this.f9733c, this.f9734d, this.f9735e, this.f9736f, this.f9737g, this.f9738h, this.f9739i, this.j, sVar, this.f9740l, this.f9741m, this.f9742n, this.f9744p, this.f9745q, this.f9746r, this.f9747s, this.f9743o);
    }

    public final i1 c(nd.s sVar, long j, long j5, long j7, long j10, nd.a1 a1Var, ge.u uVar, List list) {
        return new i1(this.a, sVar, j5, j7, this.f9735e, this.f9736f, this.f9737g, a1Var, uVar, list, this.k, this.f9740l, this.f9741m, this.f9742n, this.f9744p, j10, j, SystemClock.elapsedRealtime(), this.f9743o);
    }

    public final i1 d(int i5, boolean z5) {
        return new i1(this.a, this.f9732b, this.f9733c, this.f9734d, this.f9735e, this.f9736f, this.f9737g, this.f9738h, this.f9739i, this.j, this.k, z5, i5, this.f9742n, this.f9744p, this.f9745q, this.f9746r, this.f9747s, this.f9743o);
    }

    public final i1 e(com.google.android.exoplayer2.c cVar) {
        return new i1(this.a, this.f9732b, this.f9733c, this.f9734d, this.f9735e, cVar, this.f9737g, this.f9738h, this.f9739i, this.j, this.k, this.f9740l, this.f9741m, this.f9742n, this.f9744p, this.f9745q, this.f9746r, this.f9747s, this.f9743o);
    }

    public final i1 f(PlaybackParameters playbackParameters) {
        return new i1(this.a, this.f9732b, this.f9733c, this.f9734d, this.f9735e, this.f9736f, this.f9737g, this.f9738h, this.f9739i, this.j, this.k, this.f9740l, this.f9741m, playbackParameters, this.f9744p, this.f9745q, this.f9746r, this.f9747s, this.f9743o);
    }

    public final i1 g(int i5) {
        return new i1(this.a, this.f9732b, this.f9733c, this.f9734d, i5, this.f9736f, this.f9737g, this.f9738h, this.f9739i, this.j, this.k, this.f9740l, this.f9741m, this.f9742n, this.f9744p, this.f9745q, this.f9746r, this.f9747s, this.f9743o);
    }

    public final i1 h(Timeline timeline) {
        return new i1(timeline, this.f9732b, this.f9733c, this.f9734d, this.f9735e, this.f9736f, this.f9737g, this.f9738h, this.f9739i, this.j, this.k, this.f9740l, this.f9741m, this.f9742n, this.f9744p, this.f9745q, this.f9746r, this.f9747s, this.f9743o);
    }

    public final long j() {
        long j;
        long j5;
        if (!k()) {
            return this.f9746r;
        }
        do {
            j = this.f9747s;
            j5 = this.f9746r;
        } while (j != this.f9747s);
        return ke.d0.I(ke.d0.U(j5) + ((long) ((SystemClock.elapsedRealtime() - j) * this.f9742n.f5275d)));
    }

    public final boolean k() {
        return this.f9735e == 3 && this.f9740l && this.f9741m == 0;
    }
}
