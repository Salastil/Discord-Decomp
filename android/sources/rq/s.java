package rq;

import ip.m0;
import java.util.Collection;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.l0;

/* loaded from: classes3.dex */
public final class s extends p {

    /* renamed from: f, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f17560f = {com.discord.chat.bridge.botuikit.a.o(s.class, "functions", "getFunctions()Ljava/util/List;", 0), com.discord.chat.bridge.botuikit.a.o(s.class, "properties", "getProperties()Ljava/util/List;", 0)};

    /* renamed from: b, reason: collision with root package name */
    public final wq.i f17561b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f17562c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f17563d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.i f17564e;

    public s(xq.l storageManager, wq.i containingClass, boolean z5) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(containingClass, "containingClass");
        this.f17561b = containingClass;
        this.f17562c = z5;
        ip.g gVar = ip.g.f12138d;
        r rVar = new r(this, 0);
        storageManager.getClass();
        this.f17563d = new xq.i(storageManager, rVar);
        this.f17564e = new xq.i(storageManager, new r(this, 1));
    }

    @Override // rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return null;
    }

    @Override // rq.p, rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        List list = (List) ys.d.O(this.f17564e, f17560f[1]);
        ir.h hVar = new ir.h();
        for (Object obj : list) {
            if (Intrinsics.areEqual(((m0) obj).getName(), name)) {
                hVar.add(obj);
            }
        }
        return hVar;
    }

    @Override // rq.p, rq.q
    public final Collection e(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        KProperty[] kPropertyArr = f17560f;
        return CollectionsKt.V((List) ys.d.O(this.f17563d, kPropertyArr[0]), (List) ys.d.O(this.f17564e, kPropertyArr[1]));
    }

    @Override // rq.p, rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        List list = (List) ys.d.O(this.f17563d, f17560f[0]);
        ir.h hVar = new ir.h();
        for (Object obj : list) {
            if (Intrinsics.areEqual(((l0) obj).getName(), name)) {
                hVar.add(obj);
            }
        }
        return hVar;
    }
}
