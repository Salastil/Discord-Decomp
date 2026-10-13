package cq;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.events.PointerEventHelper;
import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.CharCompanionObject;

/* loaded from: classes3.dex */
public final class k extends iq.k {
    public static final k h0;

    /* renamed from: i0, reason: collision with root package name */
    public static final a f7138i0 = new a(3);
    public List E;
    public List F;
    public int G;
    public List H;
    public int I;
    public List J;
    public List K;
    public int L;
    public List M;
    public List N;
    public List O;
    public List P;
    public List Q;
    public List R;
    public int S;
    public int T;
    public s0 U;
    public int V;
    public List W;
    public int X;
    public List Y;
    public List Z;
    public int a0;

    /* renamed from: b0, reason: collision with root package name */
    public y0 f7139b0;

    /* renamed from: c0, reason: collision with root package name */
    public List f7140c0;

    /* renamed from: d0, reason: collision with root package name */
    public f1 f7141d0;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7142e;

    /* renamed from: e0, reason: collision with root package name */
    public List f7143e0;

    /* renamed from: f0, reason: collision with root package name */
    public byte f7144f0;

    /* renamed from: g0, reason: collision with root package name */
    public int f7145g0;

    /* renamed from: i, reason: collision with root package name */
    public int f7146i;

    /* renamed from: v, reason: collision with root package name */
    public int f7147v;

    /* renamed from: w, reason: collision with root package name */
    public int f7148w;

    /* renamed from: x, reason: collision with root package name */
    public int f7149x;

    /* renamed from: y, reason: collision with root package name */
    public List f7150y;

    static {
        k kVar = new k();
        h0 = kVar;
        kVar.p();
    }

    public k(i iVar) {
        super(iVar);
        this.G = -1;
        this.I = -1;
        this.L = -1;
        this.S = -1;
        this.X = -1;
        this.a0 = -1;
        this.f7144f0 = (byte) -1;
        this.f7145g0 = -1;
        this.f7142e = iVar.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return h0;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.f7144f0;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if ((this.f7146i & 2) != 2) {
            this.f7144f0 = (byte) 0;
            return false;
        }
        for (int i5 = 0; i5 < this.f7150y.size(); i5++) {
            if (!((x0) this.f7150y.get(i5)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i6 = 0; i6 < this.E.size(); i6++) {
            if (!((s0) this.E.get(i6)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i10 = 0; i10 < this.J.size(); i10++) {
            if (!((s0) this.J.get(i10)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i11 = 0; i11 < this.M.size(); i11++) {
            if (!((n) this.M.get(i11)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i12 = 0; i12 < this.N.size(); i12++) {
            if (!((a0) this.N.get(i12)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i13 = 0; i13 < this.O.size(); i13++) {
            if (!((i0) this.O.get(i13)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i14 = 0; i14 < this.P.size(); i14++) {
            if (!((u0) this.P.get(i14)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        for (int i15 = 0; i15 < this.Q.size(); i15++) {
            if (!((v) this.Q.get(i15)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        if ((this.f7146i & 16) == 16 && !this.U.b()) {
            this.f7144f0 = (byte) 0;
            return false;
        }
        for (int i16 = 0; i16 < this.Y.size(); i16++) {
            if (!((s0) this.Y.get(i16)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        if ((this.f7146i & 64) == 64 && !this.f7139b0.b()) {
            this.f7144f0 = (byte) 0;
            return false;
        }
        for (int i17 = 0; i17 < this.f7143e0.size(); i17++) {
            if (!((l) this.f7143e0.get(i17)).b()) {
                this.f7144f0 = (byte) 0;
                return false;
            }
        }
        if (i()) {
            this.f7144f0 = (byte) 1;
            return true;
        }
        this.f7144f0 = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.f7145g0;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7146i & 1) == 1 ? w1.d(1, this.f7147v) : 0;
        int i6 = 0;
        for (int i10 = 0; i10 < this.F.size(); i10++) {
            i6 += w1.e(((Integer) this.F.get(i10)).intValue());
        }
        int i11 = d6 + i6;
        if (!this.F.isEmpty()) {
            i11 = i11 + 1 + w1.e(i6);
        }
        this.G = i6;
        if ((this.f7146i & 2) == 2) {
            i11 += w1.d(3, this.f7148w);
        }
        if ((this.f7146i & 4) == 4) {
            i11 += w1.d(4, this.f7149x);
        }
        for (int i12 = 0; i12 < this.f7150y.size(); i12++) {
            i11 += w1.f(5, (iq.a) this.f7150y.get(i12));
        }
        for (int i13 = 0; i13 < this.E.size(); i13++) {
            i11 += w1.f(6, (iq.a) this.E.get(i13));
        }
        int i14 = 0;
        for (int i15 = 0; i15 < this.H.size(); i15++) {
            i14 += w1.e(((Integer) this.H.get(i15)).intValue());
        }
        int i16 = i11 + i14;
        if (!this.H.isEmpty()) {
            i16 = i16 + 1 + w1.e(i14);
        }
        this.I = i14;
        for (int i17 = 0; i17 < this.M.size(); i17++) {
            i16 += w1.f(8, (iq.a) this.M.get(i17));
        }
        for (int i18 = 0; i18 < this.N.size(); i18++) {
            i16 += w1.f(9, (iq.a) this.N.get(i18));
        }
        for (int i19 = 0; i19 < this.O.size(); i19++) {
            i16 += w1.f(10, (iq.a) this.O.get(i19));
        }
        for (int i20 = 0; i20 < this.P.size(); i20++) {
            i16 += w1.f(11, (iq.a) this.P.get(i20));
        }
        for (int i21 = 0; i21 < this.Q.size(); i21++) {
            i16 += w1.f(13, (iq.a) this.Q.get(i21));
        }
        int i22 = 0;
        for (int i23 = 0; i23 < this.R.size(); i23++) {
            i22 += w1.e(((Integer) this.R.get(i23)).intValue());
        }
        int i24 = i16 + i22;
        if (!this.R.isEmpty()) {
            i24 = i24 + 2 + w1.e(i22);
        }
        this.S = i22;
        if ((this.f7146i & 8) == 8) {
            i24 += w1.d(17, this.T);
        }
        if ((this.f7146i & 16) == 16) {
            i24 += w1.f(18, this.U);
        }
        if ((this.f7146i & 32) == 32) {
            i24 += w1.d(19, this.V);
        }
        for (int i25 = 0; i25 < this.J.size(); i25++) {
            i24 += w1.f(20, (iq.a) this.J.get(i25));
        }
        int i26 = 0;
        for (int i27 = 0; i27 < this.K.size(); i27++) {
            i26 += w1.e(((Integer) this.K.get(i27)).intValue());
        }
        int i28 = i24 + i26;
        if (!this.K.isEmpty()) {
            i28 = i28 + 2 + w1.e(i26);
        }
        this.L = i26;
        int i29 = 0;
        for (int i30 = 0; i30 < this.W.size(); i30++) {
            i29 += w1.e(((Integer) this.W.get(i30)).intValue());
        }
        int i31 = i28 + i29;
        if (!this.W.isEmpty()) {
            i31 = i31 + 2 + w1.e(i29);
        }
        this.X = i29;
        for (int i32 = 0; i32 < this.Y.size(); i32++) {
            i31 += w1.f(23, (iq.a) this.Y.get(i32));
        }
        int i33 = 0;
        for (int i34 = 0; i34 < this.Z.size(); i34++) {
            i33 += w1.e(((Integer) this.Z.get(i34)).intValue());
        }
        int i35 = i31 + i33;
        if (!this.Z.isEmpty()) {
            i35 = i35 + 2 + w1.e(i33);
        }
        this.a0 = i33;
        if ((this.f7146i & 64) == 64) {
            i35 += w1.f(30, this.f7139b0);
        }
        int i36 = 0;
        for (int i37 = 0; i37 < this.f7140c0.size(); i37++) {
            i36 += w1.e(((Integer) this.f7140c0.get(i37)).intValue());
        }
        int size = (this.f7140c0.size() * 2) + i35 + i36;
        if ((this.f7146i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            size += w1.f(32, this.f7141d0);
        }
        for (int i38 = 0; i38 < this.f7143e0.size(); i38++) {
            size += w1.f(33, (iq.a) this.f7143e0.get(i38));
        }
        int size2 = this.f7142e.size() + j() + size;
        this.f7145g0 = size2;
        return size2;
    }

    @Override // iq.a
    public final iq.i d() {
        return i.h();
    }

    @Override // iq.a
    public final iq.i e() {
        i h6 = i.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7146i & 1) == 1) {
            w1Var.r(1, this.f7147v);
        }
        if (this.F.size() > 0) {
            w1Var.A(18);
            w1Var.A(this.G);
        }
        for (int i5 = 0; i5 < this.F.size(); i5++) {
            w1Var.s(((Integer) this.F.get(i5)).intValue());
        }
        if ((this.f7146i & 2) == 2) {
            w1Var.r(3, this.f7148w);
        }
        if ((this.f7146i & 4) == 4) {
            w1Var.r(4, this.f7149x);
        }
        for (int i6 = 0; i6 < this.f7150y.size(); i6++) {
            w1Var.t(5, (iq.a) this.f7150y.get(i6));
        }
        for (int i10 = 0; i10 < this.E.size(); i10++) {
            w1Var.t(6, (iq.a) this.E.get(i10));
        }
        if (this.H.size() > 0) {
            w1Var.A(58);
            w1Var.A(this.I);
        }
        for (int i11 = 0; i11 < this.H.size(); i11++) {
            w1Var.s(((Integer) this.H.get(i11)).intValue());
        }
        for (int i12 = 0; i12 < this.M.size(); i12++) {
            w1Var.t(8, (iq.a) this.M.get(i12));
        }
        for (int i13 = 0; i13 < this.N.size(); i13++) {
            w1Var.t(9, (iq.a) this.N.get(i13));
        }
        for (int i14 = 0; i14 < this.O.size(); i14++) {
            w1Var.t(10, (iq.a) this.O.get(i14));
        }
        for (int i15 = 0; i15 < this.P.size(); i15++) {
            w1Var.t(11, (iq.a) this.P.get(i15));
        }
        for (int i16 = 0; i16 < this.Q.size(); i16++) {
            w1Var.t(13, (iq.a) this.Q.get(i16));
        }
        if (this.R.size() > 0) {
            w1Var.A(130);
            w1Var.A(this.S);
        }
        for (int i17 = 0; i17 < this.R.size(); i17++) {
            w1Var.s(((Integer) this.R.get(i17)).intValue());
        }
        if ((this.f7146i & 8) == 8) {
            w1Var.r(17, this.T);
        }
        if ((this.f7146i & 16) == 16) {
            w1Var.t(18, this.U);
        }
        if ((this.f7146i & 32) == 32) {
            w1Var.r(19, this.V);
        }
        for (int i18 = 0; i18 < this.J.size(); i18++) {
            w1Var.t(20, (iq.a) this.J.get(i18));
        }
        if (this.K.size() > 0) {
            w1Var.A(170);
            w1Var.A(this.L);
        }
        for (int i19 = 0; i19 < this.K.size(); i19++) {
            w1Var.s(((Integer) this.K.get(i19)).intValue());
        }
        if (this.W.size() > 0) {
            w1Var.A(178);
            w1Var.A(this.X);
        }
        for (int i20 = 0; i20 < this.W.size(); i20++) {
            w1Var.s(((Integer) this.W.get(i20)).intValue());
        }
        for (int i21 = 0; i21 < this.Y.size(); i21++) {
            w1Var.t(23, (iq.a) this.Y.get(i21));
        }
        if (this.Z.size() > 0) {
            w1Var.A(194);
            w1Var.A(this.a0);
        }
        for (int i22 = 0; i22 < this.Z.size(); i22++) {
            w1Var.s(((Integer) this.Z.get(i22)).intValue());
        }
        if ((this.f7146i & 64) == 64) {
            w1Var.t(30, this.f7139b0);
        }
        for (int i23 = 0; i23 < this.f7140c0.size(); i23++) {
            w1Var.r(31, ((Integer) this.f7140c0.get(i23)).intValue());
        }
        if ((this.f7146i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            w1Var.t(32, this.f7141d0);
        }
        for (int i24 = 0; i24 < this.f7143e0.size(); i24++) {
            w1Var.t(33, (iq.a) this.f7143e0.get(i24));
        }
        rVar.v(19000, w1Var);
        w1Var.w(this.f7142e);
    }

    public final void p() {
        this.f7147v = 6;
        this.f7148w = 0;
        this.f7149x = 0;
        List list = Collections.EMPTY_LIST;
        this.f7150y = list;
        this.E = list;
        this.F = list;
        this.H = list;
        this.J = list;
        this.K = list;
        this.M = list;
        this.N = list;
        this.O = list;
        this.P = list;
        this.Q = list;
        this.R = list;
        this.T = 0;
        this.U = s0.Q;
        this.V = 0;
        this.W = list;
        this.Y = list;
        this.Z = list;
        this.f7139b0 = y0.f7301y;
        this.f7140c0 = list;
        this.f7141d0 = f1.f7088w;
        this.f7143e0 = list;
    }

    public k() {
        this.G = -1;
        this.I = -1;
        this.L = -1;
        this.S = -1;
        this.X = -1;
        this.a0 = -1;
        this.f7144f0 = (byte) -1;
        this.f7145g0 = -1;
        this.f7142e = iq.d.f12197d;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v2 */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v8, types: [boolean] */
    /* JADX WARN: Type inference failed for: r7v10 */
    /* JADX WARN: Type inference failed for: r7v12 */
    /* JADX WARN: Type inference failed for: r7v14 */
    /* JADX WARN: Type inference failed for: r7v16 */
    /* JADX WARN: Type inference failed for: r7v18 */
    /* JADX WARN: Type inference failed for: r7v20 */
    /* JADX WARN: Type inference failed for: r7v22 */
    /* JADX WARN: Type inference failed for: r7v24 */
    /* JADX WARN: Type inference failed for: r7v26 */
    /* JADX WARN: Type inference failed for: r7v28 */
    /* JADX WARN: Type inference failed for: r7v30 */
    /* JADX WARN: Type inference failed for: r7v32 */
    /* JADX WARN: Type inference failed for: r7v34 */
    /* JADX WARN: Type inference failed for: r7v36 */
    /* JADX WARN: Type inference failed for: r7v38 */
    /* JADX WARN: Type inference failed for: r7v4 */
    /* JADX WARN: Type inference failed for: r7v40 */
    /* JADX WARN: Type inference failed for: r7v42 */
    /* JADX WARN: Type inference failed for: r7v44 */
    /* JADX WARN: Type inference failed for: r7v46 */
    /* JADX WARN: Type inference failed for: r7v48 */
    /* JADX WARN: Type inference failed for: r7v50 */
    /* JADX WARN: Type inference failed for: r7v6 */
    /* JADX WARN: Type inference failed for: r7v8 */
    public k(iq.e eVar, iq.g gVar) {
        char c6;
        char c8;
        this.G = -1;
        this.I = -1;
        this.L = -1;
        this.S = -1;
        this.X = -1;
        this.a0 = -1;
        this.f7144f0 = (byte) -1;
        this.f7145g0 = -1;
        p();
        iq.c k = iq.d.k();
        boolean z5 = true;
        w1 m5 = w1.m(k, 1);
        boolean z6 = false;
        char c10 = 0;
        while (true) {
            boolean z7 = z5;
            ?? r42 = 64;
            char c11 = '@';
            if (!z6) {
                try {
                    int n6 = eVar.n();
                    switch (n6) {
                        case 0:
                            z6 = z7;
                            z5 = z7;
                            c10 = c10;
                        case 8:
                            this.f7146i |= 1;
                            this.f7147v = eVar.f();
                            z5 = z7;
                            c10 = c10;
                        case 16:
                            int i5 = (c10 == true ? 1 : 0) & 32;
                            c10 = c10;
                            if (i5 != 32) {
                                this.F = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | ' ';
                            }
                            this.F.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case 18:
                            int d6 = eVar.d(eVar.k());
                            int i6 = (c10 == true ? 1 : 0) & 32;
                            c10 = c10;
                            if (i6 != 32) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.F = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | ' ';
                                }
                            }
                            while (eVar.b() > 0) {
                                this.F.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d6);
                            z5 = z7;
                            c10 = c10;
                        case 24:
                            this.f7146i |= 2;
                            this.f7148w = eVar.f();
                            z5 = z7;
                            c10 = c10;
                        case 32:
                            this.f7146i |= 4;
                            this.f7149x = eVar.f();
                            z5 = z7;
                            c10 = c10;
                        case 42:
                            int i10 = (c10 == true ? 1 : 0) & 8;
                            c10 = c10;
                            if (i10 != 8) {
                                this.f7150y = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | '\b';
                            }
                            this.f7150y.add(eVar.g(x0.K, gVar));
                            z5 = z7;
                            c10 = c10;
                        case 50:
                            int i11 = (c10 == true ? 1 : 0) & 16;
                            c10 = c10;
                            if (i11 != 16) {
                                this.E = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 16;
                            }
                            this.E.add(eVar.g(s0.R, gVar));
                            z5 = z7;
                            c10 = c10;
                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                            int i12 = (c10 == true ? 1 : 0) & 64;
                            c10 = c10;
                            if (i12 != 64) {
                                this.H = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | '@';
                            }
                            this.H.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                            int d7 = eVar.d(eVar.k());
                            int i13 = (c10 == true ? 1 : 0) & 64;
                            c10 = c10;
                            if (i13 != 64) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.H = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | '@';
                                }
                            }
                            while (eVar.b() > 0) {
                                this.H.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d7);
                            z5 = z7;
                            c10 = c10;
                        case 66:
                            int i14 = (c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                            c10 = c10;
                            if (i14 != 512) {
                                this.M = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 512;
                            }
                            this.M.add(eVar.g(n.H, gVar));
                            z5 = z7;
                            c10 = c10;
                        case 74:
                            int i15 = (c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                            c10 = c10;
                            if (i15 != 1024) {
                                this.N = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 1024;
                            }
                            this.N.add(eVar.g(a0.T, gVar));
                            z5 = z7;
                            c10 = c10;
                        case 82:
                            int i16 = (c10 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_MOVED;
                            c10 = c10;
                            if (i16 != 2048) {
                                this.O = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 2048;
                            }
                            this.O.add(eVar.g(i0.T, gVar));
                            z5 = z7;
                            c10 = c10;
                        case 90:
                            int i17 = (c10 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                            c10 = c10;
                            if (i17 != 4096) {
                                this.P = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 4096;
                            }
                            this.P.add(eVar.g(u0.N, gVar));
                            z5 = z7;
                            c10 = c10;
                        case 106:
                            int i18 = (c10 == true ? 1 : 0) & 8192;
                            c10 = c10;
                            if (i18 != 8192) {
                                this.Q = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 8192;
                            }
                            this.Q.add(eVar.g(v.E, gVar));
                            z5 = z7;
                            c10 = c10;
                        case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                            int i19 = (c10 == true ? 1 : 0) & 16384;
                            c10 = c10;
                            if (i19 != 16384) {
                                this.R = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 16384;
                            }
                            this.R.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case 130:
                            int d8 = eVar.d(eVar.k());
                            int i20 = (c10 == true ? 1 : 0) & 16384;
                            c10 = c10;
                            if (i20 != 16384) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.R = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | 16384;
                                }
                            }
                            while (eVar.b() > 0) {
                                this.R.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d8);
                            z5 = z7;
                            c10 = c10;
                        case 136:
                            this.f7146i |= 8;
                            this.T = eVar.f();
                            z5 = z7;
                            c10 = c10;
                        case MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH /* 146 */:
                            r0 e9 = (this.f7146i & 16) == 16 ? this.U.e() : null;
                            s0 s0Var = (s0) eVar.g(s0.R, gVar);
                            this.U = s0Var;
                            if (e9 != null) {
                                e9.j(s0Var);
                                this.U = e9.g();
                            }
                            this.f7146i |= 16;
                            z5 = z7;
                            c10 = c10;
                        case 152:
                            this.f7146i |= 32;
                            this.V = eVar.f();
                            z5 = z7;
                            c10 = c10;
                        case 162:
                            int i21 = (c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                            c10 = c10;
                            if (i21 != 128) {
                                this.J = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 128;
                            }
                            this.J.add(eVar.g(s0.R, gVar));
                            z5 = z7;
                            c10 = c10;
                        case 168:
                            int i22 = (c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                            c10 = c10;
                            if (i22 != 256) {
                                this.K = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | 256;
                            }
                            this.K.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case 170:
                            int d10 = eVar.d(eVar.k());
                            int i23 = (c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                            c10 = c10;
                            if (i23 != 256) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.K = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | 256;
                                }
                            }
                            while (eVar.b() > 0) {
                                this.K.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d10);
                            z5 = z7;
                            c10 = c10;
                        case 176:
                            int i24 = (c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.CONTROL;
                            c10 = c10;
                            if (i24 != 262144) {
                                this.W = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                            }
                            this.W.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case 178:
                            int d11 = eVar.d(eVar.k());
                            int i25 = (c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.CONTROL;
                            c10 = c10;
                            if (i25 != 262144) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.W = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                                }
                            }
                            while (eVar.b() > 0) {
                                this.W.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d11);
                            z5 = z7;
                            c10 = c10;
                        case 186:
                            int i26 = (c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.ALTERNATE;
                            c10 = c10;
                            if (i26 != 524288) {
                                this.Y = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                            }
                            this.Y.add(eVar.g(s0.R, gVar));
                            z5 = z7;
                            c10 = c10;
                        case JfifUtil.MARKER_SOFn /* 192 */:
                            int i27 = (c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.COMMAND;
                            c10 = c10;
                            if (i27 != 1048576) {
                                this.Z = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                            }
                            this.Z.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case 194:
                            int d12 = eVar.d(eVar.k());
                            int i28 = (c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.COMMAND;
                            c10 = c10;
                            if (i28 != 1048576) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.Z = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                                }
                            }
                            while (eVar.b() > 0) {
                                this.Z.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d12);
                            z5 = z7;
                            c10 = c10;
                        case 242:
                            g j = (this.f7146i & 64) == 64 ? this.f7139b0.j() : null;
                            y0 y0Var = (y0) eVar.g(y0.E, gVar);
                            this.f7139b0 = y0Var;
                            if (j != null) {
                                j.k(y0Var);
                                this.f7139b0 = j.g();
                            }
                            this.f7146i |= 64;
                            z5 = z7;
                            c10 = c10;
                        case 248:
                            int i29 = (c10 == true ? 1 : 0) & 4194304;
                            c10 = c10;
                            if (i29 != 4194304) {
                                this.f7140c0 = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                            }
                            this.f7140c0.add(Integer.valueOf(eVar.f()));
                            z5 = z7;
                            c10 = c10;
                        case androidx.recyclerview.widget.h0.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                            int d13 = eVar.d(eVar.k());
                            int i30 = (c10 == true ? 1 : 0) & 4194304;
                            c10 = c10;
                            if (i30 != 4194304) {
                                c10 = c10;
                                if (eVar.b() > 0) {
                                    this.f7140c0 = new ArrayList();
                                    c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                                }
                            }
                            while (eVar.b() > 0) {
                                this.f7140c0.add(Integer.valueOf(eVar.f()));
                            }
                            eVar.c(d13);
                            z5 = z7;
                            c10 = c10;
                        case 258:
                            o i31 = (this.f7146i & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128 ? this.f7141d0.i() : null;
                            f1 f1Var = (f1) eVar.g(f1.f7089x, gVar);
                            this.f7141d0 = f1Var;
                            if (i31 != null) {
                                i31.n(f1Var);
                                this.f7141d0 = i31.j();
                            }
                            this.f7146i |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                            z5 = z7;
                            c10 = c10;
                        case 266:
                            int i32 = (c10 == true ? 1 : 0) & PointerEventHelper.X_FLAG_SUPPORTS_HOVER;
                            c10 = c10;
                            if (i32 != 16777216) {
                                this.f7143e0 = new ArrayList();
                                c10 = (c10 == true ? 1 : 0) | CharCompanionObject.MIN_VALUE;
                            }
                            c6 = 0;
                            try {
                                try {
                                    this.f7143e0.add(eVar.g(l.E, gVar));
                                    z5 = z7;
                                    c10 = c10;
                                } catch (Throwable th2) {
                                    th = th2;
                                    c8 = c10;
                                    if ((c8 & ' ') == 32) {
                                        this.F = Collections.unmodifiableList(this.F);
                                    }
                                    if ((c8 & '\b') == 8) {
                                        this.f7150y = Collections.unmodifiableList(this.f7150y);
                                    }
                                    if ((c8 & 16) == 16) {
                                        this.E = Collections.unmodifiableList(this.E);
                                    }
                                    if ((c8 & '@') == c11) {
                                        this.H = Collections.unmodifiableList(this.H);
                                    }
                                    if ((c8 & 512) == 512) {
                                        this.M = Collections.unmodifiableList(this.M);
                                    }
                                    if ((c8 & 1024) == 1024) {
                                        this.N = Collections.unmodifiableList(this.N);
                                    }
                                    if ((c8 & 2048) == 2048) {
                                        this.O = Collections.unmodifiableList(this.O);
                                    }
                                    if ((c8 & 4096) == 4096) {
                                        this.P = Collections.unmodifiableList(this.P);
                                    }
                                    if ((c8 & 8192) == 8192) {
                                        this.Q = Collections.unmodifiableList(this.Q);
                                    }
                                    if ((c8 & 16384) == 16384) {
                                        this.R = Collections.unmodifiableList(this.R);
                                    }
                                    if ((c8 & 128) == 128) {
                                        this.J = Collections.unmodifiableList(this.J);
                                    }
                                    if ((c8 & 256) == 256) {
                                        this.K = Collections.unmodifiableList(this.K);
                                    }
                                    if ((c8 & CharCompanionObject.MIN_VALUE) == 262144) {
                                        this.W = Collections.unmodifiableList(this.W);
                                    }
                                    if ((c8 & CharCompanionObject.MIN_VALUE) == 524288) {
                                        this.Y = Collections.unmodifiableList(this.Y);
                                    }
                                    if ((c8 & CharCompanionObject.MIN_VALUE) == 1048576) {
                                        this.Z = Collections.unmodifiableList(this.Z);
                                    }
                                    if ((c8 & CharCompanionObject.MIN_VALUE) == 4194304) {
                                        this.f7140c0 = Collections.unmodifiableList(this.f7140c0);
                                    }
                                    if ((c8 & c6) == c6) {
                                        this.f7143e0 = Collections.unmodifiableList(this.f7143e0);
                                    }
                                    try {
                                        m5.l();
                                    } catch (IOException unused) {
                                    } catch (Throwable th3) {
                                        this.f7142e = k.g();
                                        throw th3;
                                    }
                                    this.f7142e = k.g();
                                    m();
                                    throw th;
                                }
                            } catch (iq.q e10) {
                                e = e10;
                                e.f12236d = this;
                                throw e;
                            } catch (IOException e11) {
                                e = e11;
                                iq.q qVar = new iq.q(e.getMessage());
                                qVar.f12236d = this;
                                throw qVar;
                            }
                        default:
                            r42 = n(eVar, m5, gVar, n6);
                            if (r42 != 0) {
                                z5 = z7;
                                c10 = c10;
                            }
                            z6 = z7;
                            z5 = z7;
                            c10 = c10;
                    }
                } catch (iq.q e12) {
                    e = e12;
                } catch (IOException e13) {
                    e = e13;
                } catch (Throwable th4) {
                    th = th4;
                    c6 = 0;
                    c11 = r42;
                    c8 = c10;
                }
            } else {
                if (((c10 == true ? 1 : 0) & 32) == 32) {
                    this.F = Collections.unmodifiableList(this.F);
                }
                if (((c10 == true ? 1 : 0) & 8) == 8) {
                    this.f7150y = Collections.unmodifiableList(this.f7150y);
                }
                if (((c10 == true ? 1 : 0) & 16) == 16) {
                    this.E = Collections.unmodifiableList(this.E);
                }
                if (((c10 == true ? 1 : 0) & 64) == 64) {
                    this.H = Collections.unmodifiableList(this.H);
                }
                if (((c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
                    this.M = Collections.unmodifiableList(this.M);
                }
                if (((c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
                    this.N = Collections.unmodifiableList(this.N);
                }
                if (((c10 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_MOVED) == 2048) {
                    this.O = Collections.unmodifiableList(this.O);
                }
                if (((c10 == true ? 1 : 0) & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 4096) {
                    this.P = Collections.unmodifiableList(this.P);
                }
                if (((c10 == true ? 1 : 0) & 8192) == 8192) {
                    this.Q = Collections.unmodifiableList(this.Q);
                }
                if (((c10 == true ? 1 : 0) & 16384) == 16384) {
                    this.R = Collections.unmodifiableList(this.R);
                }
                if (((c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
                    this.J = Collections.unmodifiableList(this.J);
                }
                if (((c10 == true ? 1 : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
                    this.K = Collections.unmodifiableList(this.K);
                }
                if (((c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.CONTROL) == 262144) {
                    this.W = Collections.unmodifiableList(this.W);
                }
                if (((c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.ALTERNATE) == 524288) {
                    this.Y = Collections.unmodifiableList(this.Y);
                }
                if (((c10 == true ? 1 : 0) & KeyCommandDescriptor.ModifierFlags.COMMAND) == 1048576) {
                    this.Z = Collections.unmodifiableList(this.Z);
                }
                if (((c10 == true ? 1 : 0) & 4194304) == 4194304) {
                    this.f7140c0 = Collections.unmodifiableList(this.f7140c0);
                }
                if (((c10 == true ? 1 : 0) & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) == 16777216) {
                    this.f7143e0 = Collections.unmodifiableList(this.f7143e0);
                }
                try {
                    m5.l();
                } catch (IOException unused2) {
                } catch (Throwable th5) {
                    this.f7142e = k.g();
                    throw th5;
                }
                this.f7142e = k.g();
                m();
                return;
            }
        }
    }
}
