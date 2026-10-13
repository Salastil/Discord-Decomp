package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.util.Iterator;
import java.util.Map;
import java.util.SortedMap;

/* loaded from: classes3.dex */
public final class w extends ks.a implements ks.j {
    private static final long serialVersionUID = 5589976208326940032L;

    /* renamed from: d, reason: collision with root package name */
    public final transient boolean f15382d;

    /* renamed from: e, reason: collision with root package name */
    public final transient x f15383e;

    public w(boolean z5, x xVar) {
        super(z5 ? "FIXED_DAY_PERIOD" : "APPROXIMATE_DAY_PERIOD");
        this.f15382d = z5;
        this.f15383e = xVar;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(7, this);
    }

    @Override // ks.d
    public final Object a() {
        if (this.f15382d) {
            return "pm";
        }
        x xVar = this.f15383e;
        return (String) xVar.f15393c.get((z0) xVar.f15393c.lastKey());
    }

    @Override // ks.j
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        throw new IllegalArgumentException("Day period element cannot be set.");
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        z0 z0Var = (z0) eVar.d(z0.M);
        if (this.f15382d) {
            return x.a(z0Var);
        }
        x xVar = x.f15391d;
        x xVar2 = this.f15383e;
        if (xVar2.c()) {
            Map d6 = x.d(xVar2.f15392b, xVar2.a);
            String str = (z0Var.v() && z0Var.f15411d % 24 == 0) ? "midnight" : z0Var.compareTo(z0.x(12)) == 0 ? "noon" : null;
            if (str != null && d6.containsKey(x.b(d6, ls.i0.f14236e, ls.y.f14250d, str))) {
                return str;
            }
        }
        SortedMap sortedMap = xVar2.f15393c;
        if (z0Var.f15411d == 24) {
            z0Var = z0.J;
        }
        z0 z0Var2 = (z0) sortedMap.lastKey();
        Iterator it = sortedMap.keySet().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            z0 z0Var3 = (z0) it.next();
            if (z0Var.compareTo(z0Var3) == 0) {
                z0Var2 = z0Var3;
                break;
            }
            if (z0Var.compareTo(z0Var3) < 0) {
                break;
            }
            z0Var2 = z0Var3;
        }
        return (String) xVar2.f15393c.get(z0Var2);
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        if (this.f15382d) {
            return "pm";
        }
        x xVar = this.f15383e;
        return (String) xVar.f15393c.get((z0) xVar.f15393c.lastKey());
    }

    @Override // ks.a
    public final ks.j f(ks.r rVar) {
        if (rVar.e(z0.M)) {
            return this;
        }
        return null;
    }

    @Override // ks.a
    public final boolean g(ks.a aVar) {
        return this.f15383e.equals(((w) aVar).f15383e);
    }

    @Override // ks.d
    public final Class getType() {
        return String.class;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.a
    public final String toString() {
        StringBuilder sb2 = new StringBuilder(32);
        sb2.append(name());
        sb2.append('@');
        sb2.append(this.f15383e);
        return sb2.toString();
    }

    @Override // ks.d
    public final Object v() {
        if (this.f15382d) {
            return "am";
        }
        x xVar = this.f15383e;
        return (String) xVar.f15393c.get((z0) xVar.f15393c.firstKey());
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}
