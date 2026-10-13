package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class q extends iq.i implements iq.u {

    /* renamed from: e, reason: collision with root package name */
    public int f7211e;

    /* renamed from: i, reason: collision with root package name */
    public r f7212i;

    /* renamed from: v, reason: collision with root package name */
    public List f7213v;

    /* renamed from: w, reason: collision with root package name */
    public y f7214w;

    /* renamed from: x, reason: collision with root package name */
    public s f7215x;

    public static q g() {
        q qVar = new q();
        qVar.f7212i = r.RETURNS_CONSTANT;
        qVar.f7213v = Collections.EMPTY_LIST;
        qVar.f7214w = y.I;
        qVar.f7215x = s.AT_MOST_ONCE;
        return qVar;
    }

    @Override // iq.i
    public final iq.a c() {
        t f2 = f();
        if (f2.b()) {
            return f2;
        }
        throw new ai.k();
    }

    public final Object clone() {
        q g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        t tVar = null;
        try {
            try {
                t.G.getClass();
                h(new t(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                t tVar2 = (t) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    tVar = tVar2;
                    if (tVar != null) {
                        h(tVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (tVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((t) nVar);
        return this;
    }

    public final t f() {
        t tVar = new t(this);
        int i5 = this.f7211e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        tVar.f7245i = this.f7212i;
        if ((i5 & 2) == 2) {
            this.f7213v = Collections.unmodifiableList(this.f7213v);
            this.f7211e &= -3;
        }
        tVar.f7246v = this.f7213v;
        if ((i5 & 4) == 4) {
            i6 |= 2;
        }
        tVar.f7247w = this.f7214w;
        if ((i5 & 8) == 8) {
            i6 |= 4;
        }
        tVar.f7248x = this.f7215x;
        tVar.f7244e = i6;
        return tVar;
    }

    public final void h(t tVar) {
        y yVar;
        if (tVar == t.F) {
            return;
        }
        if ((tVar.f7244e & 1) == 1) {
            r rVar = tVar.f7245i;
            rVar.getClass();
            this.f7211e = 1 | this.f7211e;
            this.f7212i = rVar;
        }
        if (!tVar.f7246v.isEmpty()) {
            if (this.f7213v.isEmpty()) {
                this.f7213v = tVar.f7246v;
                this.f7211e &= -3;
            } else {
                if ((this.f7211e & 2) != 2) {
                    this.f7213v = new ArrayList(this.f7213v);
                    this.f7211e |= 2;
                }
                this.f7213v.addAll(tVar.f7246v);
            }
        }
        if ((tVar.f7244e & 2) == 2) {
            y yVar2 = tVar.f7247w;
            if ((this.f7211e & 4) != 4 || (yVar = this.f7214w) == y.I) {
                this.f7214w = yVar2;
            } else {
                w g6 = w.g();
                g6.h(yVar);
                g6.h(yVar2);
                this.f7214w = g6.f();
            }
            this.f7211e |= 4;
        }
        if ((tVar.f7244e & 4) == 4) {
            s sVar = tVar.f7248x;
            sVar.getClass();
            this.f7211e |= 8;
            this.f7215x = sVar;
        }
        this.f12211d = this.f12211d.b(tVar.f7243d);
    }
}
