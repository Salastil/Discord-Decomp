package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.u0;
import yq.w0;

/* loaded from: classes3.dex */
public final class h0 {
    public ip.l a;

    /* renamed from: b, reason: collision with root package name */
    public ip.z f14145b;

    /* renamed from: c, reason: collision with root package name */
    public ip.p f14146c;

    /* renamed from: e, reason: collision with root package name */
    public ip.c f14148e;

    /* renamed from: h, reason: collision with root package name */
    public final u f14151h;

    /* renamed from: i, reason: collision with root package name */
    public final hq.e f14152i;
    public final yq.y j;
    public final /* synthetic */ i0 k;

    /* renamed from: d, reason: collision with root package name */
    public ip.m0 f14147d = null;

    /* renamed from: f, reason: collision with root package name */
    public u0 f14149f = u0.a;

    /* renamed from: g, reason: collision with root package name */
    public boolean f14150g = true;

    public h0(i0 i0Var) {
        this.k = i0Var;
        this.a = i0Var.h();
        this.f14145b = i0Var.e();
        this.f14146c = i0Var.getVisibility();
        this.f14148e = i0Var.b();
        this.f14151h = i0Var.R;
        this.f14152i = i0Var.getName();
        this.j = i0Var.getType();
    }

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 1 || i5 == 2 || i5 == 3 || i5 == 5 || i5 == 7 || i5 == 9 || i5 == 11 || i5 == 19 || i5 == 13 || i5 == 14 || i5 == 16 || i5 == 17) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 2 || i5 == 3 || i5 == 5 || i5 == 7 || i5 == 9 || i5 == 11 || i5 == 19 || i5 == 13 || i5 == 14 || i5 == 16 || i5 == 17) ? 2 : 3];
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 5:
            case 7:
            case 9:
            case 11:
            case 13:
            case 14:
            case 16:
            case 17:
            case 19:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyDescriptorImpl$CopyConfiguration";
                break;
            case 4:
                objArr[0] = "type";
                break;
            case 6:
                objArr[0] = "modality";
                break;
            case 8:
                objArr[0] = "visibility";
                break;
            case 10:
                objArr[0] = "kind";
                break;
            case 12:
                objArr[0] = "typeParameters";
                break;
            case 15:
                objArr[0] = "substitution";
                break;
            case 18:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            default:
                objArr[0] = "owner";
                break;
        }
        if (i5 == 1) {
            objArr[1] = "setOwner";
        } else if (i5 == 2) {
            objArr[1] = "setOriginal";
        } else if (i5 == 3) {
            objArr[1] = "setPreserveSourceElement";
        } else if (i5 == 5) {
            objArr[1] = "setReturnType";
        } else if (i5 == 7) {
            objArr[1] = "setModality";
        } else if (i5 == 9) {
            objArr[1] = "setVisibility";
        } else if (i5 == 11) {
            objArr[1] = "setKind";
        } else if (i5 == 19) {
            objArr[1] = "setName";
        } else if (i5 == 13) {
            objArr[1] = "setTypeParameters";
        } else if (i5 == 14) {
            objArr[1] = "setDispatchReceiverParameter";
        } else if (i5 == 16) {
            objArr[1] = "setSubstitution";
        } else if (i5 != 17) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyDescriptorImpl$CopyConfiguration";
        } else {
            objArr[1] = "setCopyOverrides";
        }
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 5:
            case 7:
            case 9:
            case 11:
            case 13:
            case 14:
            case 16:
            case 17:
            case 19:
                break;
            case 4:
                objArr[2] = "setReturnType";
                break;
            case 6:
                objArr[2] = "setModality";
                break;
            case 8:
                objArr[2] = "setVisibility";
                break;
            case 10:
                objArr[2] = "setKind";
                break;
            case 12:
                objArr[2] = "setTypeParameters";
                break;
            case 15:
                objArr[2] = "setSubstitution";
                break;
            case 18:
                objArr[2] = "setName";
                break;
            default:
                objArr[2] = "setOwner";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 1 && i5 != 2 && i5 != 3 && i5 != 5 && i5 != 7 && i5 != 9 && i5 != 11 && i5 != 19 && i5 != 13 && i5 != 14 && i5 != 16 && i5 != 17) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public final i0 b() {
        u uVar;
        u uVar2;
        j0 j0Var;
        k0 k0Var;
        w0 w0Var;
        Function0 function0;
        u uVar3;
        u uVar4;
        ip.l lVar = this.a;
        ip.z zVar = this.f14145b;
        ip.p pVar = this.f14146c;
        ip.m0 m0Var = this.f14147d;
        ip.c cVar = this.f14148e;
        hq.e eVar = this.f14152i;
        i0 i0Var = this.k;
        i0 D0 = i0Var.D0(lVar, zVar, pVar, m0Var, cVar, eVar);
        List typeParameters = i0Var.getTypeParameters();
        ArrayList arrayList = new ArrayList(((ArrayList) typeParameters).size());
        w0 A = yq.c.A(typeParameters, this.f14149f, D0, arrayList);
        c1 c1Var = c1.f21015w;
        yq.y yVar = this.j;
        yq.y j = A.j(yVar, c1Var);
        if (j != null) {
            c1 c1Var2 = c1.f21014v;
            yq.y j5 = A.j(yVar, c1Var2);
            if (j5 != null) {
                D0.H0(j5);
            }
            u uVar5 = this.f14151h;
            if (uVar5 != null) {
                u c6 = uVar5.c(A);
                uVar = c6 != null ? c6 : null;
            }
            u uVar6 = i0Var.S;
            if (uVar6 != null) {
                yq.y j7 = A.j(uVar6.getType(), c1Var2);
                if (j7 == null) {
                    uVar4 = null;
                } else {
                    uVar6.B0();
                    uVar4 = new u(D0, new sq.b(D0, j7), uVar6.getAnnotations());
                }
                uVar2 = uVar4;
            } else {
                uVar2 = null;
            }
            ArrayList arrayList2 = new ArrayList();
            for (u uVar7 : i0Var.Q) {
                yq.y j10 = A.j(uVar7.getType(), c1.f21014v);
                if (j10 == null) {
                    uVar3 = null;
                } else {
                    hq.e z02 = ((sq.a) uVar7.B0()).z0();
                    uVar7.B0();
                    uVar3 = new u(D0, new sq.a(D0, j10, z02), uVar7.getAnnotations());
                }
                if (uVar3 != null) {
                    arrayList2.add(uVar3);
                }
            }
            D0.I0(j, arrayList, uVar, uVar2, arrayList2);
            j0 j0Var2 = i0Var.U;
            ip.c cVar2 = ip.c.f12124e;
            ip.p0 p0Var = ip.o0.f12151g;
            if (j0Var2 == null) {
                j0Var = null;
            } else {
                jp.h annotations = j0Var2.getAnnotations();
                ip.z zVar2 = this.f14145b;
                ip.p visibility = i0Var.U.getVisibility();
                if (this.f14148e == cVar2) {
                    ip.p f2 = ip.q.f(visibility.a.u());
                    Intrinsics.checkNotNullExpressionValue(f2, "toDescriptorVisibility(...)");
                    if (ip.q.e(f2)) {
                        visibility = ip.q.f12162h;
                    }
                }
                ip.p pVar2 = visibility;
                j0 j0Var3 = i0Var.U;
                boolean z5 = j0Var3.f14142x;
                boolean z6 = j0Var3.f14143y;
                boolean z7 = j0Var3.G;
                ip.c cVar3 = this.f14148e;
                ip.m0 m0Var2 = this.f14147d;
                j0Var = new j0(D0, annotations, zVar2, pVar2, z5, z6, z7, cVar3, m0Var2 == null ? null : m0Var2.getGetter(), p0Var);
            }
            if (j0Var != null) {
                j0 j0Var4 = i0Var.U;
                yq.y yVar2 = j0Var4.K;
                j0Var.J = i0.E0(A, j0Var4);
                j0Var.E0(yVar2 != null ? A.j(yVar2, c1.f21015w) : null);
            }
            k0 k0Var2 = i0Var.V;
            if (k0Var2 == null) {
                k0Var = null;
            } else {
                jp.h annotations2 = k0Var2.getAnnotations();
                ip.z zVar3 = this.f14145b;
                ip.p visibility2 = i0Var.V.getVisibility();
                if (this.f14148e == cVar2) {
                    ip.p f10 = ip.q.f(visibility2.a.u());
                    Intrinsics.checkNotNullExpressionValue(f10, "toDescriptorVisibility(...)");
                    if (ip.q.e(f10)) {
                        visibility2 = ip.q.f12162h;
                    }
                }
                ip.p pVar3 = visibility2;
                k0 k0Var3 = i0Var.V;
                boolean z8 = k0Var3.f14142x;
                boolean z10 = k0Var3.f14143y;
                boolean z11 = k0Var3.G;
                ip.c cVar4 = this.f14148e;
                ip.m0 m0Var3 = this.f14147d;
                k0Var = new k0(D0, annotations2, zVar3, pVar3, z8, z10, z11, cVar4, m0Var3 == null ? null : m0Var3.getSetter(), p0Var);
            }
            if (k0Var != null) {
                w0Var = A;
                List F0 = t.F0(k0Var, i0Var.V.P(), w0Var, false, false, null);
                if (F0 == null) {
                    F0 = Collections.singletonList(k0.D0(k0Var, oq.e.e(this.a).o(), ((r0) i0Var.V.P().get(0)).getAnnotations()));
                }
                if (F0.size() != 1) {
                    throw new IllegalStateException();
                }
                k0Var.J = i0.E0(w0Var, i0Var.V);
                r0 r0Var = (r0) F0.get(0);
                if (r0Var == null) {
                    k0.v0(6);
                    throw null;
                }
                k0Var.K = r0Var;
            } else {
                w0Var = A;
            }
            r rVar = i0Var.W;
            r rVar2 = rVar == null ? null : new r(rVar.getAnnotations(), D0);
            r rVar3 = i0Var.X;
            D0.F0(j0Var, k0Var, rVar2, rVar3 != null ? new r(rVar3.getAnnotations(), D0) : null);
            if (this.f14150g) {
                int i5 = ir.k.f12269i;
                ir.k f11 = ir.n.f();
                Iterator it = i0Var.i().iterator();
                while (it.hasNext()) {
                    f11.add(((ip.m0) it.next()).c(w0Var));
                }
                D0.I = f11;
            }
            if (i0Var.isConst() && (function0 = i0Var.F) != null) {
                D0.G0(i0Var.E, function0);
            }
            return D0;
        }
        return null;
    }
}
