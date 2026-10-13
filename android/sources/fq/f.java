package fq;

import iq.n;
import iq.q;
import iq.u;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class f extends iq.i implements u {

    /* renamed from: e, reason: collision with root package name */
    public int f8966e;

    /* renamed from: i, reason: collision with root package name */
    public List f8967i;

    /* renamed from: v, reason: collision with root package name */
    public List f8968v;

    @Override // iq.i
    public final iq.a c() {
        j f2 = f();
        f2.b();
        return f2;
    }

    public final Object clone() {
        f fVar = new f();
        List list = Collections.EMPTY_LIST;
        fVar.f8967i = list;
        fVar.f8968v = list;
        fVar.g(f());
        return fVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        j jVar = null;
        try {
            try {
                j.E.getClass();
                g(new j(eVar, gVar));
                return this;
            } catch (q e9) {
                j jVar2 = (j) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    jVar = jVar2;
                    if (jVar != null) {
                        g(jVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (jVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(n nVar) {
        g((j) nVar);
        return this;
    }

    public final j f() {
        j jVar = new j(this);
        if ((this.f8966e & 1) == 1) {
            this.f8967i = Collections.unmodifiableList(this.f8967i);
            this.f8966e &= -2;
        }
        jVar.f8989e = this.f8967i;
        if ((this.f8966e & 2) == 2) {
            this.f8968v = Collections.unmodifiableList(this.f8968v);
            this.f8966e &= -3;
        }
        jVar.f8990i = this.f8968v;
        return jVar;
    }

    public final void g(j jVar) {
        if (jVar == j.f8987y) {
            return;
        }
        if (!jVar.f8989e.isEmpty()) {
            if (this.f8967i.isEmpty()) {
                this.f8967i = jVar.f8989e;
                this.f8966e &= -2;
            } else {
                if ((this.f8966e & 1) != 1) {
                    this.f8967i = new ArrayList(this.f8967i);
                    this.f8966e |= 1;
                }
                this.f8967i.addAll(jVar.f8989e);
            }
        }
        if (!jVar.f8990i.isEmpty()) {
            if (this.f8968v.isEmpty()) {
                this.f8968v = jVar.f8990i;
                this.f8966e &= -3;
            } else {
                if ((this.f8966e & 2) != 2) {
                    this.f8968v = new ArrayList(this.f8968v);
                    this.f8966e |= 2;
                }
                this.f8968v.addAll(jVar.f8990i);
            }
        }
        this.f12211d = this.f12211d.b(jVar.f8988d);
    }
}
