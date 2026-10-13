package com.google.android.exoplayer2.analytics;

import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class PlaybackStats {
    public static final PlaybackStats O = a(new PlaybackStats[0]);
    public final int A;
    public final long B;
    public final int C;
    public final long D;
    public final long E;
    public final long F;
    public final long G;
    public final long H;
    public final int I;
    public final int J;
    public final int K;
    public final List L;
    public final List M;
    public final long[] N;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final List f5313b;

    /* renamed from: c, reason: collision with root package name */
    public final List f5314c;

    /* renamed from: d, reason: collision with root package name */
    public final long f5315d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5316e;

    /* renamed from: f, reason: collision with root package name */
    public final int f5317f;

    /* renamed from: g, reason: collision with root package name */
    public final int f5318g;

    /* renamed from: h, reason: collision with root package name */
    public final int f5319h;

    /* renamed from: i, reason: collision with root package name */
    public final long f5320i;
    public final int j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final int f5321l;

    /* renamed from: m, reason: collision with root package name */
    public final int f5322m;

    /* renamed from: n, reason: collision with root package name */
    public final int f5323n;

    /* renamed from: o, reason: collision with root package name */
    public final long f5324o;

    /* renamed from: p, reason: collision with root package name */
    public final int f5325p;

    /* renamed from: q, reason: collision with root package name */
    public final List f5326q;

    /* renamed from: r, reason: collision with root package name */
    public final List f5327r;

    /* renamed from: s, reason: collision with root package name */
    public final long f5328s;

    /* renamed from: t, reason: collision with root package name */
    public final long f5329t;

    /* renamed from: u, reason: collision with root package name */
    public final long f5330u;

    /* renamed from: v, reason: collision with root package name */
    public final long f5331v;

    /* renamed from: w, reason: collision with root package name */
    public final long f5332w;

    /* renamed from: x, reason: collision with root package name */
    public final long f5333x;

    /* renamed from: y, reason: collision with root package name */
    public final int f5334y;

    /* renamed from: z, reason: collision with root package name */
    public final int f5335z;

    public PlaybackStats(int i5, long[] jArr, List list, List list2, long j, int i6, int i10, int i11, int i12, long j5, int i13, int i14, int i15, int i16, int i17, long j7, int i18, List list3, List list4, long j10, long j11, long j12, long j13, long j14, long j15, int i19, int i20, int i21, long j16, int i22, long j17, long j18, long j19, long j20, long j21, int i23, int i24, int i25, List list5, List list6) {
        this.a = i5;
        this.N = jArr;
        this.f5313b = Collections.unmodifiableList(list);
        this.f5314c = Collections.unmodifiableList(list2);
        this.f5315d = j;
        this.f5316e = i6;
        this.f5317f = i10;
        this.f5318g = i11;
        this.f5319h = i12;
        this.f5320i = j5;
        this.j = i13;
        this.k = i14;
        this.f5321l = i15;
        this.f5322m = i16;
        this.f5323n = i17;
        this.f5324o = j7;
        this.f5325p = i18;
        this.f5326q = Collections.unmodifiableList(list3);
        this.f5327r = Collections.unmodifiableList(list4);
        this.f5328s = j10;
        this.f5329t = j11;
        this.f5330u = j12;
        this.f5331v = j13;
        this.f5332w = j14;
        this.f5333x = j15;
        this.f5334y = i19;
        this.f5335z = i20;
        this.A = i21;
        this.B = j16;
        this.C = i22;
        this.D = j17;
        this.E = j18;
        this.F = j19;
        this.G = j20;
        this.H = j21;
        this.I = i23;
        this.J = i24;
        this.K = i25;
        this.L = Collections.unmodifiableList(list5);
        this.M = Collections.unmodifiableList(list6);
    }

    public static PlaybackStats a(PlaybackStats... playbackStatsArr) {
        PlaybackStats[] playbackStatsArr2 = playbackStatsArr;
        long[] jArr = new long[16];
        int length = playbackStatsArr2.length;
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        int i12 = 0;
        int i13 = 0;
        int i14 = 0;
        int i15 = 0;
        int i16 = 0;
        int i17 = 0;
        int i18 = 0;
        int i19 = 0;
        int i20 = 0;
        int i21 = 0;
        long j = 0;
        long j5 = 0;
        long j7 = 0;
        long j10 = 0;
        long j11 = 0;
        long j12 = 0;
        long j13 = 0;
        long j14 = 0;
        long j15 = 0;
        long j16 = 0;
        long j17 = -1;
        long j18 = -1;
        long j19 = -9223372036854775807L;
        long j20 = -9223372036854775807L;
        long j21 = -9223372036854775807L;
        int i22 = -1;
        int i23 = 0;
        int i24 = 0;
        int i25 = 0;
        int i26 = 0;
        while (i23 < length) {
            PlaybackStats playbackStats = playbackStatsArr2[i23];
            int i27 = playbackStats.a;
            long j22 = playbackStats.D;
            long j23 = playbackStats.B;
            int i28 = playbackStats.A;
            int i29 = length;
            long j24 = playbackStats.f5324o;
            int i30 = i5;
            long[] jArr2 = jArr;
            long j25 = playbackStats.f5320i;
            long j26 = playbackStats.f5315d;
            int i31 = i30 + i27;
            int i32 = i23;
            int i33 = i24;
            for (int i34 = 0; i34 < 16; i34++) {
                jArr2[i34] = jArr2[i34] + playbackStats.N[i34];
            }
            if (j20 == -9223372036854775807L) {
                j20 = j26;
            } else if (j26 != -9223372036854775807L) {
                j20 = Math.min(j20, j26);
            }
            i24 = i33 + playbackStats.f5316e;
            i25 += playbackStats.f5317f;
            i26 += playbackStats.f5318g;
            i6 += playbackStats.f5319h;
            if (j21 == -9223372036854775807L) {
                j21 = j25;
            } else if (j25 != -9223372036854775807L) {
                j21 += j25;
            }
            i10 += playbackStats.j;
            i11 += playbackStats.k;
            i12 += playbackStats.f5321l;
            i13 += playbackStats.f5322m;
            i14 += playbackStats.f5323n;
            if (j19 == -9223372036854775807L) {
                j19 = j24;
            } else if (j24 != -9223372036854775807L) {
                j19 = Math.max(j19, j24);
            }
            i15 += playbackStats.f5325p;
            j += playbackStats.f5328s;
            j5 += playbackStats.f5329t;
            j7 += playbackStats.f5330u;
            j10 += playbackStats.f5331v;
            j11 += playbackStats.f5332w;
            j12 += playbackStats.f5333x;
            i16 += playbackStats.f5334y;
            i17 += playbackStats.f5335z;
            int i35 = i22;
            i22 = i35 == -1 ? i28 : i28 != -1 ? i35 + i28 : i35;
            if (j17 == -1) {
                j17 = j23;
            } else if (j23 != -1) {
                j17 += j23;
            }
            i18 += playbackStats.C;
            if (j18 == -1) {
                j18 = j22;
            } else if (j22 != -1) {
                j18 += j22;
            }
            j13 += playbackStats.E;
            j14 += playbackStats.F;
            j15 += playbackStats.G;
            j16 += playbackStats.H;
            i19 += playbackStats.I;
            i20 += playbackStats.J;
            i21 += playbackStats.K;
            i23 = i32 + 1;
            playbackStatsArr2 = playbackStatsArr;
            i5 = i31;
            length = i29;
            jArr = jArr2;
        }
        long j27 = j20;
        int i36 = i6;
        long j28 = j21;
        int i37 = i10;
        int i38 = i11;
        int i39 = i12;
        int i40 = i13;
        int i41 = i14;
        long j29 = j19;
        List list = Collections.EMPTY_LIST;
        return new PlaybackStats(i5, jArr, list, list, j27, i24, i25, i26, i36, j28, i37, i38, i39, i40, i41, j29, i15, list, list, j, j5, j7, j10, j11, j12, i16, i17, i22, j17, i18, j18, j13, j14, j15, j16, i19, i20, i21, list, list);
    }
}
