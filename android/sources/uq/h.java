package uq;

import java.util.Set;
import kotlin.collections.c1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h {

    /* renamed from: c, reason: collision with root package name */
    public static final Set f19014c;
    public final j a;

    /* renamed from: b, reason: collision with root package name */
    public final xq.j f19015b;

    static {
        hq.c topLevelFqName = fp.o.f8880c.g();
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        f19014c = c1.b(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()));
    }

    public h(j components) {
        Intrinsics.checkNotNullParameter(components, "components");
        this.a = components;
        this.f19015b = components.a.d(new aq.a(19, this));
    }

    public final ip.f a(hq.b classId, e eVar) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        return (ip.f) this.f19015b.invoke(new g(classId, eVar));
    }
}
