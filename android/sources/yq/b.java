package yq;

import java.util.Collection;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class b extends i {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(xq.o oVar) {
        super(oVar);
        if (oVar != null) {
        } else {
            n(0);
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0045  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x003f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void n(int i5) {
        String format;
        String str = (i5 == 1 || i5 == 3 || i5 == 4) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 3 || i5 == 4) ? 2 : 3];
        if (i5 != 1) {
            if (i5 == 2) {
                objArr[0] = "classifier";
            } else if (i5 != 3 && i5 != 4) {
                objArr[0] = "storageManager";
            }
            if (i5 != 1) {
                objArr[1] = "getBuiltIns";
            } else if (i5 == 3 || i5 == 4) {
                objArr[1] = "getAdditionalNeighboursInSupertypeGraph";
            } else {
                objArr[1] = "kotlin/reflect/jvm/internal/impl/types/AbstractClassTypeConstructor";
            }
            if (i5 != 1) {
                if (i5 == 2) {
                    objArr[2] = "isSameClassifier";
                } else if (i5 != 3 && i5 != 4) {
                    objArr[2] = "<init>";
                }
            }
            format = String.format(str, objArr);
            if (i5 == 1 && i5 != 3 && i5 != 4) {
                throw new IllegalArgumentException(format);
            }
            throw new IllegalStateException(format);
        }
        objArr[0] = "kotlin/reflect/jvm/internal/impl/types/AbstractClassTypeConstructor";
        if (i5 != 1) {
        }
        if (i5 != 1) {
        }
        format = String.format(str, objArr);
        if (i5 == 1) {
        }
        throw new IllegalStateException(format);
    }

    @Override // yq.i
    public final y f() {
        ip.f a = a();
        if (a == null) {
            fp.i.a(107);
            throw null;
        }
        hq.e eVar = fp.i.f8859e;
        if (fp.i.b(a, fp.o.a) || fp.i.b(a, fp.o.f8878b)) {
            return null;
        }
        return g().e();
    }

    @Override // yq.p0
    public final fp.i g() {
        fp.i e9 = oq.e.e(a());
        if (e9 != null) {
            return e9;
        }
        n(1);
        throw null;
    }

    @Override // yq.i
    public final Collection h(boolean z5) {
        ip.l h6 = a().h();
        if (!(h6 instanceof ip.f)) {
            List list = Collections.EMPTY_LIST;
            if (list != null) {
                return list;
            }
            n(3);
            throw null;
        }
        ir.h hVar = new ir.h();
        ip.f fVar = (ip.f) h6;
        hVar.add(fVar.k());
        ip.f J = fVar.J();
        if (z5 && J != null) {
            hVar.add(J.k());
        }
        return hVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x0054, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(((lp.c0) ((ip.f0) r0)).f14132x, ((lp.c0) ((ip.f0) r6)).f14132x) != false) goto L22;
     */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0077 A[RETURN] */
    @Override // yq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean k(ip.i second) {
        boolean z5;
        if (second instanceof ip.f) {
            ip.f first = a();
            Intrinsics.checkNotNullParameter(first, "first");
            Intrinsics.checkNotNullParameter(second, "second");
            if (Intrinsics.areEqual(first.getName(), second.getName())) {
                ip.l h6 = first.h();
                ip.l h7 = second.h();
                while (true) {
                    if (h6 != null && h7 != null) {
                        if (!(h6 instanceof ip.a0)) {
                            if (!(h7 instanceof ip.a0)) {
                                if (!(h6 instanceof ip.f0)) {
                                    if ((h7 instanceof ip.f0) || !Intrinsics.areEqual(h6.getName(), h7.getName())) {
                                        break;
                                    }
                                    h6 = h6.h();
                                    h7 = h7.h();
                                } else if (h7 instanceof ip.f0) {
                                }
                            } else {
                                break;
                            }
                        } else {
                            z5 = h7 instanceof ip.a0;
                            break;
                        }
                    } else {
                        break;
                    }
                }
                z5 = true;
                if (!z5) {
                    return true;
                }
            }
            z5 = false;
            if (!z5) {
            }
        }
        return false;
    }

    @Override // yq.p0
    /* renamed from: o, reason: merged with bridge method [inline-methods] */
    public abstract ip.f a();
}
