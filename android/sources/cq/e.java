package cq;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class e extends iq.n {
    public static final e M;
    public static final a N = new a(2);
    public int E;
    public int F;
    public h G;
    public List H;
    public int I;
    public int J;
    public byte K;
    public int L;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7057d;

    /* renamed from: e, reason: collision with root package name */
    public int f7058e;

    /* renamed from: i, reason: collision with root package name */
    public d f7059i;

    /* renamed from: v, reason: collision with root package name */
    public long f7060v;

    /* renamed from: w, reason: collision with root package name */
    public float f7061w;

    /* renamed from: x, reason: collision with root package name */
    public double f7062x;

    /* renamed from: y, reason: collision with root package name */
    public int f7063y;

    static {
        e eVar = new e();
        M = eVar;
        eVar.i();
    }

    public e() {
        this.K = (byte) -1;
        this.L = -1;
        this.f7057d = iq.d.f12197d;
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
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128 && !this.G.b()) {
            this.K = (byte) 0;
            return false;
        }
        for (int i5 = 0; i5 < this.H.size(); i5++) {
            if (!((e) this.H.get(i5)).b()) {
                this.K = (byte) 0;
                return false;
            }
        }
        this.K = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.L;
        if (i5 != -1) {
            return i5;
        }
        int c6 = (this.f7058e & 1) == 1 ? w1.c(1, this.f7059i.f7047d) : 0;
        if ((this.f7058e & 2) == 2) {
            long j = this.f7060v;
            c6 += w1.i((j >> 63) ^ (j << 1)) + w1.j(2);
        }
        if ((this.f7058e & 4) == 4) {
            c6 += w1.j(3) + 4;
        }
        if ((this.f7058e & 8) == 8) {
            c6 += w1.j(4) + 8;
        }
        if ((this.f7058e & 16) == 16) {
            c6 += w1.d(5, this.f7063y);
        }
        if ((this.f7058e & 32) == 32) {
            c6 += w1.d(6, this.E);
        }
        if ((this.f7058e & 64) == 64) {
            c6 += w1.d(7, this.F);
        }
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            c6 += w1.f(8, this.G);
        }
        for (int i6 = 0; i6 < this.H.size(); i6++) {
            c6 += w1.f(9, (iq.a) this.H.get(i6));
        }
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            c6 += w1.d(10, this.J);
        }
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            c6 += w1.d(11, this.I);
        }
        int size = this.f7057d.size() + c6;
        this.L = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return c.g();
    }

    @Override // iq.a
    public final iq.i e() {
        c g6 = c.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7058e & 1) == 1) {
            w1Var.q(1, this.f7059i.f7047d);
        }
        if ((this.f7058e & 2) == 2) {
            long j = this.f7060v;
            w1Var.C(2, 0);
            w1Var.B((j >> 63) ^ (j << 1));
        }
        if ((this.f7058e & 4) == 4) {
            float f2 = this.f7061w;
            w1Var.C(3, 5);
            w1Var.y(Float.floatToRawIntBits(f2));
        }
        if ((this.f7058e & 8) == 8) {
            double d6 = this.f7062x;
            w1Var.C(4, 1);
            w1Var.z(Double.doubleToRawLongBits(d6));
        }
        if ((this.f7058e & 16) == 16) {
            w1Var.r(5, this.f7063y);
        }
        if ((this.f7058e & 32) == 32) {
            w1Var.r(6, this.E);
        }
        if ((this.f7058e & 64) == 64) {
            w1Var.r(7, this.F);
        }
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            w1Var.t(8, this.G);
        }
        for (int i5 = 0; i5 < this.H.size(); i5++) {
            w1Var.t(9, (iq.a) this.H.get(i5));
        }
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            w1Var.r(10, this.J);
        }
        if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            w1Var.r(11, this.I);
        }
        w1Var.w(this.f7057d);
    }

    public final void i() {
        this.f7059i = d.BYTE;
        this.f7060v = 0L;
        this.f7061w = 0.0f;
        this.f7062x = 0.0d;
        this.f7063y = 0;
        this.E = 0;
        this.F = 0;
        this.G = h.f7106y;
        this.H = Collections.EMPTY_LIST;
        this.I = 0;
        this.J = 0;
    }

    public e(c cVar) {
        this.K = (byte) -1;
        this.L = -1;
        this.f7057d = cVar.f12211d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v0 */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v2, types: [boolean] */
    public e(iq.e eVar, iq.g gVar) {
        g gVar2;
        this.K = (byte) -1;
        this.L = -1;
        i();
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        char c6 = 0;
        while (true) {
            ?? r5 = 256;
            if (!z5) {
                try {
                    try {
                        try {
                            int n6 = eVar.n();
                            switch (n6) {
                                case 0:
                                    z5 = true;
                                case 8:
                                    int k = eVar.k();
                                    d b10 = d.b(k);
                                    if (b10 == null) {
                                        m5.A(n6);
                                        m5.A(k);
                                    } else {
                                        this.f7058e |= 1;
                                        this.f7059i = b10;
                                    }
                                case 16:
                                    this.f7058e |= 2;
                                    long l6 = eVar.l();
                                    this.f7060v = (-(l6 & 1)) ^ (l6 >>> 1);
                                case 29:
                                    this.f7058e |= 4;
                                    this.f7061w = Float.intBitsToFloat(eVar.i());
                                case 33:
                                    this.f7058e |= 8;
                                    this.f7062x = Double.longBitsToDouble(eVar.j());
                                case 40:
                                    this.f7058e |= 16;
                                    this.f7063y = eVar.k();
                                case 48:
                                    this.f7058e |= 32;
                                    this.E = eVar.k();
                                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                    this.f7058e |= 64;
                                    this.F = eVar.k();
                                case 66:
                                    if ((this.f7058e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
                                        h hVar = this.G;
                                        hVar.getClass();
                                        gVar2 = new g(0);
                                        gVar2.f7096v = Collections.EMPTY_LIST;
                                        gVar2.j(hVar);
                                    } else {
                                        gVar2 = null;
                                    }
                                    h hVar2 = (h) eVar.g(h.E, gVar);
                                    this.G = hVar2;
                                    if (gVar2 != null) {
                                        gVar2.j(hVar2);
                                        this.G = gVar2.f();
                                    }
                                    this.f7058e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                case 74:
                                    if ((c6 & 256) != 256) {
                                        this.H = new ArrayList();
                                        c6 = 256;
                                    }
                                    this.H.add(eVar.g(N, gVar));
                                case 80:
                                    this.f7058e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                    this.J = eVar.k();
                                case 88:
                                    this.f7058e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                    this.I = eVar.k();
                                default:
                                    r5 = eVar.q(n6, m5);
                                    if (r5 == 0) {
                                        z5 = true;
                                    }
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
                    if ((c6 & 256) == r5) {
                        this.H = Collections.unmodifiableList(this.H);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7057d = cVar.g();
                        throw th3;
                    }
                    this.f7057d = cVar.g();
                    throw th2;
                }
            } else {
                if ((c6 & 256) == 256) {
                    this.H = Collections.unmodifiableList(this.H);
                }
                try {
                    m5.l();
                } catch (IOException unused2) {
                } catch (Throwable th4) {
                    this.f7057d = cVar.g();
                    throw th4;
                }
                this.f7057d = cVar.g();
                return;
            }
        }
    }
}
