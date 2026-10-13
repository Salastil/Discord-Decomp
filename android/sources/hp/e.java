package hp;

import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class e implements ir.b {

    /* renamed from: d, reason: collision with root package name */
    public static final e f10159d = new e();

    public static ip.f a(ip.f readOnly) {
        Intrinsics.checkNotNullParameter(readOnly, "readOnly");
        hq.d g6 = kq.e.g(readOnly);
        String str = d.a;
        hq.c cVar = (hq.c) d.k.get(g6);
        if (cVar != null) {
            ip.f j = oq.e.e(readOnly).j(cVar);
            Intrinsics.checkNotNullExpressionValue(j, "getBuiltInClassByFqName(...)");
            return j;
        }
        throw new IllegalArgumentException("Given class " + readOnly + " is not a read-only collection");
    }

    public static ip.f b(hq.c fqName, fp.i builtIns) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        String str = d.a;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        hq.b bVar = (hq.b) d.f10154h.get(fqName.a);
        if (bVar != null) {
            return builtIns.j(bVar.a());
        }
        return null;
    }

    @Override // ir.b
    public Iterable c(Object obj) {
        KProperty[] kPropertyArr = o.f10183h;
        return ((ip.d) obj).a().i();
    }
}
