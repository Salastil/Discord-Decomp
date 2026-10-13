package rq;

import cp.d0;
import java.util.Collection;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.l0;

/* loaded from: classes3.dex */
public abstract class h extends p {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f17544d = {com.discord.chat.bridge.botuikit.a.o(h.class, "allDescriptors", "getAllDescriptors()Ljava/util/List;", 0)};

    /* renamed from: b, reason: collision with root package name */
    public final lp.b f17545b;

    /* renamed from: c, reason: collision with root package name */
    public final xq.i f17546c;

    public h(xq.l storageManager, lp.b containingClass) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(containingClass, "containingClass");
        this.f17545b = containingClass;
        d0 d0Var = new d0(17, this);
        storageManager.getClass();
        this.f17546c = new xq.i(storageManager, d0Var);
    }

    @Override // rq.p, rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        List list = (List) ys.d.O(this.f17546c, f17544d[0]);
        if (list.isEmpty()) {
            return m0.f13512d;
        }
        ir.h hVar = new ir.h();
        for (Object obj : list) {
            if ((obj instanceof ip.m0) && Intrinsics.areEqual(((ip.m0) obj).getName(), name)) {
                hVar.add(obj);
            }
        }
        return hVar;
    }

    @Override // rq.p, rq.q
    public final Collection e(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        if (!kindFilter.a(f.f17535n.f17541b)) {
            return m0.f13512d;
        }
        return (List) ys.d.O(this.f17546c, f17544d[0]);
    }

    @Override // rq.p, rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        List list = (List) ys.d.O(this.f17546c, f17544d[0]);
        if (list.isEmpty()) {
            return m0.f13512d;
        }
        ir.h hVar = new ir.h();
        for (Object obj : list) {
            if ((obj instanceof l0) && Intrinsics.areEqual(((l0) obj).getName(), name)) {
                hVar.add(obj);
            }
        }
        return hVar;
    }

    public abstract List h();
}
