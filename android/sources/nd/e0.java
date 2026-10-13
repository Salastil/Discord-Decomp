package nd;

import android.net.Uri;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import java.io.InterruptedIOException;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class e0 implements ie.h0 {
    public long F;
    public ie.p G;
    public p0 H;
    public boolean I;
    public final /* synthetic */ h0 J;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f15086d;

    /* renamed from: e, reason: collision with root package name */
    public final ie.s0 f15087e;

    /* renamed from: i, reason: collision with root package name */
    public final k2.r f15088i;

    /* renamed from: v, reason: collision with root package name */
    public final h0 f15089v;

    /* renamed from: w, reason: collision with root package name */
    public final a5.h0 f15090w;

    /* renamed from: y, reason: collision with root package name */
    public volatile boolean f15092y;

    /* renamed from: x, reason: collision with root package name */
    public final qc.m f15091x = new qc.m();
    public boolean E = true;

    public e0(h0 h0Var, Uri uri, DataSource dataSource, k2.r rVar, h0 h0Var2, a5.h0 h0Var3) {
        this.J = h0Var;
        this.f15086d = uri;
        this.f15087e = new ie.s0(dataSource);
        this.f15088i = rVar;
        this.f15089v = h0Var2;
        this.f15090w = h0Var3;
        LoadEventInfo.f5429c.getAndIncrement();
        this.G = a(0L);
    }

    public final ie.p a(long j) {
        Map map = Collections.EMPTY_MAP;
        String str = this.J.F;
        Map map2 = h0.f15098j0;
        Uri uri = this.f15086d;
        ke.b.m(uri, "The uri must be set.");
        return new ie.p(uri, 0L, 1, null, map2, j, -1L, str, 6);
    }

    @Override // ie.h0
    public final void n() {
        DataSource dataSource;
        int i5;
        int i6 = 0;
        while (i6 == 0 && !this.f15092y) {
            try {
                long j = this.f15091x.a;
                ie.p a = a(j);
                this.G = a;
                long o6 = this.f15087e.o(a);
                if (o6 != -1) {
                    o6 += j;
                    h0 h0Var = this.J;
                    h0Var.M.post(new d0(h0Var, 2));
                }
                long j5 = o6;
                this.J.O = hd.b.a(this.f15087e.f10754d.s());
                ie.s0 s0Var = this.f15087e;
                hd.b bVar = this.J.O;
                if (bVar == null || (i5 = bVar.f9955x) == -1) {
                    dataSource = s0Var;
                } else {
                    dataSource = new k(s0Var, i5, this);
                    p0 C = this.J.C(new g0(0, true));
                    this.H = C;
                    C.e(h0.f15099k0);
                }
                this.f15088i.z(dataSource, this.f15086d, this.f15087e.f10754d.s(), j, j5, this.f15089v);
                if (this.J.O != null) {
                    qc.j jVar = (qc.j) this.f15088i.f13143i;
                    if (jVar instanceof xc.d) {
                        ((xc.d) jVar).f20322q = true;
                    }
                }
                if (this.E) {
                    k2.r rVar = this.f15088i;
                    long j7 = this.F;
                    qc.j jVar2 = (qc.j) rVar.f13143i;
                    jVar2.getClass();
                    jVar2.g(j, j7);
                    this.E = false;
                }
                while (i6 == 0 && !this.f15092y) {
                    try {
                        this.f15090w.f();
                        k2.r rVar2 = this.f15088i;
                        qc.m mVar = this.f15091x;
                        qc.j jVar3 = (qc.j) rVar2.f13143i;
                        jVar3.getClass();
                        qc.g gVar = (qc.g) rVar2.f13144v;
                        gVar.getClass();
                        i6 = jVar3.e(gVar, mVar);
                        qc.g gVar2 = (qc.g) this.f15088i.f13144v;
                        long j10 = gVar2 != null ? gVar2.f16773v : -1L;
                        if (j10 > this.J.G + j) {
                            this.f15090w.l();
                            h0 h0Var2 = this.J;
                            h0Var2.M.post(h0Var2.L);
                            j = j10;
                        }
                    } catch (InterruptedException unused) {
                        throw new InterruptedIOException();
                    }
                }
                if (i6 == 1) {
                    i6 = 0;
                } else {
                    qc.g gVar3 = (qc.g) this.f15088i.f13144v;
                    if ((gVar3 != null ? gVar3.f16773v : -1L) != -1) {
                        this.f15091x.a = gVar3 != null ? gVar3.f16773v : -1L;
                    }
                }
                zo.c0.i(this.f15087e);
            } catch (Throwable th2) {
                if (i6 != 1) {
                    qc.g gVar4 = (qc.g) this.f15088i.f13144v;
                    if ((gVar4 != null ? gVar4.f16773v : -1L) != -1) {
                        this.f15091x.a = gVar4 != null ? gVar4.f16773v : -1L;
                    }
                }
                zo.c0.i(this.f15087e);
                throw th2;
            }
        }
    }

    @Override // ie.h0
    public final void z() {
        this.f15092y = true;
    }
}
