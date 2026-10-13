package cq;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class h0 extends iq.j {
    public s0 E;
    public int F;
    public List G;
    public s0 H;
    public int I;
    public List J;
    public List K;
    public a1 L;
    public int M;
    public int N;
    public List O;
    public List P;

    /* renamed from: v, reason: collision with root package name */
    public int f7113v;

    /* renamed from: w, reason: collision with root package name */
    public int f7114w;

    /* renamed from: x, reason: collision with root package name */
    public int f7115x;

    /* renamed from: y, reason: collision with root package name */
    public int f7116y;

    public static h0 h() {
        h0 h0Var = new h0();
        h0Var.f7114w = 518;
        h0Var.f7115x = 2054;
        s0 s0Var = s0.Q;
        h0Var.E = s0Var;
        List list = Collections.EMPTY_LIST;
        h0Var.G = list;
        h0Var.H = s0Var;
        h0Var.J = list;
        h0Var.K = list;
        h0Var.L = a1.I;
        h0Var.O = list;
        h0Var.P = list;
        return h0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        i0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        h0 h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        i0 i0Var = null;
        try {
            try {
                i0.T.getClass();
                j(new i0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                i0 i0Var2 = (i0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    i0Var = i0Var2;
                    if (i0Var != null) {
                        j(i0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (i0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((i0) nVar);
        return this;
    }

    public final i0 g() {
        i0 i0Var = new i0(this);
        int i5 = this.f7113v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        i0Var.f7123v = this.f7114w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        i0Var.f7124w = this.f7115x;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        i0Var.f7125x = this.f7116y;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        i0Var.f7126y = this.E;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        i0Var.E = this.F;
        if ((i5 & 32) == 32) {
            this.G = Collections.unmodifiableList(this.G);
            this.f7113v &= -33;
        }
        i0Var.F = this.G;
        if ((i5 & 64) == 64) {
            i6 |= 32;
        }
        i0Var.G = this.H;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i6 |= 64;
        }
        i0Var.H = this.I;
        if ((this.f7113v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            this.J = Collections.unmodifiableList(this.J);
            this.f7113v &= -257;
        }
        i0Var.I = this.J;
        if ((this.f7113v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            this.K = Collections.unmodifiableList(this.K);
            this.f7113v &= -513;
        }
        i0Var.J = this.K;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        i0Var.L = this.L;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        }
        i0Var.M = this.M;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
        }
        i0Var.N = this.N;
        if ((this.f7113v & 8192) == 8192) {
            this.O = Collections.unmodifiableList(this.O);
            this.f7113v &= -8193;
        }
        i0Var.O = this.O;
        if ((this.f7113v & 16384) == 16384) {
            this.P = Collections.unmodifiableList(this.P);
            this.f7113v &= -16385;
        }
        i0Var.P = this.P;
        i0Var.f7122i = i6;
        return i0Var;
    }

    public final void j(i0 i0Var) {
        a1 a1Var;
        s0 s0Var;
        s0 s0Var2;
        if (i0Var == i0.S) {
            return;
        }
        int i5 = i0Var.f7122i;
        if ((i5 & 1) == 1) {
            int i6 = i0Var.f7123v;
            this.f7113v = 1 | this.f7113v;
            this.f7114w = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = i0Var.f7124w;
            this.f7113v = 2 | this.f7113v;
            this.f7115x = i10;
        }
        if ((i5 & 4) == 4) {
            int i11 = i0Var.f7125x;
            this.f7113v = 4 | this.f7113v;
            this.f7116y = i11;
        }
        if ((i5 & 8) == 8) {
            s0 s0Var3 = i0Var.f7126y;
            if ((this.f7113v & 8) != 8 || (s0Var2 = this.E) == s0.Q) {
                this.E = s0Var3;
            } else {
                r0 q5 = s0.q(s0Var2);
                q5.j(s0Var3);
                this.E = q5.g();
            }
            this.f7113v |= 8;
        }
        if ((i0Var.f7122i & 16) == 16) {
            int i12 = i0Var.E;
            this.f7113v = 16 | this.f7113v;
            this.F = i12;
        }
        if (!i0Var.F.isEmpty()) {
            if (this.G.isEmpty()) {
                this.G = i0Var.F;
                this.f7113v &= -33;
            } else {
                if ((this.f7113v & 32) != 32) {
                    this.G = new ArrayList(this.G);
                    this.f7113v |= 32;
                }
                this.G.addAll(i0Var.F);
            }
        }
        if ((i0Var.f7122i & 32) == 32) {
            s0 s0Var4 = i0Var.G;
            if ((this.f7113v & 64) != 64 || (s0Var = this.H) == s0.Q) {
                this.H = s0Var4;
            } else {
                r0 q6 = s0.q(s0Var);
                q6.j(s0Var4);
                this.H = q6.g();
            }
            this.f7113v |= 64;
        }
        if ((i0Var.f7122i & 64) == 64) {
            int i13 = i0Var.H;
            this.f7113v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            this.I = i13;
        }
        if (!i0Var.I.isEmpty()) {
            if (this.J.isEmpty()) {
                this.J = i0Var.I;
                this.f7113v &= -257;
            } else {
                if ((this.f7113v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256) {
                    this.J = new ArrayList(this.J);
                    this.f7113v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                }
                this.J.addAll(i0Var.I);
            }
        }
        if (!i0Var.J.isEmpty()) {
            if (this.K.isEmpty()) {
                this.K = i0Var.J;
                this.f7113v &= -513;
            } else {
                if ((this.f7113v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 512) {
                    this.K = new ArrayList(this.K);
                    this.f7113v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                }
                this.K.addAll(i0Var.J);
            }
        }
        if ((i0Var.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            a1 a1Var2 = i0Var.L;
            if ((this.f7113v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 1024 || (a1Var = this.L) == a1.I) {
                this.L = a1Var2;
            } else {
                z0 z0Var = new z0();
                s0 s0Var5 = s0.Q;
                z0Var.f7315y = s0Var5;
                z0Var.F = s0Var5;
                z0Var.h(a1Var);
                z0Var.h(a1Var2);
                this.L = z0Var.g();
            }
            this.f7113v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
        }
        int i14 = i0Var.f7122i;
        if ((i14 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            int i15 = i0Var.M;
            this.f7113v |= RecyclerView.ItemAnimator.FLAG_MOVED;
            this.M = i15;
        }
        if ((i14 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            int i16 = i0Var.N;
            this.f7113v |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
            this.N = i16;
        }
        if (!i0Var.O.isEmpty()) {
            if (this.O.isEmpty()) {
                this.O = i0Var.O;
                this.f7113v &= -8193;
            } else {
                if ((this.f7113v & 8192) != 8192) {
                    this.O = new ArrayList(this.O);
                    this.f7113v |= 8192;
                }
                this.O.addAll(i0Var.O);
            }
        }
        if (!i0Var.P.isEmpty()) {
            if (this.P.isEmpty()) {
                this.P = i0Var.P;
                this.f7113v &= -16385;
            } else {
                if ((this.f7113v & 16384) != 16384) {
                    this.P = new ArrayList(this.P);
                    this.f7113v |= 16384;
                }
                this.P.addAll(i0Var.P);
            }
        }
        f(i0Var);
        this.f12211d = this.f12211d.b(i0Var.f7121e);
    }
}
