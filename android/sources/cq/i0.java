package cq;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class i0 extends iq.k {
    public static final i0 S;
    public static final a T = new a(13);
    public int E;
    public List F;
    public s0 G;
    public int H;
    public List I;
    public List J;
    public int K;
    public a1 L;
    public int M;
    public int N;
    public List O;
    public List P;
    public byte Q;
    public int R;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7121e;

    /* renamed from: i, reason: collision with root package name */
    public int f7122i;

    /* renamed from: v, reason: collision with root package name */
    public int f7123v;

    /* renamed from: w, reason: collision with root package name */
    public int f7124w;

    /* renamed from: x, reason: collision with root package name */
    public int f7125x;

    /* renamed from: y, reason: collision with root package name */
    public s0 f7126y;

    static {
        i0 i0Var = new i0();
        S = i0Var;
        i0Var.p();
    }

    public i0(h0 h0Var) {
        super(h0Var);
        this.K = -1;
        this.Q = (byte) -1;
        this.R = -1;
        this.f7121e = h0Var.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return S;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.Q;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        int i5 = this.f7122i;
        if ((i5 & 4) != 4) {
            this.Q = (byte) 0;
            return false;
        }
        if ((i5 & 8) == 8 && !this.f7126y.b()) {
            this.Q = (byte) 0;
            return false;
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            if (!((x0) this.F.get(i6)).b()) {
                this.Q = (byte) 0;
                return false;
            }
        }
        if ((this.f7122i & 32) == 32 && !this.G.b()) {
            this.Q = (byte) 0;
            return false;
        }
        for (int i10 = 0; i10 < this.I.size(); i10++) {
            if (!((s0) this.I.get(i10)).b()) {
                this.Q = (byte) 0;
                return false;
            }
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128 && !this.L.b()) {
            this.Q = (byte) 0;
            return false;
        }
        for (int i11 = 0; i11 < this.P.size(); i11++) {
            if (!((l) this.P.get(i11)).b()) {
                this.Q = (byte) 0;
                return false;
            }
        }
        if (i()) {
            this.Q = (byte) 1;
            return true;
        }
        this.Q = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.R;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7122i & 2) == 2 ? w1.d(1, this.f7124w) : 0;
        if ((this.f7122i & 4) == 4) {
            d6 += w1.d(2, this.f7125x);
        }
        if ((this.f7122i & 8) == 8) {
            d6 += w1.f(3, this.f7126y);
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            d6 += w1.f(4, (iq.a) this.F.get(i6));
        }
        if ((this.f7122i & 32) == 32) {
            d6 += w1.f(5, this.G);
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            d6 += w1.f(6, this.L);
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            d6 += w1.d(7, this.M);
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            d6 += w1.d(8, this.N);
        }
        if ((this.f7122i & 16) == 16) {
            d6 += w1.d(9, this.E);
        }
        if ((this.f7122i & 64) == 64) {
            d6 += w1.d(10, this.H);
        }
        if ((this.f7122i & 1) == 1) {
            d6 += w1.d(11, this.f7123v);
        }
        for (int i10 = 0; i10 < this.I.size(); i10++) {
            d6 += w1.f(12, (iq.a) this.I.get(i10));
        }
        int i11 = 0;
        for (int i12 = 0; i12 < this.J.size(); i12++) {
            i11 += w1.e(((Integer) this.J.get(i12)).intValue());
        }
        int i13 = d6 + i11;
        if (!this.J.isEmpty()) {
            i13 = i13 + 1 + w1.e(i11);
        }
        this.K = i11;
        int i14 = 0;
        for (int i15 = 0; i15 < this.O.size(); i15++) {
            i14 += w1.e(((Integer) this.O.get(i15)).intValue());
        }
        int size = (this.O.size() * 2) + i13 + i14;
        for (int i16 = 0; i16 < this.P.size(); i16++) {
            size += w1.f(32, (iq.a) this.P.get(i16));
        }
        int size2 = this.f7121e.size() + j() + size;
        this.R = size2;
        return size2;
    }

    @Override // iq.a
    public final iq.i d() {
        return h0.h();
    }

    @Override // iq.a
    public final iq.i e() {
        h0 h6 = h0.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7122i & 2) == 2) {
            w1Var.r(1, this.f7124w);
        }
        if ((this.f7122i & 4) == 4) {
            w1Var.r(2, this.f7125x);
        }
        if ((this.f7122i & 8) == 8) {
            w1Var.t(3, this.f7126y);
        }
        for (int i5 = 0; i5 < this.F.size(); i5++) {
            w1Var.t(4, (iq.a) this.F.get(i5));
        }
        if ((this.f7122i & 32) == 32) {
            w1Var.t(5, this.G);
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            w1Var.t(6, this.L);
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            w1Var.r(7, this.M);
        }
        if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            w1Var.r(8, this.N);
        }
        if ((this.f7122i & 16) == 16) {
            w1Var.r(9, this.E);
        }
        if ((this.f7122i & 64) == 64) {
            w1Var.r(10, this.H);
        }
        if ((this.f7122i & 1) == 1) {
            w1Var.r(11, this.f7123v);
        }
        for (int i6 = 0; i6 < this.I.size(); i6++) {
            w1Var.t(12, (iq.a) this.I.get(i6));
        }
        if (this.J.size() > 0) {
            w1Var.A(106);
            w1Var.A(this.K);
        }
        for (int i10 = 0; i10 < this.J.size(); i10++) {
            w1Var.s(((Integer) this.J.get(i10)).intValue());
        }
        for (int i11 = 0; i11 < this.O.size(); i11++) {
            w1Var.r(31, ((Integer) this.O.get(i11)).intValue());
        }
        for (int i12 = 0; i12 < this.P.size(); i12++) {
            w1Var.t(32, (iq.a) this.P.get(i12));
        }
        rVar.v(19000, w1Var);
        w1Var.w(this.f7121e);
    }

    public final void p() {
        this.f7123v = 518;
        this.f7124w = 2054;
        this.f7125x = 0;
        s0 s0Var = s0.Q;
        this.f7126y = s0Var;
        this.E = 0;
        List list = Collections.EMPTY_LIST;
        this.F = list;
        this.G = s0Var;
        this.H = 0;
        this.I = list;
        this.J = list;
        this.L = a1.I;
        this.M = 0;
        this.N = 0;
        this.O = list;
        this.P = list;
    }

    public i0() {
        this.K = -1;
        this.Q = (byte) -1;
        this.R = -1;
        this.f7121e = iq.d.f12197d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v11 */
    /* JADX WARN: Type inference failed for: r7v13 */
    /* JADX WARN: Type inference failed for: r7v15 */
    /* JADX WARN: Type inference failed for: r7v3 */
    /* JADX WARN: Type inference failed for: r7v5 */
    /* JADX WARN: Type inference failed for: r7v7 */
    /* JADX WARN: Type inference failed for: r7v9 */
    /* JADX WARN: Type inference failed for: r8v0 */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v2, types: [boolean] */
    public i0(iq.e eVar, iq.g gVar) {
        this.K = -1;
        this.Q = (byte) -1;
        this.R = -1;
        p();
        iq.c cVar = new iq.c();
        int i5 = 1;
        w1 m5 = w1.m(cVar, 1);
        int i6 = 0;
        char c6 = 0;
        while (true) {
            ?? r82 = 16384;
            if (i6 == 0) {
                try {
                    try {
                        int n6 = eVar.n();
                        r0 r0Var = null;
                        z0 z0Var = null;
                        r0 r0Var2 = null;
                        switch (n6) {
                            case 0:
                                i6 = 1;
                                i5 = 1;
                                c6 = c6;
                            case 8:
                                this.f7122i |= 2;
                                this.f7124w = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 16:
                                this.f7122i |= 4;
                                this.f7125x = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 26:
                                if ((this.f7122i & 8) == 8) {
                                    s0 s0Var = this.f7126y;
                                    s0Var.getClass();
                                    r0Var = s0.q(s0Var);
                                }
                                s0 s0Var2 = (s0) eVar.g(s0.R, gVar);
                                this.f7126y = s0Var2;
                                if (r0Var != null) {
                                    r0Var.j(s0Var2);
                                    this.f7126y = r0Var.g();
                                }
                                this.f7122i |= 8;
                                i5 = 1;
                                c6 = c6;
                            case 34:
                                int i10 = (c6 == true ? 1 : 0) & 32;
                                c6 = c6;
                                if (i10 != 32) {
                                    this.F = new ArrayList();
                                    c6 = (c6 == true ? 1 : 0) | ' ';
                                }
                                this.F.add(eVar.g(x0.K, gVar));
                                i5 = 1;
                                c6 = c6;
                            case 42:
                                if ((this.f7122i & 32) == 32) {
                                    s0 s0Var3 = this.G;
                                    s0Var3.getClass();
                                    r0Var2 = s0.q(s0Var3);
                                }
                                s0 s0Var4 = (s0) eVar.g(s0.R, gVar);
                                this.G = s0Var4;
                                if (r0Var2 != null) {
                                    r0Var2.j(s0Var4);
                                    this.G = r0Var2.g();
                                }
                                this.f7122i |= 32;
                                i5 = 1;
                                c6 = c6;
                            case 50:
                                if ((this.f7122i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
                                    a1 a1Var = this.L;
                                    a1Var.getClass();
                                    z0Var = new z0();
                                    s0 s0Var5 = s0.Q;
                                    z0Var.f7315y = s0Var5;
                                    z0Var.F = s0Var5;
                                    z0Var.h(a1Var);
                                }
                                a1 a1Var2 = (a1) eVar.g(a1.J, gVar);
                                this.L = a1Var2;
                                if (z0Var != null) {
                                    z0Var.h(a1Var2);
                                    this.L = z0Var.g();
                                }
                                this.f7122i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                i5 = 1;
                                c6 = c6;
                            case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                this.f7122i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                this.M = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 64:
                                this.f7122i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                this.N = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 72:
                                this.f7122i |= 16;
                                this.E = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 80:
                                this.f7122i |= 64;
                                this.H = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 88:
                                this.f7122i |= i5;
                                this.f7123v = eVar.k();
                                i5 = 1;
                                c6 = c6;
                            case 98:
                                int i11 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                c6 = c6;
                                if (i11 != 256) {
                                    this.I = new ArrayList();
                                    c6 = (c6 == true ? 1 : 0) | 256;
                                }
                                this.I.add(eVar.g(s0.R, gVar));
                                i5 = 1;
                                c6 = c6;
                            case 104:
                                int i12 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                c6 = c6;
                                if (i12 != 512) {
                                    this.J = new ArrayList();
                                    c6 = (c6 == true ? 1 : 0) | 512;
                                }
                                this.J.add(Integer.valueOf(eVar.k()));
                                i5 = 1;
                                c6 = c6;
                            case 106:
                                int d6 = eVar.d(eVar.k());
                                int i13 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                c6 = c6;
                                if (i13 != 512) {
                                    c6 = c6;
                                    if (eVar.b() > 0) {
                                        this.J = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | 512;
                                    }
                                }
                                while (eVar.b() > 0) {
                                    this.J.add(Integer.valueOf(eVar.k()));
                                }
                                eVar.c(d6);
                                i5 = 1;
                                c6 = c6;
                            case 248:
                                int i14 = (c6 == true ? 1 : 0) & 8192;
                                c6 = c6;
                                if (i14 != 8192) {
                                    this.O = new ArrayList();
                                    c6 = (c6 == true ? 1 : 0) | 8192;
                                }
                                this.O.add(Integer.valueOf(eVar.k()));
                                i5 = 1;
                                c6 = c6;
                            case androidx.recyclerview.widget.h0.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                                int d7 = eVar.d(eVar.k());
                                int i15 = (c6 == true ? 1 : 0) & 8192;
                                c6 = c6;
                                if (i15 != 8192) {
                                    c6 = c6;
                                    if (eVar.b() > 0) {
                                        this.O = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | 8192;
                                    }
                                }
                                while (eVar.b() > 0) {
                                    this.O.add(Integer.valueOf(eVar.k()));
                                }
                                eVar.c(d7);
                                i5 = 1;
                                c6 = c6;
                            case 258:
                                int i16 = (c6 == true ? 1 : 0) & 16384;
                                c6 = c6;
                                if (i16 != 16384) {
                                    this.P = new ArrayList();
                                    c6 = (c6 == true ? 1 : 0) | 16384;
                                }
                                this.P.add(eVar.g(l.E, gVar));
                                i5 = 1;
                                c6 = c6;
                            default:
                                r82 = n(eVar, m5, gVar, n6);
                                if (r82 == 0) {
                                    i6 = i5;
                                }
                                i5 = 1;
                                c6 = c6;
                        }
                    } catch (Throwable th2) {
                        if (((c6 == true ? 1 : 0) & 32) == 32) {
                            this.F = Collections.unmodifiableList(this.F);
                        }
                        if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                            this.I = Collections.unmodifiableList(this.I);
                        }
                        if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                            this.J = Collections.unmodifiableList(this.J);
                        }
                        if (((c6 == true ? 1 : 0) & 8192) == 8192) {
                            this.O = Collections.unmodifiableList(this.O);
                        }
                        if (((c6 == true ? 1 : 0) & 16384) == r82) {
                            this.P = Collections.unmodifiableList(this.P);
                        }
                        try {
                            m5.l();
                        } catch (IOException unused) {
                        } catch (Throwable th3) {
                            this.f7121e = cVar.g();
                            throw th3;
                        }
                        this.f7121e = cVar.g();
                        m();
                        throw th2;
                    }
                } catch (iq.q e9) {
                    e9.f12236d = this;
                    throw e9;
                } catch (IOException e10) {
                    iq.q qVar = new iq.q(e10.getMessage());
                    qVar.f12236d = this;
                    throw qVar;
                }
            } else {
                if (((c6 == true ? 1 : 0) & 32) == 32) {
                    this.F = Collections.unmodifiableList(this.F);
                }
                if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                    this.I = Collections.unmodifiableList(this.I);
                }
                if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                    this.J = Collections.unmodifiableList(this.J);
                }
                if (((c6 == true ? 1 : 0) & 8192) == 8192) {
                    this.O = Collections.unmodifiableList(this.O);
                }
                if (((c6 == true ? 1 : 0) & 16384) == 16384) {
                    this.P = Collections.unmodifiableList(this.P);
                }
                try {
                    m5.l();
                } catch (IOException unused2) {
                } catch (Throwable th4) {
                    this.f7121e = cVar.g();
                    throw th4;
                }
                this.f7121e = cVar.g();
                m();
                return;
            }
        }
    }
}
