package cq;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class z extends iq.j {
    public s0 E;
    public int F;
    public List G;
    public s0 H;
    public int I;
    public List J;
    public List K;
    public List L;
    public y0 M;
    public List N;
    public p O;
    public List P;

    /* renamed from: v, reason: collision with root package name */
    public int f7308v;

    /* renamed from: w, reason: collision with root package name */
    public int f7309w;

    /* renamed from: x, reason: collision with root package name */
    public int f7310x;

    /* renamed from: y, reason: collision with root package name */
    public int f7311y;

    public static z h() {
        z zVar = new z();
        zVar.f7309w = 6;
        zVar.f7310x = 6;
        s0 s0Var = s0.Q;
        zVar.E = s0Var;
        List list = Collections.EMPTY_LIST;
        zVar.G = list;
        zVar.H = s0Var;
        zVar.J = list;
        zVar.K = list;
        zVar.L = list;
        zVar.M = y0.f7301y;
        zVar.N = list;
        zVar.O = p.f7199w;
        zVar.P = list;
        return zVar;
    }

    @Override // iq.i
    public final iq.a c() {
        a0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        z h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        a0 a0Var = null;
        try {
            try {
                a0.T.getClass();
                j(new a0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                a0 a0Var2 = (a0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    a0Var = a0Var2;
                    if (a0Var != null) {
                        j(a0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (a0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((a0) nVar);
        return this;
    }

    public final a0 g() {
        a0 a0Var = new a0(this);
        int i5 = this.f7308v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        a0Var.f7006v = this.f7309w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        a0Var.f7007w = this.f7310x;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        a0Var.f7008x = this.f7311y;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        a0Var.f7009y = this.E;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        a0Var.E = this.F;
        if ((i5 & 32) == 32) {
            this.G = Collections.unmodifiableList(this.G);
            this.f7308v &= -33;
        }
        a0Var.F = this.G;
        if ((i5 & 64) == 64) {
            i6 |= 32;
        }
        a0Var.G = this.H;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i6 |= 64;
        }
        a0Var.H = this.I;
        if ((this.f7308v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            this.J = Collections.unmodifiableList(this.J);
            this.f7308v &= -257;
        }
        a0Var.I = this.J;
        if ((this.f7308v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            this.K = Collections.unmodifiableList(this.K);
            this.f7308v &= -513;
        }
        a0Var.J = this.K;
        if ((this.f7308v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            this.L = Collections.unmodifiableList(this.L);
            this.f7308v &= -1025;
        }
        a0Var.L = this.L;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        a0Var.M = this.M;
        if ((this.f7308v & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
            this.N = Collections.unmodifiableList(this.N);
            this.f7308v &= -4097;
        }
        a0Var.N = this.N;
        if ((i5 & 8192) == 8192) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        }
        a0Var.O = this.O;
        if ((this.f7308v & 16384) == 16384) {
            this.P = Collections.unmodifiableList(this.P);
            this.f7308v &= -16385;
        }
        a0Var.P = this.P;
        a0Var.f7005i = i6;
        return a0Var;
    }

    public final void j(a0 a0Var) {
        p pVar;
        y0 y0Var;
        s0 s0Var;
        s0 s0Var2;
        if (a0Var == a0.S) {
            return;
        }
        int i5 = a0Var.f7005i;
        if ((i5 & 1) == 1) {
            int i6 = a0Var.f7006v;
            this.f7308v = 1 | this.f7308v;
            this.f7309w = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = a0Var.f7007w;
            this.f7308v = 2 | this.f7308v;
            this.f7310x = i10;
        }
        if ((i5 & 4) == 4) {
            int i11 = a0Var.f7008x;
            this.f7308v = 4 | this.f7308v;
            this.f7311y = i11;
        }
        if ((i5 & 8) == 8) {
            s0 s0Var3 = a0Var.f7009y;
            if ((this.f7308v & 8) != 8 || (s0Var2 = this.E) == s0.Q) {
                this.E = s0Var3;
            } else {
                r0 q5 = s0.q(s0Var2);
                q5.j(s0Var3);
                this.E = q5.g();
            }
            this.f7308v |= 8;
        }
        if ((a0Var.f7005i & 16) == 16) {
            int i12 = a0Var.E;
            this.f7308v = 16 | this.f7308v;
            this.F = i12;
        }
        if (!a0Var.F.isEmpty()) {
            if (this.G.isEmpty()) {
                this.G = a0Var.F;
                this.f7308v &= -33;
            } else {
                if ((this.f7308v & 32) != 32) {
                    this.G = new ArrayList(this.G);
                    this.f7308v |= 32;
                }
                this.G.addAll(a0Var.F);
            }
        }
        if ((a0Var.f7005i & 32) == 32) {
            s0 s0Var4 = a0Var.G;
            if ((this.f7308v & 64) != 64 || (s0Var = this.H) == s0.Q) {
                this.H = s0Var4;
            } else {
                r0 q6 = s0.q(s0Var);
                q6.j(s0Var4);
                this.H = q6.g();
            }
            this.f7308v |= 64;
        }
        if ((a0Var.f7005i & 64) == 64) {
            int i13 = a0Var.H;
            this.f7308v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            this.I = i13;
        }
        if (!a0Var.I.isEmpty()) {
            if (this.J.isEmpty()) {
                this.J = a0Var.I;
                this.f7308v &= -257;
            } else {
                if ((this.f7308v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256) {
                    this.J = new ArrayList(this.J);
                    this.f7308v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                }
                this.J.addAll(a0Var.I);
            }
        }
        if (!a0Var.J.isEmpty()) {
            if (this.K.isEmpty()) {
                this.K = a0Var.J;
                this.f7308v &= -513;
            } else {
                if ((this.f7308v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 512) {
                    this.K = new ArrayList(this.K);
                    this.f7308v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                }
                this.K.addAll(a0Var.J);
            }
        }
        if (!a0Var.L.isEmpty()) {
            if (this.L.isEmpty()) {
                this.L = a0Var.L;
                this.f7308v &= -1025;
            } else {
                if ((this.f7308v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 1024) {
                    this.L = new ArrayList(this.L);
                    this.f7308v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                }
                this.L.addAll(a0Var.L);
            }
        }
        if ((a0Var.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            y0 y0Var2 = a0Var.M;
            if ((this.f7308v & RecyclerView.ItemAnimator.FLAG_MOVED) != 2048 || (y0Var = this.M) == y0.f7301y) {
                this.M = y0Var2;
            } else {
                g i14 = y0.i(y0Var);
                i14.k(y0Var2);
                this.M = i14.g();
            }
            this.f7308v |= RecyclerView.ItemAnimator.FLAG_MOVED;
        }
        if (!a0Var.N.isEmpty()) {
            if (this.N.isEmpty()) {
                this.N = a0Var.N;
                this.f7308v &= -4097;
            } else {
                if ((this.f7308v & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 4096) {
                    this.N = new ArrayList(this.N);
                    this.f7308v |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                }
                this.N.addAll(a0Var.N);
            }
        }
        if ((a0Var.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            p pVar2 = a0Var.O;
            if ((this.f7308v & 8192) != 8192 || (pVar = this.O) == p.f7199w) {
                this.O = pVar2;
            } else {
                o oVar = new o(0);
                oVar.f7194v = Collections.EMPTY_LIST;
                oVar.k(pVar);
                oVar.k(pVar2);
                this.O = oVar.f();
            }
            this.f7308v |= 8192;
        }
        if (!a0Var.P.isEmpty()) {
            if (this.P.isEmpty()) {
                this.P = a0Var.P;
                this.f7308v &= -16385;
            } else {
                if ((this.f7308v & 16384) != 16384) {
                    this.P = new ArrayList(this.P);
                    this.f7308v |= 16384;
                }
                this.P.addAll(a0Var.P);
            }
        }
        f(a0Var);
        this.f12211d = this.f12211d.b(a0Var.f7004e);
    }
}
