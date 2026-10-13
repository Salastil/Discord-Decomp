package com.google.android.exoplayer2;

import android.net.Uri;
import android.util.Pair;
import com.facebook.imageutils.JfifUtil;
import fi.c0;
import fi.e0;
import fi.r0;
import fi.w0;
import hc.j0;
import hc.l0;
import hc.m0;
import hc.n0;
import hc.o0;
import hc.p0;
import hc.q0;
import hc.s1;
import java.util.Collections;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public abstract class Timeline implements hc.g {

    /* renamed from: d, reason: collision with root package name */
    public static final j f5288d = new j();

    public static final class Window implements hc.g {
        public static final Object O = new Object();
        public static final Object P = new Object();
        public static final MediaItem Q;
        public static final String R;
        public static final String S;
        public static final String T;
        public static final String U;
        public static final String V;
        public static final String W;
        public static final String X;
        public static final String Y;
        public static final String Z;
        public static final String a0;

        /* renamed from: b0, reason: collision with root package name */
        public static final String f5289b0;

        /* renamed from: c0, reason: collision with root package name */
        public static final String f5290c0;

        /* renamed from: d0, reason: collision with root package name */
        public static final String f5291d0;
        public boolean E;
        public boolean F;
        public boolean G;
        public o0 H;
        public boolean I;
        public long J;
        public long K;
        public int L;
        public int M;
        public long N;

        /* renamed from: e, reason: collision with root package name */
        public Object f5293e;

        /* renamed from: v, reason: collision with root package name */
        public Object f5295v;

        /* renamed from: w, reason: collision with root package name */
        public long f5296w;

        /* renamed from: x, reason: collision with root package name */
        public long f5297x;

        /* renamed from: y, reason: collision with root package name */
        public long f5298y;

        /* renamed from: d, reason: collision with root package name */
        public Object f5292d = O;

        /* renamed from: i, reason: collision with root package name */
        public MediaItem f5294i = Q;

        static {
            p0 p0Var;
            j0 j0Var = new j0();
            m0 m0Var = new m0();
            m0Var.f9786c = w0.f8728y;
            c0 c0Var = e0.f8656e;
            r0 r0Var = r0.f8704w;
            m0Var.f9790g = r0Var;
            List list = Collections.EMPTY_LIST;
            q0 q0Var = q0.f9843i;
            Uri uri = Uri.EMPTY;
            ke.b.k(m0Var.f9785b == null || m0Var.a != null);
            if (uri != null) {
                p0Var = new p0(uri, null, m0Var.a != null ? new n0(m0Var) : null, null, list, null, r0Var);
            } else {
                p0Var = null;
            }
            Q = new MediaItem("com.google.android.exoplayer2.Timeline", new l0(j0Var), p0Var, new o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f), MediaMetadata.f5241f0, q0Var);
            int i5 = d0.a;
            R = Integer.toString(1, 36);
            S = Integer.toString(2, 36);
            T = Integer.toString(3, 36);
            U = Integer.toString(4, 36);
            V = Integer.toString(5, 36);
            W = Integer.toString(6, 36);
            X = Integer.toString(7, 36);
            Y = Integer.toString(8, 36);
            Z = Integer.toString(9, 36);
            a0 = Integer.toString(10, 36);
            f5289b0 = Integer.toString(11, 36);
            f5290c0 = Integer.toString(12, 36);
            f5291d0 = Integer.toString(13, 36);
        }

        public final boolean a() {
            ke.b.k(this.G == (this.H != null));
            return this.H != null;
        }

        public final void b(Object obj, MediaItem mediaItem, Object obj2, long j, long j5, long j7, boolean z5, boolean z6, o0 o0Var, long j10, long j11, int i5, int i6, long j12) {
            this.f5292d = obj;
            this.f5294i = mediaItem != null ? mediaItem : Q;
            if (mediaItem != null) {
                p0 p0Var = mediaItem.f5235e;
            }
            this.f5293e = null;
            this.f5295v = obj2;
            this.f5296w = j;
            this.f5297x = j5;
            this.f5298y = j7;
            this.E = z5;
            this.F = z6;
            this.G = o0Var != null;
            this.H = o0Var;
            this.J = j10;
            this.K = j11;
            this.L = i5;
            this.M = i6;
            this.N = j12;
            this.I = false;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && Window.class.equals(obj.getClass())) {
                Window window = (Window) obj;
                if (d0.a(this.f5292d, window.f5292d) && d0.a(this.f5294i, window.f5294i) && d0.a(this.f5295v, window.f5295v) && d0.a(this.H, window.H) && this.f5296w == window.f5296w && this.f5297x == window.f5297x && this.f5298y == window.f5298y && this.E == window.E && this.F == window.F && this.I == window.I && this.J == window.J && this.K == window.K && this.L == window.L && this.M == window.M && this.N == window.N) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            int hashCode = (this.f5294i.hashCode() + ((this.f5292d.hashCode() + JfifUtil.MARKER_EOI) * 31)) * 31;
            Object obj = this.f5295v;
            int hashCode2 = (hashCode + (obj == null ? 0 : obj.hashCode())) * 31;
            o0 o0Var = this.H;
            int hashCode3 = (hashCode2 + (o0Var != null ? o0Var.hashCode() : 0)) * 31;
            long j = this.f5296w;
            int i5 = (hashCode3 + ((int) (j ^ (j >>> 32)))) * 31;
            long j5 = this.f5297x;
            int i6 = (i5 + ((int) (j5 ^ (j5 >>> 32)))) * 31;
            long j7 = this.f5298y;
            int i10 = (((((((i6 + ((int) (j7 ^ (j7 >>> 32)))) * 31) + (this.E ? 1 : 0)) * 31) + (this.F ? 1 : 0)) * 31) + (this.I ? 1 : 0)) * 31;
            long j10 = this.J;
            int i11 = (i10 + ((int) (j10 ^ (j10 >>> 32)))) * 31;
            long j11 = this.K;
            int i12 = (((((i11 + ((int) (j11 ^ (j11 >>> 32)))) * 31) + this.L) * 31) + this.M) * 31;
            long j12 = this.N;
            return i12 + ((int) (j12 ^ (j12 >>> 32)));
        }
    }

    static {
        int i5 = d0.a;
        Integer.toString(0, 36);
        Integer.toString(1, 36);
        Integer.toString(2, 36);
    }

    public int a(boolean z5) {
        return p() ? -1 : 0;
    }

    public abstract int b(Object obj);

    public int c(boolean z5) {
        if (p()) {
            return -1;
        }
        return o() - 1;
    }

    public final int d(int i5, s1 s1Var, Window window, int i6, boolean z5) {
        int i10 = f(i5, s1Var, false).f9871i;
        if (m(i10, window, 0L).M != i5) {
            return i5 + 1;
        }
        int e9 = e(i10, i6, z5);
        if (e9 == -1) {
            return -1;
        }
        return m(e9, window, 0L).L;
    }

    public int e(int i5, int i6, boolean z5) {
        if (i6 == 0) {
            if (i5 == c(z5)) {
                return -1;
            }
            return i5 + 1;
        }
        if (i6 == 1) {
            return i5;
        }
        if (i6 == 2) {
            return i5 == c(z5) ? a(z5) : i5 + 1;
        }
        throw new IllegalStateException();
    }

    public final boolean equals(Object obj) {
        int c6;
        if (this != obj) {
            if (obj instanceof Timeline) {
                Timeline timeline = (Timeline) obj;
                if (timeline.o() == o() && timeline.h() == h()) {
                    Window window = new Window();
                    s1 s1Var = new s1();
                    Window window2 = new Window();
                    s1 s1Var2 = new s1();
                    int i5 = 0;
                    while (true) {
                        if (i5 >= o()) {
                            int i6 = 0;
                            while (true) {
                                if (i6 >= h()) {
                                    int a = a(true);
                                    if (a == timeline.a(true) && (c6 = c(true)) == timeline.c(true)) {
                                        while (a != c6) {
                                            int e9 = e(a, 0, true);
                                            if (e9 == timeline.e(a, 0, true)) {
                                                a = e9;
                                            }
                                        }
                                    }
                                } else {
                                    if (!f(i6, s1Var, true).equals(timeline.f(i6, s1Var2, true))) {
                                        break;
                                    }
                                    i6++;
                                }
                            }
                        } else {
                            if (!m(i5, window, 0L).equals(timeline.m(i5, window2, 0L))) {
                                break;
                            }
                            i5++;
                        }
                    }
                }
            }
            return false;
        }
        return true;
    }

    public abstract s1 f(int i5, s1 s1Var, boolean z5);

    public s1 g(Object obj, s1 s1Var) {
        return f(b(obj), s1Var, true);
    }

    public abstract int h();

    public final int hashCode() {
        Window window = new Window();
        s1 s1Var = new s1();
        int o6 = o() + JfifUtil.MARKER_EOI;
        for (int i5 = 0; i5 < o(); i5++) {
            o6 = (o6 * 31) + m(i5, window, 0L).hashCode();
        }
        int h6 = h() + (o6 * 31);
        for (int i6 = 0; i6 < h(); i6++) {
            h6 = (h6 * 31) + f(i6, s1Var, true).hashCode();
        }
        int a = a(true);
        while (a != -1) {
            h6 = (h6 * 31) + a;
            a = e(a, 0, true);
        }
        return h6;
    }

    public final Pair i(Window window, s1 s1Var, int i5, long j) {
        Pair j5 = j(window, s1Var, i5, j, 0L);
        j5.getClass();
        return j5;
    }

    public final Pair j(Window window, s1 s1Var, int i5, long j, long j5) {
        ke.b.j(i5, o());
        m(i5, window, j5);
        if (j == -9223372036854775807L) {
            j = window.J;
            if (j == -9223372036854775807L) {
                return null;
            }
        }
        int i6 = window.L;
        f(i6, s1Var, false);
        while (i6 < window.M && s1Var.f9873w != j) {
            int i10 = i6 + 1;
            if (f(i10, s1Var, false).f9873w > j) {
                break;
            }
            i6 = i10;
        }
        f(i6, s1Var, true);
        long j7 = j - s1Var.f9873w;
        long j10 = s1Var.f9872v;
        if (j10 != -9223372036854775807L) {
            j7 = Math.min(j7, j10 - 1);
        }
        long max = Math.max(0L, j7);
        Object obj = s1Var.f9870e;
        obj.getClass();
        return Pair.create(obj, Long.valueOf(max));
    }

    public int k(int i5, int i6, boolean z5) {
        if (i6 == 0) {
            if (i5 == a(z5)) {
                return -1;
            }
            return i5 - 1;
        }
        if (i6 == 1) {
            return i5;
        }
        if (i6 == 2) {
            return i5 == a(z5) ? c(z5) : i5 - 1;
        }
        throw new IllegalStateException();
    }

    public abstract Object l(int i5);

    public abstract Window m(int i5, Window window, long j);

    public final void n(int i5, Window window) {
        m(i5, window, 0L);
    }

    public abstract int o();

    public final boolean p() {
        return o() == 0;
    }
}
