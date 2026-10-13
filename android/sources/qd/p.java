package qd;

import android.os.Handler;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import hc.g1;
import ke.d0;
import ke.w;
import nd.l0;
import nd.p0;
import qc.u;
import qc.v;

/* loaded from: classes3.dex */
public final class p implements v {
    public final p0 a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.l f16869b = new e4.l(10);

    /* renamed from: c, reason: collision with root package name */
    public final dd.d f16870c = new dd.d(1);

    /* renamed from: d, reason: collision with root package name */
    public long f16871d = -9223372036854775807L;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ q f16872e;

    public p(q qVar, ie.q qVar2) {
        this.f16872e = qVar;
        this.a = new p0(qVar2, null, null);
    }

    @Override // qc.v
    public final void b(long j, int i5, int i6, int i10, u uVar) {
        long f2;
        long j5;
        this.a.b(j, i5, i6, i10, uVar);
        while (this.a.r(false)) {
            dd.d dVar = this.f16870c;
            dVar.f();
            if (this.a.w(this.f16869b, dVar, 0, false) == -4) {
                dVar.j();
            } else {
                dVar = null;
            }
            if (dVar != null) {
                long j7 = dVar.f14438x;
                Metadata l6 = this.f16872e.f16875i.l(dVar);
                if (l6 != null) {
                    fd.a aVar = (fd.a) l6.f5427d[0];
                    String str = aVar.f8493d;
                    String str2 = aVar.f8494e;
                    if ("urn:mpeg:dash:event:2012".equals(str) && ("1".equals(str2) || "2".equals(str2) || "3".equals(str2))) {
                        try {
                            j5 = d0.L(d0.n(aVar.f8497w));
                        } catch (g1 unused) {
                            j5 = -9223372036854775807L;
                        }
                        if (j5 != -9223372036854775807L) {
                            o oVar = new o(j7, j5);
                            Handler handler = this.f16872e.f16876v;
                            handler.sendMessage(handler.obtainMessage(1, oVar));
                        }
                    }
                }
            }
        }
        p0 p0Var = this.a;
        l0 l0Var = p0Var.a;
        synchronized (p0Var) {
            int i11 = p0Var.f15159s;
            f2 = i11 == 0 ? -1L : p0Var.f(i11);
        }
        l0Var.b(f2);
    }

    @Override // qc.v
    public final int c(ie.k kVar, int i5, boolean z5) {
        return this.a.a(kVar, i5, z5);
    }

    @Override // qc.v
    public final void d(int i5, w wVar) {
        this.a.d(i5, wVar);
    }

    @Override // qc.v
    public final void e(Format format) {
        this.a.e(format);
    }
}
