package fp;

import ip.f0;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import lp.c0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public abstract class t {
    public static final Set a;

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f8932b;

    /* renamed from: c, reason: collision with root package name */
    public static final HashMap f8933c;

    /* renamed from: d, reason: collision with root package name */
    public static final LinkedHashSet f8934d;

    static {
        s[] values = s.values();
        ArrayList arrayList = new ArrayList(values.length);
        for (s sVar : values) {
            arrayList.add(sVar.f8930e);
        }
        a = CollectionsKt.l0(arrayList);
        r[] values2 = r.values();
        ArrayList arrayList2 = new ArrayList(values2.length);
        for (r rVar : values2) {
            arrayList2.add(rVar.f8927d);
        }
        CollectionsKt.l0(arrayList2);
        f8932b = new HashMap();
        f8933c = new HashMap();
        v0.f(new Pair(r.f8922e, hq.e.e("ubyteArrayOf")), new Pair(r.f8923i, hq.e.e("ushortArrayOf")), new Pair(r.f8924v, hq.e.e("uintArrayOf")), new Pair(r.f8925w, hq.e.e("ulongArrayOf")));
        s[] values3 = s.values();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (s sVar2 : values3) {
            linkedHashSet.add(sVar2.f8931i.f());
        }
        f8934d = linkedHashSet;
        for (s sVar3 : s.values()) {
            HashMap hashMap = f8932b;
            hq.b bVar = sVar3.f8931i;
            hq.b bVar2 = sVar3.f8929d;
            hashMap.put(bVar, bVar2);
            f8933c.put(bVar2, sVar3.f8931i);
        }
    }

    public static final boolean a(y type) {
        ip.i descriptor;
        Intrinsics.checkNotNullParameter(type, "type");
        if (z0.l(type) || (descriptor = type.r0().a()) == null) {
            return false;
        }
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        ip.l h6 = descriptor.h();
        return (h6 instanceof f0) && Intrinsics.areEqual(((c0) ((f0) h6)).f14132x, p.f8915l) && a.contains(descriptor.getName());
    }
}
