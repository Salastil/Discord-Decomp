package wd;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.text.CueGroup;
import e4.l;
import fe.k;
import fi.e0;
import fi.r0;
import hc.m;
import hc.w;
import java.util.List;
import ke.d0;
import ke.o;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class j extends hc.e implements Handler.Callback {
    public final Handler L;
    public final w M;
    public final h N;
    public final l O;
    public boolean P;
    public boolean Q;
    public boolean R;
    public int S;
    public Format T;
    public f U;
    public i V;
    public c W;
    public c X;
    public int Y;
    public long Z;
    public long a0;

    /* renamed from: b0, reason: collision with root package name */
    public long f19822b0;

    public j(w wVar, Looper looper) {
        super(3);
        Handler handler;
        this.M = wVar;
        if (looper == null) {
            handler = null;
        } else {
            int i5 = d0.a;
            handler = new Handler(looper, this);
        }
        this.L = handler;
        this.N = h.a;
        this.O = new l(10);
        this.Z = -9223372036854775807L;
        this.a0 = -9223372036854775807L;
        this.f19822b0 = -9223372036854775807L;
    }

    public final long A() {
        if (this.Y == -1) {
            return LongCompanionObject.MAX_VALUE;
        }
        this.W.getClass();
        return this.Y >= this.W.A() ? LongCompanionObject.MAX_VALUE : this.W.i(this.Y);
    }

    public final long B(long j) {
        ke.b.k(j != -9223372036854775807L);
        ke.b.k(this.a0 != -9223372036854775807L);
        return j - this.a0;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x009c, code lost:
    
        if (r2.equals("application/pgs") == false) goto L6;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void C() {
        f aVar;
        char c6 = 1;
        this.R = true;
        Format format = this.T;
        format.getClass();
        this.N.getClass();
        String str = format.I;
        int i5 = format.a0;
        List list = format.K;
        if (str != null) {
            switch (str.hashCode()) {
                case -1351681404:
                    if (str.equals("application/dvbsubs")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -1248334819:
                    break;
                case -1026075066:
                    if (str.equals("application/x-mp4-vtt")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -1004728940:
                    if (str.equals("text/vtt")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 691401887:
                    if (str.equals("application/x-quicktime-tx3g")) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 822864842:
                    if (str.equals("text/x-ssa")) {
                        c6 = 5;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 930165504:
                    if (str.equals("application/x-mp4-cea-608")) {
                        c6 = 6;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1201784583:
                    if (str.equals("text/x-exoplayer-cues")) {
                        c6 = 7;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1566015601:
                    if (str.equals("application/cea-608")) {
                        c6 = '\b';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1566016562:
                    if (str.equals("application/cea-708")) {
                        c6 = '\t';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1668750253:
                    if (str.equals("application/x-subrip")) {
                        c6 = '\n';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1693976202:
                    if (str.equals("application/ttml+xml")) {
                        c6 = 11;
                        break;
                    }
                    c6 = 65535;
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            switch (c6) {
                case 0:
                    aVar = new fe.a(list);
                    break;
                case 1:
                    aVar = new zd.b();
                    break;
                case 2:
                    aVar = new fe.a();
                    break;
                case 3:
                    aVar = new k();
                    break;
                case 4:
                    aVar = new ee.a(list);
                    break;
                case 5:
                    aVar = new be.a(list);
                    break;
                case 6:
                case '\b':
                    aVar = new xd.c(str, i5);
                    break;
                case 7:
                    aVar = new af.k(4);
                    break;
                case '\t':
                    aVar = new xd.f(i5, list);
                    break;
                case '\n':
                    aVar = new ce.a();
                    break;
                case 11:
                    aVar = new de.d();
                    break;
            }
            this.U = aVar;
            return;
        }
        throw new IllegalArgumentException(a3.e.k("Attempted to create decoder for unsupported MIME type: ", str));
    }

    public final void D() {
        this.V = null;
        this.Y = -1;
        c cVar = this.W;
        if (cVar != null) {
            cVar.f();
            this.W = null;
        }
        c cVar2 = this.X;
        if (cVar2 != null) {
            cVar2.f();
            this.X = null;
        }
    }

    @Override // hc.e
    public final String h() {
        return "TextRenderer";
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        if (message.what != 0) {
            throw new IllegalStateException();
        }
        CueGroup cueGroup = (CueGroup) message.obj;
        e0 e0Var = cueGroup.f5455d;
        w wVar = this.M;
        wVar.f9929d.f5363l.e(27, new m(2, e0Var));
        com.google.android.exoplayer2.d dVar = wVar.f9929d;
        dVar.f5349b0 = cueGroup;
        dVar.f5363l.e(27, new m(3, cueGroup));
        return true;
    }

    @Override // hc.e
    public final boolean j() {
        return this.Q;
    }

    @Override // hc.e
    public final boolean k() {
        return true;
    }

    @Override // hc.e
    public final void l() {
        this.T = null;
        this.Z = -9223372036854775807L;
        r0 r0Var = r0.f8704w;
        B(this.f19822b0);
        CueGroup cueGroup = new CueGroup(r0Var);
        Handler handler = this.L;
        if (handler != null) {
            handler.obtainMessage(0, cueGroup).sendToTarget();
        } else {
            w wVar = this.M;
            wVar.f9929d.f5363l.e(27, new m(2, cueGroup.f5455d));
            com.google.android.exoplayer2.d dVar = wVar.f9929d;
            dVar.f5349b0 = cueGroup;
            dVar.f5363l.e(27, new m(3, cueGroup));
        }
        this.a0 = -9223372036854775807L;
        this.f19822b0 = -9223372036854775807L;
        D();
        f fVar = this.U;
        fVar.getClass();
        fVar.release();
        this.U = null;
        this.S = 0;
    }

    @Override // hc.e
    public final void n(long j, boolean z5) {
        this.f19822b0 = j;
        r0 r0Var = r0.f8704w;
        B(this.f19822b0);
        CueGroup cueGroup = new CueGroup(r0Var);
        Handler handler = this.L;
        if (handler != null) {
            handler.obtainMessage(0, cueGroup).sendToTarget();
        } else {
            w wVar = this.M;
            wVar.f9929d.f5363l.e(27, new m(2, cueGroup.f5455d));
            com.google.android.exoplayer2.d dVar = wVar.f9929d;
            dVar.f5349b0 = cueGroup;
            dVar.f5363l.e(27, new m(3, cueGroup));
        }
        this.P = false;
        this.Q = false;
        this.Z = -9223372036854775807L;
        if (this.S == 0) {
            D();
            f fVar = this.U;
            fVar.getClass();
            fVar.flush();
            return;
        }
        D();
        f fVar2 = this.U;
        fVar2.getClass();
        fVar2.release();
        this.U = null;
        this.S = 0;
        C();
    }

    @Override // hc.e
    public final void s(Format[] formatArr, long j, long j5) {
        this.a0 = j5;
        this.T = formatArr[0];
        if (this.U != null) {
            this.S = 1;
        } else {
            C();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:115:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0120  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x018f A[EXC_TOP_SPLITTER, LOOP:1: B:66:0x018f->B:88:0x0200, LOOP_START, PHI: r23
      0x018f: PHI (r23v3 int) = (r23v2 int), (r23v4 int) binds: [B:65:0x018b, B:88:0x0200] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    @Override // hc.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void u(long j, long j5) {
        boolean z5;
        int i5;
        String str;
        int i6;
        long j7;
        l lVar = this.O;
        this.f19822b0 = j;
        if (this.I) {
            long j10 = this.Z;
            if (j10 != -9223372036854775807L && j >= j10) {
                D();
                this.Q = true;
            }
        }
        if (this.Q) {
            return;
        }
        c cVar = this.X;
        w wVar = this.M;
        Handler handler = this.L;
        if (cVar == null) {
            f fVar = this.U;
            fVar.getClass();
            fVar.a(j);
            try {
                f fVar2 = this.U;
                fVar2.getClass();
                this.X = (c) fVar2.b();
            } catch (g e9) {
                ke.b.s("TextRenderer", "Subtitle decoding failed. streamFormat=" + this.T, e9);
                r0 r0Var = r0.f8704w;
                B(this.f19822b0);
                CueGroup cueGroup = new CueGroup(r0Var);
                if (handler != null) {
                    handler.obtainMessage(0, cueGroup).sendToTarget();
                } else {
                    wVar.f9929d.f5363l.e(27, new m(2, cueGroup.f5455d));
                    com.google.android.exoplayer2.d dVar = wVar.f9929d;
                    dVar.f5349b0 = cueGroup;
                    dVar.f5363l.e(27, new m(3, cueGroup));
                }
                D();
                f fVar3 = this.U;
                fVar3.getClass();
                fVar3.release();
                this.U = null;
                this.S = 0;
                C();
                return;
            }
        }
        if (this.f9664y != 2) {
            return;
        }
        if (this.W != null) {
            long A = A();
            z5 = false;
            while (A <= j) {
                this.Y++;
                A = A();
                z5 = true;
            }
        } else {
            z5 = false;
        }
        c cVar2 = this.X;
        if (cVar2 != null) {
            if (!cVar2.c(4)) {
                i5 = 1;
                str = "Subtitle decoding failed. streamFormat=";
                if (cVar2.f14440i <= j) {
                    c cVar3 = this.W;
                    if (cVar3 != null) {
                        cVar3.f();
                    }
                    this.Y = cVar2.d(j);
                    this.W = cVar2;
                    this.X = null;
                    z5 = true;
                }
                if (z5) {
                    this.W.getClass();
                    int d6 = this.W.d(j);
                    if (d6 == 0 || this.W.A() == 0) {
                        j7 = this.W.f14440i;
                    } else if (d6 == -1) {
                        j7 = this.W.i(r4.A() - 1);
                    } else {
                        j7 = this.W.i(d6 - 1);
                    }
                    B(j7);
                    CueGroup cueGroup2 = new CueGroup(this.W.q(j));
                    if (handler != null) {
                        handler.obtainMessage(0, cueGroup2).sendToTarget();
                    } else {
                        wVar.f9929d.f5363l.e(27, new m(2, cueGroup2.f5455d));
                        com.google.android.exoplayer2.d dVar2 = wVar.f9929d;
                        dVar2.f5349b0 = cueGroup2;
                        dVar2.f5363l.e(27, new m(3, cueGroup2));
                    }
                }
                if (this.S != 2) {
                    return;
                }
                while (!this.P) {
                    try {
                        i iVar = this.V;
                        if (iVar == null) {
                            f fVar4 = this.U;
                            fVar4.getClass();
                            iVar = (i) fVar4.c();
                            if (iVar == null) {
                                return;
                            } else {
                                this.V = iVar;
                            }
                        }
                        if (this.S == i5) {
                            iVar.f14426e = 4;
                            f fVar5 = this.U;
                            fVar5.getClass();
                            fVar5.d(iVar);
                            this.V = null;
                            this.S = 2;
                            return;
                        }
                        int t5 = t(lVar, iVar, 0);
                        if (t5 == -4) {
                            if (iVar.c(4)) {
                                this.P = true;
                                this.R = false;
                                i6 = 1;
                            } else {
                                Format format = (Format) lVar.f7960i;
                                if (format == null) {
                                    return;
                                }
                                iVar.F = format.M;
                                iVar.j();
                                i6 = 1;
                                this.R &= !iVar.c(1);
                            }
                            if (!this.R) {
                                f fVar6 = this.U;
                                fVar6.getClass();
                                fVar6.d(iVar);
                                this.V = null;
                            }
                        } else {
                            i6 = 1;
                            if (t5 == -3) {
                                return;
                            }
                        }
                        i5 = i6;
                    } catch (g e10) {
                        ke.b.s("TextRenderer", str + this.T, e10);
                        r0 r0Var2 = r0.f8704w;
                        B(this.f19822b0);
                        CueGroup cueGroup3 = new CueGroup(r0Var2);
                        if (handler != null) {
                            handler.obtainMessage(0, cueGroup3).sendToTarget();
                        } else {
                            wVar.f9929d.f5363l.e(27, new m(2, cueGroup3.f5455d));
                            com.google.android.exoplayer2.d dVar3 = wVar.f9929d;
                            dVar3.f5349b0 = cueGroup3;
                            dVar3.f5363l.e(27, new m(3, cueGroup3));
                        }
                        D();
                        f fVar7 = this.U;
                        fVar7.getClass();
                        fVar7.release();
                        this.U = null;
                        this.S = 0;
                        C();
                        return;
                    }
                }
                return;
            }
            if (!z5 && A() == LongCompanionObject.MAX_VALUE) {
                if (this.S == 2) {
                    D();
                    f fVar8 = this.U;
                    fVar8.getClass();
                    fVar8.release();
                    this.U = null;
                    this.S = 0;
                    C();
                } else {
                    D();
                    this.Q = true;
                }
            }
        }
        i5 = 1;
        str = "Subtitle decoding failed. streamFormat=";
        if (z5) {
        }
        if (this.S != 2) {
        }
    }

    @Override // hc.e
    public final int y(Format format) {
        this.N.getClass();
        String str = format.I;
        if ("text/vtt".equals(str) || "text/x-ssa".equals(str) || "application/ttml+xml".equals(str) || "application/x-mp4-vtt".equals(str) || "application/x-subrip".equals(str) || "application/x-quicktime-tx3g".equals(str) || "application/cea-608".equals(str) || "application/x-mp4-cea-608".equals(str) || "application/cea-708".equals(str) || "application/dvbsubs".equals(str) || "application/pgs".equals(str) || "text/x-exoplayer-cues".equals(str)) {
            return hc.e.e(format.f5226d0 == 0 ? 4 : 2, 0, 0);
        }
        return o.k(format.I) ? hc.e.e(1, 0, 0) : hc.e.e(0, 0, 0);
    }
}
