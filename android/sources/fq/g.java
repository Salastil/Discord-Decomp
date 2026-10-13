package fq;

import iq.n;
import iq.q;
import iq.u;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class g extends iq.i implements u {
    public List E;

    /* renamed from: e, reason: collision with root package name */
    public int f8969e;

    /* renamed from: i, reason: collision with root package name */
    public int f8970i;

    /* renamed from: v, reason: collision with root package name */
    public int f8971v;

    /* renamed from: w, reason: collision with root package name */
    public Object f8972w;

    /* renamed from: x, reason: collision with root package name */
    public h f8973x;

    /* renamed from: y, reason: collision with root package name */
    public List f8974y;

    public static g g() {
        g gVar = new g();
        gVar.f8970i = 1;
        gVar.f8972w = "";
        gVar.f8973x = h.NONE;
        List list = Collections.EMPTY_LIST;
        gVar.f8974y = list;
        gVar.E = list;
        return gVar;
    }

    @Override // iq.i
    public final iq.a c() {
        i f2 = f();
        f2.b();
        return f2;
    }

    public final Object clone() {
        g g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        i iVar = null;
        try {
            try {
                i.K.getClass();
                h(new i(eVar));
                return this;
            } catch (q e9) {
                i iVar2 = (i) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    iVar = iVar2;
                    if (iVar != null) {
                        h(iVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (iVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(n nVar) {
        h((i) nVar);
        return this;
    }

    public final i f() {
        i iVar = new i(this);
        int i5 = this.f8969e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        iVar.f8982i = this.f8970i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        iVar.f8983v = this.f8971v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        iVar.f8984w = this.f8972w;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        iVar.f8985x = this.f8973x;
        if ((i5 & 16) == 16) {
            this.f8974y = Collections.unmodifiableList(this.f8974y);
            this.f8969e &= -17;
        }
        iVar.f8986y = this.f8974y;
        if ((this.f8969e & 32) == 32) {
            this.E = Collections.unmodifiableList(this.E);
            this.f8969e &= -33;
        }
        iVar.F = this.E;
        iVar.f8981e = i6;
        return iVar;
    }

    public final void h(i iVar) {
        if (iVar == i.J) {
            return;
        }
        int i5 = iVar.f8981e;
        if ((i5 & 1) == 1) {
            int i6 = iVar.f8982i;
            this.f8969e = 1 | this.f8969e;
            this.f8970i = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = iVar.f8983v;
            this.f8969e = 2 | this.f8969e;
            this.f8971v = i10;
        }
        if ((i5 & 4) == 4) {
            this.f8969e |= 4;
            this.f8972w = iVar.f8984w;
        }
        if ((i5 & 8) == 8) {
            h hVar = iVar.f8985x;
            hVar.getClass();
            this.f8969e = 8 | this.f8969e;
            this.f8973x = hVar;
        }
        if (!iVar.f8986y.isEmpty()) {
            if (this.f8974y.isEmpty()) {
                this.f8974y = iVar.f8986y;
                this.f8969e &= -17;
            } else {
                if ((this.f8969e & 16) != 16) {
                    this.f8974y = new ArrayList(this.f8974y);
                    this.f8969e |= 16;
                }
                this.f8974y.addAll(iVar.f8986y);
            }
        }
        if (!iVar.F.isEmpty()) {
            if (this.E.isEmpty()) {
                this.E = iVar.F;
                this.f8969e &= -33;
            } else {
                if ((this.f8969e & 32) != 32) {
                    this.E = new ArrayList(this.E);
                    this.f8969e |= 32;
                }
                this.E.addAll(iVar.F);
            }
        }
        this.f12211d = this.f12211d.b(iVar.f8980d);
    }
}
