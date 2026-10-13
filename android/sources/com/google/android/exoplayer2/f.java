package com.google.android.exoplayer2;

import android.util.Pair;
import com.google.android.exoplayer2.Timeline;
import fi.b0;
import fi.c0;
import fi.e0;
import hc.s1;
import hc.v0;
import hc.w0;
import ke.a0;
import kotlin.jvm.internal.LongCompanionObject;
import nd.s;

/* loaded from: classes3.dex */
public final class f {
    public final s1 a = new s1();

    /* renamed from: b, reason: collision with root package name */
    public final Timeline.Window f5416b = new Timeline.Window();

    /* renamed from: c, reason: collision with root package name */
    public final ic.a f5417c;

    /* renamed from: d, reason: collision with root package name */
    public final a0 f5418d;

    /* renamed from: e, reason: collision with root package name */
    public long f5419e;

    /* renamed from: f, reason: collision with root package name */
    public int f5420f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f5421g;

    /* renamed from: h, reason: collision with root package name */
    public v0 f5422h;

    /* renamed from: i, reason: collision with root package name */
    public v0 f5423i;
    public v0 j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public Object f5424l;

    /* renamed from: m, reason: collision with root package name */
    public long f5425m;

    public f(ic.a aVar, a0 a0Var) {
        this.f5417c = aVar;
        this.f5418d = a0Var;
    }

    public static s m(Timeline timeline, Object obj, long j, long j5, Timeline.Window window, s1 s1Var) {
        timeline.g(obj, s1Var);
        timeline.n(s1Var.f9871i, window);
        int b10 = timeline.b(obj);
        Object obj2 = obj;
        while (true) {
            int i5 = s1Var.f9875y.f15832d;
            if (i5 == 0) {
                break;
            }
            if ((i5 == 1 && s1Var.g(0)) || !s1Var.h(s1Var.f9875y.f15835v)) {
                break;
            }
            long j7 = 0;
            if (s1Var.c(0L) != -1) {
                break;
            }
            if (s1Var.f9872v != 0) {
                int i6 = i5 - (s1Var.g(i5 + (-1)) ? 2 : 1);
                for (int i10 = 0; i10 <= i6; i10++) {
                    j7 += s1Var.f9875y.a(i10).f15829y;
                }
                if (s1Var.f9872v > j7) {
                    break;
                }
            }
            if (b10 > window.M) {
                break;
            }
            timeline.f(b10, s1Var, true);
            obj2 = s1Var.f9870e;
            obj2.getClass();
            b10++;
        }
        timeline.g(obj2, s1Var);
        int c6 = s1Var.c(j);
        return c6 == -1 ? new s(obj2, j5, s1Var.b(j)) : new s(obj2, c6, s1Var.f(c6), j5, -1);
    }

    public final v0 a() {
        v0 v0Var = this.f5422h;
        if (v0Var == null) {
            return null;
        }
        if (v0Var == this.f5423i) {
            this.f5423i = v0Var.f9925l;
        }
        v0Var.f();
        int i5 = this.k - 1;
        this.k = i5;
        if (i5 == 0) {
            this.j = null;
            v0 v0Var2 = this.f5422h;
            this.f5424l = v0Var2.f9917b;
            this.f5425m = v0Var2.f9921f.a.f15169d;
        }
        this.f5422h = this.f5422h.f9925l;
        k();
        return this.f5422h;
    }

    public final void b() {
        if (this.k == 0) {
            return;
        }
        v0 v0Var = this.f5422h;
        ke.b.l(v0Var);
        this.f5424l = v0Var.f9917b;
        this.f5425m = v0Var.f9921f.a.f15169d;
        while (v0Var != null) {
            v0Var.f();
            v0Var = v0Var.f9925l;
        }
        this.f5422h = null;
        this.j = null;
        this.f5423i = null;
        this.k = 0;
        k();
    }

    public final w0 c(Timeline timeline, v0 v0Var, long j) {
        Object obj;
        long j5;
        long j7;
        long j10;
        w0 w0Var = v0Var.f9921f;
        s sVar = w0Var.a;
        long j11 = w0Var.f9931c;
        int d6 = timeline.d(timeline.b(sVar.a), this.a, this.f5416b, this.f5420f, this.f5421g);
        if (d6 == -1) {
            return null;
        }
        s1 s1Var = this.a;
        int i5 = timeline.f(d6, s1Var, true).f9871i;
        Object obj2 = s1Var.f9870e;
        obj2.getClass();
        long j12 = sVar.f15169d;
        long j13 = 0;
        if (timeline.m(i5, this.f5416b, 0L).L == d6) {
            Pair j14 = timeline.j(this.f5416b, this.a, i5, -9223372036854775807L, Math.max(0L, j));
            if (j14 == null) {
                return null;
            }
            Object obj3 = j14.first;
            long longValue = ((Long) j14.second).longValue();
            v0 v0Var2 = v0Var.f9925l;
            if (v0Var2 == null || !v0Var2.f9917b.equals(obj3)) {
                j12 = this.f5419e;
                this.f5419e = 1 + j12;
            } else {
                j12 = v0Var2.f9921f.a.f15169d;
            }
            obj = obj3;
            j5 = longValue;
            j13 = -9223372036854775807L;
        } else {
            obj = obj2;
            j5 = 0;
        }
        s m5 = m(timeline, obj, j5, j12, this.f5416b, this.a);
        if (j13 != -9223372036854775807L && j11 != -9223372036854775807L) {
            int i6 = timeline.g(sVar.a, s1Var).f9875y.f15832d;
            int i10 = s1Var.f9875y.f15835v;
            boolean z5 = i6 > 0 && s1Var.h(i10) && (i6 > 1 || s1Var.d(i10) != Long.MIN_VALUE);
            if (m5.a() && z5) {
                j7 = j5;
                j10 = j11;
                return e(timeline, m5, j10, j7);
            }
            if (z5) {
                j7 = j11;
                j10 = j13;
                return e(timeline, m5, j10, j7);
            }
        }
        j7 = j5;
        j10 = j13;
        return e(timeline, m5, j10, j7);
    }

    public final w0 d(Timeline timeline, v0 v0Var, long j) {
        s1 s1Var;
        Timeline timeline2;
        w0 w0Var = v0Var.f9921f;
        long j5 = (v0Var.f9928o + w0Var.f9933e) - j;
        if (w0Var.f9935g) {
            return c(timeline, v0Var, j5);
        }
        s sVar = w0Var.a;
        Object obj = sVar.a;
        int i5 = sVar.f15170e;
        s1 s1Var2 = this.a;
        timeline.g(obj, s1Var2);
        if (!sVar.a()) {
            if (i5 != -1 && s1Var2.g(i5)) {
                return c(timeline, v0Var, j5);
            }
            int f2 = s1Var2.f(i5);
            boolean z5 = s1Var2.h(i5) && s1Var2.e(i5, f2) == 3;
            if (f2 != s1Var2.f9875y.a(i5).f15824e && !z5) {
                return f(timeline, sVar.a, sVar.f15170e, f2, w0Var.f9933e, sVar.f15169d);
            }
            timeline.g(obj, s1Var2);
            long d6 = s1Var2.d(i5);
            return g(timeline, sVar.a, d6 == Long.MIN_VALUE ? s1Var2.f9872v : s1Var2.f9875y.a(i5).f15829y + d6, w0Var.f9933e, sVar.f15169d);
        }
        int i6 = sVar.f15167b;
        int i10 = s1Var2.f9875y.a(i6).f15824e;
        if (i10 == -1) {
            return null;
        }
        int a = s1Var2.f9875y.a(i6).a(sVar.f15168c);
        if (a < i10) {
            return f(timeline, sVar.a, i6, a, w0Var.f9931c, sVar.f15169d);
        }
        long j7 = w0Var.f9931c;
        if (j7 == -9223372036854775807L) {
            Pair j10 = timeline.j(this.f5416b, s1Var2, s1Var2.f9871i, -9223372036854775807L, Math.max(0L, j5));
            s1Var = s1Var2;
            timeline2 = timeline;
            if (j10 == null) {
                return null;
            }
            j7 = ((Long) j10.second).longValue();
        } else {
            s1Var = s1Var2;
            timeline2 = timeline;
        }
        int i11 = sVar.f15167b;
        timeline2.g(obj, s1Var);
        long d7 = s1Var.d(i11);
        return g(timeline, sVar.a, Math.max(d7 == Long.MIN_VALUE ? s1Var.f9872v : s1Var.f9875y.a(i11).f15829y + d7, j7), w0Var.f9931c, sVar.f15169d);
    }

    public final w0 e(Timeline timeline, s sVar, long j, long j5) {
        timeline.g(sVar.a, this.a);
        return sVar.a() ? f(timeline, sVar.a, sVar.f15167b, sVar.f15168c, j, sVar.f15169d) : g(timeline, sVar.a, j5, j, sVar.f15169d);
    }

    public final w0 f(Timeline timeline, Object obj, int i5, int i6, long j, long j5) {
        s sVar = new s(obj, i5, i6, j5, -1);
        s1 s1Var = this.a;
        long a = timeline.g(obj, s1Var).a(i5, i6);
        long j7 = i6 == s1Var.f(i5) ? s1Var.f9875y.f15833e : 0L;
        boolean h6 = s1Var.h(i5);
        if (a != -9223372036854775807L && j7 >= a) {
            j7 = Math.max(0L, a - 1);
        }
        return new w0(sVar, j7, j, -9223372036854775807L, a, h6, false, false, false);
    }

    /* JADX WARN: Removed duplicated region for block: B:58:0x005f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final w0 g(Timeline timeline, Object obj, long j, long j5, long j7) {
        boolean z5;
        boolean z6;
        long j10;
        long j11;
        long j12;
        long j13 = j;
        s1 s1Var = this.a;
        timeline.g(obj, s1Var);
        int b10 = s1Var.b(j13);
        boolean z7 = b10 != -1 && s1Var.g(b10);
        if (b10 == -1) {
            od.b bVar = s1Var.f9875y;
            if (bVar.f15832d > 0 && s1Var.h(bVar.f15835v)) {
                z6 = true;
            }
            z6 = false;
        } else {
            if (s1Var.h(b10) && s1Var.d(b10) == s1Var.f9872v) {
                od.a a = s1Var.f9875y.a(b10);
                int i5 = a.f15824e;
                if (i5 != -1) {
                    for (int i6 = 0; i6 < i5; i6++) {
                        int i10 = a.f15827w[i6];
                        if (i10 != 0 && i10 != 1) {
                        }
                    }
                    z5 = false;
                    if (!z5) {
                        z6 = true;
                        b10 = -1;
                    }
                }
                z5 = true;
                if (!z5) {
                }
            }
            z6 = false;
        }
        s sVar = new s(obj, j7, b10);
        boolean z8 = !sVar.a() && b10 == -1;
        boolean j14 = j(timeline, sVar);
        boolean i11 = i(timeline, sVar, z8);
        boolean z10 = (b10 == -1 || !s1Var.h(b10) || z7) ? false : true;
        if (b10 == -1 || z7) {
            if (!z6) {
                j10 = -9223372036854775807L;
                j12 = (j10 != -9223372036854775807L || j10 == Long.MIN_VALUE) ? s1Var.f9872v : j10;
                if (j12 != -9223372036854775807L && j13 >= j12) {
                    j13 = Math.max(0L, j12 - ((i11 && z6) ? 0 : 1));
                }
                return new w0(sVar, j13, j5, j10, j12, z10, z8, j14, i11);
            }
            j11 = s1Var.f9872v;
        } else {
            j11 = s1Var.d(b10);
        }
        j10 = j11;
        if (j10 != -9223372036854775807L) {
        }
        if (j12 != -9223372036854775807L) {
            j13 = Math.max(0L, j12 - ((i11 && z6) ? 0 : 1));
        }
        return new w0(sVar, j13, j5, j10, j12, z10, z8, j14, i11);
    }

    public final w0 h(Timeline timeline, w0 w0Var) {
        s sVar = w0Var.a;
        boolean a = sVar.a();
        int i5 = sVar.f15170e;
        boolean z5 = !a && i5 == -1;
        int i6 = sVar.f15167b;
        boolean j = j(timeline, sVar);
        boolean i10 = i(timeline, sVar, z5);
        Object obj = sVar.a;
        s1 s1Var = this.a;
        timeline.g(obj, s1Var);
        long d6 = (sVar.a() || i5 == -1) ? -9223372036854775807L : s1Var.d(i5);
        return new w0(sVar, w0Var.f9930b, w0Var.f9931c, d6, sVar.a() ? s1Var.a(i6, sVar.f15168c) : (d6 == -9223372036854775807L || d6 == Long.MIN_VALUE) ? s1Var.f9872v : d6, sVar.a() ? s1Var.h(i6) : i5 != -1 && s1Var.h(i5), z5, j, i10);
    }

    public final boolean i(Timeline timeline, s sVar, boolean z5) {
        int b10 = timeline.b(sVar.a);
        if (!timeline.m(timeline.f(b10, this.a, false).f9871i, this.f5416b, 0L).F) {
            if (timeline.d(b10, this.a, this.f5416b, this.f5420f, this.f5421g) == -1 && z5) {
                return true;
            }
        }
        return false;
    }

    public final boolean j(Timeline timeline, s sVar) {
        boolean z5 = !sVar.a() && sVar.f15170e == -1;
        Object obj = sVar.a;
        if (z5) {
            if (timeline.m(timeline.g(obj, this.a).f9871i, this.f5416b, 0L).M == timeline.b(obj)) {
                return true;
            }
        }
        return false;
    }

    public final void k() {
        c0 c0Var = e0.f8656e;
        b0 b0Var = new b0();
        for (v0 v0Var = this.f5422h; v0Var != null; v0Var = v0Var.f9925l) {
            b0Var.a(v0Var.f9921f.a);
        }
        v0 v0Var2 = this.f5423i;
        this.f5418d.c(new androidx.fragment.app.e(this, b0Var, v0Var2 == null ? null : v0Var2.f9921f.a, 17));
    }

    public final boolean l(v0 v0Var) {
        boolean z5 = false;
        ke.b.k(v0Var != null);
        if (v0Var.equals(this.j)) {
            return false;
        }
        this.j = v0Var;
        while (true) {
            v0Var = v0Var.f9925l;
            if (v0Var == null) {
                break;
            }
            if (v0Var == this.f5423i) {
                this.f5423i = this.f5422h;
                z5 = true;
            }
            v0Var.f();
            this.k--;
        }
        v0 v0Var2 = this.j;
        if (v0Var2.f9925l != null) {
            v0Var2.b();
            v0Var2.f9925l = null;
            v0Var2.c();
        }
        k();
        return z5;
    }

    public final s n(Timeline timeline, Object obj, long j) {
        long j5;
        int b10;
        Object obj2 = obj;
        s1 s1Var = this.a;
        int i5 = timeline.g(obj2, s1Var).f9871i;
        Object obj3 = this.f5424l;
        if (obj3 == null || (b10 = timeline.b(obj3)) == -1 || timeline.f(b10, s1Var, false).f9871i != i5) {
            v0 v0Var = this.f5422h;
            while (true) {
                if (v0Var == null) {
                    v0 v0Var2 = this.f5422h;
                    while (true) {
                        if (v0Var2 != null) {
                            int b11 = timeline.b(v0Var2.f9917b);
                            if (b11 != -1 && timeline.f(b11, s1Var, false).f9871i == i5) {
                                j5 = v0Var2.f9921f.a.f15169d;
                                break;
                            }
                            v0Var2 = v0Var2.f9925l;
                        } else {
                            j5 = this.f5419e;
                            this.f5419e = 1 + j5;
                            if (this.f5422h == null) {
                                this.f5424l = obj2;
                                this.f5425m = j5;
                            }
                        }
                    }
                } else {
                    if (v0Var.f9917b.equals(obj2)) {
                        j5 = v0Var.f9921f.a.f15169d;
                        break;
                    }
                    v0Var = v0Var.f9925l;
                }
            }
        } else {
            j5 = this.f5425m;
        }
        timeline.g(obj2, s1Var);
        int i6 = s1Var.f9871i;
        Timeline.Window window = this.f5416b;
        timeline.n(i6, window);
        boolean z5 = false;
        for (int b12 = timeline.b(obj); b12 >= window.L; b12--) {
            timeline.f(b12, s1Var, true);
            boolean z6 = s1Var.f9875y.f15832d > 0;
            z5 |= z6;
            if (s1Var.c(s1Var.f9872v) != -1) {
                obj2 = s1Var.f9870e;
                obj2.getClass();
            }
            if (z5 && (!z6 || s1Var.f9872v != 0)) {
                break;
            }
        }
        return m(timeline, obj2, j, j5, this.f5416b, this.a);
    }

    public final boolean o(Timeline timeline) {
        Timeline timeline2;
        v0 v0Var;
        v0 v0Var2 = this.f5422h;
        if (v0Var2 == null) {
            return true;
        }
        int b10 = timeline.b(v0Var2.f9917b);
        while (true) {
            timeline2 = timeline;
            b10 = timeline2.d(b10, this.a, this.f5416b, this.f5420f, this.f5421g);
            while (true) {
                v0Var = v0Var2.f9925l;
                if (v0Var == null || v0Var2.f9921f.f9935g) {
                    break;
                }
                v0Var2 = v0Var;
            }
            if (b10 == -1 || v0Var == null || timeline2.b(v0Var.f9917b) != b10) {
                break;
            }
            v0Var2 = v0Var;
            timeline = timeline2;
        }
        boolean l6 = l(v0Var2);
        v0Var2.f9921f = h(timeline2, v0Var2.f9921f);
        return !l6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x0087, code lost:
    
        return true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x0082, code lost:
    
        r14 = l(r1);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean p(Timeline timeline, long j, long j5) {
        boolean l6;
        w0 w0Var;
        v0 v0Var = this.f5422h;
        v0 v0Var2 = null;
        while (true) {
            if (v0Var == null) {
                break;
            }
            w0 w0Var2 = v0Var.f9921f;
            if (v0Var2 == null) {
                w0Var = h(timeline, w0Var2);
            } else {
                w0 d6 = d(timeline, v0Var2, j);
                if (d6 == null) {
                    l6 = l(v0Var2);
                    break;
                }
                if (w0Var2.f9930b != d6.f9930b || !w0Var2.a.equals(d6.a)) {
                    break;
                }
                w0Var = d6;
            }
            long j7 = w0Var.f9933e;
            v0Var.f9921f = w0Var.a(w0Var2.f9931c);
            long j10 = w0Var2.f9933e;
            if (j10 == -9223372036854775807L || j10 == j7) {
                v0Var2 = v0Var;
                v0Var = v0Var.f9925l;
            } else {
                v0Var.h();
                boolean z5 = v0Var == this.f5423i && !v0Var.f9921f.f9934f && (j5 == Long.MIN_VALUE || j5 >= ((j7 > (-9223372036854775807L) ? 1 : (j7 == (-9223372036854775807L) ? 0 : -1)) == 0 ? LongCompanionObject.MAX_VALUE : v0Var.f9928o + j7));
                if (l(v0Var) || z5) {
                    return false;
                }
            }
        }
        return !l6;
    }
}
