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
public final class s0 extends iq.k {
    public static final s0 Q;
    public static final a R = new a(17);
    public int E;
    public int F;
    public int G;
    public int H;
    public int I;
    public s0 J;
    public int K;
    public s0 L;
    public int M;
    public int N;
    public byte O;
    public int P;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7237e;

    /* renamed from: i, reason: collision with root package name */
    public int f7238i;

    /* renamed from: v, reason: collision with root package name */
    public List f7239v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f7240w;

    /* renamed from: x, reason: collision with root package name */
    public int f7241x;

    /* renamed from: y, reason: collision with root package name */
    public s0 f7242y;

    static {
        s0 s0Var = new s0();
        Q = s0Var;
        s0Var.p();
    }

    public s0(r0 r0Var) {
        super(r0Var);
        this.O = (byte) -1;
        this.P = -1;
        this.f7237e = r0Var.f12211d;
    }

    public static r0 q(s0 s0Var) {
        r0 h6 = r0.h();
        h6.j(s0Var);
        return h6;
    }

    @Override // iq.u
    public final iq.a a() {
        return Q;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.O;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7239v.size(); i5++) {
            if (!((q0) this.f7239v.get(i5)).b()) {
                this.O = (byte) 0;
                return false;
            }
        }
        if ((this.f7238i & 4) == 4 && !this.f7242y.b()) {
            this.O = (byte) 0;
            return false;
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256 && !this.J.b()) {
            this.O = (byte) 0;
            return false;
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024 && !this.L.b()) {
            this.O = (byte) 0;
            return false;
        }
        if (i()) {
            this.O = (byte) 1;
            return true;
        }
        this.O = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.P;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7238i & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096 ? w1.d(1, this.N) : 0;
        for (int i6 = 0; i6 < this.f7239v.size(); i6++) {
            d6 += w1.f(2, (iq.a) this.f7239v.get(i6));
        }
        if ((this.f7238i & 1) == 1) {
            d6 += w1.j(3) + 1;
        }
        if ((this.f7238i & 2) == 2) {
            d6 += w1.d(4, this.f7241x);
        }
        if ((this.f7238i & 4) == 4) {
            d6 += w1.f(5, this.f7242y);
        }
        if ((this.f7238i & 16) == 16) {
            d6 += w1.d(6, this.F);
        }
        if ((this.f7238i & 32) == 32) {
            d6 += w1.d(7, this.G);
        }
        if ((this.f7238i & 8) == 8) {
            d6 += w1.d(8, this.E);
        }
        if ((this.f7238i & 64) == 64) {
            d6 += w1.d(9, this.H);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            d6 += w1.f(10, this.J);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            d6 += w1.d(11, this.K);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            d6 += w1.d(12, this.I);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            d6 += w1.f(13, this.L);
        }
        if ((this.f7238i & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            d6 += w1.d(14, this.M);
        }
        int size = this.f7237e.size() + j() + d6;
        this.P = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return r0.h();
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7238i & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
            w1Var.r(1, this.N);
        }
        for (int i5 = 0; i5 < this.f7239v.size(); i5++) {
            w1Var.t(2, (iq.a) this.f7239v.get(i5));
        }
        if ((this.f7238i & 1) == 1) {
            boolean z5 = this.f7240w;
            w1Var.C(3, 0);
            w1Var.v(z5 ? 1 : 0);
        }
        if ((this.f7238i & 2) == 2) {
            w1Var.r(4, this.f7241x);
        }
        if ((this.f7238i & 4) == 4) {
            w1Var.t(5, this.f7242y);
        }
        if ((this.f7238i & 16) == 16) {
            w1Var.r(6, this.F);
        }
        if ((this.f7238i & 32) == 32) {
            w1Var.r(7, this.G);
        }
        if ((this.f7238i & 8) == 8) {
            w1Var.r(8, this.E);
        }
        if ((this.f7238i & 64) == 64) {
            w1Var.r(9, this.H);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            w1Var.t(10, this.J);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            w1Var.r(11, this.K);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            w1Var.r(12, this.I);
        }
        if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            w1Var.t(13, this.L);
        }
        if ((this.f7238i & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            w1Var.r(14, this.M);
        }
        rVar.v(androidx.recyclerview.widget.h0.DEFAULT_DRAG_ANIMATION_DURATION, w1Var);
        w1Var.w(this.f7237e);
    }

    public final void p() {
        this.f7239v = Collections.EMPTY_LIST;
        this.f7240w = false;
        this.f7241x = 0;
        s0 s0Var = Q;
        this.f7242y = s0Var;
        this.E = 0;
        this.F = 0;
        this.G = 0;
        this.H = 0;
        this.I = 0;
        this.J = s0Var;
        this.K = 0;
        this.L = s0Var;
        this.M = 0;
        this.N = 0;
    }

    @Override // iq.a
    /* renamed from: r, reason: merged with bridge method [inline-methods] */
    public final r0 e() {
        return q(this);
    }

    public s0() {
        this.O = (byte) -1;
        this.P = -1;
        this.f7237e = iq.d.f12197d;
    }

    public s0(iq.e eVar, iq.g gVar) {
        this.O = (byte) -1;
        this.P = -1;
        p();
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        boolean z6 = false;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    a aVar = R;
                    r0 r0Var = null;
                    switch (n6) {
                        case 0:
                            break;
                        case 8:
                            this.f7238i |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                            this.N = eVar.k();
                            continue;
                        case 18:
                            if (!z6) {
                                this.f7239v = new ArrayList();
                                z6 = true;
                            }
                            this.f7239v.add(eVar.g(q0.F, gVar));
                            continue;
                        case 24:
                            this.f7238i |= 1;
                            this.f7240w = eVar.l() != 0;
                            continue;
                        case 32:
                            this.f7238i |= 2;
                            this.f7241x = eVar.k();
                            continue;
                        case 42:
                            if ((this.f7238i & 4) == 4) {
                                s0 s0Var = this.f7242y;
                                s0Var.getClass();
                                r0Var = q(s0Var);
                            }
                            s0 s0Var2 = (s0) eVar.g(aVar, gVar);
                            this.f7242y = s0Var2;
                            if (r0Var != null) {
                                r0Var.j(s0Var2);
                                this.f7242y = r0Var.g();
                            }
                            this.f7238i |= 4;
                            continue;
                        case 48:
                            this.f7238i |= 16;
                            this.F = eVar.k();
                            continue;
                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                            this.f7238i |= 32;
                            this.G = eVar.k();
                            continue;
                        case 64:
                            this.f7238i |= 8;
                            this.E = eVar.k();
                            continue;
                        case 72:
                            this.f7238i |= 64;
                            this.H = eVar.k();
                            continue;
                        case 82:
                            if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                                s0 s0Var3 = this.J;
                                s0Var3.getClass();
                                r0Var = q(s0Var3);
                            }
                            s0 s0Var4 = (s0) eVar.g(aVar, gVar);
                            this.J = s0Var4;
                            if (r0Var != null) {
                                r0Var.j(s0Var4);
                                this.J = r0Var.g();
                            }
                            this.f7238i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                            continue;
                        case 88:
                            this.f7238i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                            this.K = eVar.k();
                            continue;
                        case 96:
                            this.f7238i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                            this.I = eVar.k();
                            continue;
                        case 106:
                            if ((this.f7238i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
                                s0 s0Var5 = this.L;
                                s0Var5.getClass();
                                r0Var = q(s0Var5);
                            }
                            s0 s0Var6 = (s0) eVar.g(aVar, gVar);
                            this.L = s0Var6;
                            if (r0Var != null) {
                                r0Var.j(s0Var6);
                                this.L = r0Var.g();
                            }
                            this.f7238i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                            continue;
                        case 112:
                            this.f7238i |= RecyclerView.ItemAnimator.FLAG_MOVED;
                            this.M = eVar.k();
                            continue;
                        default:
                            if (!n(eVar, m5, gVar, n6)) {
                                break;
                            } else {
                                break;
                            }
                    }
                    z5 = true;
                } catch (iq.q e9) {
                    e9.f12236d = this;
                    throw e9;
                } catch (IOException e10) {
                    iq.q qVar = new iq.q(e10.getMessage());
                    qVar.f12236d = this;
                    throw qVar;
                }
            } catch (Throwable th2) {
                if (z6) {
                    this.f7239v = Collections.unmodifiableList(this.f7239v);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7237e = cVar.g();
                    throw th3;
                }
                this.f7237e = cVar.g();
                m();
                throw th2;
            }
        }
        if (z6) {
            this.f7239v = Collections.unmodifiableList(this.f7239v);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7237e = cVar.g();
            throw th4;
        }
        this.f7237e = cVar.g();
        m();
    }
}
