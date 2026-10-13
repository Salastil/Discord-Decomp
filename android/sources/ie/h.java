package ie;

import android.os.SystemClock;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public abstract class h implements DataSource {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f10674d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f10675e = new ArrayList(1);

    /* renamed from: i, reason: collision with root package name */
    public int f10676i;

    /* renamed from: v, reason: collision with root package name */
    public p f10677v;

    public h(boolean z5) {
        this.f10674d = z5;
    }

    public final void b(int i5) {
        p pVar = this.f10677v;
        int i6 = ke.d0.a;
        for (int i10 = 0; i10 < this.f10676i; i10++) {
            u0 u0Var = (u0) this.f10675e.get(i10);
            boolean z5 = this.f10674d;
            s sVar = (s) u0Var;
            synchronized (sVar) {
                fi.r0 r0Var = s.f10737n;
                if (z5 && (pVar.f10718i & 8) != 8) {
                    sVar.f10750h += i5;
                }
            }
        }
    }

    public final void c() {
        p pVar = this.f10677v;
        int i5 = ke.d0.a;
        for (int i6 = 0; i6 < this.f10676i; i6++) {
            u0 u0Var = (u0) this.f10675e.get(i6);
            boolean z5 = this.f10674d;
            s sVar = (s) u0Var;
            synchronized (sVar) {
                try {
                    fi.r0 r0Var = s.f10737n;
                    if (z5 && (pVar.f10718i & 8) != 8) {
                        ke.b.k(sVar.f10748f > 0);
                        sVar.f10746d.getClass();
                        long elapsedRealtime = SystemClock.elapsedRealtime();
                        int i10 = (int) (elapsedRealtime - sVar.f10749g);
                        sVar.j += i10;
                        long j = sVar.k;
                        long j5 = sVar.f10750h;
                        sVar.k = j + j5;
                        if (i10 > 0) {
                            sVar.f10745c.a((j5 * 8000.0f) / i10, (int) Math.sqrt(j5));
                            if (sVar.j < 2000) {
                                if (sVar.k >= 524288) {
                                }
                                sVar.b(i10, sVar.f10750h, sVar.f10752l);
                                sVar.f10749g = elapsedRealtime;
                                sVar.f10750h = 0L;
                            }
                            sVar.f10752l = (long) sVar.f10745c.b();
                            sVar.b(i10, sVar.f10750h, sVar.f10752l);
                            sVar.f10749g = elapsedRealtime;
                            sVar.f10750h = 0L;
                        }
                        sVar.f10748f--;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
        this.f10677v = null;
    }

    public final void d() {
        for (int i5 = 0; i5 < this.f10676i; i5++) {
            ((u0) this.f10675e.get(i5)).getClass();
        }
    }

    public final void e(p pVar) {
        this.f10677v = pVar;
        for (int i5 = 0; i5 < this.f10676i; i5++) {
            u0 u0Var = (u0) this.f10675e.get(i5);
            boolean z5 = this.f10674d;
            s sVar = (s) u0Var;
            synchronized (sVar) {
                try {
                    fi.r0 r0Var = s.f10737n;
                    if (z5 && (pVar.f10718i & 8) != 8) {
                        if (sVar.f10748f == 0) {
                            sVar.f10746d.getClass();
                            sVar.f10749g = SystemClock.elapsedRealtime();
                        }
                        sVar.f10748f++;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
        u0Var.getClass();
        ArrayList arrayList = this.f10675e;
        if (arrayList.contains(u0Var)) {
            return;
        }
        arrayList.add(u0Var);
        this.f10676i++;
    }
}
