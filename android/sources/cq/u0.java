package cq;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class u0 extends iq.k {
    public static final u0 M;
    public static final a N = new a(19);
    public int E;
    public s0 F;
    public int G;
    public List H;
    public List I;
    public List J;
    public byte K;
    public int L;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7256e;

    /* renamed from: i, reason: collision with root package name */
    public int f7257i;

    /* renamed from: v, reason: collision with root package name */
    public int f7258v;

    /* renamed from: w, reason: collision with root package name */
    public int f7259w;

    /* renamed from: x, reason: collision with root package name */
    public List f7260x;

    /* renamed from: y, reason: collision with root package name */
    public s0 f7261y;

    static {
        u0 u0Var = new u0();
        M = u0Var;
        u0Var.f7258v = 6;
        u0Var.f7259w = 0;
        List list = Collections.EMPTY_LIST;
        u0Var.f7260x = list;
        s0 s0Var = s0.Q;
        u0Var.f7261y = s0Var;
        u0Var.E = 0;
        u0Var.F = s0Var;
        u0Var.G = 0;
        u0Var.H = list;
        u0Var.I = list;
        u0Var.J = list;
    }

    public u0(t0 t0Var) {
        super(t0Var);
        this.K = (byte) -1;
        this.L = -1;
        this.f7256e = t0Var.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return M;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.K;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if ((this.f7257i & 2) != 2) {
            this.K = (byte) 0;
            return false;
        }
        for (int i5 = 0; i5 < this.f7260x.size(); i5++) {
            if (!((x0) this.f7260x.get(i5)).b()) {
                this.K = (byte) 0;
                return false;
            }
        }
        if ((this.f7257i & 4) == 4 && !this.f7261y.b()) {
            this.K = (byte) 0;
            return false;
        }
        if ((this.f7257i & 16) == 16 && !this.F.b()) {
            this.K = (byte) 0;
            return false;
        }
        for (int i6 = 0; i6 < this.H.size(); i6++) {
            if (!((h) this.H.get(i6)).b()) {
                this.K = (byte) 0;
                return false;
            }
        }
        for (int i10 = 0; i10 < this.J.size(); i10++) {
            if (!((l) this.J.get(i10)).b()) {
                this.K = (byte) 0;
                return false;
            }
        }
        if (i()) {
            this.K = (byte) 1;
            return true;
        }
        this.K = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.L;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7257i & 1) == 1 ? w1.d(1, this.f7258v) : 0;
        if ((this.f7257i & 2) == 2) {
            d6 += w1.d(2, this.f7259w);
        }
        for (int i6 = 0; i6 < this.f7260x.size(); i6++) {
            d6 += w1.f(3, (iq.a) this.f7260x.get(i6));
        }
        if ((this.f7257i & 4) == 4) {
            d6 += w1.f(4, this.f7261y);
        }
        if ((this.f7257i & 8) == 8) {
            d6 += w1.d(5, this.E);
        }
        if ((this.f7257i & 16) == 16) {
            d6 += w1.f(6, this.F);
        }
        if ((this.f7257i & 32) == 32) {
            d6 += w1.d(7, this.G);
        }
        for (int i10 = 0; i10 < this.H.size(); i10++) {
            d6 += w1.f(8, (iq.a) this.H.get(i10));
        }
        int i11 = 0;
        for (int i12 = 0; i12 < this.I.size(); i12++) {
            i11 += w1.e(((Integer) this.I.get(i12)).intValue());
        }
        int size = (this.I.size() * 2) + d6 + i11;
        for (int i13 = 0; i13 < this.J.size(); i13++) {
            size += w1.f(32, (iq.a) this.J.get(i13));
        }
        int size2 = this.f7256e.size() + j() + size;
        this.L = size2;
        return size2;
    }

    @Override // iq.a
    public final iq.i d() {
        return t0.h();
    }

    @Override // iq.a
    public final iq.i e() {
        t0 h6 = t0.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7257i & 1) == 1) {
            w1Var.r(1, this.f7258v);
        }
        if ((this.f7257i & 2) == 2) {
            w1Var.r(2, this.f7259w);
        }
        for (int i5 = 0; i5 < this.f7260x.size(); i5++) {
            w1Var.t(3, (iq.a) this.f7260x.get(i5));
        }
        if ((this.f7257i & 4) == 4) {
            w1Var.t(4, this.f7261y);
        }
        if ((this.f7257i & 8) == 8) {
            w1Var.r(5, this.E);
        }
        if ((this.f7257i & 16) == 16) {
            w1Var.t(6, this.F);
        }
        if ((this.f7257i & 32) == 32) {
            w1Var.r(7, this.G);
        }
        for (int i6 = 0; i6 < this.H.size(); i6++) {
            w1Var.t(8, (iq.a) this.H.get(i6));
        }
        for (int i10 = 0; i10 < this.I.size(); i10++) {
            w1Var.r(31, ((Integer) this.I.get(i10)).intValue());
        }
        for (int i11 = 0; i11 < this.J.size(); i11++) {
            w1Var.t(32, (iq.a) this.J.get(i11));
        }
        rVar.v(androidx.recyclerview.widget.h0.DEFAULT_DRAG_ANIMATION_DURATION, w1Var);
        w1Var.w(this.f7256e);
    }

    public u0() {
        this.K = (byte) -1;
        this.L = -1;
        this.f7256e = iq.d.f12197d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v0 */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v2, types: [boolean] */
    public u0(iq.e eVar, iq.g gVar) {
        this.K = (byte) -1;
        this.L = -1;
        this.f7258v = 6;
        boolean z5 = false;
        this.f7259w = 0;
        List list = Collections.EMPTY_LIST;
        this.f7260x = list;
        s0 s0Var = s0.Q;
        this.f7261y = s0Var;
        this.E = 0;
        this.F = s0Var;
        this.G = 0;
        this.H = list;
        this.I = list;
        this.J = list;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        int i5 = 0;
        while (true) {
            ?? r5 = 128;
            if (!z5) {
                try {
                    try {
                        int n6 = eVar.n();
                        r0 r0Var = null;
                        switch (n6) {
                            case 0:
                                z5 = true;
                            case 8:
                                this.f7257i |= 1;
                                this.f7258v = eVar.k();
                            case 16:
                                this.f7257i |= 2;
                                this.f7259w = eVar.k();
                            case 26:
                                if ((i5 & 4) != 4) {
                                    this.f7260x = new ArrayList();
                                    i5 |= 4;
                                }
                                this.f7260x.add(eVar.g(x0.K, gVar));
                            case 34:
                                if ((this.f7257i & 4) == 4) {
                                    s0 s0Var2 = this.f7261y;
                                    s0Var2.getClass();
                                    r0Var = s0.q(s0Var2);
                                }
                                s0 s0Var3 = (s0) eVar.g(s0.R, gVar);
                                this.f7261y = s0Var3;
                                if (r0Var != null) {
                                    r0Var.j(s0Var3);
                                    this.f7261y = r0Var.g();
                                }
                                this.f7257i |= 4;
                            case 40:
                                this.f7257i |= 8;
                                this.E = eVar.k();
                            case 50:
                                if ((this.f7257i & 16) == 16) {
                                    s0 s0Var4 = this.F;
                                    s0Var4.getClass();
                                    r0Var = s0.q(s0Var4);
                                }
                                s0 s0Var5 = (s0) eVar.g(s0.R, gVar);
                                this.F = s0Var5;
                                if (r0Var != null) {
                                    r0Var.j(s0Var5);
                                    this.F = r0Var.g();
                                }
                                this.f7257i |= 16;
                            case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                this.f7257i |= 32;
                                this.G = eVar.k();
                            case 66:
                                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 128) {
                                    this.H = new ArrayList();
                                    i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                }
                                this.H.add(eVar.g(h.E, gVar));
                            case 248:
                                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256) {
                                    this.I = new ArrayList();
                                    i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                }
                                this.I.add(Integer.valueOf(eVar.k()));
                            case androidx.recyclerview.widget.h0.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                                int d6 = eVar.d(eVar.k());
                                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256 && eVar.b() > 0) {
                                    this.I = new ArrayList();
                                    i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                }
                                while (eVar.b() > 0) {
                                    this.I.add(Integer.valueOf(eVar.k()));
                                }
                                eVar.c(d6);
                                break;
                            case 258:
                                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 512) {
                                    this.J = new ArrayList();
                                    i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                }
                                this.J.add(eVar.g(l.E, gVar));
                            default:
                                r5 = n(eVar, m5, gVar, n6);
                                if (r5 == 0) {
                                    z5 = true;
                                }
                        }
                    } catch (iq.q e9) {
                        e9.f12236d = this;
                        throw e9;
                    } catch (IOException e10) {
                        iq.q qVar = new iq.q(e10.getMessage());
                        qVar.f12236d = this;
                        throw qVar;
                    }
                } catch (Throwable th2) {
                    if ((i5 & 4) == 4) {
                        this.f7260x = Collections.unmodifiableList(this.f7260x);
                    }
                    if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == r5) {
                        this.H = Collections.unmodifiableList(this.H);
                    }
                    if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                        this.I = Collections.unmodifiableList(this.I);
                    }
                    if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                        this.J = Collections.unmodifiableList(this.J);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7256e = cVar.g();
                        throw th3;
                    }
                    this.f7256e = cVar.g();
                    m();
                    throw th2;
                }
            } else {
                if ((i5 & 4) == 4) {
                    this.f7260x = Collections.unmodifiableList(this.f7260x);
                }
                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
                    this.H = Collections.unmodifiableList(this.H);
                }
                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                    this.I = Collections.unmodifiableList(this.I);
                }
                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                    this.J = Collections.unmodifiableList(this.J);
                }
                try {
                    m5.l();
                } catch (IOException unused2) {
                } catch (Throwable th4) {
                    this.f7256e = cVar.g();
                    throw th4;
                }
                this.f7256e = cVar.g();
                m();
                return;
            }
        }
    }
}
