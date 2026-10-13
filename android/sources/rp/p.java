package rp;

import java.util.HashMap;

/* loaded from: classes3.dex */
public abstract class p {
    public static final ip.p a;

    /* renamed from: b, reason: collision with root package name */
    public static final ip.p f17478b;

    /* renamed from: c, reason: collision with root package name */
    public static final ip.p f17479c;

    /* renamed from: d, reason: collision with root package name */
    public static final HashMap f17480d;

    static {
        mp.a aVar = mp.a.f14570d;
        ip.p pVar = new ip.p(aVar, 9);
        a = pVar;
        mp.c cVar = mp.c.f14572d;
        ip.p pVar2 = new ip.p(cVar, 10);
        f17478b = pVar2;
        mp.b bVar = mp.b.f14571d;
        ip.p pVar3 = new ip.p(bVar, 11);
        f17479c = pVar3;
        HashMap hashMap = new HashMap();
        f17480d = hashMap;
        hashMap.put(aVar, pVar);
        hashMap.put(cVar, pVar2);
        hashMap.put(bVar, pVar3);
    }

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 5 || i5 == 6) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 5 || i5 == 6) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = "from";
                break;
            case 2:
                objArr[0] = "first";
                break;
            case 3:
                objArr[0] = "second";
                break;
            case 4:
                objArr[0] = "visibility";
                break;
            case 5:
            case 6:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/load/java/JavaDescriptorVisibilities";
                break;
            default:
                objArr[0] = "what";
                break;
        }
        if (i5 == 5 || i5 == 6) {
            objArr[1] = "toDescriptorVisibility";
        } else {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/JavaDescriptorVisibilities";
        }
        if (i5 == 2 || i5 == 3) {
            objArr[2] = "areInSamePackage";
        } else if (i5 == 4) {
            objArr[2] = "toDescriptorVisibility";
        } else if (i5 != 5 && i5 != 6) {
            objArr[2] = "isVisibleForProtectedAndPackage";
        }
        String format = String.format(str, objArr);
        if (i5 != 5 && i5 != 6) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static boolean b(sq.d dVar, ip.o oVar, ip.l lVar) {
        ip.o oVar2;
        if (lVar == null) {
            a(1);
            throw null;
        }
        if (oVar instanceof ip.d) {
            oVar2 = kq.e.t((ip.d) oVar);
        } else {
            int i5 = kq.e.a;
            oVar2 = oVar;
        }
        if (c(oVar2, lVar)) {
            return true;
        }
        return ip.q.f12157c.a(dVar, oVar, lVar);
    }

    public static boolean c(ip.o oVar, ip.l lVar) {
        if (oVar == null) {
            a(2);
            throw null;
        }
        if (lVar == null) {
            a(3);
            throw null;
        }
        ip.f0 f0Var = (ip.f0) kq.e.i(oVar, ip.f0.class, false);
        ip.f0 f0Var2 = (ip.f0) kq.e.i(lVar, ip.f0.class, false);
        return (f0Var2 == null || f0Var == null || !((lp.c0) f0Var).f14132x.equals(((lp.c0) f0Var2).f14132x)) ? false : true;
    }
}
