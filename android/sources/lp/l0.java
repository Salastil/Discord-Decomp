package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import yq.w0;

/* loaded from: classes3.dex */
public class l0 extends t {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l0(ip.l lVar, l0 l0Var, jp.h hVar, hq.e eVar, ip.c cVar, ip.o0 o0Var) {
        super(eVar, cVar, lVar, l0Var, o0Var, hVar);
        if (lVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (eVar == null) {
            v0(2);
            throw null;
        }
        if (cVar == null) {
            v0(3);
            throw null;
        }
        if (o0Var != null) {
        } else {
            v0(4);
            throw null;
        }
    }

    public static l0 M0(b bVar, hq.e eVar, ip.c cVar, ip.o0 o0Var) {
        if (bVar == null) {
            v0(5);
            throw null;
        }
        if (eVar == null) {
            v0(7);
            throw null;
        }
        if (o0Var != null) {
            return new l0(bVar, null, jp.g.a, eVar, cVar, o0Var);
        }
        v0(9);
        throw null;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 13 || i5 == 18 || i5 == 23 || i5 == 24 || i5 == 29 || i5 == 30) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 13 || i5 == 18 || i5 == 23 || i5 == 24 || i5 == 29 || i5 == 30) ? 2 : 3];
        switch (i5) {
            case 1:
            case 6:
            case 27:
                objArr[0] = "annotations";
                break;
            case 2:
            case 7:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
            case 8:
            case 26:
                objArr[0] = "kind";
                break;
            case 4:
            case 9:
            case 28:
                objArr[0] = "source";
                break;
            case 5:
            default:
                objArr[0] = "containingDeclaration";
                break;
            case 10:
            case 15:
            case 20:
                objArr[0] = "typeParameters";
                break;
            case 11:
            case 16:
            case 21:
                objArr[0] = "unsubstitutedValueParameters";
                break;
            case 12:
            case 17:
            case 22:
                objArr[0] = "visibility";
                break;
            case 13:
            case 18:
            case 23:
            case 24:
            case 29:
            case 30:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/SimpleFunctionDescriptorImpl";
                break;
            case 14:
            case 19:
                objArr[0] = "contextReceiverParameters";
                break;
            case 25:
                objArr[0] = "newOwner";
                break;
        }
        if (i5 == 13 || i5 == 18 || i5 == 23) {
            objArr[1] = "initialize";
        } else if (i5 == 24) {
            objArr[1] = "getOriginal";
        } else if (i5 == 29) {
            objArr[1] = "copy";
        } else if (i5 != 30) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/SimpleFunctionDescriptorImpl";
        } else {
            objArr[1] = "newCopyBuilder";
        }
        switch (i5) {
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                objArr[2] = "create";
                break;
            case 10:
            case 11:
            case 12:
            case 14:
            case 15:
            case 16:
            case 17:
            case 19:
            case 20:
            case 21:
            case 22:
                objArr[2] = "initialize";
                break;
            case 13:
            case 18:
            case 23:
            case 24:
            case 29:
            case 30:
                break;
            case 25:
            case 26:
            case 27:
            case 28:
                objArr[2] = "createSubstitutedCopy";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 13 && i5 != 18 && i5 != 23 && i5 != 24 && i5 != 29 && i5 != 30) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // lp.t
    public t D0(hq.e eVar, ip.c cVar, ip.l lVar, ip.v vVar, ip.o0 o0Var, jp.h hVar) {
        if (lVar == null) {
            v0(25);
            throw null;
        }
        if (cVar == null) {
            v0(26);
            throw null;
        }
        if (hVar == null) {
            v0(27);
            throw null;
        }
        l0 l0Var = (l0) vVar;
        if (eVar == null) {
            eVar = getName();
        }
        return new l0(lVar, l0Var, hVar, eVar, cVar, o0Var);
    }

    @Override // lp.t, lp.m, lp.l, ip.l
    /* renamed from: N0, reason: merged with bridge method [inline-methods] */
    public final l0 a() {
        l0 l0Var = (l0) super.a();
        if (l0Var != null) {
            return l0Var;
        }
        v0(24);
        throw null;
    }

    @Override // lp.t
    /* renamed from: O0, reason: merged with bridge method [inline-methods] */
    public final l0 G0(u uVar, u uVar2, List list, List list2, List list3, yq.y yVar, ip.z zVar, ip.p pVar) {
        if (list == null) {
            v0(14);
            throw null;
        }
        if (list2 == null) {
            v0(15);
            throw null;
        }
        if (list3 == null) {
            v0(16);
            throw null;
        }
        if (pVar != null) {
            return P0(uVar, uVar2, list, list2, list3, yVar, zVar, pVar, null);
        }
        v0(17);
        throw null;
    }

    public l0 P0(u uVar, u uVar2, List list, List list2, List list3, yq.y yVar, ip.z zVar, ip.p pVar, Map map) {
        if (list == null) {
            v0(19);
            throw null;
        }
        if (list2 == null) {
            v0(20);
            throw null;
        }
        if (list3 == null) {
            v0(21);
            throw null;
        }
        if (pVar == null) {
            v0(22);
            throw null;
        }
        super.G0(uVar, uVar2, list, list2, list3, yVar, zVar, pVar);
        if (map != null && !map.isEmpty()) {
            this.a0 = new LinkedHashMap(map);
        }
        return this;
    }

    @Override // lp.t, ip.v
    public ip.u m0() {
        return H0(w0.f21077b);
    }
}
