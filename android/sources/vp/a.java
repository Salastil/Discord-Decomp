package vp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.u0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a implements c {
    public final op.n a;

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f19456b;

    /* renamed from: c, reason: collision with root package name */
    public final aq.a f19457c;

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashMap f19458d;

    /* renamed from: e, reason: collision with root package name */
    public final LinkedHashMap f19459e;

    /* renamed from: f, reason: collision with root package name */
    public final LinkedHashMap f19460f;

    public a(op.n jClass, Function1 memberFilter) {
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        Intrinsics.checkNotNullParameter(memberFilter, "memberFilter");
        this.a = jClass;
        this.f19456b = memberFilter;
        aq.a aVar = new aq.a(20, this);
        this.f19457c = aVar;
        kr.g i5 = kr.s.i(CollectionsKt.C(jClass.d()), aVar);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        kr.d dVar = new kr.d(i5);
        while (dVar.hasNext()) {
            Object next = dVar.next();
            hq.e c6 = ((op.w) next).c();
            Object obj = linkedHashMap.get(c6);
            if (obj == null) {
                obj = new ArrayList();
                linkedHashMap.put(c6, obj);
            }
            ((List) obj).add(next);
        }
        this.f19458d = linkedHashMap;
        kr.g i6 = kr.s.i(CollectionsKt.C(this.a.b()), this.f19456b);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap();
        kr.d dVar2 = new kr.d(i6);
        while (dVar2.hasNext()) {
            Object next2 = dVar2.next();
            linkedHashMap2.put(((op.t) next2).c(), next2);
        }
        this.f19459e = linkedHashMap2;
        ArrayList f2 = this.a.f();
        Function1 function1 = this.f19456b;
        ArrayList arrayList = new ArrayList();
        Iterator it = f2.iterator();
        while (it.hasNext()) {
            Object next3 = it.next();
            if (((Boolean) function1.invoke(next3)).booleanValue()) {
                arrayList.add(next3);
            }
        }
        int a = u0.a(kotlin.collections.d0.l(arrayList, 10));
        LinkedHashMap linkedHashMap3 = new LinkedHashMap(a < 16 ? 16 : a);
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            Object next4 = it2.next();
            linkedHashMap3.put(((op.z) next4).c(), next4);
        }
        this.f19460f = linkedHashMap3;
    }

    @Override // vp.c
    public final Set a() {
        kr.g i5 = kr.s.i(CollectionsKt.C(this.a.d()), this.f19457c);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        kr.d dVar = new kr.d(i5);
        while (dVar.hasNext()) {
            linkedHashSet.add(((op.w) dVar.next()).c());
        }
        return linkedHashSet;
    }

    @Override // vp.c
    public final op.t b(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return (op.t) this.f19459e.get(name);
    }

    @Override // vp.c
    public final op.z c(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return (op.z) this.f19460f.get(name);
    }

    @Override // vp.c
    public final Collection d(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        List list = (List) this.f19458d.get(name);
        return list != null ? list : m0.f13512d;
    }

    @Override // vp.c
    public final Set e() {
        return this.f19460f.keySet();
    }

    @Override // vp.c
    public final Set f() {
        kr.g i5 = kr.s.i(CollectionsKt.C(this.a.b()), this.f19456b);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        kr.d dVar = new kr.d(i5);
        while (dVar.hasNext()) {
            linkedHashSet.add(((op.t) dVar.next()).c());
        }
        return linkedHashSet;
    }
}
