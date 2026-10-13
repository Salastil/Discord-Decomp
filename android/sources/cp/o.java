package cp;

import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6924d;

    /* renamed from: e, reason: collision with root package name */
    public final r f6925e;

    public /* synthetic */ o(r rVar, int i5) {
        this.f6924d = i5;
        this.f6925e = rVar;
    }

    /* JADX WARN: Type inference failed for: r4v4, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int i5;
        int i6;
        Type[] lowerBounds;
        int i10 = this.f6924d;
        int i11 = 0;
        r1 = false;
        boolean z5 = false;
        int i12 = 1;
        r rVar = this.f6925e;
        switch (i10) {
            case 0:
                return c2.d(rVar.e());
            case 1:
                ip.d e9 = rVar.e();
                ArrayList arrayList = new ArrayList();
                if (rVar.h()) {
                    i5 = 0;
                } else {
                    lp.u g6 = c2.g(e9);
                    if (g6 != null) {
                        arrayList.add(new y0(rVar, 0, zo.l.f21329d, new p(g6, 0)));
                        i5 = 1;
                    } else {
                        i5 = 0;
                    }
                    lp.u W = e9.W();
                    if (W != null) {
                        arrayList.add(new y0(rVar, i5, zo.l.f21330e, new p(W, 1)));
                        i5++;
                    }
                }
                int size = e9.P().size();
                while (i11 < size) {
                    arrayList.add(new y0(rVar, i5, zo.l.f21331i, new q(e9, i11)));
                    i11++;
                    i5++;
                }
                if (rVar.g() && (e9 instanceof tp.a) && arrayList.size() > 1) {
                    kotlin.collections.g0.n(arrayList, new e(i12));
                }
                arrayList.trimToSize();
                return arrayList;
            case 2:
                yq.y returnType = rVar.e().getReturnType();
                Intrinsics.checkNotNull(returnType);
                return new r1(returnType, new o(rVar, 6));
            case 3:
                List<ip.s0> typeParameters = rVar.e().getTypeParameters();
                Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(typeParameters, 10));
                for (ip.s0 s0Var : typeParameters) {
                    Intrinsics.checkNotNull(s0Var);
                    arrayList2.add(new s1(rVar, s0Var));
                }
                return arrayList2;
            case 4:
                List<zo.m> parameters = rVar.getParameters();
                int size2 = (rVar.isSuspend() ? 1 : 0) + parameters.size();
                if (((Boolean) rVar.f6943x.getValue()).booleanValue()) {
                    i6 = 0;
                    for (zo.m mVar : parameters) {
                        i6 += ((y0) mVar).f7000i == zo.l.f21331i ? rVar.f(mVar) : 0;
                    }
                } else if (parameters.isEmpty()) {
                    i6 = 0;
                } else {
                    Iterator it = parameters.iterator();
                    i6 = 0;
                    while (it.hasNext()) {
                        if (((y0) ((zo.m) it.next())).f7000i == zo.l.f21331i && (i6 = i6 + 1) < 0) {
                            throw new ArithmeticException("Count overflow has happened.");
                        }
                    }
                }
                int i13 = (i6 + 31) / 32;
                Object[] objArr = new Object[size2 + i13 + 1];
                Iterator it2 = parameters.iterator();
                while (it2.hasNext()) {
                    y0 y0Var = (y0) ((zo.m) it2.next());
                    boolean c6 = y0Var.c();
                    int i14 = y0Var.f6999e;
                    if (c6) {
                        r1 b10 = y0Var.b();
                        hq.c cVar = c2.a;
                        Intrinsics.checkNotNullParameter(b10, "<this>");
                        yq.y yVar = b10.f6947d;
                        if (yVar == null || !kq.g.c(yVar)) {
                            r1 b11 = y0Var.b();
                            Intrinsics.checkNotNullParameter(b11, "<this>");
                            Type javaType = b11.getJavaType();
                            if (javaType == null) {
                                Intrinsics.checkNotNullParameter(b11, "<this>");
                                javaType = b11.getJavaType();
                                if (javaType == null) {
                                    javaType = zo.c0.m(b11, false);
                                }
                            }
                            objArr[i14] = c2.e(javaType);
                        }
                    }
                    if (y0Var.d()) {
                        objArr[i14] = r.a(y0Var.b());
                    }
                }
                for (int i15 = 0; i15 < i13; i15++) {
                    objArr[size2 + i15] = 0;
                }
                return objArr;
            case 5:
                List parameters2 = rVar.getParameters();
                if (parameters2 == null || !parameters2.isEmpty()) {
                    Iterator it3 = parameters2.iterator();
                    while (true) {
                        if (it3.hasNext()) {
                            if (c2.h(((y0) ((zo.m) it3.next())).b())) {
                                z5 = true;
                            }
                        }
                    }
                }
                return Boolean.valueOf(z5);
            default:
                Type type = null;
                if (rVar.isSuspend()) {
                    Object S = CollectionsKt.S(rVar.b().a());
                    ParameterizedType parameterizedType = S instanceof ParameterizedType ? (ParameterizedType) S : null;
                    if (Intrinsics.areEqual(parameterizedType != null ? parameterizedType.getRawType() : null, Continuation.class)) {
                        Type[] actualTypeArguments = parameterizedType.getActualTypeArguments();
                        Intrinsics.checkNotNullExpressionValue(actualTypeArguments, "getActualTypeArguments(...)");
                        Object D = kotlin.collections.x.D(actualTypeArguments);
                        WildcardType wildcardType = D instanceof WildcardType ? (WildcardType) D : null;
                        if (wildcardType != null && (lowerBounds = wildcardType.getLowerBounds()) != null) {
                            type = (Type) kotlin.collections.x.s(lowerBounds);
                        }
                    }
                }
                return type == null ? rVar.b().getReturnType() : type;
        }
    }
}
