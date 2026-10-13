package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class m extends iq.j {
    public List E;

    /* renamed from: v, reason: collision with root package name */
    public int f7170v;

    /* renamed from: w, reason: collision with root package name */
    public int f7171w;

    /* renamed from: x, reason: collision with root package name */
    public List f7172x;

    /* renamed from: y, reason: collision with root package name */
    public List f7173y;

    public static m h() {
        m mVar = new m();
        mVar.f7171w = 6;
        List list = Collections.EMPTY_LIST;
        mVar.f7172x = list;
        mVar.f7173y = list;
        mVar.E = list;
        return mVar;
    }

    @Override // iq.i
    public final iq.a c() {
        n g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        m h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        n nVar = null;
        try {
            try {
                n.H.getClass();
                j(new n(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                n nVar2 = (n) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    nVar = nVar2;
                    if (nVar != null) {
                        j(nVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (nVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((n) nVar);
        return this;
    }

    public final n g() {
        n nVar = new n(this);
        int i5 = this.f7170v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        nVar.f7182v = this.f7171w;
        if ((i5 & 2) == 2) {
            this.f7172x = Collections.unmodifiableList(this.f7172x);
            this.f7170v &= -3;
        }
        nVar.f7183w = this.f7172x;
        if ((this.f7170v & 4) == 4) {
            this.f7173y = Collections.unmodifiableList(this.f7173y);
            this.f7170v &= -5;
        }
        nVar.f7184x = this.f7173y;
        if ((this.f7170v & 8) == 8) {
            this.E = Collections.unmodifiableList(this.E);
            this.f7170v &= -9;
        }
        nVar.f7185y = this.E;
        nVar.f7181i = i6;
        return nVar;
    }

    public final void j(n nVar) {
        if (nVar == n.G) {
            return;
        }
        if ((nVar.f7181i & 1) == 1) {
            int i5 = nVar.f7182v;
            this.f7170v = 1 | this.f7170v;
            this.f7171w = i5;
        }
        if (!nVar.f7183w.isEmpty()) {
            if (this.f7172x.isEmpty()) {
                this.f7172x = nVar.f7183w;
                this.f7170v &= -3;
            } else {
                if ((this.f7170v & 2) != 2) {
                    this.f7172x = new ArrayList(this.f7172x);
                    this.f7170v |= 2;
                }
                this.f7172x.addAll(nVar.f7183w);
            }
        }
        if (!nVar.f7184x.isEmpty()) {
            if (this.f7173y.isEmpty()) {
                this.f7173y = nVar.f7184x;
                this.f7170v &= -5;
            } else {
                if ((this.f7170v & 4) != 4) {
                    this.f7173y = new ArrayList(this.f7173y);
                    this.f7170v |= 4;
                }
                this.f7173y.addAll(nVar.f7184x);
            }
        }
        if (!nVar.f7185y.isEmpty()) {
            if (this.E.isEmpty()) {
                this.E = nVar.f7185y;
                this.f7170v &= -9;
            } else {
                if ((this.f7170v & 8) != 8) {
                    this.E = new ArrayList(this.E);
                    this.f7170v |= 8;
                }
                this.E.addAll(nVar.f7185y);
            }
        }
        f(nVar);
        this.f12211d = this.f12211d.b(nVar.f7180e);
    }
}
