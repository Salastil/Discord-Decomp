package zp;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import kotlin.Pair;
import kotlin.collections.IndexedValue;
import kotlin.collections.d0;
import kotlin.collections.q0;
import kotlin.collections.u0;
import kotlin.collections.v;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f21375b;

    /* renamed from: c, reason: collision with root package name */
    public Pair f21376c;

    public p(io.sentry.internal.debugmeta.c cVar, String functionName, String str) {
        Intrinsics.checkNotNullParameter(functionName, "functionName");
        this.a = str;
        this.f21375b = new ArrayList();
        this.f21376c = new Pair("V", null);
    }

    public final void a(String type, d... qualifiers) {
        r rVar;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(qualifiers, "qualifiers");
        if (qualifiers.length == 0) {
            rVar = null;
        } else {
            Intrinsics.checkNotNullParameter(qualifiers, "<this>");
            v vVar = new v(new h8.a(5, qualifiers));
            int a = u0.a(d0.l(vVar, 10));
            if (a < 16) {
                a = 16;
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap(a);
            Iterator it = vVar.iterator();
            while (true) {
                q0 q0Var = (q0) it;
                if (!q0Var.f13519e.hasNext()) {
                    break;
                }
                IndexedValue indexedValue = (IndexedValue) q0Var.next();
                linkedHashMap.put(Integer.valueOf(indexedValue.a), (d) indexedValue.f13483b);
            }
            rVar = new r(linkedHashMap);
        }
        this.f21375b.add(new Pair(type, rVar));
    }

    public final void b(String type, d... qualifiers) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(qualifiers, "qualifiers");
        Intrinsics.checkNotNullParameter(qualifiers, "<this>");
        v vVar = new v(new h8.a(5, qualifiers));
        int a = u0.a(d0.l(vVar, 10));
        if (a < 16) {
            a = 16;
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap(a);
        Iterator it = vVar.iterator();
        while (true) {
            q0 q0Var = (q0) it;
            if (!q0Var.f13519e.hasNext()) {
                this.f21376c = new Pair(type, new r(linkedHashMap));
                return;
            } else {
                IndexedValue indexedValue = (IndexedValue) q0Var.next();
                linkedHashMap.put(Integer.valueOf(indexedValue.a), (d) indexedValue.f13483b);
            }
        }
    }

    public final void c(pq.c type) {
        Intrinsics.checkNotNullParameter(type, "type");
        String c6 = type.c();
        Intrinsics.checkNotNullExpressionValue(c6, "getDesc(...)");
        this.f21376c = new Pair(c6, null);
    }
}
