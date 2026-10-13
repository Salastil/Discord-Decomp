package v4;

import af.h0;
import android.graphics.PointF;
import android.view.animation.BaseInterpolator;
import android.view.animation.LinearInterpolator;
import android.view.animation.PathInterpolator;

/* loaded from: classes.dex */
public abstract class o {
    public static final LinearInterpolator a = new LinearInterpolator();

    /* renamed from: b, reason: collision with root package name */
    public static final e4.e f19255b = e4.e.x("t", "s", "e", "o", "i", "h", "to", "ti");

    /* renamed from: c, reason: collision with root package name */
    public static final e4.e f19256c = e4.e.x("x", "y");

    public static BaseInterpolator a(PointF pointF, PointF pointF2) {
        pointF.x = x4.g.b(pointF.x, -1.0f, 1.0f);
        pointF.y = x4.g.b(pointF.y, -100.0f, 100.0f);
        pointF2.x = x4.g.b(pointF2.x, -1.0f, 1.0f);
        float b10 = x4.g.b(pointF2.y, -100.0f, 100.0f);
        pointF2.y = b10;
        h0 h0Var = x4.h.a;
        try {
            return new PathInterpolator(pointF.x, pointF.y, pointF2.x, b10);
        } catch (IllegalArgumentException e9) {
            return "The Path cannot loop back on itself.".equals(e9.getMessage()) ? new PathInterpolator(Math.min(pointF.x, 1.0f), pointF.y, Math.max(pointF2.x, 0.0f), pointF2.y) : new LinearInterpolator();
        }
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:8:0x002d. Please report as an issue. */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v3, types: [android.view.animation.BaseInterpolator] */
    /* JADX WARN: Type inference failed for: r8v2, types: [android.view.animation.BaseInterpolator] */
    public static y4.a b(w4.a aVar, l4.i iVar, float f2, d0 d0Var, boolean z5, boolean z6) {
        Object obj;
        LinearInterpolator a10;
        BaseInterpolator a11;
        BaseInterpolator a12;
        Object obj2;
        e4.e eVar;
        e4.e eVar2;
        PointF pointF;
        e4.e eVar3 = f19255b;
        LinearInterpolator linearInterpolator = a;
        if (!z5 || !z6) {
            e4.e eVar4 = eVar3;
            if (!z5) {
                return new y4.a(d0Var.g(aVar, f2));
            }
            aVar.f();
            PointF pointF2 = null;
            PointF pointF3 = null;
            PointF pointF4 = null;
            PointF pointF5 = null;
            boolean z7 = false;
            Object obj3 = null;
            float f10 = 0.0f;
            Object obj4 = null;
            while (aVar.o()) {
                e4.e eVar5 = eVar4;
                switch (aVar.P(eVar5)) {
                    case 0:
                        eVar4 = eVar5;
                        f10 = (float) aVar.r();
                        continue;
                    case 1:
                        obj3 = d0Var.g(aVar, f2);
                        break;
                    case 2:
                        obj4 = d0Var.g(aVar, f2);
                        break;
                    case 3:
                        pointF5 = n.b(aVar, 1.0f);
                        break;
                    case 4:
                        pointF2 = n.b(aVar, 1.0f);
                        break;
                    case 5:
                        if (aVar.t() != 1) {
                            z7 = false;
                            break;
                        } else {
                            z7 = true;
                            break;
                        }
                    case 6:
                        pointF3 = n.b(aVar, f2);
                        break;
                    case 7:
                        pointF4 = n.b(aVar, f2);
                        break;
                    default:
                        aVar.R();
                        break;
                }
                eVar4 = eVar5;
            }
            aVar.i();
            if (z7) {
                obj = obj3;
            } else {
                if (pointF5 != null && pointF2 != null) {
                    a10 = a(pointF5, pointF2);
                    obj = obj4;
                    y4.a aVar2 = new y4.a(iVar, obj3, obj, a10, f10, (Float) null);
                    aVar2.f20662o = pointF3;
                    aVar2.f20663p = pointF4;
                    return aVar2;
                }
                obj = obj4;
            }
            a10 = linearInterpolator;
            y4.a aVar22 = new y4.a(iVar, obj3, obj, a10, f10, (Float) null);
            aVar22.f20662o = pointF3;
            aVar22.f20663p = pointF4;
            return aVar22;
        }
        aVar.f();
        PointF pointF6 = null;
        PointF pointF7 = null;
        PointF pointF8 = null;
        boolean z8 = false;
        PointF pointF9 = null;
        PointF pointF10 = null;
        PointF pointF11 = null;
        Object obj5 = null;
        PointF pointF12 = null;
        PointF pointF13 = null;
        float f11 = 0.0f;
        Object obj6 = null;
        while (aVar.o()) {
            int P = aVar.P(eVar3);
            e4.e eVar6 = f19256c;
            LinearInterpolator linearInterpolator2 = linearInterpolator;
            switch (P) {
                case 0:
                    eVar = eVar3;
                    f11 = (float) aVar.r();
                    linearInterpolator = linearInterpolator2;
                    eVar3 = eVar;
                    break;
                case 1:
                    eVar = eVar3;
                    obj5 = d0Var.g(aVar, f2);
                    linearInterpolator = linearInterpolator2;
                    eVar3 = eVar;
                    break;
                case 2:
                    eVar = eVar3;
                    obj6 = d0Var.g(aVar, f2);
                    linearInterpolator = linearInterpolator2;
                    eVar3 = eVar;
                    break;
                case 3:
                    eVar = eVar3;
                    boolean z10 = z8;
                    Object obj7 = obj5;
                    PointF pointF14 = pointF12;
                    if (aVar.A() == 3) {
                        aVar.f();
                        float f12 = 0.0f;
                        float f13 = 0.0f;
                        float f14 = 0.0f;
                        float f15 = 0.0f;
                        while (aVar.o()) {
                            int P2 = aVar.P(eVar6);
                            if (P2 != 0) {
                                if (P2 != 1) {
                                    aVar.R();
                                } else if (aVar.A() == 7) {
                                    f15 = (float) aVar.r();
                                    f13 = f15;
                                } else {
                                    aVar.c();
                                    f13 = (float) aVar.r();
                                    f15 = aVar.A() == 7 ? (float) aVar.r() : f13;
                                    aVar.g();
                                }
                            } else if (aVar.A() == 7) {
                                f14 = (float) aVar.r();
                                f12 = f14;
                            } else {
                                aVar.c();
                                f12 = (float) aVar.r();
                                f14 = aVar.A() == 7 ? (float) aVar.r() : f12;
                                aVar.g();
                            }
                        }
                        PointF pointF15 = new PointF(f12, f13);
                        pointF12 = new PointF(f14, f15);
                        aVar.i();
                        pointF11 = pointF15;
                    } else {
                        pointF9 = n.b(aVar, f2);
                        pointF12 = pointF14;
                    }
                    z8 = z10;
                    linearInterpolator = linearInterpolator2;
                    obj5 = obj7;
                    eVar3 = eVar;
                    break;
                case 4:
                    boolean z11 = z8;
                    if (aVar.A() == 3) {
                        aVar.f();
                        float f16 = 0.0f;
                        float f17 = 0.0f;
                        float f18 = 0.0f;
                        float f19 = 0.0f;
                        while (aVar.o()) {
                            Object obj8 = obj5;
                            int P3 = aVar.P(eVar6);
                            if (P3 != 0) {
                                eVar2 = eVar3;
                                if (P3 != 1) {
                                    aVar.R();
                                } else if (aVar.A() == 7) {
                                    f19 = (float) aVar.r();
                                    pointF12 = pointF12;
                                    f17 = f19;
                                } else {
                                    pointF = pointF12;
                                    aVar.c();
                                    f17 = (float) aVar.r();
                                    f19 = aVar.A() == 7 ? (float) aVar.r() : f17;
                                    aVar.g();
                                    pointF12 = pointF;
                                }
                            } else {
                                eVar2 = eVar3;
                                pointF = pointF12;
                                if (aVar.A() == 7) {
                                    f18 = (float) aVar.r();
                                    pointF12 = pointF;
                                    f16 = f18;
                                } else {
                                    aVar.c();
                                    f16 = (float) aVar.r();
                                    f18 = aVar.A() == 7 ? (float) aVar.r() : f16;
                                    aVar.g();
                                    pointF12 = pointF;
                                }
                            }
                            obj5 = obj8;
                            eVar3 = eVar2;
                        }
                        eVar = eVar3;
                        PointF pointF16 = new PointF(f16, f17);
                        pointF6 = new PointF(f18, f19);
                        aVar.i();
                        pointF13 = pointF16;
                    } else {
                        eVar = eVar3;
                        pointF10 = n.b(aVar, f2);
                    }
                    z8 = z11;
                    linearInterpolator = linearInterpolator2;
                    eVar3 = eVar;
                    break;
                case 5:
                    z8 = aVar.t() == 1;
                    linearInterpolator = linearInterpolator2;
                    break;
                case 6:
                    pointF7 = n.b(aVar, f2);
                    linearInterpolator = linearInterpolator2;
                    break;
                case 7:
                    pointF8 = n.b(aVar, f2);
                    linearInterpolator = linearInterpolator2;
                    break;
                default:
                    aVar.R();
                    linearInterpolator = linearInterpolator2;
                    break;
            }
        }
        LinearInterpolator linearInterpolator3 = linearInterpolator;
        boolean z12 = z8;
        Object obj9 = obj5;
        PointF pointF17 = pointF12;
        aVar.i();
        if (z12) {
            obj2 = obj9;
        } else {
            if (pointF9 != null && pointF10 != null) {
                linearInterpolator3 = a(pointF9, pointF10);
            } else if (pointF11 != null && pointF17 != null && pointF13 != null && pointF6 != null) {
                a11 = a(pointF11, pointF13);
                a12 = a(pointF17, pointF6);
                obj2 = obj6;
                linearInterpolator3 = null;
                y4.a aVar3 = (a11 != null || a12 == null) ? new y4.a(iVar, obj9, obj2, linearInterpolator3, f11, (Float) null) : new y4.a(iVar, obj9, obj2, a11, a12, f11);
                aVar3.f20662o = pointF7;
                aVar3.f20663p = pointF8;
                return aVar3;
            }
            obj2 = obj6;
        }
        a11 = null;
        a12 = null;
        if (a11 != null) {
        }
        aVar3.f20662o = pointF7;
        aVar3.f20663p = pointF8;
        return aVar3;
    }
}
