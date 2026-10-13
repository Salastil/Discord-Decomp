package dd;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.metadata.Metadata;
import e4.l;
import hc.u0;
import hc.w;
import java.util.ArrayList;
import ke.d0;
import ke.m;

/* loaded from: classes3.dex */
public final class e extends hc.e implements Handler.Callback {
    public final c L;
    public final w M;
    public final Handler N;
    public final d O;
    public nt.a P;
    public boolean Q;
    public boolean R;
    public long S;
    public Metadata T;
    public long U;

    public e(w wVar, Looper looper) {
        super(5);
        Handler handler;
        this.M = wVar;
        if (looper == null) {
            handler = null;
        } else {
            int i5 = d0.a;
            handler = new Handler(looper, this);
        }
        this.N = handler;
        this.L = c.a;
        this.O = new d(1);
        this.U = -9223372036854775807L;
    }

    public final void A(Metadata metadata, ArrayList arrayList) {
        int i5 = 0;
        while (true) {
            b[] bVarArr = metadata.f5427d;
            if (i5 >= bVarArr.length) {
                return;
            }
            Format d6 = bVarArr[i5].d();
            if (d6 != null) {
                c cVar = this.L;
                if (cVar.b(d6)) {
                    nt.a a = cVar.a(d6);
                    byte[] t5 = bVarArr[i5].t();
                    t5.getClass();
                    d dVar = this.O;
                    dVar.f();
                    dVar.h(t5.length);
                    dVar.f14436v.put(t5);
                    dVar.j();
                    Metadata l6 = a.l(dVar);
                    if (l6 != null) {
                        A(l6, arrayList);
                    }
                    i5++;
                }
            }
            arrayList.add(bVarArr[i5]);
            i5++;
        }
    }

    public final long B(long j) {
        ke.b.k(j != -9223372036854775807L);
        ke.b.k(this.U != -9223372036854775807L);
        return j - this.U;
    }

    @Override // hc.e
    public final String h() {
        return "MetadataRenderer";
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        if (message.what != 0) {
            throw new IllegalStateException();
        }
        Metadata metadata = (Metadata) message.obj;
        w wVar = this.M;
        com.google.android.exoplayer2.d dVar = wVar.f9929d;
        m mVar = dVar.f5363l;
        u0 a = dVar.f5357f0.a();
        int i5 = 0;
        while (true) {
            b[] bVarArr = metadata.f5427d;
            if (i5 >= bVarArr.length) {
                break;
            }
            bVarArr[i5].o(a);
            i5++;
        }
        dVar.f5357f0 = new MediaMetadata(a);
        MediaMetadata c02 = dVar.c0();
        if (!c02.equals(dVar.M)) {
            dVar.M = c02;
            mVar.c(14, new hc.m(4, wVar));
        }
        mVar.c(28, new hc.m(5, metadata));
        mVar.b();
        return true;
    }

    @Override // hc.e
    public final boolean j() {
        return this.R;
    }

    @Override // hc.e
    public final boolean k() {
        return true;
    }

    @Override // hc.e
    public final void l() {
        this.T = null;
        this.P = null;
        this.U = -9223372036854775807L;
    }

    @Override // hc.e
    public final void n(long j, boolean z5) {
        this.T = null;
        this.Q = false;
        this.R = false;
    }

    @Override // hc.e
    public final void s(Format[] formatArr, long j, long j5) {
        this.P = this.L.a(formatArr[0]);
        Metadata metadata = this.T;
        if (metadata != null) {
            long j7 = metadata.f5428e;
            long j10 = (this.U + j7) - j5;
            if (j7 != j10) {
                metadata = new Metadata(j10, metadata.f5427d);
            }
            this.T = metadata;
        }
        this.U = j5;
    }

    @Override // hc.e
    public final void u(long j, long j5) {
        boolean z5 = true;
        while (z5) {
            int i5 = 0;
            if (!this.Q && this.T == null) {
                d dVar = this.O;
                dVar.f();
                l lVar = this.f9660i;
                lVar.u();
                int t5 = t(lVar, dVar, 0);
                if (t5 == -4) {
                    if (dVar.c(4)) {
                        this.Q = true;
                    } else {
                        dVar.F = this.S;
                        dVar.j();
                        nt.a aVar = this.P;
                        int i6 = d0.a;
                        Metadata l6 = aVar.l(dVar);
                        if (l6 != null) {
                            ArrayList arrayList = new ArrayList(l6.f5427d.length);
                            A(l6, arrayList);
                            if (!arrayList.isEmpty()) {
                                this.T = new Metadata(B(dVar.f14438x), (b[]) arrayList.toArray(new b[0]));
                            }
                        }
                    }
                } else if (t5 == -5) {
                    Format format = (Format) lVar.f7960i;
                    format.getClass();
                    this.S = format.M;
                }
            }
            Metadata metadata = this.T;
            if (metadata == null || metadata.f5428e > B(j)) {
                z5 = false;
            } else {
                Metadata metadata2 = this.T;
                Handler handler = this.N;
                if (handler != null) {
                    handler.obtainMessage(0, metadata2).sendToTarget();
                } else {
                    w wVar = this.M;
                    com.google.android.exoplayer2.d dVar2 = wVar.f9929d;
                    m mVar = dVar2.f5363l;
                    u0 a = dVar2.f5357f0.a();
                    while (true) {
                        b[] bVarArr = metadata2.f5427d;
                        if (i5 >= bVarArr.length) {
                            break;
                        }
                        bVarArr[i5].o(a);
                        i5++;
                    }
                    dVar2.f5357f0 = new MediaMetadata(a);
                    MediaMetadata c02 = dVar2.c0();
                    if (!c02.equals(dVar2.M)) {
                        dVar2.M = c02;
                        mVar.c(14, new hc.m(4, wVar));
                    }
                    mVar.c(28, new hc.m(5, metadata2));
                    mVar.b();
                }
                this.T = null;
                z5 = true;
            }
            if (this.Q && this.T == null) {
                this.R = true;
            }
        }
    }

    @Override // hc.e
    public final int y(Format format) {
        if (this.L.b(format)) {
            return hc.e.e(format.f5226d0 == 0 ? 4 : 2, 0, 0);
        }
        return hc.e.e(0, 0, 0);
    }
}
