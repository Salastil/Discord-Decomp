package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class w extends iq.i implements iq.u {
    public List E;
    public List F;

    /* renamed from: e, reason: collision with root package name */
    public int f7272e;

    /* renamed from: i, reason: collision with root package name */
    public int f7273i;

    /* renamed from: v, reason: collision with root package name */
    public int f7274v;

    /* renamed from: w, reason: collision with root package name */
    public x f7275w;

    /* renamed from: x, reason: collision with root package name */
    public s0 f7276x;

    /* renamed from: y, reason: collision with root package name */
    public int f7277y;

    public static w g() {
        w wVar = new w();
        wVar.f7275w = x.TRUE;
        wVar.f7276x = s0.Q;
        List list = Collections.EMPTY_LIST;
        wVar.E = list;
        wVar.F = list;
        return wVar;
    }

    @Override // iq.i
    public final iq.a c() {
        y f2 = f();
        if (f2.b()) {
            return f2;
        }
        throw new ai.k();
    }

    public final Object clone() {
        w g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        y yVar = null;
        try {
            try {
                y.J.getClass();
                h(new y(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                y yVar2 = (y) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    yVar = yVar2;
                    if (yVar != null) {
                        h(yVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (yVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((y) nVar);
        return this;
    }

    public final y f() {
        y yVar = new y(this);
        int i5 = this.f7272e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        yVar.f7296i = this.f7273i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        yVar.f7297v = this.f7274v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        yVar.f7298w = this.f7275w;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        yVar.f7299x = this.f7276x;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        yVar.f7300y = this.f7277y;
        if ((i5 & 32) == 32) {
            this.E = Collections.unmodifiableList(this.E);
            this.f7272e &= -33;
        }
        yVar.E = this.E;
        if ((this.f7272e & 64) == 64) {
            this.F = Collections.unmodifiableList(this.F);
            this.f7272e &= -65;
        }
        yVar.F = this.F;
        yVar.f7295e = i6;
        return yVar;
    }

    public final void h(y yVar) {
        s0 s0Var;
        if (yVar == y.I) {
            return;
        }
        int i5 = yVar.f7295e;
        if ((i5 & 1) == 1) {
            int i6 = yVar.f7296i;
            this.f7272e = 1 | this.f7272e;
            this.f7273i = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = yVar.f7297v;
            this.f7272e = 2 | this.f7272e;
            this.f7274v = i10;
        }
        if ((i5 & 4) == 4) {
            x xVar = yVar.f7298w;
            xVar.getClass();
            this.f7272e = 4 | this.f7272e;
            this.f7275w = xVar;
        }
        if ((yVar.f7295e & 8) == 8) {
            s0 s0Var2 = yVar.f7299x;
            if ((this.f7272e & 8) != 8 || (s0Var = this.f7276x) == s0.Q) {
                this.f7276x = s0Var2;
            } else {
                r0 q5 = s0.q(s0Var);
                q5.j(s0Var2);
                this.f7276x = q5.g();
            }
            this.f7272e |= 8;
        }
        if ((yVar.f7295e & 16) == 16) {
            int i11 = yVar.f7300y;
            this.f7272e = 16 | this.f7272e;
            this.f7277y = i11;
        }
        if (!yVar.E.isEmpty()) {
            if (this.E.isEmpty()) {
                this.E = yVar.E;
                this.f7272e &= -33;
            } else {
                if ((this.f7272e & 32) != 32) {
                    this.E = new ArrayList(this.E);
                    this.f7272e |= 32;
                }
                this.E.addAll(yVar.E);
            }
        }
        if (!yVar.F.isEmpty()) {
            if (this.F.isEmpty()) {
                this.F = yVar.F;
                this.f7272e &= -65;
            } else {
                if ((this.f7272e & 64) != 64) {
                    this.F = new ArrayList(this.F);
                    this.f7272e |= 64;
                }
                this.F.addAll(yVar.F);
            }
        }
        this.f12211d = this.f12211d.b(yVar.f7294d);
    }
}
