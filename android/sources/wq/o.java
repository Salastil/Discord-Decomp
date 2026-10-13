package wq;

import com.google.android.gms.internal.play_billing.w1;
import cq.a0;
import cq.i0;
import cq.u0;
import java.io.ByteArrayOutputStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class o {
    public static final /* synthetic */ KProperty[] j = {com.discord.chat.bridge.botuikit.a.o(o.class, "functionNames", "getFunctionNames()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.o(o.class, "variableNames", "getVariableNames()Ljava/util/Set;", 0)};
    public final LinkedHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashMap f20019b;

    /* renamed from: c, reason: collision with root package name */
    public final LinkedHashMap f20020c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.e f20021d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.e f20022e;

    /* renamed from: f, reason: collision with root package name */
    public final xq.j f20023f;

    /* renamed from: g, reason: collision with root package name */
    public final xq.i f20024g;

    /* renamed from: h, reason: collision with root package name */
    public final xq.i f20025h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ p f20026i;

    public o(p pVar, List functionList, List propertyList, List typeAliasList) {
        Intrinsics.checkNotNullParameter(functionList, "functionList");
        Intrinsics.checkNotNullParameter(propertyList, "propertyList");
        Intrinsics.checkNotNullParameter(typeAliasList, "typeAliasList");
        this.f20026i = pVar;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Object obj : functionList) {
            hq.e u5 = nt.a.u((eq.g) pVar.f20028b.f3399i, ((a0) ((iq.a) obj)).f7008x);
            Object obj2 = linkedHashMap.get(u5);
            if (obj2 == null) {
                obj2 = new ArrayList();
                linkedHashMap.put(u5, obj2);
            }
            ((List) obj2).add(obj);
        }
        this.a = c(linkedHashMap);
        p pVar2 = this.f20026i;
        LinkedHashMap linkedHashMap2 = new LinkedHashMap();
        for (Object obj3 : propertyList) {
            hq.e u6 = nt.a.u((eq.g) pVar2.f20028b.f3399i, ((i0) ((iq.a) obj3)).f7125x);
            Object obj4 = linkedHashMap2.get(u6);
            if (obj4 == null) {
                obj4 = new ArrayList();
                linkedHashMap2.put(u6, obj4);
            }
            ((List) obj4).add(obj3);
        }
        this.f20019b = c(linkedHashMap2);
        ((uq.j) this.f20026i.f20028b.f3398e).f19017c.getClass();
        p pVar3 = this.f20026i;
        LinkedHashMap linkedHashMap3 = new LinkedHashMap();
        for (Object obj5 : typeAliasList) {
            hq.e u10 = nt.a.u((eq.g) pVar3.f20028b.f3399i, ((u0) ((iq.a) obj5)).f7259w);
            Object obj6 = linkedHashMap3.get(u10);
            if (obj6 == null) {
                obj6 = new ArrayList();
                linkedHashMap3.put(u10, obj6);
            }
            ((List) obj6).add(obj5);
        }
        this.f20020c = c(linkedHashMap3);
        this.f20021d = ((uq.j) this.f20026i.f20028b.f3398e).a.c(new m(this, 0));
        this.f20022e = ((uq.j) this.f20026i.f20028b.f3398e).a.c(new m(this, 1));
        this.f20023f = ((uq.j) this.f20026i.f20028b.f3398e).a.d(new m(this, 2));
        p pVar4 = this.f20026i;
        xq.l lVar = ((uq.j) pVar4.f20028b.f3398e).a;
        n nVar = new n(this, pVar4, 0);
        lVar.getClass();
        this.f20024g = new xq.i(lVar, nVar);
        p pVar5 = this.f20026i;
        xq.l lVar2 = ((uq.j) pVar5.f20028b.f3398e).a;
        n nVar2 = new n(this, pVar5, 1);
        lVar2.getClass();
        this.f20025h = new xq.i(lVar2, nVar2);
    }

    public static LinkedHashMap c(LinkedHashMap linkedHashMap) {
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(kotlin.collections.u0.a(linkedHashMap.size()));
        for (Map.Entry entry : linkedHashMap.entrySet()) {
            Object key = entry.getKey();
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            Iterable<iq.a> iterable = (Iterable) entry.getValue();
            ArrayList arrayList = new ArrayList(d0.l(iterable, 10));
            for (iq.a aVar : iterable) {
                int c6 = aVar.c();
                int h6 = w1.h(c6) + c6;
                if (h6 > 4096) {
                    h6 = 4096;
                }
                w1 m5 = w1.m(byteArrayOutputStream, h6);
                m5.A(c6);
                aVar.f(m5);
                m5.l();
                arrayList.add(Unit.a);
            }
            linkedHashMap2.put(key, byteArrayOutputStream.toByteArray());
        }
        return linkedHashMap2;
    }

    public final Collection a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return !((Set) ys.d.O(this.f20024g, j[0])).contains(name) ? m0.f13512d : (Collection) this.f20021d.invoke(name);
    }

    public final Collection b(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return !((Set) ys.d.O(this.f20025h, j[1])).contains(name) ? m0.f13512d : (Collection) this.f20022e.invoke(name);
    }
}
