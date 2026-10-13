package ip;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.ServiceConfigurationError;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class q {
    public static final p a;

    /* renamed from: b, reason: collision with root package name */
    public static final p f12156b;

    /* renamed from: c, reason: collision with root package name */
    public static final p f12157c;

    /* renamed from: d, reason: collision with root package name */
    public static final p f12158d;

    /* renamed from: e, reason: collision with root package name */
    public static final p f12159e;

    /* renamed from: f, reason: collision with root package name */
    public static final p f12160f;

    /* renamed from: g, reason: collision with root package name */
    public static final p f12161g;

    /* renamed from: h, reason: collision with root package name */
    public static final p f12162h;

    /* renamed from: i, reason: collision with root package name */
    public static final p f12163i;
    public static final p j;
    public static final p0 k;

    /* renamed from: l, reason: collision with root package name */
    public static final p0 f12164l;

    /* renamed from: m, reason: collision with root package name */
    public static final p0 f12165m;

    /* renamed from: n, reason: collision with root package name */
    public static final fr.o f12166n;

    /* renamed from: o, reason: collision with root package name */
    public static final HashMap f12167o;

    static {
        a1 a1Var = a1.f12120d;
        p pVar = new p(a1Var, 0);
        a = pVar;
        b1 b1Var = b1.f12122d;
        p pVar2 = new p(b1Var, 1);
        f12156b = pVar2;
        c1 c1Var = c1.f12130d;
        p pVar3 = new p(c1Var, 2);
        f12157c = pVar3;
        x0 x0Var = x0.f12177d;
        p pVar4 = new p(x0Var, 3);
        f12158d = pVar4;
        d1 d1Var = d1.f12132d;
        p pVar5 = new p(d1Var, 4);
        f12159e = pVar5;
        z0 z0Var = z0.f12185d;
        p pVar6 = new p(z0Var, 5);
        f12160f = pVar6;
        w0 w0Var = w0.f12176d;
        p pVar7 = new p(w0Var, 6);
        f12161g = pVar7;
        y0 y0Var = y0.f12178d;
        p pVar8 = new p(y0Var, 7);
        f12162h = pVar8;
        e1 e1Var = e1.f12137d;
        p pVar9 = new p(e1Var, 8);
        f12163i = pVar9;
        p[] elements = {pVar, pVar2, pVar4, pVar6};
        Intrinsics.checkNotNullParameter(elements, "elements");
        Collections.unmodifiableSet(kotlin.collections.x.J(elements));
        HashMap hashMap = new HashMap(6);
        hashMap.put(pVar2, 0);
        hashMap.put(pVar, 0);
        hashMap.put(pVar4, 1);
        hashMap.put(pVar3, 1);
        hashMap.put(pVar5, 2);
        Collections.unmodifiableMap(hashMap);
        j = pVar5;
        k = new p0(2);
        f12164l = new p0(3);
        f12165m = new p0(4);
        try {
            Iterator it = Arrays.asList(new fr.o[0]).iterator();
            f12166n = it.hasNext() ? (fr.o) it.next() : fr.o.a;
            HashMap hashMap2 = new HashMap();
            f12167o = hashMap2;
            hashMap2.put(a1Var, pVar);
            hashMap2.put(b1Var, pVar2);
            hashMap2.put(c1Var, pVar3);
            hashMap2.put(x0Var, pVar4);
            hashMap2.put(d1Var, pVar5);
            hashMap2.put(z0Var, pVar6);
            hashMap2.put(w0Var, pVar7);
            hashMap2.put(y0Var, pVar8);
            hashMap2.put(e1Var, pVar9);
        } catch (Throwable th2) {
            throw new ServiceConfigurationError(th2.getMessage(), th2);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x004a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x004f  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0052  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0057  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x005c  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x007a  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0080  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0045  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str = i5 != 16 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 16 ? 3 : 2];
        if (i5 != 1 && i5 != 3 && i5 != 5 && i5 != 7) {
            switch (i5) {
                case 9:
                    break;
                case 10:
                case 12:
                    objArr[0] = "first";
                    break;
                case 11:
                case 13:
                    objArr[0] = "second";
                    break;
                case 14:
                case 15:
                    objArr[0] = "visibility";
                    break;
                case 16:
                    objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities";
                    break;
                default:
                    objArr[0] = "what";
                    break;
            }
            if (i5 == 16) {
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities";
            } else {
                objArr[1] = "toDescriptorVisibility";
            }
            switch (i5) {
                case 2:
                case 3:
                    objArr[2] = "isVisibleIgnoringReceiver";
                    break;
                case 4:
                case 5:
                    objArr[2] = "isVisibleWithAnyReceiver";
                    break;
                case 6:
                case 7:
                    objArr[2] = "inSameFile";
                    break;
                case 8:
                case 9:
                    objArr[2] = "findInvisibleMember";
                    break;
                case 10:
                case 11:
                    objArr[2] = "compareLocal";
                    break;
                case 12:
                case 13:
                    objArr[2] = "compare";
                    break;
                case 14:
                    objArr[2] = "isPrivate";
                    break;
                case 15:
                    objArr[2] = "toDescriptorVisibility";
                    break;
                case 16:
                    break;
                default:
                    objArr[2] = "isVisible";
                    break;
            }
            String format = String.format(str, objArr);
            if (i5 != 16) {
                throw new IllegalStateException(format);
            }
            throw new IllegalArgumentException(format);
        }
        objArr[0] = "from";
        if (i5 == 16) {
        }
        switch (i5) {
        }
        String format2 = String.format(str, objArr);
        if (i5 != 16) {
        }
    }

    public static Integer b(p visibility, p visibility2) {
        if (visibility == null) {
            a(12);
            throw null;
        }
        bs.a1 a1Var = visibility.a;
        if (visibility2 == null) {
            a(13);
            throw null;
        }
        bs.a1 a1Var2 = visibility2.a;
        Intrinsics.checkNotNullParameter(visibility2, "visibility");
        Integer c6 = a1Var.c(a1Var2);
        if (c6 != null) {
            return c6;
        }
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        Integer c8 = a1Var2.c(a1Var);
        if (c8 != null) {
            return Integer.valueOf(-c8.intValue());
        }
        return null;
    }

    public static o c(sq.d dVar, o oVar, l lVar) {
        o c6;
        if (oVar == null) {
            a(8);
            throw null;
        }
        if (lVar == null) {
            a(9);
            throw null;
        }
        for (o oVar2 = (o) oVar.a(); oVar2 != null && oVar2.getVisibility() != f12160f; oVar2 = (o) kq.e.i(oVar2, o.class, true)) {
            if (!oVar2.getVisibility().a(dVar, oVar2, lVar)) {
                return oVar2;
            }
        }
        if (!(oVar instanceof lp.n0) || (c6 = c(dVar, ((lp.o0) ((lp.n0) oVar)).f14171d0, lVar)) == null) {
            return null;
        }
        return c6;
    }

    public static boolean d(o oVar, l lVar) {
        if (lVar == null) {
            a(7);
            throw null;
        }
        p0 f2 = kq.e.f(lVar);
        if (f2 != p0.f12153e) {
            return f2.equals(kq.e.f(oVar));
        }
        return false;
    }

    public static boolean e(p pVar) {
        if (pVar != null) {
            return pVar == a || pVar == f12156b;
        }
        a(14);
        throw null;
    }

    public static p f(bs.a1 a1Var) {
        if (a1Var == null) {
            a(15);
            throw null;
        }
        p pVar = (p) f12167o.get(a1Var);
        if (pVar != null) {
            return pVar;
        }
        throw new IllegalArgumentException("Inapplicable visibility: " + a1Var);
    }
}
