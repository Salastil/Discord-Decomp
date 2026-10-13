package dp;

import a5.k0;
import cp.c2;
import cp.u1;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.ranges.IntRange;
import lp.r0;
import yq.c1;
import yq.w0;

/* loaded from: classes3.dex */
public final class c0 implements g {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final g f7648b;

    /* renamed from: c, reason: collision with root package name */
    public final Member f7649c;

    /* renamed from: d, reason: collision with root package name */
    public final e4.m f7650d;

    /* renamed from: e, reason: collision with root package name */
    public final IntRange[] f7651e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f7652f;

    /* JADX WARN: Code restructure failed: missing block: B:177:0x014b, code lost:
    
        if ((r12 instanceof dp.f) != false) goto L72;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x00da, code lost:
    
        if (fp.i.G(r6) == true) goto L40;
     */
    /* JADX WARN: Removed duplicated region for block: B:166:0x01f0  */
    /* JADX WARN: Removed duplicated region for block: B:167:0x0201  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0121  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x02ca  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x02d9  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x02e8  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x032b  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0348 A[EDGE_INSN: B:82:0x0348->B:64:0x0348 BREAK  A[LOOP:3: B:68:0x0324->B:77:?], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:83:0x02d0  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x0131  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c0(g oldCaller, ip.d descriptor, boolean z5) {
        Method declaredMethod;
        boolean z6;
        boolean z7;
        e4.m mVar;
        List list;
        Method l6;
        int length;
        int length2;
        int i5;
        Iterable iterable;
        Iterator it;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(oldCaller, "oldCaller");
        this.a = z5;
        boolean z8 = false;
        if (oldCaller instanceof t) {
            lp.u W = descriptor.W();
            W = W == null ? descriptor.T() : W;
            yq.y type = W != null ? W.getType() : null;
            if (type != null && kq.g.h(type)) {
                if (z5) {
                    List P = descriptor.P();
                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                    if (P == null || !P.isEmpty()) {
                        Iterator it2 = P.iterator();
                        while (it2.hasNext()) {
                            if (((r0) it2.next()).C0()) {
                            }
                        }
                    }
                }
                ArrayList m5 = android.support.v4.media.session.b.m(yq.c.b(type));
                Intrinsics.checkNotNull(m5);
                ArrayList arrayList = new ArrayList(d0.l(m5, 10));
                Iterator it3 = m5.iterator();
                while (it3.hasNext()) {
                    arrayList.add(((Method) it3.next()).invoke(((t) oldCaller).f7669h, null));
                }
                oldCaller = new u((Method) ((q) oldCaller).a, arrayList.toArray(new Object[0]));
            }
        }
        this.f7648b = oldCaller;
        this.f7649c = oldCaller.b();
        yq.y returnType = descriptor.getReturnType();
        Intrinsics.checkNotNull(returnType);
        boolean z10 = descriptor instanceof ip.v;
        if (z10 && ((ip.v) descriptor).isSuspend()) {
            int i6 = kq.g.a;
            Intrinsics.checkNotNullParameter(returnType, "<this>");
            yq.c0 i10 = kq.g.i(returnType);
            yq.y j = i10 != null ? w0.d(returnType).j(i10, c1.f21013i) : null;
            if (j != null) {
            }
        }
        Class D = android.support.v4.media.session.b.D(returnType);
        if (D != null) {
            try {
                declaredMethod = D.getDeclaredMethod("box-impl", android.support.v4.media.session.b.l(D, descriptor).getReturnType());
                Intrinsics.checkNotNull(declaredMethod);
                if (kq.g.a(descriptor)) {
                    int i11 = -1;
                    if ((!(oldCaller instanceof t) || ((t) oldCaller).f7668g) && !(oldCaller instanceof u)) {
                        if (!(descriptor instanceof ip.k)) {
                            if (descriptor.T() != null && !(oldCaller instanceof f)) {
                                ip.l h6 = descriptor.h();
                                Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                                if (!kq.g.f(h6)) {
                                    i11 = 1;
                                }
                            }
                            i11 = 0;
                        }
                    }
                    int i12 = oldCaller instanceof u ? -((u) oldCaller).f7670g.length : i11;
                    Member b10 = oldCaller.b();
                    ArrayList arrayList2 = new ArrayList();
                    lp.u W2 = descriptor.W();
                    yq.y type2 = W2 != null ? W2.getType() : null;
                    if (type2 != null) {
                        arrayList2.add(type2);
                    } else if (descriptor instanceof ip.k) {
                        ip.f s2 = ((ip.k) descriptor).s();
                        Intrinsics.checkNotNullExpressionValue(s2, "getConstructedClass(...)");
                        if (s2.A()) {
                            ip.l h7 = s2.h();
                            Intrinsics.checkNotNull(h7, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                            arrayList2.add(((ip.f) h7).k());
                        }
                    } else {
                        ip.l h10 = descriptor.h();
                        Intrinsics.checkNotNullExpressionValue(h10, "getContainingDeclaration(...)");
                        if (h10 instanceof ip.f) {
                            ip.f makeKotlinParameterTypes = (ip.f) h10;
                            Intrinsics.checkNotNullParameter(makeKotlinParameterTypes, "$this$makeKotlinParameterTypes");
                            if (kq.g.f(makeKotlinParameterTypes)) {
                                if (b10 != null) {
                                    Class<?> declaringClass = b10.getDeclaringClass();
                                    if (declaringClass == null) {
                                        z7 = false;
                                    } else {
                                        Intrinsics.checkNotNullParameter(declaringClass, "<this>");
                                        z7 = !Reflection.getOrCreateKotlinClass(declaringClass).isValue();
                                    }
                                    if (z7) {
                                        z6 = true;
                                        if (z6) {
                                            arrayList2.add(makeKotlinParameterTypes.k());
                                        } else {
                                            yq.c0 k = makeKotlinParameterTypes.k();
                                            Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
                                            arrayList2.add(com.facebook.imagepipeline.nativecode.c.S(k));
                                        }
                                    }
                                }
                                z6 = false;
                                if (z6) {
                                }
                            }
                        }
                    }
                    List P2 = descriptor.P();
                    Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                    Iterator it4 = P2.iterator();
                    while (it4.hasNext()) {
                        arrayList2.add(((r0) it4.next()).getType());
                    }
                    Iterator it5 = arrayList2.iterator();
                    int i13 = 0;
                    while (it5.hasNext()) {
                        ArrayList m6 = android.support.v4.media.session.b.m(yq.c.b((yq.y) it5.next()));
                        i13 += m6 != null ? m6.size() : 1;
                    }
                    int i14 = i13 + i12 + (this.a ? ((i13 + 31) / 32) + 1 : 0) + ((z10 && ((ip.v) descriptor).isSuspend()) ? 1 : 0);
                    boolean z11 = this.a;
                    if (k0.t(this) != i14) {
                        throw new u1("Inconsistent number of parameters in the descriptor and Java reflection object: " + k0.t(this) + " != " + i14 + "\nCalling: " + descriptor + "\nParameter types: " + this.f7648b.a() + ")\nDefault: " + z11);
                    }
                    IntRange i15 = yo.j.i(Math.max(i11, 0), arrayList2.size() + i11);
                    List[] listArr = new List[i14];
                    int i16 = 0;
                    while (i16 < i14) {
                        if (i16 <= i15.f13546e && i15.f13545d <= i16) {
                            yq.c0 b11 = yq.c.b((yq.y) arrayList2.get(i16 - i11));
                            list = android.support.v4.media.session.b.m(b11);
                            if (list == null) {
                                Class D2 = android.support.v4.media.session.b.D(b11);
                                if (D2 != null && (l6 = android.support.v4.media.session.b.l(D2, descriptor)) != null) {
                                    list = kotlin.collections.b0.c(l6);
                                }
                            }
                            listArr[i16] = list;
                            i16++;
                        }
                        list = null;
                        listArr[i16] = list;
                        i16++;
                    }
                    mVar = new e4.m(i15, listArr, declaredMethod);
                } else {
                    IntRange.f13542w.getClass();
                    mVar = new e4.m(IntRange.f13543x, new List[0], declaredMethod);
                }
                this.f7650d = mVar;
                go.e b12 = kotlin.collections.b0.b();
                g gVar = this.f7648b;
                length = !(gVar instanceof u) ? ((u) gVar).f7670g.length : gVar instanceof t ? 1 : 0;
                if (length > 0) {
                    b12.add(yo.j.i(0, length));
                }
                List[] listArr2 = (List[]) mVar.f7964i;
                length2 = listArr2.length;
                i5 = 0;
                while (i5 < length2) {
                    List list2 = listArr2[i5];
                    int size = (list2 != null ? list2.size() : 1) + length;
                    b12.add(yo.j.i(length, size));
                    i5++;
                    length = size;
                }
                this.f7651e = (IntRange[]) kotlin.collections.b0.a(b12).toArray(new IntRange[0]);
                iterable = (IntRange) this.f7650d.f7963e;
                if ((iterable instanceof Collection) || !((Collection) iterable).isEmpty()) {
                    it = iterable.iterator();
                    while (true) {
                        if (((yo.b) it).f20994i) {
                            break;
                        }
                        List list3 = ((List[]) this.f7650d.f7964i)[((kotlin.collections.r0) it).nextInt()];
                        if (list3 != null && list3.size() > 1) {
                            z8 = true;
                            break;
                        }
                    }
                }
                this.f7652f = z8;
            } catch (NoSuchMethodException unused) {
                throw new u1("No box method found in inline class: " + D + " (calling " + descriptor + ')');
            }
        }
        declaredMethod = null;
        if (kq.g.a(descriptor)) {
        }
        this.f7650d = mVar;
        go.e b122 = kotlin.collections.b0.b();
        g gVar2 = this.f7648b;
        if (!(gVar2 instanceof u)) {
        }
        if (length > 0) {
        }
        List[] listArr22 = (List[]) mVar.f7964i;
        length2 = listArr22.length;
        i5 = 0;
        while (i5 < length2) {
        }
        this.f7651e = (IntRange[]) kotlin.collections.b0.a(b122).toArray(new IntRange[0]);
        iterable = (IntRange) this.f7650d.f7963e;
        if (iterable instanceof Collection) {
        }
        it = iterable.iterator();
        while (true) {
            if (((yo.b) it).f20994i) {
            }
        }
        this.f7652f = z8;
    }

    @Override // dp.g
    public final List a() {
        return this.f7648b.a();
    }

    @Override // dp.g
    public final Member b() {
        return this.f7649c;
    }

    @Override // dp.g
    public final boolean c() {
        return this.f7648b instanceof r;
    }

    @Override // dp.g
    public final Object call(Object[] args) {
        Object invoke;
        Object obj;
        Object e9;
        Intrinsics.checkNotNullParameter(args, "args");
        e4.m mVar = this.f7650d;
        IntRange intRange = (IntRange) mVar.f7963e;
        List[] listArr = (List[]) mVar.f7964i;
        Method method = (Method) mVar.f7965v;
        boolean isEmpty = intRange.isEmpty();
        int i5 = intRange.f13546e;
        int i6 = intRange.f13545d;
        if (!isEmpty) {
            if (this.f7652f) {
                go.e eVar = new go.e(args.length);
                for (int i10 = 0; i10 < i6; i10++) {
                    eVar.add(args[i10]);
                }
                if (i6 <= i5) {
                    while (true) {
                        List<Method> list = listArr[i6];
                        Object obj2 = args[i6];
                        if (list != null) {
                            for (Method method2 : list) {
                                if (obj2 != null) {
                                    e9 = method2.invoke(obj2, null);
                                } else {
                                    Class<?> returnType = method2.getReturnType();
                                    Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
                                    e9 = c2.e(returnType);
                                }
                                eVar.add(e9);
                            }
                        } else {
                            eVar.add(obj2);
                        }
                        if (i6 == i5) {
                            break;
                        }
                        i6++;
                    }
                }
                int i11 = i5 + 1;
                Intrinsics.checkNotNullParameter(args, "<this>");
                int length = args.length - 1;
                if (i11 <= length) {
                    while (true) {
                        eVar.add(args[i11]);
                        if (i11 == length) {
                            break;
                        }
                        i11++;
                    }
                }
                args = kotlin.collections.b0.a(eVar).toArray(new Object[0]);
            } else {
                int length2 = args.length;
                Object[] objArr = new Object[length2];
                for (int i12 = 0; i12 < length2; i12++) {
                    if (i12 > i5 || i6 > i12) {
                        obj = args[i12];
                    } else {
                        List list2 = listArr[i12];
                        Method method3 = list2 != null ? (Method) CollectionsKt.Z(list2) : null;
                        obj = args[i12];
                        if (method3 != null) {
                            if (obj != null) {
                                obj = method3.invoke(obj, null);
                            } else {
                                Class<?> returnType2 = method3.getReturnType();
                                Intrinsics.checkNotNullExpressionValue(returnType2, "getReturnType(...)");
                                obj = c2.e(returnType2);
                            }
                        }
                    }
                    objArr[i12] = obj;
                }
                args = objArr;
            }
        }
        Object call = this.f7648b.call(args);
        return (call == ko.a.f13464d || method == null || (invoke = method.invoke(null, call)) == null) ? call : invoke;
    }

    public final IntRange d(int i5) {
        IntRange[] intRangeArr = this.f7651e;
        if (i5 >= 0 && i5 < intRangeArr.length) {
            return intRangeArr[i5];
        }
        if (intRangeArr.length == 0) {
            return new IntRange(i5, i5, 1);
        }
        int length = ((IntRange) kotlin.collections.x.B(intRangeArr)).f13546e + 1 + (i5 - intRangeArr.length);
        return new IntRange(length, length, 1);
    }

    @Override // dp.g
    public final Type getReturnType() {
        return this.f7648b.getReturnType();
    }
}
