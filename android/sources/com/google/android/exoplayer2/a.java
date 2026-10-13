package com.google.android.exoplayer2;

import android.util.Pair;
import com.google.android.exoplayer2.Timeline;
import hc.m1;
import hc.s1;
import ke.d0;
import nd.t0;

/* loaded from: classes3.dex */
public abstract class a extends Timeline {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ int f5301v = 0;

    /* renamed from: e, reason: collision with root package name */
    public final int f5302e;

    /* renamed from: i, reason: collision with root package name */
    public final t0 f5303i;

    public a(t0 t0Var) {
        this.f5303i = t0Var;
        this.f5302e = t0Var.f15171b.length;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int a(boolean z5) {
        if (this.f5302e != 0) {
            int i5 = 0;
            if (z5) {
                int[] iArr = this.f5303i.f15171b;
                i5 = iArr.length > 0 ? iArr[0] : -1;
            }
            do {
                m1 m1Var = (m1) this;
                Timeline[] timelineArr = m1Var.F;
                if (!timelineArr[i5].p()) {
                    return timelineArr[i5].a(z5) + m1Var.E[i5];
                }
                i5 = q(i5, z5);
            } while (i5 != -1);
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int b(Object obj) {
        int b10;
        if (obj instanceof Pair) {
            Pair pair = (Pair) obj;
            Object obj2 = pair.first;
            Object obj3 = pair.second;
            m1 m1Var = (m1) this;
            Integer num = (Integer) m1Var.H.get(obj2);
            int intValue = num == null ? -1 : num.intValue();
            if (intValue != -1 && (b10 = m1Var.F[intValue].b(obj3)) != -1) {
                return m1Var.f9794y[intValue] + b10;
            }
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int c(boolean z5) {
        int i5;
        int i6 = this.f5302e;
        if (i6 != 0) {
            if (z5) {
                int[] iArr = this.f5303i.f15171b;
                i5 = iArr.length > 0 ? iArr[iArr.length - 1] : -1;
            } else {
                i5 = i6 - 1;
            }
            do {
                m1 m1Var = (m1) this;
                Timeline[] timelineArr = m1Var.F;
                if (!timelineArr[i5].p()) {
                    return timelineArr[i5].c(z5) + m1Var.E[i5];
                }
                i5 = r(i5, z5);
            } while (i5 != -1);
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int e(int i5, int i6, boolean z5) {
        m1 m1Var = (m1) this;
        int[] iArr = m1Var.E;
        int d6 = d0.d(iArr, i5 + 1, false, false);
        int i10 = iArr[d6];
        Timeline[] timelineArr = m1Var.F;
        int e9 = timelineArr[d6].e(i5 - i10, i6 != 2 ? i6 : 0, z5);
        if (e9 != -1) {
            return i10 + e9;
        }
        int q5 = q(d6, z5);
        while (q5 != -1 && timelineArr[q5].p()) {
            q5 = q(q5, z5);
        }
        if (q5 != -1) {
            return timelineArr[q5].a(z5) + iArr[q5];
        }
        if (i6 == 2) {
            return a(z5);
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final s1 f(int i5, s1 s1Var, boolean z5) {
        m1 m1Var = (m1) this;
        int[] iArr = m1Var.f9794y;
        int d6 = d0.d(iArr, i5 + 1, false, false);
        int i6 = m1Var.E[d6];
        m1Var.F[d6].f(i5 - iArr[d6], s1Var, z5);
        s1Var.f9871i += i6;
        if (z5) {
            Object obj = m1Var.G[d6];
            Object obj2 = s1Var.f9870e;
            obj2.getClass();
            s1Var.f9870e = Pair.create(obj, obj2);
        }
        return s1Var;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final s1 g(Object obj, s1 s1Var) {
        Pair pair = (Pair) obj;
        Object obj2 = pair.first;
        Object obj3 = pair.second;
        m1 m1Var = (m1) this;
        Integer num = (Integer) m1Var.H.get(obj2);
        int intValue = num == null ? -1 : num.intValue();
        int i5 = m1Var.E[intValue];
        m1Var.F[intValue].g(obj3, s1Var);
        s1Var.f9871i += i5;
        s1Var.f9870e = obj;
        return s1Var;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int k(int i5, int i6, boolean z5) {
        m1 m1Var = (m1) this;
        int[] iArr = m1Var.E;
        int d6 = d0.d(iArr, i5 + 1, false, false);
        int i10 = iArr[d6];
        Timeline[] timelineArr = m1Var.F;
        int k = timelineArr[d6].k(i5 - i10, i6 != 2 ? i6 : 0, z5);
        if (k != -1) {
            return i10 + k;
        }
        int r5 = r(d6, z5);
        while (r5 != -1 && timelineArr[r5].p()) {
            r5 = r(r5, z5);
        }
        if (r5 != -1) {
            return timelineArr[r5].c(z5) + iArr[r5];
        }
        if (i6 == 2) {
            return c(z5);
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Object l(int i5) {
        m1 m1Var = (m1) this;
        int[] iArr = m1Var.f9794y;
        int d6 = d0.d(iArr, i5 + 1, false, false);
        return Pair.create(m1Var.G[d6], m1Var.F[d6].l(i5 - iArr[d6]));
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final Timeline.Window m(int i5, Timeline.Window window, long j) {
        m1 m1Var = (m1) this;
        int[] iArr = m1Var.E;
        int d6 = d0.d(iArr, i5 + 1, false, false);
        int i6 = iArr[d6];
        int i10 = m1Var.f9794y[d6];
        m1Var.F[d6].m(i5 - i6, window, j);
        Object obj = m1Var.G[d6];
        if (!Timeline.Window.O.equals(window.f5292d)) {
            obj = Pair.create(obj, window.f5292d);
        }
        window.f5292d = obj;
        window.L += i10;
        window.M += i10;
        return window;
    }

    public final int q(int i5, boolean z5) {
        if (!z5) {
            if (i5 < this.f5302e - 1) {
                return i5 + 1;
            }
            return -1;
        }
        t0 t0Var = this.f5303i;
        int i6 = t0Var.f15172c[i5] + 1;
        int[] iArr = t0Var.f15171b;
        if (i6 < iArr.length) {
            return iArr[i6];
        }
        return -1;
    }

    public final int r(int i5, boolean z5) {
        if (!z5) {
            if (i5 > 0) {
                return i5 - 1;
            }
            return -1;
        }
        t0 t0Var = this.f5303i;
        int i6 = t0Var.f15172c[i5] - 1;
        if (i6 >= 0) {
            return t0Var.f15171b[i6];
        }
        return -1;
    }
}
