package rq;

import ip.y;
import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.collections.v;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import zo.c0;

/* loaded from: classes3.dex */
public final class a implements o {

    /* renamed from: b, reason: collision with root package name */
    public final String f17522b;

    /* renamed from: c, reason: collision with root package name */
    public final o[] f17523c;

    public a(String str, o[] oVarArr) {
        this.f17522b = str;
        this.f17523c = oVarArr;
    }

    @Override // rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ip.i iVar = null;
        for (o oVar : this.f17523c) {
            ip.i a = oVar.a(name, location);
            if (a != null) {
                if (!(a instanceof ip.j) || !((y) a).z()) {
                    return a;
                }
                if (iVar == null) {
                    iVar = a;
                }
            }
        }
        return iVar;
    }

    @Override // rq.o
    public final Set b() {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (o oVar : this.f17523c) {
            h0.o(linkedHashSet, oVar.b());
        }
        return linkedHashSet;
    }

    @Override // rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        o[] oVarArr = this.f17523c;
        int length = oVarArr.length;
        if (length == 0) {
            return m0.f13512d;
        }
        if (length == 1) {
            return oVarArr[0].c(name, location);
        }
        Collection collection = null;
        for (o oVar : oVarArr) {
            collection = ys.l.e(collection, oVar.c(name, location));
        }
        return collection == null ? o0.f13515d : collection;
    }

    @Override // rq.o
    public final Set d() {
        o[] oVarArr = this.f17523c;
        Intrinsics.checkNotNullParameter(oVarArr, "<this>");
        return c0.u(oVarArr.length == 0 ? m0.f13512d : new v(0, oVarArr));
    }

    @Override // rq.q
    public final Collection e(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        o[] oVarArr = this.f17523c;
        int length = oVarArr.length;
        if (length == 0) {
            return m0.f13512d;
        }
        if (length == 1) {
            return oVarArr[0].e(kindFilter, nameFilter);
        }
        Collection collection = null;
        for (o oVar : oVarArr) {
            collection = ys.l.e(collection, oVar.e(kindFilter, nameFilter));
        }
        return collection == null ? o0.f13515d : collection;
    }

    @Override // rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        o[] oVarArr = this.f17523c;
        int length = oVarArr.length;
        if (length == 0) {
            return m0.f13512d;
        }
        if (length == 1) {
            return oVarArr[0].f(name, location);
        }
        Collection collection = null;
        for (o oVar : oVarArr) {
            collection = ys.l.e(collection, oVar.f(name, location));
        }
        return collection == null ? o0.f13515d : collection;
    }

    @Override // rq.o
    public final Set g() {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (o oVar : this.f17523c) {
            h0.o(linkedHashSet, oVar.g());
        }
        return linkedHashSet;
    }

    public final String toString() {
        return this.f17522b;
    }
}
