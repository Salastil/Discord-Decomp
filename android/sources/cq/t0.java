package cq;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class t0 extends iq.j {
    public s0 E;
    public int F;
    public s0 G;
    public int H;
    public List I;
    public List J;
    public List K;

    /* renamed from: v, reason: collision with root package name */
    public int f7250v;

    /* renamed from: w, reason: collision with root package name */
    public int f7251w;

    /* renamed from: x, reason: collision with root package name */
    public int f7252x;

    /* renamed from: y, reason: collision with root package name */
    public List f7253y;

    public static t0 h() {
        t0 t0Var = new t0();
        t0Var.f7251w = 6;
        List list = Collections.EMPTY_LIST;
        t0Var.f7253y = list;
        s0 s0Var = s0.Q;
        t0Var.E = s0Var;
        t0Var.G = s0Var;
        t0Var.I = list;
        t0Var.J = list;
        t0Var.K = list;
        return t0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        u0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        t0 h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        u0 u0Var = null;
        try {
            try {
                u0.N.getClass();
                j(new u0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                u0 u0Var2 = (u0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    u0Var = u0Var2;
                    if (u0Var != null) {
                        j(u0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (u0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((u0) nVar);
        return this;
    }

    public final u0 g() {
        u0 u0Var = new u0(this);
        int i5 = this.f7250v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        u0Var.f7258v = this.f7251w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        u0Var.f7259w = this.f7252x;
        if ((i5 & 4) == 4) {
            this.f7253y = Collections.unmodifiableList(this.f7253y);
            this.f7250v &= -5;
        }
        u0Var.f7260x = this.f7253y;
        if ((i5 & 8) == 8) {
            i6 |= 4;
        }
        u0Var.f7261y = this.E;
        if ((i5 & 16) == 16) {
            i6 |= 8;
        }
        u0Var.E = this.F;
        if ((i5 & 32) == 32) {
            i6 |= 16;
        }
        u0Var.F = this.G;
        if ((i5 & 64) == 64) {
            i6 |= 32;
        }
        u0Var.G = this.H;
        if ((this.f7250v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            this.I = Collections.unmodifiableList(this.I);
            this.f7250v &= -129;
        }
        u0Var.H = this.I;
        if ((this.f7250v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            this.J = Collections.unmodifiableList(this.J);
            this.f7250v &= -257;
        }
        u0Var.I = this.J;
        if ((this.f7250v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            this.K = Collections.unmodifiableList(this.K);
            this.f7250v &= -513;
        }
        u0Var.J = this.K;
        u0Var.f7257i = i6;
        return u0Var;
    }

    public final void j(u0 u0Var) {
        s0 s0Var;
        s0 s0Var2;
        if (u0Var == u0.M) {
            return;
        }
        int i5 = u0Var.f7257i;
        if ((i5 & 1) == 1) {
            int i6 = u0Var.f7258v;
            this.f7250v = 1 | this.f7250v;
            this.f7251w = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = u0Var.f7259w;
            this.f7250v = 2 | this.f7250v;
            this.f7252x = i10;
        }
        if (!u0Var.f7260x.isEmpty()) {
            if (this.f7253y.isEmpty()) {
                this.f7253y = u0Var.f7260x;
                this.f7250v &= -5;
            } else {
                if ((this.f7250v & 4) != 4) {
                    this.f7253y = new ArrayList(this.f7253y);
                    this.f7250v |= 4;
                }
                this.f7253y.addAll(u0Var.f7260x);
            }
        }
        if ((u0Var.f7257i & 4) == 4) {
            s0 s0Var3 = u0Var.f7261y;
            if ((this.f7250v & 8) != 8 || (s0Var2 = this.E) == s0.Q) {
                this.E = s0Var3;
            } else {
                r0 q5 = s0.q(s0Var2);
                q5.j(s0Var3);
                this.E = q5.g();
            }
            this.f7250v |= 8;
        }
        int i11 = u0Var.f7257i;
        if ((i11 & 8) == 8) {
            int i12 = u0Var.E;
            this.f7250v |= 16;
            this.F = i12;
        }
        if ((i11 & 16) == 16) {
            s0 s0Var4 = u0Var.F;
            if ((this.f7250v & 32) != 32 || (s0Var = this.G) == s0.Q) {
                this.G = s0Var4;
            } else {
                r0 q6 = s0.q(s0Var);
                q6.j(s0Var4);
                this.G = q6.g();
            }
            this.f7250v |= 32;
        }
        if ((u0Var.f7257i & 32) == 32) {
            int i13 = u0Var.G;
            this.f7250v |= 64;
            this.H = i13;
        }
        if (!u0Var.H.isEmpty()) {
            if (this.I.isEmpty()) {
                this.I = u0Var.H;
                this.f7250v &= -129;
            } else {
                if ((this.f7250v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 128) {
                    this.I = new ArrayList(this.I);
                    this.f7250v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                }
                this.I.addAll(u0Var.H);
            }
        }
        if (!u0Var.I.isEmpty()) {
            if (this.J.isEmpty()) {
                this.J = u0Var.I;
                this.f7250v &= -257;
            } else {
                if ((this.f7250v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256) {
                    this.J = new ArrayList(this.J);
                    this.f7250v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                }
                this.J.addAll(u0Var.I);
            }
        }
        if (!u0Var.J.isEmpty()) {
            if (this.K.isEmpty()) {
                this.K = u0Var.J;
                this.f7250v &= -513;
            } else {
                if ((this.f7250v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 512) {
                    this.K = new ArrayList(this.K);
                    this.f7250v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                }
                this.K.addAll(u0Var.J);
            }
        }
        f(u0Var);
        this.f12211d = this.f12211d.b(u0Var.f7256e);
    }
}
