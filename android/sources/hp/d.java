package hp;

import java.lang.annotation.Annotation;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicIntegerArray;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.atomic.AtomicLongArray;
import java.util.concurrent.atomic.AtomicReference;
import java.util.concurrent.atomic.AtomicReferenceArray;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class d {
    public static final String a;

    /* renamed from: b, reason: collision with root package name */
    public static final String f10148b;

    /* renamed from: c, reason: collision with root package name */
    public static final String f10149c;

    /* renamed from: d, reason: collision with root package name */
    public static final String f10150d;

    /* renamed from: e, reason: collision with root package name */
    public static final hq.b f10151e;

    /* renamed from: f, reason: collision with root package name */
    public static final hq.c f10152f;

    /* renamed from: g, reason: collision with root package name */
    public static final hq.b f10153g;

    /* renamed from: h, reason: collision with root package name */
    public static final HashMap f10154h;

    /* renamed from: i, reason: collision with root package name */
    public static final HashMap f10155i;
    public static final HashMap j;
    public static final HashMap k;

    /* renamed from: l, reason: collision with root package name */
    public static final HashMap f10156l;

    /* renamed from: m, reason: collision with root package name */
    public static final HashMap f10157m;

    /* renamed from: n, reason: collision with root package name */
    public static final List f10158n;

    static {
        StringBuilder sb2 = new StringBuilder();
        gp.g gVar = gp.g.f9428c;
        sb2.append(gVar.a);
        sb2.append('.');
        sb2.append(gVar.f9432b);
        a = sb2.toString();
        StringBuilder sb3 = new StringBuilder();
        gp.h hVar = gp.h.f9429c;
        sb3.append(hVar.a);
        sb3.append('.');
        sb3.append(hVar.f9432b);
        f10148b = sb3.toString();
        StringBuilder sb4 = new StringBuilder();
        gp.j jVar = gp.j.f9431c;
        sb4.append(jVar.a);
        sb4.append('.');
        sb4.append(jVar.f9432b);
        f10149c = sb4.toString();
        StringBuilder sb5 = new StringBuilder();
        gp.i iVar = gp.i.f9430c;
        sb5.append(iVar.a);
        sb5.append('.');
        sb5.append(iVar.f9432b);
        f10150d = sb5.toString();
        hq.b K = ta.a.K(new hq.c("kotlin.jvm.functions.FunctionN"));
        f10151e = K;
        f10152f = K.a();
        f10153g = hq.h.f10231q;
        d(Class.class);
        f10154h = new HashMap();
        f10155i = new HashMap();
        j = new HashMap();
        k = new HashMap();
        f10156l = new HashMap();
        f10157m = new HashMap();
        hq.b K2 = ta.a.K(fp.o.B);
        hq.c cVar = fp.o.J;
        hq.c cVar2 = K2.a;
        c cVar3 = new c(d(Iterable.class), K2, new hq.b(cVar2, w3.q.E(cVar, cVar2), false));
        hq.b K3 = ta.a.K(fp.o.A);
        hq.c cVar4 = fp.o.I;
        hq.c cVar5 = K3.a;
        c cVar6 = new c(d(Iterator.class), K3, new hq.b(cVar5, w3.q.E(cVar4, cVar5), false));
        hq.b K4 = ta.a.K(fp.o.C);
        hq.c cVar7 = fp.o.K;
        hq.c cVar8 = K4.a;
        c cVar9 = new c(d(Collection.class), K4, new hq.b(cVar8, w3.q.E(cVar7, cVar8), false));
        hq.b K5 = ta.a.K(fp.o.D);
        hq.c cVar10 = fp.o.L;
        hq.c cVar11 = K5.a;
        c cVar12 = new c(d(List.class), K5, new hq.b(cVar11, w3.q.E(cVar10, cVar11), false));
        hq.b K6 = ta.a.K(fp.o.F);
        hq.c cVar13 = fp.o.N;
        hq.c cVar14 = K6.a;
        c cVar15 = new c(d(Set.class), K6, new hq.b(cVar14, w3.q.E(cVar13, cVar14), false));
        hq.b K7 = ta.a.K(fp.o.E);
        hq.c cVar16 = fp.o.M;
        hq.c cVar17 = K7.a;
        c cVar18 = new c(d(ListIterator.class), K7, new hq.b(cVar17, w3.q.E(cVar16, cVar17), false));
        hq.c cVar19 = fp.o.G;
        hq.b K8 = ta.a.K(cVar19);
        hq.c cVar20 = fp.o.O;
        hq.c cVar21 = K8.a;
        c cVar22 = new c(d(Map.class), K8, new hq.b(cVar21, w3.q.E(cVar20, cVar21), false));
        hq.b d6 = ta.a.K(cVar19).d(fp.o.H.a.f());
        hq.c cVar23 = fp.o.P;
        hq.c cVar24 = d6.a;
        List<c> g6 = c0.g(cVar3, cVar6, cVar9, cVar12, cVar15, cVar18, cVar22, new c(d(Map.Entry.class), d6, new hq.b(cVar24, w3.q.E(cVar23, cVar24), false)));
        f10158n = g6;
        c(Object.class, fp.o.a);
        c(String.class, fp.o.f8886f);
        c(CharSequence.class, fp.o.f8884e);
        b(Throwable.class, fp.o.k);
        c(Cloneable.class, fp.o.f8880c);
        c(Number.class, fp.o.f8891i);
        b(Comparable.class, fp.o.f8892l);
        c(Enum.class, fp.o.j);
        b(Annotation.class, fp.o.f8899s);
        for (c cVar25 : g6) {
            hq.b bVar = cVar25.a;
            hq.b bVar2 = cVar25.f10146b;
            hq.b bVar3 = cVar25.f10147c;
            a(bVar, bVar2);
            f10155i.put(bVar3.a().a, bVar);
            f10156l.put(bVar3, bVar2);
            f10157m.put(bVar2, bVar3);
            hq.c a10 = bVar2.a();
            hq.c a11 = bVar3.a();
            j.put(bVar3.a().a, a10);
            k.put(a10.a, a11);
        }
        for (pq.c cVar26 : pq.c.values()) {
            hq.c topLevelFqName = cVar26.f16465v;
            if (topLevelFqName == null) {
                pq.c.a(15);
                throw null;
            }
            Intrinsics.checkNotNullExpressionValue(topLevelFqName, "getWrapperFqName(...)");
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            hq.b bVar4 = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
            fp.k primitiveType = cVar26.d();
            Intrinsics.checkNotNullExpressionValue(primitiveType, "getPrimitiveType(...)");
            Intrinsics.checkNotNullParameter(primitiveType, "primitiveType");
            hq.c topLevelFqName2 = fp.p.f8915l.a(primitiveType.f8868d);
            Intrinsics.checkNotNullParameter(topLevelFqName2, "topLevelFqName");
            a(bVar4, new hq.b(topLevelFqName2.b(), topLevelFqName2.a.f()));
        }
        for (hq.b bVar5 : fp.d.f8852b) {
            hq.c topLevelFqName3 = new hq.c("kotlin.jvm.internal." + bVar5.f().b() + "CompanionObject");
            Intrinsics.checkNotNullParameter(topLevelFqName3, "topLevelFqName");
            a(new hq.b(topLevelFqName3.b(), topLevelFqName3.a.f()), bVar5.d(hq.g.f10212b));
        }
        for (int i5 = 0; i5 < 23; i5++) {
            hq.c topLevelFqName4 = new hq.c(k0.d.i(i5, "kotlin.jvm.functions.Function"));
            Intrinsics.checkNotNullParameter(topLevelFqName4, "topLevelFqName");
            hq.b bVar6 = new hq.b(topLevelFqName4.b(), topLevelFqName4.a.f());
            hq.c cVar27 = fp.p.f8915l;
            hq.e e9 = hq.e.e("Function" + i5);
            Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
            a(bVar6, new hq.b(cVar27, e9));
            f10155i.put(new hq.c(f10148b + i5).a, f10153g);
        }
        for (int i6 = 0; i6 < 22; i6++) {
            gp.i iVar2 = gp.i.f9430c;
            f10155i.put(new hq.c((iVar2.a + '.' + iVar2.f9432b) + i6).a, f10153g);
        }
        hq.c cVar28 = new hq.c("kotlin.concurrent.atomics.AtomicInt");
        hq.b d7 = d(AtomicInteger.class);
        HashMap hashMap = f10155i;
        hashMap.put(cVar28.a, d7);
        hashMap.put(new hq.c("kotlin.concurrent.atomics.AtomicLong").a, d(AtomicLong.class));
        hashMap.put(new hq.c("kotlin.concurrent.atomics.AtomicBoolean").a, d(AtomicBoolean.class));
        hashMap.put(new hq.c("kotlin.concurrent.atomics.AtomicReference").a, d(AtomicReference.class));
        hashMap.put(new hq.c("kotlin.concurrent.atomics.AtomicIntArray").a, d(AtomicIntegerArray.class));
        hashMap.put(new hq.c("kotlin.concurrent.atomics.AtomicLongArray").a, d(AtomicLongArray.class));
        hashMap.put(new hq.c("kotlin.concurrent.atomics.AtomicArray").a, d(AtomicReferenceArray.class));
        hashMap.put(fp.o.f8878b.g().a, d(Void.class));
    }

    public static void a(hq.b bVar, hq.b bVar2) {
        f10154h.put(bVar.a().a, bVar2);
        f10155i.put(bVar2.a().a, bVar);
    }

    public static void b(Class cls, hq.c topLevelFqName) {
        hq.b d6 = d(cls);
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        a(d6, new hq.b(topLevelFqName.b(), topLevelFqName.a.f()));
    }

    public static void c(Class cls, hq.d dVar) {
        b(cls, dVar.g());
    }

    public static hq.b d(Class cls) {
        if (!cls.isPrimitive()) {
            cls.isArray();
        }
        Class<?> declaringClass = cls.getDeclaringClass();
        if (declaringClass != null) {
            hq.b d6 = d(declaringClass);
            hq.e e9 = hq.e.e(cls.getSimpleName());
            Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
            return d6.d(e9);
        }
        String canonicalName = cls.getCanonicalName();
        Intrinsics.checkNotNullExpressionValue(canonicalName, "getCanonicalName(...)");
        hq.c topLevelFqName = new hq.c(canonicalName);
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        return new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
    }

    public static boolean e(hq.d dVar, String str) {
        Integer intOrNull;
        String str2 = dVar.a;
        if (x.o(str2, str, false)) {
            String substring = str2.substring(str.length());
            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
            if (!StringsKt.T(substring, '0') && (intOrNull = StringsKt.toIntOrNull(substring)) != null && intOrNull.intValue() >= 23) {
                return true;
            }
        }
        return false;
    }

    public static hq.b f(hq.d kotlinFqName) {
        Intrinsics.checkNotNullParameter(kotlinFqName, "kotlinFqName");
        return (e(kotlinFqName, a) || e(kotlinFqName, f10149c)) ? f10151e : (e(kotlinFqName, f10148b) || e(kotlinFqName, f10150d)) ? f10153g : (hq.b) f10155i.get(kotlinFqName);
    }
}
