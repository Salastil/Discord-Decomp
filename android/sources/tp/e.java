package tp;

import com.facebook.react.devsupport.StackTraceHelper;
import fr.i;
import fr.r;
import ip.l;
import ip.o0;
import ip.p;
import ip.v;
import ip.z;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import jp.h;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import lp.l0;
import lp.s;
import lp.t;
import lp.u;
import m3.n;
import yq.w0;
import yq.y;

/* loaded from: classes3.dex */
public final class e extends l0 implements a {

    /* renamed from: d0, reason: collision with root package name */
    public static final nq.b f18688d0 = new nq.b();

    /* renamed from: e0, reason: collision with root package name */
    public static final nq.b f18689e0 = new nq.b();

    /* renamed from: b0, reason: collision with root package name */
    public int f18690b0;

    /* renamed from: c0, reason: collision with root package name */
    public final boolean f18691c0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(l lVar, l0 l0Var, h hVar, hq.e eVar, ip.c cVar, o0 o0Var, boolean z5) {
        super(lVar, l0Var, hVar, eVar, cVar, o0Var);
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
        this.f18690b0 = 0;
        this.f18691c0 = z5;
    }

    public static e Q0(l lVar, up.c cVar, hq.e eVar, np.f fVar, boolean z5) {
        if (lVar == null) {
            v0(5);
            throw null;
        }
        if (eVar != null) {
            return new e(lVar, null, cVar, eVar, ip.c.f12123d, fVar, z5);
        }
        v0(7);
        throw null;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 13 || i5 == 18 || i5 == 21) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 13 || i5 == 18 || i5 == 21) ? 2 : 3];
        switch (i5) {
            case 1:
            case 6:
            case 16:
                objArr[0] = "annotations";
                break;
            case 2:
            case 7:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
            case 15:
                objArr[0] = "kind";
                break;
            case 4:
            case 8:
            case 17:
                objArr[0] = "source";
                break;
            case 5:
            default:
                objArr[0] = "containingDeclaration";
                break;
            case 9:
                objArr[0] = "contextReceiverParameters";
                break;
            case 10:
                objArr[0] = "typeParameters";
                break;
            case 11:
                objArr[0] = "unsubstitutedValueParameters";
                break;
            case 12:
                objArr[0] = "visibility";
                break;
            case 13:
            case 18:
            case 21:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/load/java/descriptors/JavaMethodDescriptor";
                break;
            case 14:
                objArr[0] = "newOwner";
                break;
            case 19:
                objArr[0] = "enhancedValueParameterTypes";
                break;
            case 20:
                objArr[0] = "enhancedReturnType";
                break;
        }
        if (i5 == 13) {
            objArr[1] = "initialize";
        } else if (i5 == 18) {
            objArr[1] = "createSubstitutedCopy";
        } else if (i5 != 21) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/descriptors/JavaMethodDescriptor";
        } else {
            objArr[1] = "enhance";
        }
        switch (i5) {
            case 5:
            case 6:
            case 7:
            case 8:
                objArr[2] = "createJavaMethod";
                break;
            case 9:
            case 10:
            case 11:
            case 12:
                objArr[2] = "initialize";
                break;
            case 13:
            case 18:
            case 21:
                break;
            case 14:
            case 15:
            case 16:
            case 17:
                objArr[2] = "createSubstitutedCopy";
                break;
            case 19:
            case 20:
                objArr[2] = "enhance";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 13 && i5 != 18 && i5 != 21) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // lp.l0, lp.t
    public final t D0(hq.e eVar, ip.c cVar, l lVar, v vVar, o0 o0Var, h hVar) {
        if (lVar == null) {
            v0(14);
            throw null;
        }
        if (cVar == null) {
            v0(15);
            throw null;
        }
        if (hVar == null) {
            v0(16);
            throw null;
        }
        l0 l0Var = (l0) vVar;
        if (eVar == null) {
            eVar = getName();
        }
        e eVar2 = new e(lVar, l0Var, hVar, eVar, cVar, o0Var, this.f18691c0);
        int i5 = this.f18690b0;
        boolean z5 = false;
        if (i5 != 1) {
            if (i5 != 2) {
                if (i5 != 3) {
                    if (i5 != 4) {
                        throw null;
                    }
                }
            }
            z5 = true;
        }
        eVar2.R0(z5, s4.h.a(i5));
        return eVar2;
    }

    @Override // lp.l0
    public final l0 P0(u uVar, u uVar2, List list, List list2, List list3, y yVar, z zVar, p pVar, Map map) {
        fr.f fVar;
        if (list == null) {
            v0(9);
            throw null;
        }
        if (list2 == null) {
            v0(10);
            throw null;
        }
        if (list3 == null) {
            v0(11);
            throw null;
        }
        if (pVar == null) {
            v0(12);
            throw null;
        }
        super.P0(uVar, uVar2, list, list2, list3, yVar, zVar, pVar, map);
        List list4 = r.f9034f;
        Intrinsics.checkNotNullParameter(this, "functionDescriptor");
        for (i iVar : r.f9034f) {
            Regex regex = iVar.f9019b;
            Intrinsics.checkNotNullParameter(this, "functionDescriptor");
            hq.e eVar = iVar.a;
            if (eVar == null || Intrinsics.areEqual(getName(), eVar)) {
                if (regex != null) {
                    String b10 = getName().b();
                    Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
                    if (!regex.d(b10)) {
                        continue;
                    }
                }
                Collection collection = iVar.f9020c;
                if (collection == null || collection.contains(getName())) {
                    Intrinsics.checkNotNullParameter(this, "functionDescriptor");
                    fr.e[] eVarArr = iVar.f9022e;
                    int length = eVarArr.length;
                    int i5 = 0;
                    while (true) {
                        if (i5 >= length) {
                            String str = (String) iVar.f9021d.invoke(this);
                            fVar = str != null ? new fr.f(str) : fr.f.f9011c;
                        } else {
                            String b11 = eVarArr[i5].b(this);
                            if (b11 != null) {
                                fVar = new fr.f(b11);
                                break;
                            }
                            i5++;
                        }
                    }
                    this.K = fVar.a;
                    return this;
                }
            }
        }
        fVar = fr.f.f9010b;
        this.K = fVar.a;
        return this;
    }

    public final void R0(boolean z5, boolean z6) {
        this.f18690b0 = z5 ? z6 ? 4 : 2 : z6 ? 3 : 1;
    }

    @Override // tp.a
    public final a j0(y yVar, ArrayList arrayList, y yVar2, Pair pair) {
        if (yVar2 == null) {
            v0(20);
            throw null;
        }
        ArrayList g6 = ki.b.g(arrayList, P(), this);
        u C = yVar == null ? null : n.C(this, yVar, jp.g.a);
        s H0 = H0(w0.f21077b);
        H0.f14184y = g6;
        H0.H = yVar2;
        H0.F = C;
        H0.M = true;
        H0.L = true;
        e eVar = (e) H0.U.E0(H0);
        if (pair != null) {
            eVar.I0((ip.a) pair.f13474d, pair.f13475e);
        }
        if (eVar != null) {
            return eVar;
        }
        v0(21);
        throw null;
    }

    @Override // lp.t, ip.b
    public final boolean w() {
        return s4.h.a(this.f18690b0);
    }
}
