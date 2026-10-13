package cq;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class r0 extends iq.j {
    public s0 E;
    public int F;
    public int G;
    public int H;
    public int I;
    public int J;
    public s0 K;
    public int L;
    public s0 M;
    public int N;
    public int O;

    /* renamed from: v, reason: collision with root package name */
    public int f7228v;

    /* renamed from: w, reason: collision with root package name */
    public List f7229w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f7230x;

    /* renamed from: y, reason: collision with root package name */
    public int f7231y;

    public static r0 h() {
        r0 r0Var = new r0();
        r0Var.f7229w = Collections.EMPTY_LIST;
        s0 s0Var = s0.Q;
        r0Var.E = s0Var;
        r0Var.K = s0Var;
        r0Var.M = s0Var;
        return r0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        s0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        r0 h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        s0 s0Var = null;
        try {
            try {
                s0.R.getClass();
                j(new s0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                s0 s0Var2 = (s0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    s0Var = s0Var2;
                    if (s0Var != null) {
                        j(s0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (s0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((s0) nVar);
        return this;
    }

    public final s0 g() {
        s0 s0Var = new s0(this);
        int i5 = this.f7228v;
        if ((i5 & 1) == 1) {
            this.f7229w = Collections.unmodifiableList(this.f7229w);
            this.f7228v &= -2;
        }
        s0Var.f7239v = this.f7229w;
        int i6 = (i5 & 2) != 2 ? 0 : 1;
        s0Var.f7240w = this.f7230x;
        if ((i5 & 4) == 4) {
            i6 |= 2;
        }
        s0Var.f7241x = this.f7231y;
        if ((i5 & 8) == 8) {
            i6 |= 4;
        }
        s0Var.f7242y = this.E;
        if ((i5 & 16) == 16) {
            i6 |= 8;
        }
        s0Var.E = this.F;
        if ((i5 & 32) == 32) {
            i6 |= 16;
        }
        s0Var.F = this.G;
        if ((i5 & 64) == 64) {
            i6 |= 32;
        }
        s0Var.G = this.H;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i6 |= 64;
        }
        s0Var.H = this.I;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        s0Var.I = this.J;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        }
        s0Var.J = this.K;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
        }
        s0Var.K = this.L;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
        }
        s0Var.L = this.M;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
            i6 |= RecyclerView.ItemAnimator.FLAG_MOVED;
        }
        s0Var.M = this.N;
        if ((i5 & 8192) == 8192) {
            i6 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        }
        s0Var.N = this.O;
        s0Var.f7238i = i6;
        return s0Var;
    }

    public final r0 j(s0 s0Var) {
        s0 s0Var2;
        s0 s0Var3;
        s0 s0Var4;
        s0 s0Var5 = s0.Q;
        if (s0Var == s0Var5) {
            return this;
        }
        if (!s0Var.f7239v.isEmpty()) {
            if (this.f7229w.isEmpty()) {
                this.f7229w = s0Var.f7239v;
                this.f7228v &= -2;
            } else {
                if ((this.f7228v & 1) != 1) {
                    this.f7229w = new ArrayList(this.f7229w);
                    this.f7228v |= 1;
                }
                this.f7229w.addAll(s0Var.f7239v);
            }
        }
        int i5 = s0Var.f7238i;
        if ((i5 & 1) == 1) {
            boolean z5 = s0Var.f7240w;
            this.f7228v |= 2;
            this.f7230x = z5;
        }
        if ((i5 & 2) == 2) {
            int i6 = s0Var.f7241x;
            this.f7228v |= 4;
            this.f7231y = i6;
        }
        if ((i5 & 4) == 4) {
            s0 s0Var6 = s0Var.f7242y;
            if ((this.f7228v & 8) != 8 || (s0Var4 = this.E) == s0Var5) {
                this.E = s0Var6;
            } else {
                r0 q5 = s0.q(s0Var4);
                q5.j(s0Var6);
                this.E = q5.g();
            }
            this.f7228v |= 8;
        }
        int i10 = s0Var.f7238i;
        if ((i10 & 8) == 8) {
            int i11 = s0Var.E;
            this.f7228v |= 16;
            this.F = i11;
        }
        if ((i10 & 16) == 16) {
            int i12 = s0Var.F;
            this.f7228v |= 32;
            this.G = i12;
        }
        if ((i10 & 32) == 32) {
            int i13 = s0Var.G;
            this.f7228v |= 64;
            this.H = i13;
        }
        if ((i10 & 64) == 64) {
            int i14 = s0Var.H;
            this.f7228v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            this.I = i14;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            int i15 = s0Var.I;
            this.f7228v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
            this.J = i15;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            s0 s0Var7 = s0Var.J;
            if ((this.f7228v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 512 || (s0Var3 = this.K) == s0Var5) {
                this.K = s0Var7;
            } else {
                r0 q6 = s0.q(s0Var3);
                q6.j(s0Var7);
                this.K = q6.g();
            }
            this.f7228v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
        }
        int i16 = s0Var.f7238i;
        if ((i16 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            int i17 = s0Var.K;
            this.f7228v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
            this.L = i17;
        }
        if ((i16 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            s0 s0Var8 = s0Var.L;
            if ((this.f7228v & RecyclerView.ItemAnimator.FLAG_MOVED) != 2048 || (s0Var2 = this.M) == s0Var5) {
                this.M = s0Var8;
            } else {
                r0 q7 = s0.q(s0Var2);
                q7.j(s0Var8);
                this.M = q7.g();
            }
            this.f7228v |= RecyclerView.ItemAnimator.FLAG_MOVED;
        }
        int i18 = s0Var.f7238i;
        if ((i18 & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            int i19 = s0Var.M;
            this.f7228v |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
            this.N = i19;
        }
        if ((i18 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
            int i20 = s0Var.N;
            this.f7228v |= 8192;
            this.O = i20;
        }
        f(s0Var);
        this.f12211d = this.f12211d.b(s0Var.f7237e);
        return this;
    }
}
