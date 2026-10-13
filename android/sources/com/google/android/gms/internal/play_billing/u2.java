package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class u2 implements y2 {
    public final p1 a;

    public u2(a aVar, p1 p1Var) {
        this.a = p1Var;
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final void a(Object obj) {
        g3 g3Var = ((e2) obj).zzc;
        if (g3Var.f5744e) {
            g3Var.f5744e = false;
        }
        obj.getClass();
        throw new ClassCastException();
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final int b(p1 p1Var) {
        g3 g3Var = ((e2) p1Var).zzc;
        int i5 = g3Var.f5743d;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < g3Var.a; i10++) {
            int i11 = g3Var.f5741b[i10] >>> 3;
            u1 u1Var = (u1) g3Var.f5742c[i10];
            int S = w1.S(8);
            int S2 = w1.S(i11) + w1.S(16);
            int S3 = w1.S(24);
            int d6 = u1Var.d();
            i6 += S + S + S2 + com.discord.chat.bridge.botuikit.a.d(d6, d6, S3);
        }
        g3Var.f5743d = i6;
        return i6;
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final boolean c(e2 e2Var, e2 e2Var2) {
        return e2Var.zzc.equals(e2Var2.zzc);
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final boolean d(Object obj) {
        obj.getClass();
        throw new ClassCastException();
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final void e(Object obj, x1 x1Var) {
        obj.getClass();
        throw new ClassCastException();
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final void f(Object obj, Object obj2) {
        z2.o(obj, obj2);
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final e2 g() {
        p1 p1Var = this.a;
        return p1Var instanceof e2 ? ((e2) p1Var).n() : ((d2) ((e2) p1Var).j(5)).b();
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final int h(e2 e2Var) {
        return e2Var.zzc.hashCode();
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final void i(Object obj, byte[] bArr, int i5, int i6, s1 s1Var) {
        e2 e2Var = (e2) obj;
        if (e2Var.zzc == g3.f5740f) {
            e2Var.zzc = g3.b();
        }
        obj.getClass();
        throw new ClassCastException();
    }
}
