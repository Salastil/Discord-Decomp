package i0;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import org.webrtc.PeerConnection;

/* loaded from: classes.dex */
public final class g extends Lambda implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public static final g f10394e;

    /* renamed from: i, reason: collision with root package name */
    public static final g f10395i;

    /* renamed from: v, reason: collision with root package name */
    public static final g f10396v;

    /* renamed from: w, reason: collision with root package name */
    public static final g f10397w;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10398d;

    static {
        int i5 = 2;
        f10394e = new g(i5, 0);
        f10395i = new g(i5, 1);
        f10396v = new g(i5, 2);
        f10397w = new g(i5, 3);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ g(int i5, int i6) {
        super(i5);
        this.f10398d = i6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:166:0x0333, code lost:
    
        if (r5.E.E() == null) goto L189;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:120:0x01ff  */
    @Override // kotlin.jvm.functions.Function2
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object obj, Object obj2) {
        boolean z5;
        u uVar;
        m mVar;
        boolean z6;
        switch (this.f10398d) {
            case 0:
                i iVar = (i) obj;
                ((Number) obj2).intValue();
                Intrinsics.checkNotNullParameter(iVar, "$this$null");
                iVar.getClass();
                return Unit.a;
            case 1:
                i iVar2 = (i) obj;
                g0.n measurePolicy = (g0.n) obj2;
                Intrinsics.checkNotNullParameter(iVar2, "$this$null");
                Intrinsics.checkNotNullParameter(measurePolicy, "it");
                u uVar2 = (u) iVar2;
                uVar2.getClass();
                Intrinsics.checkNotNullParameter(measurePolicy, "value");
                if (!Intrinsics.areEqual(uVar2.f10409e, measurePolicy)) {
                    uVar2.f10409e = measurePolicy;
                    e4.c cVar = uVar2.f10410f;
                    cVar.getClass();
                    Intrinsics.checkNotNullParameter(measurePolicy, "measurePolicy");
                    ((u.n) cVar.f7940i).setValue(measurePolicy);
                    uVar2.f();
                }
                return Unit.a;
            case 2:
                i iVar3 = (i) obj;
                z.f m5 = (z.f) obj2;
                Intrinsics.checkNotNullParameter(iVar3, "$this$null");
                Intrinsics.checkNotNullParameter(m5, "it");
                u uVar3 = (u) iVar3;
                z zVar = uVar3.f10415m;
                c0 c0Var = uVar3.f10414l;
                Intrinsics.checkNotNullParameter(m5, "value");
                if (uVar3.f10406b && uVar3.f10416n != z.c.a) {
                    throw new IllegalArgumentException("Modifiers are not supported on virtual LayoutNodes");
                }
                uVar3.f10416n = m5;
                h0 h0Var = c0Var.f10384d;
                m mVar2 = c0Var.f10382b;
                u layoutNode = c0Var.a;
                Intrinsics.checkNotNullParameter(m5, "m");
                z.e eVar = c0Var.f10385e;
                z.e eVar2 = e0.a;
                if (eVar == eVar2) {
                    throw new IllegalStateException("padChain called on already padded chain");
                }
                eVar.f21118d = eVar2;
                eVar2.f21119e = eVar;
                v.d dVar = c0Var.f10386f;
                int i5 = dVar != null ? dVar.f19132i : 0;
                v.d dVar2 = c0Var.f10387g;
                if (dVar2 == null) {
                    dVar2 = new v.d(new z.d[16]);
                }
                int i6 = dVar2.f19132i;
                if (i6 < 16) {
                    i6 = 16;
                }
                v.d dVar3 = new v.d(new z.f[i6]);
                dVar3.a(m5);
                while (true) {
                    int i10 = dVar3.f19132i;
                    if (i10 == 0) {
                        int i11 = dVar2.f19132i;
                        if (i11 == i5) {
                            z.e eVar3 = eVar2.f21119e;
                            for (int i12 = 0; eVar3 != null && i12 < i5; i12++) {
                                if (dVar == null) {
                                    throw new IllegalStateException("expected prior modifier list to be non-empty");
                                }
                                z.d a = (z.d) dVar.f19130d[i12];
                                z.d b10 = (z.d) dVar2.f19130d[i12];
                                Intrinsics.checkNotNullParameter(a, "prev");
                                Intrinsics.checkNotNullParameter(b10, "next");
                                if (Intrinsics.areEqual(a, b10)) {
                                    z6 = 2;
                                } else {
                                    Intrinsics.checkNotNullParameter(a, "a");
                                    Intrinsics.checkNotNullParameter(b10, "b");
                                    z6 = a.getClass() == b10.getClass();
                                }
                                if (z6) {
                                    if (z6) {
                                        c0.d(a, b10, eVar3);
                                    }
                                    eVar3 = eVar3.f21119e;
                                } else {
                                    z5 = true;
                                    eVar3 = eVar3.f21118d;
                                    if (i12 < i5) {
                                        if (dVar == null) {
                                            throw new IllegalStateException("expected prior modifier list to be non-empty");
                                        }
                                        if (eVar3 == null) {
                                            throw new IllegalStateException("structuralUpdate requires a non-null tail");
                                        }
                                        c0Var.c(i12, dVar, dVar2, eVar3);
                                    }
                                    z5 = false;
                                }
                            }
                            z5 = true;
                            if (i12 < i5) {
                            }
                            z5 = false;
                        } else {
                            z5 = true;
                            if (i5 == 0) {
                                for (int i13 = 0; i13 < dVar2.f19132i; i13++) {
                                    eVar2 = c0.a((z.d) dVar2.f19130d[i13], eVar2);
                                }
                                int i14 = 0;
                                for (z.e eVar4 = c0Var.f10384d.f21118d; eVar4 != null && eVar4 != e0.a; eVar4 = eVar4.f21118d) {
                                    i14 |= eVar4.f21116b;
                                    eVar4.f21117c = i14;
                                }
                            } else if (i11 != 0) {
                                if (dVar == null) {
                                    dVar = new v.d(new z.d[16]);
                                }
                                c0Var.c(0, dVar, dVar2, eVar2);
                            } else {
                                if (dVar == null) {
                                    throw new IllegalStateException("expected prior modifier list to be non-empty");
                                }
                                z.e eVar5 = eVar2.f21119e;
                                for (int i15 = 0; eVar5 != null && i15 < dVar.f19132i; i15++) {
                                    eVar5 = c0.b(eVar5).f21119e;
                                }
                                mVar2.G = null;
                                c0Var.f10383c = mVar2;
                                z5 = false;
                            }
                        }
                        c0Var.f10386f = dVar2;
                        if (dVar != null) {
                            dVar.d();
                        } else {
                            dVar = null;
                        }
                        c0Var.f10387g = dVar;
                        d0 d0Var = e0.a;
                        z.e eVar6 = d0Var.f21119e;
                        if (eVar6 == null) {
                            eVar6 = h0Var;
                        }
                        eVar6.f21118d = null;
                        d0Var.f21119e = null;
                        d0Var.f21117c = -1;
                        d0Var.f21120f = null;
                        if (eVar6 == d0Var) {
                            throw new IllegalStateException("trimChain did not update the head");
                        }
                        c0Var.f10385e = eVar6;
                        if (z5) {
                            m mVar3 = mVar2;
                            for (z.e eVar7 = h0Var.f21118d; eVar7 != null; eVar7 = eVar7.f21118d) {
                                Intrinsics.checkNotNullParameter(eVar7, "<this>");
                                c measureNode = ((eVar7.f21116b & 2) == 0 || !(eVar7 instanceof c)) ? null : (c) eVar7;
                                if (measureNode != null) {
                                    f0 f0Var = eVar7.f21120f;
                                    if (f0Var != null) {
                                        Intrinsics.checkNotNull(f0Var, "null cannot be cast to non-null type androidx.compose.ui.node.LayoutModifierNodeCoordinator");
                                        o oVar = (o) f0Var;
                                        Intrinsics.checkNotNullParameter(measureNode, "<set-?>");
                                        oVar.O = measureNode;
                                        mVar = oVar;
                                    } else {
                                        Intrinsics.checkNotNullParameter(layoutNode, "layoutNode");
                                        Intrinsics.checkNotNullParameter(measureNode, "measureNode");
                                        o oVar2 = new o(layoutNode);
                                        oVar2.O = measureNode;
                                        oVar2.P = layoutNode.f10407c != null ? new n(oVar2) : null;
                                        eVar7.f21120f = oVar2;
                                        mVar = oVar2;
                                    }
                                    mVar3.G = mVar;
                                    mVar.F = mVar3;
                                    mVar3 = mVar;
                                } else {
                                    eVar7.f21120f = mVar3;
                                }
                            }
                            mVar3.G = null;
                            c0Var.f10383c = mVar3;
                        }
                        u uVar4 = zVar.a;
                        y yVar = zVar.f10434i;
                        z zVar2 = yVar.L;
                        if ((yVar.F != null || zVar2.a().E() != null) && yVar.E) {
                            yVar.E = false;
                            yVar.F = zVar2.a().E();
                        }
                        x xVar = zVar.j;
                        if (xVar != null) {
                            z zVar3 = xVar.K;
                            if (xVar.J == null) {
                                b0 D = zVar3.a().D();
                                Intrinsics.checkNotNull(D);
                                break;
                            }
                            if (xVar.I) {
                                xVar.I = false;
                                b0 D2 = zVar3.a().D();
                                Intrinsics.checkNotNull(D2);
                                xVar.J = D2.E.E();
                            }
                        }
                        if ((c0Var.f10385e.f21117c & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 && (uVar = uVar3.f10407c) == null && !Intrinsics.areEqual(uVar3, uVar)) {
                            uVar3.f10407c = uVar3;
                            if (zVar.j == null) {
                                zVar.j = new x(zVar);
                            }
                            f0 f0Var2 = mVar2.F;
                            for (f0 f0Var3 = c0Var.f10383c; !Intrinsics.areEqual(f0Var3, f0Var2) && f0Var3 != null; f0Var3 = f0Var3.F) {
                                f0Var3.C();
                            }
                            uVar3.f();
                        }
                        return Unit.a;
                    }
                    z.f fVar = (z.f) dVar3.e(i10 - 1);
                    if (fVar instanceof z.b) {
                        z.b bVar = (z.b) fVar;
                        dVar3.a(bVar.f21115b);
                        dVar3.a(bVar.a);
                    } else if (fVar instanceof z.d) {
                        dVar2.a(fVar);
                    } else {
                        fVar.all(new androidx.fragment.app.s(3, dVar2));
                    }
                }
                break;
            default:
                i iVar4 = (i) obj;
                u.e value = (u.e) obj2;
                Intrinsics.checkNotNullParameter(iVar4, "$this$null");
                Intrinsics.checkNotNullParameter(value, "it");
                u uVar5 = (u) iVar4;
                uVar5.getClass();
                Intrinsics.checkNotNullParameter(value, "value");
                x.b bVar2 = (x.b) value;
                m0.b value2 = (m0.b) bVar2.f(j0.g.a);
                uVar5.getClass();
                Intrinsics.checkNotNullParameter(value2, "value");
                if (!Intrinsics.areEqual(uVar5.f10411g, value2)) {
                    uVar5.f10411g = value2;
                    uVar5.g();
                    z.e eVar8 = uVar5.f10414l.f10385e;
                    if ((eVar8.f21117c & 16) != 0) {
                        while (eVar8 != null) {
                            if ((eVar8.f21116b & 16) != 0) {
                                for (z.e eVar9 = eVar8; eVar9 != null; eVar9 = null) {
                                    if (eVar9 instanceof c) {
                                        z.d dVar4 = ((c) eVar9).f10381i;
                                        Intrinsics.checkNotNull(dVar4, "null cannot be cast to non-null type androidx.compose.ui.input.pointer.PointerInputModifier");
                                        ((f0.d) dVar4).getPointerInputFilter().onCancel();
                                    }
                                }
                            }
                            if ((eVar8.f21117c & 16) != 0) {
                                eVar8 = eVar8.f21119e;
                            }
                        }
                    }
                }
                m0.e value3 = (m0.e) bVar2.f(j0.g.f12371b);
                Intrinsics.checkNotNullParameter(value3, "value");
                if (uVar5.f10412h != value3) {
                    uVar5.f10412h = value3;
                    uVar5.g();
                }
                q value4 = (q) bVar2.f(j0.g.f12372c);
                Intrinsics.checkNotNullParameter(value4, "value");
                if (!Intrinsics.areEqual(uVar5.f10413i, value4)) {
                    uVar5.f10413i = value4;
                    z.e eVar10 = uVar5.f10414l.f10385e;
                    if ((eVar10.f21117c & 16) != 0) {
                        while (eVar10 != null) {
                            if ((eVar10.f21116b & 16) != 0) {
                                for (z.e eVar11 = eVar10; eVar11 != null; eVar11 = null) {
                                    if (eVar11 instanceof c) {
                                        z.d dVar5 = ((c) eVar11).f10381i;
                                        Intrinsics.checkNotNull(dVar5, "null cannot be cast to non-null type androidx.compose.ui.input.pointer.PointerInputModifier");
                                        ((f0.d) dVar5).getPointerInputFilter().onCancel();
                                    }
                                }
                            }
                            if ((eVar10.f21117c & 16) != 0) {
                                eVar10 = eVar10.f21119e;
                            }
                        }
                    }
                }
                z.e eVar12 = uVar5.f10414l.f10385e;
                if ((eVar12.f21117c & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0) {
                    while (eVar12 != null) {
                        if ((eVar12.f21116b & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0) {
                            for (z.e eVar13 = eVar12; eVar13 != null; eVar13 = null) {
                            }
                        }
                        if ((eVar12.f21117c & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0) {
                            eVar12 = eVar12.f21119e;
                        }
                    }
                }
                return Unit.a;
        }
    }
}
