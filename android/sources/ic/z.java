package ic;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import java.util.Collections;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class z {
    public long A;
    public long B;
    public long C;
    public long D;
    public int E;
    public int F;
    public int G;
    public long H;
    public boolean I;
    public boolean J;
    public boolean K;
    public boolean L;
    public boolean M;
    public long N;
    public Format O;
    public Format P;
    public long Q;
    public long R;
    public float S;
    public final long[] a = new long[16];

    /* renamed from: b, reason: collision with root package name */
    public final List f10587b;

    /* renamed from: c, reason: collision with root package name */
    public final List f10588c;

    /* renamed from: d, reason: collision with root package name */
    public final List f10589d;

    /* renamed from: e, reason: collision with root package name */
    public final List f10590e;

    /* renamed from: f, reason: collision with root package name */
    public final List f10591f;

    /* renamed from: g, reason: collision with root package name */
    public final List f10592g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f10593h;

    /* renamed from: i, reason: collision with root package name */
    public long f10594i;
    public boolean j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f10595l;

    /* renamed from: m, reason: collision with root package name */
    public int f10596m;

    /* renamed from: n, reason: collision with root package name */
    public int f10597n;

    /* renamed from: o, reason: collision with root package name */
    public int f10598o;

    /* renamed from: p, reason: collision with root package name */
    public int f10599p;

    /* renamed from: q, reason: collision with root package name */
    public long f10600q;

    /* renamed from: r, reason: collision with root package name */
    public int f10601r;

    /* renamed from: s, reason: collision with root package name */
    public long f10602s;

    /* renamed from: t, reason: collision with root package name */
    public long f10603t;

    /* renamed from: u, reason: collision with root package name */
    public long f10604u;

    /* renamed from: v, reason: collision with root package name */
    public long f10605v;

    /* renamed from: w, reason: collision with root package name */
    public long f10606w;

    /* renamed from: x, reason: collision with root package name */
    public long f10607x;

    /* renamed from: y, reason: collision with root package name */
    public long f10608y;

    /* renamed from: z, reason: collision with root package name */
    public long f10609z;

    public z(AnalyticsListener$EventTime analyticsListener$EventTime) {
        List list = Collections.EMPTY_LIST;
        this.f10587b = list;
        this.f10588c = list;
        this.f10589d = list;
        this.f10590e = list;
        this.f10591f = list;
        this.f10592g = list;
        boolean z5 = false;
        this.G = 0;
        this.H = analyticsListener$EventTime.a;
        this.f10594i = -9223372036854775807L;
        this.f10600q = -9223372036854775807L;
        nd.s sVar = analyticsListener$EventTime.f5306d;
        if (sVar != null && sVar.a()) {
            z5 = true;
        }
        this.f10593h = z5;
        this.f10603t = -1L;
        this.f10602s = -1L;
        this.f10601r = -1;
        this.S = 1.0f;
    }

    public static boolean a(int i5) {
        return i5 == 6 || i5 == 7 || i5 == 10;
    }

    public final void b(long j) {
        Format format;
        int i5;
        if (this.G == 3 && (format = this.P) != null && (i5 = format.E) != -1) {
            long j5 = (long) ((j - this.R) * this.S);
            this.f10608y += j5;
            this.f10609z = (j5 * i5) + this.f10609z;
        }
        this.R = j;
    }

    public final void c(long j) {
        Format format;
        if (this.G == 3 && (format = this.O) != null) {
            long j5 = (long) ((j - this.Q) * this.S);
            int i5 = format.O;
            if (i5 != -1) {
                this.f10604u += j5;
                this.f10605v = (i5 * j5) + this.f10605v;
            }
            int i6 = format.E;
            if (i6 != -1) {
                this.f10606w += j5;
                this.f10607x = (j5 * i6) + this.f10607x;
            }
        }
        this.Q = j;
    }

    public final void d(AnalyticsListener$EventTime analyticsListener$EventTime, Format format) {
        int i5;
        if (d0.a(this.P, format)) {
            return;
        }
        b(analyticsListener$EventTime.a);
        if (format != null && this.f10603t == -1 && (i5 = format.E) != -1) {
            this.f10603t = i5;
        }
        this.P = format;
    }

    public final void e(AnalyticsListener$EventTime analyticsListener$EventTime, Format format) {
        int i5;
        int i6;
        if (d0.a(this.O, format)) {
            return;
        }
        c(analyticsListener$EventTime.a);
        if (format != null) {
            if (this.f10601r == -1 && (i6 = format.O) != -1) {
                this.f10601r = i6;
            }
            if (this.f10602s == -1 && (i5 = format.E) != -1) {
                this.f10602s = i5;
            }
        }
        this.O = format;
    }

    public final void f(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
        long j = analyticsListener$EventTime.a;
        ke.b.g(j >= this.H);
        long j5 = j - this.H;
        int i6 = this.G;
        long[] jArr = this.a;
        jArr[i6] = jArr[i6] + j5;
        if (this.f10594i == -9223372036854775807L) {
            this.f10594i = j;
        }
        this.f10595l |= ((i6 != 1 && i6 != 2 && i6 != 14) || i5 == 1 || i5 == 2 || i5 == 14 || i5 == 3 || i5 == 4 || i5 == 9 || i5 == 11) ? false : true;
        this.j |= i5 == 3 || i5 == 4 || i5 == 9;
        this.k = (i5 == 11) | this.k;
        if (i6 != 4 && i6 != 7 && (i5 == 4 || i5 == 7)) {
            this.f10596m++;
        }
        if (i5 == 5) {
            this.f10598o++;
        }
        if (!a(i6) && a(i5)) {
            this.f10599p++;
            this.N = j;
        }
        if (a(this.G) && this.G != 7 && i5 == 7) {
            this.f10597n++;
        }
        if (a(this.G)) {
            long j7 = j - this.N;
            long j10 = this.f10600q;
            if (j10 == -9223372036854775807L || j7 > j10) {
                this.f10600q = j7;
            }
        }
        this.G = i5;
        this.H = j;
    }
}
