package rp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.EnumMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.e1;
import kotlin.collections.m0;
import kotlin.collections.n0;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b {

    /* renamed from: c, reason: collision with root package name */
    public static final LinkedHashMap f17427c;
    public final u a;

    /* renamed from: b, reason: collision with root package name */
    public final ConcurrentHashMap f17428b;

    static {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (a aVar : a.values()) {
            String str = aVar.f17425d;
            if (linkedHashMap.get(str) == null) {
                linkedHashMap.put(str, aVar);
            }
        }
        f17427c = linkedHashMap;
    }

    public b(u javaTypeEnhancementState) {
        Intrinsics.checkNotNullParameter(javaTypeEnhancementState, "javaTypeEnhancementState");
        Intrinsics.checkNotNullParameter(javaTypeEnhancementState, "javaTypeEnhancementState");
        this.a = javaTypeEnhancementState;
        this.f17428b = new ConcurrentHashMap();
    }

    public static ArrayList a(Object obj, boolean z5) {
        jp.b bVar = (jp.b) obj;
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        Map b10 = bVar.b();
        ArrayList arrayList = new ArrayList();
        for (Map.Entry entry : b10.entrySet()) {
            kotlin.collections.h0.o(arrayList, (!z5 || Intrinsics.areEqual((hq.e) entry.getKey(), y.f17495b)) ? j((mq.g) entry.getValue()) : m0.f13512d);
        }
        return arrayList;
    }

    public static Object c(Object obj, hq.c cVar) {
        for (Object obj2 : e(obj)) {
            if (Intrinsics.areEqual(d(obj2), cVar)) {
                return obj2;
            }
        }
        return null;
    }

    public static hq.c d(Object obj) {
        jp.b bVar = (jp.b) obj;
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        return bVar.a();
    }

    public static Iterable e(Object obj) {
        jp.h annotations;
        jp.b bVar = (jp.b) obj;
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        ip.f d6 = oq.e.d(bVar);
        return (d6 == null || (annotations = d6.getAnnotations()) == null) ? m0.f13512d : annotations;
    }

    public static boolean f(Object obj, hq.c cVar) {
        Iterable e9 = e(obj);
        if ((e9 instanceof Collection) && ((Collection) e9).isEmpty()) {
            return false;
        }
        Iterator it = e9.iterator();
        while (it.hasNext()) {
            if (Intrinsics.areEqual(d(it.next()), cVar)) {
                return true;
            }
        }
        return false;
    }

    public static List j(mq.g gVar) {
        if (!(gVar instanceof mq.b)) {
            return gVar instanceof mq.i ? kotlin.collections.b0.c(((mq.i) gVar).f14577c.c()) : m0.f13512d;
        }
        Iterable iterable = (Iterable) ((mq.b) gVar).a;
        ArrayList arrayList = new ArrayList();
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            kotlin.collections.h0.o(arrayList, j((mq.g) it.next()));
        }
        return arrayList;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:10:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:12:0x01ae A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x001c A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:17:0x008d  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x013a  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x019b  */
    /* JADX WARN: Type inference failed for: r11v12 */
    /* JADX WARN: Type inference failed for: r11v14 */
    /* JADX WARN: Type inference failed for: r11v15, types: [int] */
    /* JADX WARN: Type inference failed for: r11v16 */
    /* JADX WARN: Type inference failed for: r11v4, types: [java.lang.Object, java.util.Map] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final v b(v vVar, jp.h annotations) {
        boolean z5;
        n nVar;
        c0 h6;
        n nVar2;
        Object c6;
        Object obj;
        Pair pair;
        boolean z6;
        ?? r11;
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        u uVar = this.a;
        if (!uVar.f17490c) {
            ArrayList arrayList = new ArrayList();
            Iterator it = annotations.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                Object next = it.next();
                n nVar3 = null;
                if (!uVar.f17490c && (nVar = (n) o.f17477e.get(d(next))) != null) {
                    hq.c d6 = d(next);
                    if (d6 == null || !o.f17475c.containsKey(d6)) {
                        h6 = h(next);
                        if (h6 == null) {
                            h6 = uVar.a.a;
                        }
                    } else {
                        h6 = (c0) uVar.f17489b.invoke(d6);
                    }
                    if (h6 == c0.f17431e) {
                        h6 = null;
                    }
                    if (h6 != null) {
                        zp.h nullabilityQualifier = zp.h.a(nVar.a, null, h6 == c0.f17432i, 1);
                        Collection qualifierApplicabilityTypes = nVar.f17472b;
                        boolean z7 = nVar.f17473c;
                        Intrinsics.checkNotNullParameter(nullabilityQualifier, "nullabilityQualifier");
                        Intrinsics.checkNotNullParameter(qualifierApplicabilityTypes, "qualifierApplicabilityTypes");
                        nVar2 = new n(nullabilityQualifier, qualifierApplicabilityTypes, z7);
                        if (nVar2 == null) {
                            nVar3 = nVar2;
                        } else {
                            if (!uVar.a.f17493d && (c6 = c(next, z.f17513f)) != null) {
                                Iterator it2 = e(next).iterator();
                                while (true) {
                                    if (!it2.hasNext()) {
                                        obj = null;
                                        break;
                                    }
                                    obj = it2.next();
                                    if (i(obj) != null) {
                                        break;
                                    }
                                }
                                if (obj != null) {
                                    ArrayList a = a(c6, true);
                                    LinkedHashSet linkedHashSet = new LinkedHashSet();
                                    Iterator it3 = a.iterator();
                                    while (it3.hasNext()) {
                                        a aVar = (a) f17427c.get((String) it3.next());
                                        if (aVar != null) {
                                            linkedHashSet.add(aVar);
                                        }
                                    }
                                    if (linkedHashSet.contains(a.f17422w)) {
                                        Set J = kotlin.collections.x.J(a.values());
                                        a aVar2 = a.f17423x;
                                        Intrinsics.checkNotNullParameter(J, "<this>");
                                        LinkedHashSet linkedHashSet2 = new LinkedHashSet(u0.a(J.size()));
                                        boolean z8 = false;
                                        for (Object obj2 : J) {
                                            if (z8 || !Intrinsics.areEqual(obj2, aVar2)) {
                                                z6 = true;
                                            } else {
                                                z6 = false;
                                                z8 = true;
                                            }
                                            if (z6) {
                                                linkedHashSet2.add(obj2);
                                            }
                                        }
                                        linkedHashSet = e1.d(linkedHashSet2, linkedHashSet);
                                    }
                                    pair = new Pair(obj, linkedHashSet);
                                    if (pair != null) {
                                        Object extractNullability = pair.f13474d;
                                        Set set = (Set) pair.f13475e;
                                        c0 h7 = h(next);
                                        if (h7 == null && (h7 = h(extractNullability)) == null) {
                                            h7 = uVar.a.a;
                                        }
                                        h7.getClass();
                                        c0 c0Var = c0.f17431e;
                                        if (h7 != c0Var) {
                                            Intrinsics.checkNotNullParameter(extractNullability, "$this$extractNullability");
                                            zp.h g6 = g(extractNullability, false);
                                            if (g6 == null) {
                                                Object extractNullability2 = i(extractNullability);
                                                if (extractNullability2 != null) {
                                                    c0 h10 = h(extractNullability);
                                                    if (h10 == null) {
                                                        h10 = uVar.a.a;
                                                    }
                                                    h10.getClass();
                                                    if (h10 != c0Var) {
                                                        Intrinsics.checkNotNullParameter(extractNullability2, "$this$extractNullability");
                                                        zp.h g10 = g(extractNullability2, false);
                                                        if (g10 != null) {
                                                            r11 = 1;
                                                            g6 = zp.h.a(g10, null, h10 == c0.f17432i, 1);
                                                        } else {
                                                            r11 = 1;
                                                            g6 = null;
                                                        }
                                                        if (g6 != null) {
                                                            nVar3 = new n(zp.h.a(g6, null, h7 == c0.f17432i ? r11 : false, r11), set);
                                                        }
                                                    }
                                                }
                                                g6 = null;
                                            }
                                            r11 = 1;
                                            if (g6 != null) {
                                            }
                                        }
                                    }
                                }
                            }
                            pair = null;
                            if (pair != null) {
                            }
                        }
                        if (nVar3 == null) {
                            arrayList.add(nVar3);
                        }
                    }
                }
                nVar2 = null;
                if (nVar2 == null) {
                }
                if (nVar3 == null) {
                }
            }
            if (!arrayList.isEmpty()) {
                EnumMap enumMap = new EnumMap(a.class);
                Iterator it4 = arrayList.iterator();
                while (it4.hasNext()) {
                    n nVar4 = (n) it4.next();
                    for (a aVar3 : nVar4.f17472b) {
                        enumMap.containsKey(aVar3);
                        enumMap.put((EnumMap) aVar3, (a) nVar4);
                    }
                }
                EnumMap enumMap2 = vVar != null ? new EnumMap(vVar.a) : new EnumMap(a.class);
                for (Map.Entry entry : enumMap.entrySet()) {
                    a aVar4 = (a) entry.getKey();
                    n nVar5 = (n) entry.getValue();
                    if (nVar5 != null) {
                        enumMap2.put((EnumMap) aVar4, (a) nVar5);
                        z5 = true;
                    }
                }
                if (z5) {
                    return new v(enumMap2);
                }
            }
        }
        return vVar;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x005f, code lost:
    
        if (r6.equals("ALWAYS") != false) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x0074, code lost:
    
        if (r6.equals("NEVER") == false) goto L46;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0080, code lost:
    
        r6 = zp.g.f21353e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x007d, code lost:
    
        if (r6.equals("MAYBE") == false) goto L46;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final zp.h g(Object obj, boolean z5) {
        zp.g gVar;
        hq.c d6 = d(obj);
        if (d6 != null) {
            c0 c0Var = (c0) this.a.f17489b.invoke(d6);
            c0Var.getClass();
            if (c0Var == c0.f17431e) {
                return null;
            }
            if (z.k.contains(d6)) {
                gVar = zp.g.f21354i;
            } else if (z.f17517l.contains(d6)) {
                gVar = zp.g.f21353e;
            } else if (z.f17518m.contains(d6)) {
                gVar = zp.g.f21352d;
            } else if (Intrinsics.areEqual(d6, z.f17514g)) {
                String str = (String) CollectionsKt.L(a(obj, false));
                if (str != null) {
                    switch (str.hashCode()) {
                        case 73135176:
                            break;
                        case 74175084:
                            break;
                        case 433141802:
                            if (str.equals("UNKNOWN")) {
                                gVar = zp.g.f21352d;
                                break;
                            }
                            break;
                        case 1933739535:
                            break;
                    }
                }
                gVar = zp.g.f21354i;
            }
            return new zp.h(gVar, c0Var == c0.f17432i || z5);
        }
        return null;
    }

    public final c0 h(Object obj) {
        String str;
        u uVar = this.a;
        n0 n0Var = uVar.a.f17492c;
        d(obj);
        n0Var.getClass();
        Object c6 = c(obj, z.f17521p);
        if (c6 == null || (str = (String) CollectionsKt.L(a(c6, false))) == null) {
            return null;
        }
        c0 c0Var = uVar.a.f17491b;
        if (c0Var != null) {
            return c0Var;
        }
        int hashCode = str.hashCode();
        if (hashCode == -2137067054) {
            if (str.equals("IGNORE")) {
                return c0.f17431e;
            }
            return null;
        }
        if (hashCode == -1838656823) {
            if (str.equals("STRICT")) {
                return c0.f17433v;
            }
            return null;
        }
        if (hashCode == 2656902 && str.equals("WARN")) {
            return c0.f17432i;
        }
        return null;
    }

    public final Object i(Object annotation) {
        Object obj;
        Intrinsics.checkNotNullParameter(annotation, "annotation");
        if (!this.a.a.f17493d) {
            if (CollectionsKt.E(z.j, d(annotation)) || f(annotation, z.f17511d)) {
                return annotation;
            }
            if (f(annotation, z.f17512e)) {
                jp.b bVar = (jp.b) annotation;
                Intrinsics.checkNotNullParameter(bVar, "<this>");
                ip.f d6 = oq.e.d(bVar);
                Intrinsics.checkNotNull(d6);
                ConcurrentHashMap concurrentHashMap = this.f17428b;
                Object obj2 = concurrentHashMap.get(d6);
                if (obj2 != null) {
                    return obj2;
                }
                Iterator it = e(annotation).iterator();
                while (true) {
                    if (!it.hasNext()) {
                        obj = null;
                        break;
                    }
                    obj = i(it.next());
                    if (obj != null) {
                        break;
                    }
                }
                if (obj != null) {
                    Object putIfAbsent = concurrentHashMap.putIfAbsent(d6, obj);
                    return putIfAbsent == null ? obj : putIfAbsent;
                }
            }
        }
        return null;
    }
}
