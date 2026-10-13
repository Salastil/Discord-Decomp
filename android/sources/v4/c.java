package v4;

import android.graphics.PointF;
import android.view.animation.BaseInterpolator;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public abstract class c {
    public static final e4.e a = e4.e.x("a", "p", "s", "rz", "r", "o", "so", "eo", "sk", "sa");

    /* renamed from: b, reason: collision with root package name */
    public static final e4.e f19234b = e4.e.x("k");

    /* JADX WARN: Code restructure failed: missing block: B:91:0x0174, code lost:
    
        if (r0.f20664b == 1.0f) goto L75;
     */
    /* JADX WARN: Removed duplicated region for block: B:31:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0087  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static r4.d a(w4.b bVar, l4.i iVar) {
        r4.a aVar;
        r4.b bVar2;
        List list;
        r4.b bVar3;
        r4.b bVar4;
        Float valueOf = Float.valueOf(0.0f);
        boolean z5 = bVar.A() == 3;
        if (z5) {
            bVar.f();
        }
        r4.b bVar5 = null;
        r4.b bVar6 = null;
        qa.t tVar = null;
        r4.e eVar = null;
        r4.a aVar2 = null;
        r4.b bVar7 = null;
        r4.a aVar3 = null;
        r4.b bVar8 = null;
        r4.b bVar9 = null;
        while (bVar.o()) {
            switch (bVar.P(a)) {
                case 0:
                    bVar2 = bVar6;
                    bVar.f();
                    while (bVar.o()) {
                        if (bVar.P(f19234b) != 0) {
                            bVar.Q();
                            bVar.R();
                        } else {
                            tVar = a.a(bVar, iVar);
                        }
                    }
                    bVar.i();
                    bVar6 = bVar2;
                    break;
                case 1:
                    eVar = a.b(bVar, iVar);
                    break;
                case 2:
                    bVar2 = bVar6;
                    aVar2 = new r4.a(p.a(bVar, iVar, 1.0f, f.f19241y, false), 4);
                    bVar6 = bVar2;
                    break;
                case 3:
                    iVar.a("Lottie doesn't support 3D layers.");
                    r4.b z02 = m3.n.z0(bVar, iVar, false);
                    list = (List) z02.f3143e;
                    if (list.isEmpty()) {
                        bVar3 = z02;
                        bVar4 = bVar6;
                        if (((y4.a) list.get(0)).f20651b == null) {
                            list.set(0, new y4.a(iVar, valueOf, valueOf, (BaseInterpolator) null, 0.0f, Float.valueOf(iVar.f13751m)));
                        }
                    } else {
                        bVar3 = z02;
                        bVar4 = bVar6;
                        list.add(new y4.a(iVar, valueOf, valueOf, (BaseInterpolator) null, 0.0f, Float.valueOf(iVar.f13751m)));
                    }
                    bVar6 = bVar4;
                    bVar5 = bVar3;
                    break;
                case 4:
                    r4.b z022 = m3.n.z0(bVar, iVar, false);
                    list = (List) z022.f3143e;
                    if (list.isEmpty()) {
                    }
                    bVar6 = bVar4;
                    bVar5 = bVar3;
                    break;
                case 5:
                    aVar3 = m3.n.B0(bVar, iVar);
                    break;
                case 6:
                    bVar8 = m3.n.z0(bVar, iVar, false);
                    break;
                case 7:
                    bVar9 = m3.n.z0(bVar, iVar, false);
                    break;
                case 8:
                    bVar7 = m3.n.z0(bVar, iVar, false);
                    break;
                case 9:
                    bVar6 = m3.n.z0(bVar, iVar, false);
                    break;
                default:
                    bVar.Q();
                    bVar.R();
                    break;
            }
        }
        r4.b bVar10 = bVar6;
        if (z5) {
            bVar.i();
        }
        qa.t tVar2 = (tVar == null || (tVar.t0() && ((PointF) ((y4.a) ((ArrayList) tVar.f16718e).get(0)).f20651b).equals(0.0f, 0.0f))) ? null : tVar;
        if (eVar == null || (!(eVar instanceof r4.c) && eVar.t0() && ((PointF) ((y4.a) eVar.r0().get(0)).f20651b).equals(0.0f, 0.0f))) {
            eVar = null;
        }
        r4.b bVar11 = (bVar5 == null || (bVar5.t0() && ((Float) ((y4.a) ((List) bVar5.f3143e).get(0)).f20651b).floatValue() == 0.0f)) ? null : bVar5;
        if (aVar2 != null) {
            if (aVar2.t0()) {
                y4.b bVar12 = (y4.b) ((y4.a) ((List) aVar2.f3143e).get(0)).f20651b;
                if (bVar12.a == 1.0f) {
                }
            }
            aVar = aVar2;
            return new r4.d(tVar2, eVar, aVar, bVar11, aVar3, bVar8, bVar9, (bVar7 != null || (bVar7.t0() && ((Float) ((y4.a) ((List) bVar7.f3143e).get(0)).f20651b).floatValue() == 0.0f)) ? null : bVar7, (bVar10 != null || (bVar10.t0() && ((Float) ((y4.a) ((List) bVar10.f3143e).get(0)).f20651b).floatValue() == 0.0f)) ? null : bVar10);
        }
        aVar = null;
        return new r4.d(tVar2, eVar, aVar, bVar11, aVar3, bVar8, bVar9, (bVar7 != null || (bVar7.t0() && ((Float) ((y4.a) ((List) bVar7.f3143e).get(0)).f20651b).floatValue() == 0.0f)) ? null : bVar7, (bVar10 != null || (bVar10.t0() && ((Float) ((y4.a) ((List) bVar10.f3143e).get(0)).f20651b).floatValue() == 0.0f)) ? null : bVar10);
    }
}
