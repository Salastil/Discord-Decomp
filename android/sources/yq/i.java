package yq;

import java.util.Collection;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class i implements p0 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final xq.d f21041b;

    public i(xq.o storageManager) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        cp.d0 d0Var = new cp.d0(27, this);
        g gVar = new g(this, 0);
        xq.l lVar = (xq.l) storageManager;
        lVar.getClass();
        this.f21041b = new xq.d(lVar, d0Var, gVar);
    }

    public abstract Collection e();

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if ((obj instanceof p0) && obj.hashCode() == hashCode()) {
            p0 p0Var = (p0) obj;
            if (p0Var.getParameters().size() == getParameters().size()) {
                ip.i a = a();
                ip.i a10 = p0Var.a();
                if (a10 == null || ar.l.f(a) || kq.e.o(a) || ar.l.f(a10) || kq.e.o(a10)) {
                    return false;
                }
                return k(a10);
            }
        }
        return false;
    }

    public abstract y f();

    public Collection h(boolean z5) {
        return kotlin.collections.m0.f13512d;
    }

    public final int hashCode() {
        int i5 = this.a;
        if (i5 != 0) {
            return i5;
        }
        ip.i a = a();
        int identityHashCode = (ar.l.f(a) || kq.e.o(a)) ? System.identityHashCode(this) : kq.e.g(a).a.hashCode();
        this.a = identityHashCode;
        return identityHashCode;
    }

    public abstract ip.p0 i();

    @Override // yq.p0
    /* renamed from: j, reason: merged with bridge method [inline-methods] */
    public final List b() {
        return ((h) this.f21041b.invoke()).f21038b;
    }

    public abstract boolean k(ip.i iVar);

    public List l(List supertypes) {
        Intrinsics.checkNotNullParameter(supertypes, "supertypes");
        return supertypes;
    }

    public void m(y type) {
        Intrinsics.checkNotNullParameter(type, "type");
    }
}
