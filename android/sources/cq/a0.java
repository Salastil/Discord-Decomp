package cq;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class a0 extends iq.k {
    public static final a0 S;
    public static final a T = new a(10);
    public int E;
    public List F;
    public s0 G;
    public int H;
    public List I;
    public List J;
    public int K;
    public List L;
    public y0 M;
    public List N;
    public p O;
    public List P;
    public byte Q;
    public int R;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7004e;

    /* renamed from: i, reason: collision with root package name */
    public int f7005i;

    /* renamed from: v, reason: collision with root package name */
    public int f7006v;

    /* renamed from: w, reason: collision with root package name */
    public int f7007w;

    /* renamed from: x, reason: collision with root package name */
    public int f7008x;

    /* renamed from: y, reason: collision with root package name */
    public s0 f7009y;

    static {
        a0 a0Var = new a0();
        S = a0Var;
        a0Var.p();
    }

    public a0(z zVar) {
        super(zVar);
        this.K = -1;
        this.Q = (byte) -1;
        this.R = -1;
        this.f7004e = zVar.f12211d;
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
        int i5 = this.f7005i;
        if ((i5 & 4) != 4) {
            this.Q = (byte) 0;
            return false;
        }
        if ((i5 & 8) == 8 && !this.f7009y.b()) {
            this.Q = (byte) 0;
            return false;
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            if (!((x0) this.F.get(i6)).b()) {
                this.Q = (byte) 0;
                return false;
            }
        }
        if ((this.f7005i & 32) == 32 && !this.G.b()) {
            this.Q = (byte) 0;
            return false;
        }
        for (int i10 = 0; i10 < this.I.size(); i10++) {
            if (!((s0) this.I.get(i10)).b()) {
                this.Q = (byte) 0;
                return false;
            }
        }
        for (int i11 = 0; i11 < this.L.size(); i11++) {
            if (!((a1) this.L.get(i11)).b()) {
                this.Q = (byte) 0;
                return false;
            }
        }
        if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128 && !this.M.b()) {
            this.Q = (byte) 0;
            return false;
        }
        if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256 && !this.O.b()) {
            this.Q = (byte) 0;
            return false;
        }
        for (int i12 = 0; i12 < this.P.size(); i12++) {
            if (!((l) this.P.get(i12)).b()) {
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
        int d6 = (this.f7005i & 2) == 2 ? w1.d(1, this.f7007w) : 0;
        if ((this.f7005i & 4) == 4) {
            d6 += w1.d(2, this.f7008x);
        }
        if ((this.f7005i & 8) == 8) {
            d6 += w1.f(3, this.f7009y);
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            d6 += w1.f(4, (iq.a) this.F.get(i6));
        }
        if ((this.f7005i & 32) == 32) {
            d6 += w1.f(5, this.G);
        }
        for (int i10 = 0; i10 < this.L.size(); i10++) {
            d6 += w1.f(6, (iq.a) this.L.get(i10));
        }
        if ((this.f7005i & 16) == 16) {
            d6 += w1.d(7, this.E);
        }
        if ((this.f7005i & 64) == 64) {
            d6 += w1.d(8, this.H);
        }
        if ((this.f7005i & 1) == 1) {
            d6 += w1.d(9, this.f7006v);
        }
        for (int i11 = 0; i11 < this.I.size(); i11++) {
            d6 += w1.f(10, (iq.a) this.I.get(i11));
        }
        int i12 = 0;
        for (int i13 = 0; i13 < this.J.size(); i13++) {
            i12 += w1.e(((Integer) this.J.get(i13)).intValue());
        }
        int i14 = d6 + i12;
        if (!this.J.isEmpty()) {
            i14 = i14 + 1 + w1.e(i12);
        }
        this.K = i12;
        if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i14 += w1.f(30, this.M);
        }
        int i15 = 0;
        for (int i16 = 0; i16 < this.N.size(); i16++) {
            i15 += w1.e(((Integer) this.N.get(i16)).intValue());
        }
        int size = (this.N.size() * 2) + i14 + i15;
        if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            size += w1.f(32, this.O);
        }
        for (int i17 = 0; i17 < this.P.size(); i17++) {
            size += w1.f(33, (iq.a) this.P.get(i17));
        }
        int size2 = this.f7004e.size() + j() + size;
        this.R = size2;
        return size2;
    }

    @Override // iq.a
    public final iq.i d() {
        return z.h();
    }

    @Override // iq.a
    public final iq.i e() {
        z h6 = z.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7005i & 2) == 2) {
            w1Var.r(1, this.f7007w);
        }
        if ((this.f7005i & 4) == 4) {
            w1Var.r(2, this.f7008x);
        }
        if ((this.f7005i & 8) == 8) {
            w1Var.t(3, this.f7009y);
        }
        for (int i5 = 0; i5 < this.F.size(); i5++) {
            w1Var.t(4, (iq.a) this.F.get(i5));
        }
        if ((this.f7005i & 32) == 32) {
            w1Var.t(5, this.G);
        }
        for (int i6 = 0; i6 < this.L.size(); i6++) {
            w1Var.t(6, (iq.a) this.L.get(i6));
        }
        if ((this.f7005i & 16) == 16) {
            w1Var.r(7, this.E);
        }
        if ((this.f7005i & 64) == 64) {
            w1Var.r(8, this.H);
        }
        if ((this.f7005i & 1) == 1) {
            w1Var.r(9, this.f7006v);
        }
        for (int i10 = 0; i10 < this.I.size(); i10++) {
            w1Var.t(10, (iq.a) this.I.get(i10));
        }
        if (this.J.size() > 0) {
            w1Var.A(90);
            w1Var.A(this.K);
        }
        for (int i11 = 0; i11 < this.J.size(); i11++) {
            w1Var.s(((Integer) this.J.get(i11)).intValue());
        }
        if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            w1Var.t(30, this.M);
        }
        for (int i12 = 0; i12 < this.N.size(); i12++) {
            w1Var.r(31, ((Integer) this.N.get(i12)).intValue());
        }
        if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            w1Var.t(32, this.O);
        }
        for (int i13 = 0; i13 < this.P.size(); i13++) {
            w1Var.t(33, (iq.a) this.P.get(i13));
        }
        rVar.v(19000, w1Var);
        w1Var.w(this.f7004e);
    }

    public final void p() {
        this.f7006v = 6;
        this.f7007w = 6;
        this.f7008x = 0;
        s0 s0Var = s0.Q;
        this.f7009y = s0Var;
        this.E = 0;
        List list = Collections.EMPTY_LIST;
        this.F = list;
        this.G = s0Var;
        this.H = 0;
        this.I = list;
        this.J = list;
        this.L = list;
        this.M = y0.f7301y;
        this.N = list;
        this.O = p.f7199w;
        this.P = list;
    }

    public a0() {
        this.K = -1;
        this.Q = (byte) -1;
        this.R = -1;
        this.f7004e = iq.d.f12197d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v11 */
    /* JADX WARN: Type inference failed for: r7v13 */
    /* JADX WARN: Type inference failed for: r7v15 */
    /* JADX WARN: Type inference failed for: r7v17 */
    /* JADX WARN: Type inference failed for: r7v3 */
    /* JADX WARN: Type inference failed for: r7v5 */
    /* JADX WARN: Type inference failed for: r7v7 */
    /* JADX WARN: Type inference failed for: r7v9 */
    /* JADX WARN: Type inference failed for: r8v0 */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v2, types: [boolean] */
    public a0(iq.e eVar, iq.g gVar) {
        boolean z5;
        this.K = -1;
        this.Q = (byte) -1;
        this.R = -1;
        p();
        iq.c cVar = new iq.c();
        boolean z6 = true;
        w1 m5 = w1.m(cVar, 1);
        boolean z7 = false;
        char c6 = 0;
        while (true) {
            ?? r82 = 1024;
            if (!z7) {
                try {
                    try {
                        try {
                            int n6 = eVar.n();
                            r0 r0Var = null;
                            o oVar = null;
                            g gVar2 = null;
                            r0 r0Var2 = null;
                            switch (n6) {
                                case 0:
                                    z5 = z6;
                                    z7 = z5;
                                    z6 = z5;
                                    c6 = c6;
                                case 8:
                                    z5 = z6;
                                    this.f7005i |= 2;
                                    this.f7007w = eVar.k();
                                    z6 = z5;
                                    c6 = c6;
                                case 16:
                                    z5 = z6;
                                    this.f7005i |= 4;
                                    this.f7008x = eVar.k();
                                    z6 = z5;
                                    c6 = c6;
                                case 26:
                                    z5 = z6;
                                    if ((this.f7005i & 8) == 8) {
                                        s0 s0Var = this.f7009y;
                                        s0Var.getClass();
                                        r0Var = s0.q(s0Var);
                                    }
                                    s0 s0Var2 = (s0) eVar.g(s0.R, gVar);
                                    this.f7009y = s0Var2;
                                    if (r0Var != null) {
                                        r0Var.j(s0Var2);
                                        this.f7009y = r0Var.g();
                                    }
                                    this.f7005i |= 8;
                                    z6 = z5;
                                    c6 = c6;
                                case 34:
                                    z5 = z6;
                                    int i5 = (c6 == true ? 1 : 0) & 32;
                                    c6 = c6;
                                    if (i5 != 32) {
                                        this.F = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | ' ';
                                    }
                                    this.F.add(eVar.g(x0.K, gVar));
                                    z6 = z5;
                                    c6 = c6;
                                case 42:
                                    z5 = z6;
                                    if ((this.f7005i & 32) == 32) {
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
                                    this.f7005i |= 32;
                                    z6 = z5;
                                    c6 = c6;
                                case 50:
                                    z5 = z6;
                                    int i6 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                                    c6 = c6;
                                    if (i6 != 1024) {
                                        this.L = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | 1024;
                                    }
                                    this.L.add(eVar.g(a1.J, gVar));
                                    z6 = z5;
                                    c6 = c6;
                                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                    z5 = z6;
                                    this.f7005i |= 16;
                                    this.E = eVar.k();
                                    z6 = z5;
                                    c6 = c6;
                                case 64:
                                    z5 = z6;
                                    this.f7005i |= 64;
                                    this.H = eVar.k();
                                    z6 = z5;
                                    c6 = c6;
                                case 72:
                                    z5 = z6;
                                    this.f7005i |= 1;
                                    this.f7006v = eVar.k();
                                    z6 = z5;
                                    c6 = c6;
                                case 82:
                                    z5 = z6;
                                    int i10 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                    c6 = c6;
                                    if (i10 != 256) {
                                        this.I = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | 256;
                                    }
                                    this.I.add(eVar.g(s0.R, gVar));
                                    z6 = z5;
                                    c6 = c6;
                                case 88:
                                    z5 = z6;
                                    int i11 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                    c6 = c6;
                                    if (i11 != 512) {
                                        this.J = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | 512;
                                    }
                                    this.J.add(Integer.valueOf(eVar.k()));
                                    z6 = z5;
                                    c6 = c6;
                                case 90:
                                    z5 = z6;
                                    int d6 = eVar.d(eVar.k());
                                    int i12 = (c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                    c6 = c6;
                                    if (i12 != 512) {
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
                                    z6 = z5;
                                    c6 = c6;
                                case 242:
                                    z5 = z6;
                                    if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
                                        y0 y0Var = this.M;
                                        y0Var.getClass();
                                        gVar2 = y0.i(y0Var);
                                    }
                                    y0 y0Var2 = (y0) eVar.g(y0.E, gVar);
                                    this.M = y0Var2;
                                    if (gVar2 != null) {
                                        gVar2.k(y0Var2);
                                        this.M = gVar2.g();
                                    }
                                    this.f7005i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                    z6 = z5;
                                    c6 = c6;
                                case 248:
                                    z5 = z6;
                                    int i13 = (c6 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                    c6 = c6;
                                    if (i13 != 4096) {
                                        this.N = new ArrayList();
                                        c6 = (c6 == true ? 1 : 0) | 4096;
                                    }
                                    this.N.add(Integer.valueOf(eVar.k()));
                                    z6 = z5;
                                    c6 = c6;
                                case androidx.recyclerview.widget.h0.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                                    z5 = z6;
                                    int d7 = eVar.d(eVar.k());
                                    int i14 = (c6 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                    c6 = c6;
                                    if (i14 != 4096) {
                                        c6 = c6;
                                        if (eVar.b() > 0) {
                                            this.N = new ArrayList();
                                            c6 = (c6 == true ? 1 : 0) | 4096;
                                        }
                                    }
                                    while (eVar.b() > 0) {
                                        this.N.add(Integer.valueOf(eVar.k()));
                                    }
                                    eVar.c(d7);
                                    z6 = z5;
                                    c6 = c6;
                                case 258:
                                    if ((this.f7005i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                                        p pVar = this.O;
                                        pVar.getClass();
                                        z5 = z6;
                                        oVar = new o(0);
                                        oVar.f7194v = Collections.EMPTY_LIST;
                                        oVar.k(pVar);
                                    } else {
                                        z5 = z6;
                                    }
                                    p pVar2 = (p) eVar.g(p.f7200x, gVar);
                                    this.O = pVar2;
                                    if (oVar != null) {
                                        oVar.k(pVar2);
                                        this.O = oVar.f();
                                    }
                                    this.f7005i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                    z6 = z5;
                                    c6 = c6;
                                case 266:
                                    int i15 = (c6 == true ? 1 : 0) & 16384;
                                    char c8 = c6;
                                    if (i15 != 16384) {
                                        this.P = new ArrayList();
                                        c8 = (c6 == true ? 1 : 0) | 16384;
                                    }
                                    this.P.add(eVar.g(l.E, gVar));
                                    c6 = c8;
                                    z5 = z6;
                                    z6 = z5;
                                    c6 = c6;
                                default:
                                    r82 = n(eVar, m5, gVar, n6);
                                    c6 = c6;
                                    if (r82 == 0) {
                                        z7 = z6;
                                        z5 = z7;
                                        z6 = z5;
                                        c6 = c6;
                                    }
                                    z5 = z6;
                                    z6 = z5;
                                    c6 = c6;
                            }
                        } catch (iq.q e9) {
                            e9.f12236d = this;
                            throw e9;
                        }
                    } catch (IOException e10) {
                        iq.q qVar = new iq.q(e10.getMessage());
                        qVar.f12236d = this;
                        throw qVar;
                    }
                } catch (Throwable th2) {
                    if (((c6 == true ? 1 : 0) & 32) == 32) {
                        this.F = Collections.unmodifiableList(this.F);
                    }
                    if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == r82) {
                        this.L = Collections.unmodifiableList(this.L);
                    }
                    if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                        this.I = Collections.unmodifiableList(this.I);
                    }
                    if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                        this.J = Collections.unmodifiableList(this.J);
                    }
                    if (((c6 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
                        this.N = Collections.unmodifiableList(this.N);
                    }
                    if (((c6 == true ? 1 : 0) & 16384) == 16384) {
                        this.P = Collections.unmodifiableList(this.P);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7004e = cVar.g();
                        throw th3;
                    }
                    this.f7004e = cVar.g();
                    m();
                    throw th2;
                }
            } else {
                if (((c6 == true ? 1 : 0) & 32) == 32) {
                    this.F = Collections.unmodifiableList(this.F);
                }
                if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
                    this.L = Collections.unmodifiableList(this.L);
                }
                if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                    this.I = Collections.unmodifiableList(this.I);
                }
                if (((c6 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                    this.J = Collections.unmodifiableList(this.J);
                }
                if (((c6 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
                    this.N = Collections.unmodifiableList(this.N);
                }
                if (((c6 == true ? 1 : 0) & 16384) == 16384) {
                    this.P = Collections.unmodifiableList(this.P);
                }
                try {
                    m5.l();
                } catch (IOException unused2) {
                } catch (Throwable th4) {
                    this.f7004e = cVar.g();
                    throw th4;
                }
                this.f7004e = cVar.g();
                m();
                return;
            }
        }
    }
}
