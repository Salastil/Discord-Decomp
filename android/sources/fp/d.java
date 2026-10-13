package fp;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d {
    public static final d a = new d();

    /* renamed from: b, reason: collision with root package name */
    public static final LinkedHashSet f8852b;

    static {
        Set<k> set = k.f8865w;
        ArrayList arrayList = new ArrayList(d0.l(set, 10));
        for (k primitiveType : set) {
            Intrinsics.checkNotNullParameter(primitiveType, "primitiveType");
            arrayList.add(p.f8915l.a(primitiveType.f8868d));
        }
        ArrayList W = CollectionsKt.W(CollectionsKt.W(CollectionsKt.W(arrayList, o.f8886f.g()), o.f8890h.g()), o.j.g());
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it = W.iterator();
        while (it.hasNext()) {
            hq.c topLevelFqName = (hq.c) it.next();
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            linkedHashSet.add(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()));
        }
        f8852b = linkedHashSet;
    }
}
