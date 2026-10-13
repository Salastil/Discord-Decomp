package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class p extends rq.p {

    /* renamed from: b, reason: collision with root package name */
    public final xq.e f14172b;

    /* renamed from: c, reason: collision with root package name */
    public final xq.e f14173c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f14174d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ q f14175e;

    public p(q qVar, xq.o oVar) {
        if (oVar == null) {
            h(0);
            throw null;
        }
        this.f14175e = qVar;
        xq.l lVar = (xq.l) oVar;
        this.f14172b = lVar.c(new n(this, 0));
        this.f14173c = lVar.c(new n(this, 1));
        this.f14174d = new xq.i(lVar, new cp.d0(12, this));
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0022  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0095  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x009d  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00a0  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00a5  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00a8  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00ad  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00b5 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00be  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x008b  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0032  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0049  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x004e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void h(int i5) {
        String str;
        int i6;
        if (i5 != 3 && i5 != 7 && i5 != 9 && i5 != 12) {
            switch (i5) {
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                    break;
                default:
                    str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                    break;
            }
            if (i5 != 3 && i5 != 7 && i5 != 9 && i5 != 12) {
                switch (i5) {
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                        break;
                    default:
                        i6 = 3;
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 4:
                    case 5:
                    case 8:
                    case 10:
                        objArr[0] = StackTraceHelper.NAME_KEY;
                        break;
                    case 2:
                    case 6:
                        objArr[0] = "location";
                        break;
                    case 3:
                    case 7:
                    case 9:
                    case 12:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/EnumEntrySyntheticClassDescriptor$EnumEntryScope";
                        break;
                    case 11:
                        objArr[0] = "fromSupertypes";
                        break;
                    case 13:
                        objArr[0] = "kindFilter";
                        break;
                    case 14:
                        objArr[0] = "nameFilter";
                        break;
                    case 20:
                        objArr[0] = "p";
                        break;
                    default:
                        objArr[0] = "storageManager";
                        break;
                }
                if (i5 != 3) {
                    objArr[1] = "getContributedVariables";
                } else if (i5 == 7) {
                    objArr[1] = "getContributedFunctions";
                } else if (i5 == 9) {
                    objArr[1] = "getSupertypeScope";
                } else if (i5 != 12) {
                    switch (i5) {
                        case 15:
                            objArr[1] = "getContributedDescriptors";
                            break;
                        case 16:
                            objArr[1] = "computeAllDeclarations";
                            break;
                        case 17:
                            objArr[1] = "getFunctionNames";
                            break;
                        case 18:
                            objArr[1] = "getClassifierNames";
                            break;
                        case 19:
                            objArr[1] = "getVariableNames";
                            break;
                        default:
                            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/EnumEntrySyntheticClassDescriptor$EnumEntryScope";
                            break;
                    }
                } else {
                    objArr[1] = "resolveFakeOverrides";
                }
                switch (i5) {
                    case 1:
                    case 2:
                        objArr[2] = "getContributedVariables";
                        break;
                    case 3:
                    case 7:
                    case 9:
                    case 12:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                        break;
                    case 4:
                        objArr[2] = "computeProperties";
                        break;
                    case 5:
                    case 6:
                        objArr[2] = "getContributedFunctions";
                        break;
                    case 8:
                        objArr[2] = "computeFunctions";
                        break;
                    case 10:
                    case 11:
                        objArr[2] = "resolveFakeOverrides";
                        break;
                    case 13:
                    case 14:
                        objArr[2] = "getContributedDescriptors";
                        break;
                    case 20:
                        objArr[2] = "printScopeStructure";
                        break;
                    default:
                        objArr[2] = "<init>";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 3 && i5 != 7 && i5 != 9 && i5 != 12) {
                    switch (i5) {
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                            break;
                        default:
                            throw new IllegalArgumentException(format);
                    }
                }
                throw new IllegalStateException(format);
            }
            i6 = 2;
            Object[] objArr2 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 3) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
            if (i5 != 3) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 3) {
            switch (i5) {
            }
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 3) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 3) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 != 3) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 3) {
        }
        throw new IllegalStateException(format222);
    }

    @Override // rq.p, rq.o
    public final Set b() {
        Set set = (Set) this.f14175e.F.invoke();
        if (set != null) {
            return set;
        }
        h(17);
        throw null;
    }

    @Override // rq.p, rq.o
    public final Collection c(hq.e eVar, qp.c cVar) {
        if (eVar != null) {
            return (Collection) this.f14173c.invoke(eVar);
        }
        h(1);
        throw null;
    }

    @Override // rq.p, rq.o
    public final Set d() {
        Set set = Collections.EMPTY_SET;
        if (set != null) {
            return set;
        }
        h(18);
        throw null;
    }

    @Override // rq.p, rq.q
    public final Collection e(rq.f fVar, Function1 function1) {
        if (fVar == null) {
            h(13);
            throw null;
        }
        Collection collection = (Collection) this.f14174d.invoke();
        if (collection != null) {
            return collection;
        }
        h(15);
        throw null;
    }

    @Override // rq.p, rq.o
    public final Collection f(hq.e eVar, qp.a aVar) {
        if (eVar != null) {
            return (Collection) this.f14172b.invoke(eVar);
        }
        h(5);
        throw null;
    }

    @Override // rq.p, rq.o
    public final Set g() {
        Set set = (Set) this.f14175e.F.invoke();
        if (set != null) {
            return set;
        }
        h(19);
        throw null;
    }

    public final rq.o i() {
        rq.o N = ((yq.y) ((yq.i) this.f14175e.n()).b().iterator().next()).N();
        if (N != null) {
            return N;
        }
        h(9);
        throw null;
    }

    public final LinkedHashSet j(hq.e eVar, Collection collection) {
        if (eVar == null) {
            h(10);
            throw null;
        }
        if (collection == null) {
            h(11);
            throw null;
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        kq.n.f13633c.h(eVar, collection, Collections.EMPTY_SET, this.f14175e, new o(linkedHashSet, 0));
        return linkedHashSet;
    }
}
