package cq;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.events.PointerEventHelper;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public final class i extends iq.j {
    public List E;
    public List F;
    public List G;
    public List H;
    public List I;
    public List J;
    public List K;
    public List L;
    public List M;
    public List N;
    public List O;
    public List P;
    public int Q;
    public s0 R;
    public int S;
    public List T;
    public List U;
    public List V;
    public y0 W;
    public List X;
    public f1 Y;
    public List Z;

    /* renamed from: v, reason: collision with root package name */
    public int f7117v;

    /* renamed from: w, reason: collision with root package name */
    public int f7118w;

    /* renamed from: x, reason: collision with root package name */
    public int f7119x;

    /* renamed from: y, reason: collision with root package name */
    public int f7120y;

    public static i h() {
        i iVar = new i();
        iVar.f7118w = 6;
        List list = Collections.EMPTY_LIST;
        iVar.E = list;
        iVar.F = list;
        iVar.G = list;
        iVar.H = list;
        iVar.I = list;
        iVar.J = list;
        iVar.K = list;
        iVar.L = list;
        iVar.M = list;
        iVar.N = list;
        iVar.O = list;
        iVar.P = list;
        iVar.R = s0.Q;
        iVar.T = list;
        iVar.U = list;
        iVar.V = list;
        iVar.W = y0.f7301y;
        iVar.X = list;
        iVar.Y = f1.f7088w;
        iVar.Z = list;
        return iVar;
    }

    @Override // iq.i
    public final iq.a c() {
        k g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        i h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        k kVar = null;
        try {
            try {
                k.f7138i0.getClass();
                j(new k(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                k kVar2 = (k) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    kVar = kVar2;
                    if (kVar != null) {
                        j(kVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (kVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((k) nVar);
        return this;
    }

    public final k g() {
        k kVar = new k(this);
        int i5 = this.f7117v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        kVar.f7147v = this.f7118w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        kVar.f7148w = this.f7119x;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        kVar.f7149x = this.f7120y;
        if ((i5 & 8) == 8) {
            this.E = Collections.unmodifiableList(this.E);
            this.f7117v &= -9;
        }
        kVar.f7150y = this.E;
        if ((this.f7117v & 16) == 16) {
            this.F = Collections.unmodifiableList(this.F);
            this.f7117v &= -17;
        }
        kVar.E = this.F;
        if ((this.f7117v & 32) == 32) {
            this.G = Collections.unmodifiableList(this.G);
            this.f7117v &= -33;
        }
        kVar.F = this.G;
        if ((this.f7117v & 64) == 64) {
            this.H = Collections.unmodifiableList(this.H);
            this.f7117v &= -65;
        }
        kVar.H = this.H;
        if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            this.I = Collections.unmodifiableList(this.I);
            this.f7117v &= -129;
        }
        kVar.J = this.I;
        if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            this.J = Collections.unmodifiableList(this.J);
            this.f7117v &= -257;
        }
        kVar.K = this.J;
        if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            this.K = Collections.unmodifiableList(this.K);
            this.f7117v &= -513;
        }
        kVar.M = this.K;
        if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            this.L = Collections.unmodifiableList(this.L);
            this.f7117v &= -1025;
        }
        kVar.N = this.L;
        if ((this.f7117v & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
            this.M = Collections.unmodifiableList(this.M);
            this.f7117v &= -2049;
        }
        kVar.O = this.M;
        if ((this.f7117v & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
            this.N = Collections.unmodifiableList(this.N);
            this.f7117v &= -4097;
        }
        kVar.P = this.N;
        if ((this.f7117v & 8192) == 8192) {
            this.O = Collections.unmodifiableList(this.O);
            this.f7117v &= -8193;
        }
        kVar.Q = this.O;
        if ((this.f7117v & 16384) == 16384) {
            this.P = Collections.unmodifiableList(this.P);
            this.f7117v &= -16385;
        }
        kVar.R = this.P;
        if ((i5 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) == 32768) {
            i6 |= 8;
        }
        kVar.T = this.Q;
        if ((i5 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) == 65536) {
            i6 |= 16;
        }
        kVar.U = this.R;
        if ((i5 & KeyCommandDescriptor.ModifierFlags.SHIFT) == 131072) {
            i6 |= 32;
        }
        kVar.V = this.S;
        if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.CONTROL) == 262144) {
            this.T = Collections.unmodifiableList(this.T);
            this.f7117v &= -262145;
        }
        kVar.W = this.T;
        if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.ALTERNATE) == 524288) {
            this.U = Collections.unmodifiableList(this.U);
            this.f7117v &= -524289;
        }
        kVar.Y = this.U;
        if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.COMMAND) == 1048576) {
            this.V = Collections.unmodifiableList(this.V);
            this.f7117v &= -1048577;
        }
        kVar.Z = this.V;
        if ((i5 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) == 2097152) {
            i6 |= 64;
        }
        kVar.f7139b0 = this.W;
        if ((this.f7117v & 4194304) == 4194304) {
            this.X = Collections.unmodifiableList(this.X);
            this.f7117v &= -4194305;
        }
        kVar.f7140c0 = this.X;
        if ((i5 & 8388608) == 8388608) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        kVar.f7141d0 = this.Y;
        if ((this.f7117v & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) == 16777216) {
            this.Z = Collections.unmodifiableList(this.Z);
            this.f7117v &= -16777217;
        }
        kVar.f7143e0 = this.Z;
        kVar.f7146i = i6;
        return kVar;
    }

    public final void j(k kVar) {
        f1 f1Var;
        y0 y0Var;
        s0 s0Var;
        if (kVar == k.h0) {
            return;
        }
        int i5 = kVar.f7146i;
        if ((i5 & 1) == 1) {
            int i6 = kVar.f7147v;
            this.f7117v = 1 | this.f7117v;
            this.f7118w = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = kVar.f7148w;
            this.f7117v = 2 | this.f7117v;
            this.f7119x = i10;
        }
        if ((i5 & 4) == 4) {
            int i11 = kVar.f7149x;
            this.f7117v = 4 | this.f7117v;
            this.f7120y = i11;
        }
        if (!kVar.f7150y.isEmpty()) {
            if (this.E.isEmpty()) {
                this.E = kVar.f7150y;
                this.f7117v &= -9;
            } else {
                if ((this.f7117v & 8) != 8) {
                    this.E = new ArrayList(this.E);
                    this.f7117v |= 8;
                }
                this.E.addAll(kVar.f7150y);
            }
        }
        if (!kVar.E.isEmpty()) {
            if (this.F.isEmpty()) {
                this.F = kVar.E;
                this.f7117v &= -17;
            } else {
                if ((this.f7117v & 16) != 16) {
                    this.F = new ArrayList(this.F);
                    this.f7117v |= 16;
                }
                this.F.addAll(kVar.E);
            }
        }
        if (!kVar.F.isEmpty()) {
            if (this.G.isEmpty()) {
                this.G = kVar.F;
                this.f7117v &= -33;
            } else {
                if ((this.f7117v & 32) != 32) {
                    this.G = new ArrayList(this.G);
                    this.f7117v |= 32;
                }
                this.G.addAll(kVar.F);
            }
        }
        if (!kVar.H.isEmpty()) {
            if (this.H.isEmpty()) {
                this.H = kVar.H;
                this.f7117v &= -65;
            } else {
                if ((this.f7117v & 64) != 64) {
                    this.H = new ArrayList(this.H);
                    this.f7117v |= 64;
                }
                this.H.addAll(kVar.H);
            }
        }
        if (!kVar.J.isEmpty()) {
            if (this.I.isEmpty()) {
                this.I = kVar.J;
                this.f7117v &= -129;
            } else {
                if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 128) {
                    this.I = new ArrayList(this.I);
                    this.f7117v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                }
                this.I.addAll(kVar.J);
            }
        }
        if (!kVar.K.isEmpty()) {
            if (this.J.isEmpty()) {
                this.J = kVar.K;
                this.f7117v &= -257;
            } else {
                if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256) {
                    this.J = new ArrayList(this.J);
                    this.f7117v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                }
                this.J.addAll(kVar.K);
            }
        }
        if (!kVar.M.isEmpty()) {
            if (this.K.isEmpty()) {
                this.K = kVar.M;
                this.f7117v &= -513;
            } else {
                if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 512) {
                    this.K = new ArrayList(this.K);
                    this.f7117v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                }
                this.K.addAll(kVar.M);
            }
        }
        if (!kVar.N.isEmpty()) {
            if (this.L.isEmpty()) {
                this.L = kVar.N;
                this.f7117v &= -1025;
            } else {
                if ((this.f7117v & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 1024) {
                    this.L = new ArrayList(this.L);
                    this.f7117v |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                }
                this.L.addAll(kVar.N);
            }
        }
        if (!kVar.O.isEmpty()) {
            if (this.M.isEmpty()) {
                this.M = kVar.O;
                this.f7117v &= -2049;
            } else {
                if ((this.f7117v & RecyclerView.ItemAnimator.FLAG_MOVED) != 2048) {
                    this.M = new ArrayList(this.M);
                    this.f7117v |= RecyclerView.ItemAnimator.FLAG_MOVED;
                }
                this.M.addAll(kVar.O);
            }
        }
        if (!kVar.P.isEmpty()) {
            if (this.N.isEmpty()) {
                this.N = kVar.P;
                this.f7117v &= -4097;
            } else {
                if ((this.f7117v & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 4096) {
                    this.N = new ArrayList(this.N);
                    this.f7117v |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                }
                this.N.addAll(kVar.P);
            }
        }
        if (!kVar.Q.isEmpty()) {
            if (this.O.isEmpty()) {
                this.O = kVar.Q;
                this.f7117v &= -8193;
            } else {
                if ((this.f7117v & 8192) != 8192) {
                    this.O = new ArrayList(this.O);
                    this.f7117v |= 8192;
                }
                this.O.addAll(kVar.Q);
            }
        }
        if (!kVar.R.isEmpty()) {
            if (this.P.isEmpty()) {
                this.P = kVar.R;
                this.f7117v &= -16385;
            } else {
                if ((this.f7117v & 16384) != 16384) {
                    this.P = new ArrayList(this.P);
                    this.f7117v |= 16384;
                }
                this.P.addAll(kVar.R);
            }
        }
        int i12 = kVar.f7146i;
        if ((i12 & 8) == 8) {
            int i13 = kVar.T;
            this.f7117v |= PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
            this.Q = i13;
        }
        if ((i12 & 16) == 16) {
            s0 s0Var2 = kVar.U;
            if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 65536 || (s0Var = this.R) == s0.Q) {
                this.R = s0Var2;
            } else {
                r0 q5 = s0.q(s0Var);
                q5.j(s0Var2);
                this.R = q5.g();
            }
            this.f7117v |= KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
        }
        if ((kVar.f7146i & 32) == 32) {
            int i14 = kVar.V;
            this.f7117v |= KeyCommandDescriptor.ModifierFlags.SHIFT;
            this.S = i14;
        }
        if (!kVar.W.isEmpty()) {
            if (this.T.isEmpty()) {
                this.T = kVar.W;
                this.f7117v &= -262145;
            } else {
                if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.CONTROL) != 262144) {
                    this.T = new ArrayList(this.T);
                    this.f7117v |= KeyCommandDescriptor.ModifierFlags.CONTROL;
                }
                this.T.addAll(kVar.W);
            }
        }
        if (!kVar.Y.isEmpty()) {
            if (this.U.isEmpty()) {
                this.U = kVar.Y;
                this.f7117v &= -524289;
            } else {
                if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 524288) {
                    this.U = new ArrayList(this.U);
                    this.f7117v |= KeyCommandDescriptor.ModifierFlags.ALTERNATE;
                }
                this.U.addAll(kVar.Y);
            }
        }
        if (!kVar.Z.isEmpty()) {
            if (this.V.isEmpty()) {
                this.V = kVar.Z;
                this.f7117v &= -1048577;
            } else {
                if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.COMMAND) != 1048576) {
                    this.V = new ArrayList(this.V);
                    this.f7117v |= KeyCommandDescriptor.ModifierFlags.COMMAND;
                }
                this.V.addAll(kVar.Z);
            }
        }
        if ((kVar.f7146i & 64) == 64) {
            y0 y0Var2 = kVar.f7139b0;
            if ((this.f7117v & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 2097152 || (y0Var = this.W) == y0.f7301y) {
                this.W = y0Var2;
            } else {
                g i15 = y0.i(y0Var);
                i15.k(y0Var2);
                this.W = i15.g();
            }
            this.f7117v |= KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD;
        }
        if (!kVar.f7140c0.isEmpty()) {
            if (this.X.isEmpty()) {
                this.X = kVar.f7140c0;
                this.f7117v &= -4194305;
            } else {
                if ((this.f7117v & 4194304) != 4194304) {
                    this.X = new ArrayList(this.X);
                    this.f7117v |= 4194304;
                }
                this.X.addAll(kVar.f7140c0);
            }
        }
        if ((kVar.f7146i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            f1 f1Var2 = kVar.f7141d0;
            if ((this.f7117v & 8388608) != 8388608 || (f1Var = this.Y) == f1.f7088w) {
                this.Y = f1Var2;
            } else {
                o oVar = new o(2);
                oVar.f7194v = Collections.EMPTY_LIST;
                oVar.n(f1Var);
                oVar.n(f1Var2);
                this.Y = oVar.j();
            }
            this.f7117v |= 8388608;
        }
        if (!kVar.f7143e0.isEmpty()) {
            if (this.Z.isEmpty()) {
                this.Z = kVar.f7143e0;
                this.f7117v &= -16777217;
            } else {
                if ((this.f7117v & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 16777216) {
                    this.Z = new ArrayList(this.Z);
                    this.f7117v |= PointerEventHelper.X_FLAG_SUPPORTS_HOVER;
                }
                this.Z.addAll(kVar.f7143e0);
            }
        }
        f(kVar);
        this.f12211d = this.f12211d.b(kVar.f7142e);
    }
}
