package io.sentry.android.core;

import android.view.Choreographer;
import io.sentry.ISpan;
import io.sentry.d5;
import io.sentry.i4;
import io.sentry.t2;
import io.sentry.v2;
import java.lang.reflect.Field;
import java.util.Date;
import java.util.Iterator;
import java.util.TreeSet;
import java.util.concurrent.ConcurrentSkipListSet;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class g1 implements io.sentry.t0, io.sentry.android.core.internal.util.n {

    /* renamed from: h, reason: collision with root package name */
    public static final long f11144h = TimeUnit.SECONDS.toNanos(1);

    /* renamed from: i, reason: collision with root package name */
    public static final d5 f11145i = new d5(new Date(0), 0);
    public final boolean a;

    /* renamed from: c, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.o f11147c;

    /* renamed from: d, reason: collision with root package name */
    public volatile String f11148d;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.util.a f11146b = new io.sentry.util.a();

    /* renamed from: e, reason: collision with root package name */
    public final TreeSet f11149e = new TreeSet(new com.facebook.react.uimanager.a(19));

    /* renamed from: f, reason: collision with root package name */
    public final ConcurrentSkipListSet f11150f = new ConcurrentSkipListSet();

    /* renamed from: g, reason: collision with root package name */
    public long f11151g = 16666666;

    public g1(SentryAndroidOptions sentryAndroidOptions, io.sentry.android.core.internal.util.o oVar) {
        this.f11147c = oVar;
        this.a = sentryAndroidOptions.isEnablePerformanceV2() && sentryAndroidOptions.isEnableFramesTracking();
    }

    public static long g(i4 i4Var) {
        if (i4Var instanceof d5) {
            return i4Var.b(f11145i);
        }
        return System.nanoTime() - ((System.currentTimeMillis() * 1000000) - i4Var.d());
    }

    @Override // io.sentry.android.core.internal.util.n
    public final void b(long j, long j5, long j7, long j10, boolean z5, boolean z6, float f2) {
        ConcurrentSkipListSet concurrentSkipListSet = this.f11150f;
        if (concurrentSkipListSet.size() > 3600) {
            return;
        }
        long j11 = (long) (f11144h / f2);
        this.f11151g = j11;
        if (z5 || z6) {
            concurrentSkipListSet.add(new f1(j, j5, j7, j10, z5, z6, j11));
        }
    }

    public final void d() {
        io.sentry.r a = this.f11146b.a();
        try {
            if (this.f11148d != null) {
                this.f11147c.b(this.f11148d);
                this.f11148d = null;
            }
            this.f11150f.clear();
            this.f11149e.clear();
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    /* JADX WARN: Finally extract failed */
    /* JADX WARN: Removed duplicated region for block: B:118:0x0170  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x01ec A[Catch: all -> 0x0126, TRY_LEAVE, TryCatch #2 {all -> 0x0126, blocks: (B:108:0x0150, B:110:0x015a, B:113:0x015e, B:115:0x0166, B:119:0x0173, B:123:0x0182, B:126:0x018d, B:128:0x0199, B:129:0x01a5, B:131:0x01af, B:132:0x01b9, B:133:0x019e, B:137:0x01bb, B:139:0x01ec, B:84:0x00e5, B:87:0x010b, B:90:0x0116, B:92:0x011a, B:95:0x0121), top: B:83:0x00e5 }] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x021d A[Catch: all -> 0x0221, TryCatch #0 {all -> 0x0221, blocks: (B:25:0x0217, B:27:0x021d, B:30:0x0224), top: B:24:0x0217 }] */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0224 A[Catch: all -> 0x0221, TRY_LEAVE, TryCatch #0 {all -> 0x0221, blocks: (B:25:0x0217, B:27:0x021d, B:30:0x0224), top: B:24:0x0217 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(ISpan iSpan) {
        io.sentry.r rVar;
        Throwable th2;
        i4 p3;
        TreeSet treeSet;
        io.sentry.util.a aVar;
        int i5;
        int i6;
        long j;
        long j5;
        long j7;
        long j10;
        Field field;
        Long l6;
        Iterator it;
        TreeSet treeSet2 = this.f11149e;
        if (!this.a || (iSpan instanceof t2) || (iSpan instanceof v2)) {
            return;
        }
        io.sentry.util.a aVar2 = this.f11146b;
        io.sentry.r a = aVar2.a();
        try {
            if (!treeSet2.contains(iSpan)) {
                a.close();
                return;
            }
            a.close();
            io.sentry.r a10 = aVar2.a();
            try {
                boolean remove = treeSet2.remove(iSpan);
                ConcurrentSkipListSet concurrentSkipListSet = this.f11150f;
                try {
                    if (remove && (p3 = iSpan.p()) != null) {
                        long g6 = g(iSpan.s());
                        long g10 = g(p3);
                        long j11 = g10 - g6;
                        if (j11 > 0) {
                            long j12 = this.f11151g;
                            int i10 = 1;
                            if (concurrentSkipListSet.isEmpty()) {
                                treeSet = treeSet2;
                                aVar = aVar2;
                                rVar = a10;
                                i5 = 0;
                                i6 = 0;
                                j = 0;
                                j5 = 0;
                                j7 = 0;
                            } else {
                                Iterator it2 = concurrentSkipListSet.tailSet((ConcurrentSkipListSet) new f1(g6)).iterator();
                                i5 = 0;
                                i6 = 0;
                                j = 0;
                                j5 = 0;
                                j7 = 0;
                                while (true) {
                                    if (!it2.hasNext()) {
                                        treeSet = treeSet2;
                                        aVar = aVar2;
                                        break;
                                    }
                                    f1 f1Var = (f1) it2.next();
                                    treeSet = treeSet2;
                                    aVar = aVar2;
                                    long j13 = f1Var.f11124d;
                                    long j14 = f1Var.f11127v;
                                    long j15 = f1Var.f11130y;
                                    long j16 = f1Var.f11125e;
                                    if (j13 > g10) {
                                        break;
                                    }
                                    if (j13 >= g6 && j16 <= g10) {
                                        try {
                                            long j17 = f1Var.f11126i;
                                            boolean z5 = f1Var.f11128w;
                                            j += j17;
                                            if (f1Var.f11129x) {
                                                j7 += j14;
                                                i6++;
                                            } else if (z5) {
                                                j5 += j14;
                                                i5++;
                                            }
                                        } catch (Throwable th3) {
                                            th2 = th3;
                                            rVar = a10;
                                            rVar.close();
                                            throw th2;
                                        }
                                    } else if ((g6 > j13 && g6 < j16) || (g10 > j13 && g10 < j16)) {
                                        rVar = a10;
                                        it = it2;
                                        try {
                                            long min = Math.min(j14 - Math.max(0L, Math.max(0L, g6 - j13) - j15), j11);
                                            long min2 = Math.min(g10, j16) - Math.max(g6, f1Var.f11124d);
                                            int i11 = io.sentry.android.core.internal.util.o.M;
                                            boolean z6 = min2 > j15;
                                            j += min2;
                                            if (min2 > io.sentry.android.core.internal.util.o.L) {
                                                j7 += min;
                                                i6++;
                                            } else if (z6) {
                                                j5 += min;
                                                i5++;
                                            }
                                            it2 = it;
                                            treeSet2 = treeSet;
                                            aVar2 = aVar;
                                            a10 = rVar;
                                            j12 = j15;
                                        } catch (Throwable th4) {
                                            th = th4;
                                            th2 = th;
                                            try {
                                                rVar.close();
                                                throw th2;
                                            } catch (Throwable th5) {
                                                th2.addSuppressed(th5);
                                                throw th2;
                                            }
                                        }
                                    }
                                    rVar = a10;
                                    it = it2;
                                    it2 = it;
                                    treeSet2 = treeSet;
                                    aVar2 = aVar;
                                    a10 = rVar;
                                    j12 = j15;
                                }
                                rVar = a10;
                            }
                            int i12 = i5 + i6;
                            io.sentry.android.core.internal.util.o oVar = this.f11147c;
                            Choreographer choreographer = oVar.G;
                            if (choreographer != null && (field = oVar.H) != null) {
                                try {
                                    l6 = (Long) field.get(choreographer);
                                } catch (IllegalAccessException unused) {
                                }
                                if (l6 != null) {
                                    j10 = l6.longValue();
                                    if (j10 != -1) {
                                        long max = Math.max(0L, g10 - j10);
                                        if (max > j12) {
                                            boolean z7 = max > io.sentry.android.core.internal.util.o.L;
                                            long max2 = Math.max(0L, max - j12);
                                            j += max;
                                            if (z7) {
                                                j7 += max2;
                                                i6++;
                                            } else {
                                                j5 += max2;
                                                i5++;
                                            }
                                        } else {
                                            i10 = 0;
                                        }
                                        long j18 = j11 - j;
                                        i12 = i12 + i10 + (j18 > 0 ? (int) Math.ceil(j18 / j12) : 0);
                                    }
                                    double d6 = (j5 + j7) / 1.0E9d;
                                    iSpan.h(Integer.valueOf(i12), "frames.total");
                                    iSpan.h(Integer.valueOf(i5), "frames.slow");
                                    iSpan.h(Integer.valueOf(i6), "frames.frozen");
                                    iSpan.h(Double.valueOf(d6), "frames.delay");
                                    if (iSpan instanceof io.sentry.f1) {
                                        iSpan.e(Integer.valueOf(i12), "frames_total");
                                        iSpan.e(Integer.valueOf(i5), "frames_slow");
                                        iSpan.e(Integer.valueOf(i6), "frames_frozen");
                                        iSpan.e(Double.valueOf(d6), "frames_delay");
                                    }
                                    rVar.close();
                                    a = aVar.a();
                                    if (treeSet.isEmpty()) {
                                        d();
                                    } else {
                                        concurrentSkipListSet.headSet((ConcurrentSkipListSet) new f1(g(((ISpan) treeSet.first()).s()))).clear();
                                    }
                                    a.close();
                                    return;
                                }
                            }
                            j10 = -1;
                            if (j10 != -1) {
                            }
                            double d62 = (j5 + j7) / 1.0E9d;
                            iSpan.h(Integer.valueOf(i12), "frames.total");
                            iSpan.h(Integer.valueOf(i5), "frames.slow");
                            iSpan.h(Integer.valueOf(i6), "frames.frozen");
                            iSpan.h(Double.valueOf(d62), "frames.delay");
                            if (iSpan instanceof io.sentry.f1) {
                            }
                            rVar.close();
                            a = aVar.a();
                            if (treeSet.isEmpty()) {
                            }
                            a.close();
                            return;
                        }
                    }
                    if (treeSet.isEmpty()) {
                    }
                    a.close();
                    return;
                } catch (Throwable th6) {
                }
                a10.close();
                treeSet = treeSet2;
                aVar = aVar2;
                a = aVar.a();
            } catch (Throwable th7) {
                th = th7;
                rVar = a10;
            }
        } finally {
            try {
                a.close();
                throw th6;
            } catch (Throwable th8) {
                th6.addSuppressed(th8);
            }
        }
    }

    public final void f(ISpan iSpan) {
        String str;
        if (!this.a || (iSpan instanceof t2) || (iSpan instanceof v2)) {
            return;
        }
        io.sentry.r a = this.f11146b.a();
        try {
            this.f11149e.add(iSpan);
            if (this.f11148d == null) {
                io.sentry.android.core.internal.util.o oVar = this.f11147c;
                if (oVar.f11252y) {
                    String q5 = nt.a.q();
                    oVar.f11251x.put(q5, this);
                    oVar.c();
                    str = q5;
                } else {
                    str = null;
                }
                this.f11148d = str;
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
