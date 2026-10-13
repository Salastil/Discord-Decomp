package ni;

import android.util.Log;
import com.google.firebase.components.ComponentRegistrar;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicReference;
import jc.b0;
import zo.c0;

/* loaded from: classes3.dex */
public final class f implements c {
    public static final com.google.firebase.messaging.j E = new com.google.firebase.messaging.j(1);

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f15487d;

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f15488e;

    /* renamed from: i, reason: collision with root package name */
    public final HashMap f15489i;

    /* renamed from: v, reason: collision with root package name */
    public final HashSet f15490v;

    /* renamed from: w, reason: collision with root package name */
    public final k f15491w;

    /* renamed from: x, reason: collision with root package name */
    public final AtomicReference f15492x;

    /* renamed from: y, reason: collision with root package name */
    public final ha.k f15493y;

    public f(ArrayList arrayList, ArrayList arrayList2, ha.k kVar) {
        oi.i iVar = oi.i.f15997d;
        this.f15487d = new HashMap();
        this.f15488e = new HashMap();
        this.f15489i = new HashMap();
        this.f15490v = new HashSet();
        this.f15492x = new AtomicReference();
        k kVar2 = new k();
        this.f15491w = kVar2;
        this.f15493y = kVar;
        ArrayList arrayList3 = new ArrayList();
        arrayList3.add(b.b(kVar2, k.class, vi.b.class, vi.a.class));
        arrayList3.add(b.b(this, f.class, new Class[0]));
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            b bVar = (b) it.next();
            if (bVar != null) {
                arrayList3.add(bVar);
            }
        }
        ArrayList arrayList4 = new ArrayList();
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            arrayList4.add(it2.next());
        }
        ArrayList arrayList5 = new ArrayList();
        synchronized (this) {
            Iterator it3 = arrayList4.iterator();
            while (it3.hasNext()) {
                try {
                    ComponentRegistrar componentRegistrar = (ComponentRegistrar) ((yi.a) it3.next()).get();
                    if (componentRegistrar != null) {
                        arrayList3.addAll(this.f15493y.m(componentRegistrar));
                        it3.remove();
                    }
                } catch (l e9) {
                    it3.remove();
                    Log.w("ComponentDiscovery", "Invalid component registrar.", e9);
                }
            }
            Iterator it4 = arrayList3.iterator();
            while (it4.hasNext()) {
                Object[] array = ((b) it4.next()).f15480b.toArray();
                int length = array.length;
                int i5 = 0;
                while (true) {
                    if (i5 < length) {
                        Object obj = array[i5];
                        if (obj.toString().contains("kotlinx.coroutines.CoroutineDispatcher")) {
                            if (this.f15490v.contains(obj.toString())) {
                                it4.remove();
                                break;
                            }
                            this.f15490v.add(obj.toString());
                        }
                        i5++;
                    }
                }
            }
            if (this.f15487d.isEmpty()) {
                zk.a.n(arrayList3);
            } else {
                ArrayList arrayList6 = new ArrayList(this.f15487d.keySet());
                arrayList6.addAll(arrayList3);
                zk.a.n(arrayList6);
            }
            Iterator it5 = arrayList3.iterator();
            while (it5.hasNext()) {
                b bVar2 = (b) it5.next();
                this.f15487d.put(bVar2, new m(new ki.c(1, this, bVar2)));
            }
            arrayList5.addAll(i(arrayList3));
            arrayList5.addAll(j());
            d();
        }
        Iterator it6 = arrayList5.iterator();
        while (it6.hasNext()) {
            ((Runnable) it6.next()).run();
        }
        Boolean bool = (Boolean) this.f15492x.get();
        if (bool != null) {
            a(this.f15487d, bool.booleanValue());
        }
    }

    public final void a(HashMap hashMap, boolean z5) {
        ArrayDeque arrayDeque;
        for (Map.Entry entry : hashMap.entrySet()) {
            b bVar = (b) entry.getKey();
            yi.a aVar = (yi.a) entry.getValue();
            int i5 = bVar.f15482d;
            if (i5 == 1 || (i5 == 2 && z5)) {
                aVar.get();
            }
        }
        k kVar = this.f15491w;
        synchronized (kVar) {
            try {
                arrayDeque = kVar.f15499b;
                if (arrayDeque != null) {
                    kVar.f15499b = null;
                } else {
                    arrayDeque = null;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (arrayDeque != null) {
            Iterator it = arrayDeque.iterator();
            if (it.hasNext()) {
                throw s4.h.b(it);
            }
        }
    }

    public final void d() {
        for (b bVar : this.f15487d.keySet()) {
            for (i iVar : bVar.f15481c) {
                if (iVar.f15497b == 2 && !this.f15489i.containsKey(iVar.a)) {
                    HashMap hashMap = this.f15489i;
                    q qVar = iVar.a;
                    Set set = Collections.EMPTY_SET;
                    n nVar = new n();
                    nVar.f15503b = null;
                    nVar.a = Collections.newSetFromMap(new ConcurrentHashMap());
                    nVar.a.addAll(set);
                    hashMap.put(qVar, nVar);
                } else if (this.f15488e.containsKey(iVar.a)) {
                    continue;
                } else {
                    int i5 = iVar.f15497b;
                    if (i5 == 1) {
                        throw new j("Unsatisfied dependency for component " + bVar + ": " + iVar.a);
                    }
                    if (i5 != 2) {
                        HashMap hashMap2 = this.f15488e;
                        q qVar2 = iVar.a;
                        n1.k kVar = o.f15504c;
                        com.google.firebase.messaging.j jVar = o.f15505d;
                        o oVar = new o();
                        oVar.a = kVar;
                        oVar.f15506b = jVar;
                        hashMap2.put(qVar2, oVar);
                    }
                }
            }
        }
    }

    @Override // ni.c
    public final synchronized yi.a f(q qVar) {
        c0.h(qVar, "Null interface requested.");
        return (yi.a) this.f15488e.get(qVar);
    }

    @Override // ni.c
    public final synchronized yi.a g(q qVar) {
        n nVar = (n) this.f15489i.get(qVar);
        if (nVar != null) {
            return nVar;
        }
        return E;
    }

    public final ArrayList i(ArrayList arrayList) {
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            b bVar = (b) it.next();
            if (bVar.f15483e == 0) {
                yi.a aVar = (yi.a) this.f15487d.get(bVar);
                for (q qVar : bVar.f15480b) {
                    HashMap hashMap = this.f15488e;
                    if (hashMap.containsKey(qVar)) {
                        arrayList2.add(new b0(8, (o) ((yi.a) hashMap.get(qVar)), aVar));
                    } else {
                        hashMap.put(qVar, aVar);
                    }
                }
            }
        }
        return arrayList2;
    }

    public final ArrayList j() {
        HashMap hashMap = this.f15489i;
        ArrayList arrayList = new ArrayList();
        HashMap hashMap2 = new HashMap();
        for (Map.Entry entry : this.f15487d.entrySet()) {
            b bVar = (b) entry.getKey();
            if (bVar.f15483e != 0) {
                yi.a aVar = (yi.a) entry.getValue();
                for (q qVar : bVar.f15480b) {
                    if (!hashMap2.containsKey(qVar)) {
                        hashMap2.put(qVar, new HashSet());
                    }
                    ((Set) hashMap2.get(qVar)).add(aVar);
                }
            }
        }
        for (Map.Entry entry2 : hashMap2.entrySet()) {
            if (hashMap.containsKey(entry2.getKey())) {
                n nVar = (n) hashMap.get(entry2.getKey());
                Iterator it = ((Set) entry2.getValue()).iterator();
                while (it.hasNext()) {
                    arrayList.add(new b0(9, nVar, (yi.a) it.next()));
                }
            } else {
                q qVar2 = (q) entry2.getKey();
                Set set = (Set) ((Collection) entry2.getValue());
                n nVar2 = new n();
                nVar2.f15503b = null;
                nVar2.a = Collections.newSetFromMap(new ConcurrentHashMap());
                nVar2.a.addAll(set);
                hashMap.put(qVar2, nVar2);
            }
        }
        return arrayList;
    }
}
