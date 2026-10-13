package aq;

import cq.e0;
import ip.p0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class h implements wq.k {

    /* renamed from: d, reason: collision with root package name */
    public final pq.b f2637d;

    /* renamed from: e, reason: collision with root package name */
    public final pq.b f2638e;

    /* renamed from: i, reason: collision with root package name */
    public final np.b f2639i;

    public h(np.b kotlinClass, e0 packageProto, gq.f nameResolver, wq.j abiStability) {
        Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
        Intrinsics.checkNotNullParameter(packageProto, "packageProto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(abiStability, "abiStability");
        pq.b className = new pq.b(pq.b.e(op.c.a(kotlinClass.a)));
        Intrinsics.checkNotNullExpressionValue(className, "byClassId(...)");
        aj.a aVar = kotlinClass.f15583b;
        pq.b bVar = null;
        String str = ((bq.a) aVar.f636d) != bq.a.F ? null : (String) aVar.f634b;
        if (str != null && str.length() > 0) {
            bVar = pq.b.c(str);
        }
        Intrinsics.checkNotNullParameter(className, "className");
        Intrinsics.checkNotNullParameter(packageProto, "packageProto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(abiStability, "abiStability");
        this.f2637d = className;
        this.f2638e = bVar;
        this.f2639i = kotlinClass;
        iq.m packageModuleName = fq.k.f9003m;
        Intrinsics.checkNotNullExpressionValue(packageModuleName, "packageModuleName");
        Integer num = (Integer) zk.a.q(packageProto, packageModuleName);
        if (num != null) {
            nameResolver.getString(num.intValue());
        }
    }

    public final hq.b a() {
        hq.c cVar;
        pq.b bVar = this.f2637d;
        String str = bVar.a;
        int lastIndexOf = str.lastIndexOf("/");
        if (lastIndexOf == -1) {
            cVar = hq.c.f10203c;
            if (cVar == null) {
                pq.b.a(9);
                throw null;
            }
        } else {
            cVar = new hq.c(str.substring(0, lastIndexOf).replace('/', '.'));
        }
        Intrinsics.checkNotNullExpressionValue(cVar, "getPackageFqName(...)");
        String d6 = bVar.d();
        Intrinsics.checkNotNullExpressionValue(d6, "getInternalName(...)");
        hq.e e9 = hq.e.e(StringsKt.W('/', d6, d6));
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new hq.b(cVar, e9);
    }

    @Override // ip.o0
    public final void c() {
        p0 NO_SOURCE_FILE = p0.f12153e;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE_FILE, "NO_SOURCE_FILE");
    }

    @Override // wq.k
    public final String p() {
        return s4.h.h(new StringBuilder("Class '"), a().a().a.a, '\'');
    }

    public final String toString() {
        return h.class.getSimpleName() + ": " + this.f2637d;
    }
}
