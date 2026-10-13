package gp;

import ip.a0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;
import lp.w;

/* loaded from: classes3.dex */
public final class a implements kp.c {
    public final xq.l a;

    /* renamed from: b, reason: collision with root package name */
    public final a0 f9421b;

    public a(xq.l storageManager, lp.a0 module) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "module");
        this.a = storageManager;
        this.f9421b = module;
    }

    @Override // kp.c
    public final boolean a(hq.c packageFqName, hq.e name) {
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(name, "name");
        String b10 = name.b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return (x.o(b10, "Function", false) || x.o(b10, "KFunction", false) || x.o(b10, "SuspendFunction", false) || x.o(b10, "KSuspendFunction", false)) && m.f9434c.a(packageFqName, b10) != null;
    }

    @Override // kp.c
    public final Collection b(hq.c packageFqName) {
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        return o0.f13515d;
    }

    @Override // kp.c
    public final ip.f c(hq.b classId) {
        hq.c cVar;
        l a;
        Intrinsics.checkNotNullParameter(classId, "classId");
        if (classId.f10202c || classId.g()) {
            return null;
        }
        String str = classId.f10201b.a.a;
        if (!StringsKt.D(str, "Function", false) || (a = m.f9434c.a((cVar = classId.a), str)) == null) {
            return null;
        }
        k kVar = a.a;
        int i5 = a.f9433b;
        List list = (List) ys.d.O(((w) this.f9421b.D(cVar)).f14195x, w.F[0]);
        ArrayList arrayList = new ArrayList();
        for (Object obj : list) {
            if (obj instanceof vq.c) {
                arrayList.add(obj);
            }
        }
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            it.next();
        }
        if (CollectionsKt.firstOrNull(arrayList2) == null) {
            return new c(this.a, (vq.c) CollectionsKt.K(arrayList), kVar, i5);
        }
        throw new ClassCastException();
    }
}
