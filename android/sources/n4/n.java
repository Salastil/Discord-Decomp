package n4;

import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.PointF;
import io.sentry.w1;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class n implements m, o4.a, k {

    /* renamed from: e, reason: collision with root package name */
    public final String f14912e;

    /* renamed from: f, reason: collision with root package name */
    public final v f14913f;

    /* renamed from: g, reason: collision with root package name */
    public final int f14914g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f14915h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f14916i;
    public final o4.i j;
    public final o4.e k;

    /* renamed from: l, reason: collision with root package name */
    public final o4.i f14917l;

    /* renamed from: m, reason: collision with root package name */
    public final o4.i f14918m;

    /* renamed from: n, reason: collision with root package name */
    public final o4.i f14919n;

    /* renamed from: o, reason: collision with root package name */
    public final o4.i f14920o;

    /* renamed from: p, reason: collision with root package name */
    public final o4.i f14921p;

    /* renamed from: r, reason: collision with root package name */
    public boolean f14923r;
    public final Path a = new Path();

    /* renamed from: b, reason: collision with root package name */
    public final Path f14909b = new Path();

    /* renamed from: c, reason: collision with root package name */
    public final PathMeasure f14910c = new PathMeasure();

    /* renamed from: d, reason: collision with root package name */
    public final float[] f14911d = new float[2];

    /* renamed from: q, reason: collision with root package name */
    public final w1 f14922q = new w1(1);

    public n(v vVar, t4.b bVar, s4.i iVar) {
        this.f14913f = vVar;
        this.f14912e = iVar.a;
        int i5 = iVar.f17775b;
        this.f14914g = i5;
        this.f14915h = iVar.j;
        this.f14916i = iVar.k;
        o4.i l02 = iVar.f17776c.l0();
        this.j = l02;
        o4.e l03 = iVar.f17777d.l0();
        this.k = l03;
        o4.i l04 = iVar.f17778e.l0();
        this.f14917l = l04;
        o4.i l05 = iVar.f17780g.l0();
        this.f14919n = l05;
        o4.i l06 = iVar.f17782i.l0();
        this.f14921p = l06;
        if (i5 == 1) {
            this.f14918m = iVar.f17779f.l0();
            this.f14920o = iVar.f17781h.l0();
        } else {
            this.f14918m = null;
            this.f14920o = null;
        }
        bVar.f(l02);
        bVar.f(l03);
        bVar.f(l04);
        bVar.f(l05);
        bVar.f(l06);
        if (i5 == 1) {
            bVar.f(this.f14918m);
            bVar.f(this.f14920o);
        }
        l02.a(this);
        l03.a(this);
        l04.a(this);
        l05.a(this);
        l06.a(this);
        if (i5 == 1) {
            this.f14918m.a(this);
            this.f14920o.a(this);
        }
    }

    @Override // o4.a
    public final void a() {
        this.f14923r = false;
        this.f14913f.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = (ArrayList) list;
            if (i5 >= arrayList.size()) {
                return;
            }
            c cVar = (c) arrayList.get(i5);
            if (cVar instanceof t) {
                t tVar = (t) cVar;
                if (tVar.f14954c == 1) {
                    this.f14922q.a.add(tVar);
                    tVar.c(this);
                }
            }
            i5++;
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        o4.i iVar;
        o4.i iVar2;
        if (obj == z.f13826r) {
            this.j.j(eVar);
            return;
        }
        if (obj == z.f13827s) {
            this.f14917l.j(eVar);
            return;
        }
        if (obj == z.f13819i) {
            this.k.j(eVar);
            return;
        }
        if (obj == z.f13828t && (iVar2 = this.f14918m) != null) {
            iVar2.j(eVar);
            return;
        }
        if (obj == z.f13829u) {
            this.f14919n.j(eVar);
            return;
        }
        if (obj == z.f13830v && (iVar = this.f14920o) != null) {
            iVar.j(eVar);
        } else if (obj == z.f13831w) {
            this.f14921p.j(eVar);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        x4.g.f(eVar, i5, arrayList, eVar2, this);
    }

    @Override // n4.c
    public final String getName() {
        return this.f14912e;
    }

    @Override // n4.m
    public final Path h() {
        boolean z5;
        float f2;
        double d6;
        float f10;
        float f11;
        float f12;
        float f13;
        float f14;
        int i5;
        double d7;
        boolean z6 = this.f14923r;
        Path path = this.a;
        if (z6) {
            return path;
        }
        path.reset();
        if (this.f14915h) {
            this.f14923r = true;
            return path;
        }
        int b10 = f0.e.b(this.f14914g);
        o4.e eVar = this.k;
        o4.i iVar = this.f14919n;
        o4.i iVar2 = this.f14921p;
        o4.i iVar3 = this.f14917l;
        o4.i iVar4 = this.j;
        if (b10 == 0) {
            z5 = true;
            float floatValue = ((Float) iVar4.e()).floatValue();
            double radians = Math.toRadians((iVar3 != null ? ((Float) iVar3.e()).floatValue() : 0.0d) - 90.0d);
            double d8 = floatValue;
            float f15 = (float) (6.283185307179586d / d8);
            if (this.f14916i) {
                f15 *= -1.0f;
            }
            float f16 = f15;
            float f17 = f16 / 2.0f;
            float f18 = floatValue - ((int) floatValue);
            if (f18 != 0.0f) {
                f2 = 2.0f;
                radians += (1.0f - f18) * f17;
            } else {
                f2 = 2.0f;
            }
            float floatValue2 = ((Float) iVar.e()).floatValue();
            float floatValue3 = ((Float) this.f14918m.e()).floatValue();
            o4.i iVar5 = this.f14920o;
            float floatValue4 = iVar5 != null ? ((Float) iVar5.e()).floatValue() / 100.0f : 0.0f;
            float floatValue5 = iVar2 != null ? ((Float) iVar2.e()).floatValue() / 100.0f : 0.0f;
            if (f18 != 0.0f) {
                float c6 = k0.d.c(floatValue2, floatValue3, f18, floatValue3);
                double d10 = c6;
                f12 = c6;
                float cos = (float) (Math.cos(radians) * d10);
                float sin = (float) (Math.sin(radians) * d10);
                path.moveTo(cos, sin);
                d6 = radians + ((f16 * f18) / f2);
                f10 = cos;
                f11 = sin;
            } else {
                double d11 = floatValue2;
                float cos2 = (float) (Math.cos(radians) * d11);
                float sin2 = (float) (Math.sin(radians) * d11);
                path.moveTo(cos2, sin2);
                d6 = radians + f17;
                f10 = cos2;
                f11 = sin2;
                f12 = 0.0f;
            }
            double ceil = Math.ceil(d8) * 2.0d;
            double d12 = d6;
            int i6 = 0;
            boolean z7 = false;
            while (true) {
                double d13 = i6;
                if (d13 >= ceil) {
                    break;
                }
                float f19 = z7 ? floatValue2 : floatValue3;
                float f20 = (f12 == 0.0f || d13 != ceil - 2.0d) ? f17 : (f16 * f18) / f2;
                if (f12 != 0.0f && d13 == ceil - 1.0d) {
                    f19 = f12;
                }
                double d14 = f19;
                float cos3 = (float) (Math.cos(d12) * d14);
                float sin3 = (float) (Math.sin(d12) * d14);
                if (floatValue4 == 0.0f && floatValue5 == 0.0f) {
                    path.lineTo(cos3, sin3);
                    f13 = f18;
                    f14 = cos3;
                } else {
                    f13 = f18;
                    Path path2 = path;
                    double atan2 = (float) (Math.atan2(f11, f10) - 1.5707963267948966d);
                    float cos4 = (float) Math.cos(atan2);
                    float sin4 = (float) Math.sin(atan2);
                    float f21 = f10;
                    float f22 = f11;
                    double atan22 = (float) (Math.atan2(sin3, cos3) - 1.5707963267948966d);
                    float cos5 = (float) Math.cos(atan22);
                    float sin5 = (float) Math.sin(atan22);
                    float f23 = z7 ? floatValue4 : floatValue5;
                    float f24 = z7 ? floatValue5 : floatValue4;
                    float f25 = (z7 ? floatValue3 : floatValue2) * f23 * 0.47829f;
                    float f26 = cos4 * f25;
                    float f27 = f25 * sin4;
                    float f28 = (z7 ? floatValue2 : floatValue3) * f24 * 0.47829f;
                    float f29 = cos5 * f28;
                    float f30 = f28 * sin5;
                    if (f18 != 0.0f) {
                        if (i6 == 0) {
                            f26 *= f13;
                            f27 *= f13;
                        } else if (d13 == ceil - 1.0d) {
                            f29 *= f13;
                            f30 *= f13;
                        }
                    }
                    f14 = cos3;
                    path = path2;
                    path.cubicTo(f21 - f26, f22 - f27, f29 + cos3, sin3 + f30, f14, sin3);
                }
                d12 += f20;
                z7 = !z7;
                i6++;
                f10 = f14;
                f11 = sin3;
                f18 = f13;
                f2 = 2.0f;
            }
            PointF pointF = (PointF) eVar.e();
            path.offset(pointF.x, pointF.y);
            path.close();
        } else if (b10 != 1) {
            z5 = true;
        } else {
            int floor = (int) Math.floor(((Float) iVar4.e()).floatValue());
            double radians2 = Math.toRadians((iVar3 != null ? ((Float) iVar3.e()).floatValue() : 0.0d) - 90.0d);
            double d15 = floor;
            float floatValue6 = ((Float) iVar2.e()).floatValue() / 100.0f;
            float floatValue7 = ((Float) iVar.e()).floatValue();
            double d16 = floatValue7;
            z5 = true;
            float cos6 = (float) (Math.cos(radians2) * d16);
            float sin6 = (float) (Math.sin(radians2) * d16);
            path.moveTo(cos6, sin6);
            double d17 = (float) (6.283185307179586d / d15);
            double ceil2 = Math.ceil(d15);
            double d18 = radians2 + d17;
            int i10 = 0;
            while (true) {
                double d19 = i10;
                if (d19 >= ceil2) {
                    break;
                }
                double d20 = ceil2;
                float cos7 = (float) (Math.cos(d18) * d16);
                float sin7 = (float) (Math.sin(d18) * d16);
                if (floatValue6 != 0.0f) {
                    i5 = i10;
                    Path path3 = path;
                    d7 = d16;
                    double atan23 = (float) (Math.atan2(sin6, cos6) - 1.5707963267948966d);
                    float cos8 = (float) Math.cos(atan23);
                    float sin8 = (float) Math.sin(atan23);
                    double atan24 = (float) (Math.atan2(sin7, cos7) - 1.5707963267948966d);
                    float f31 = floatValue7 * floatValue6 * 0.25f;
                    float f32 = f31 * cos8;
                    float f33 = f31 * sin8;
                    float cos9 = ((float) Math.cos(atan24)) * f31;
                    float sin9 = f31 * ((float) Math.sin(atan24));
                    if (d19 == d20 - 1.0d) {
                        Path path4 = this.f14909b;
                        path4.reset();
                        path4.moveTo(cos6, sin6);
                        float f34 = cos6 - f32;
                        float f35 = sin6 - f33;
                        float f36 = cos7 + cos9;
                        float f37 = sin7 + sin9;
                        path4.cubicTo(f34, f35, f36, f37, cos7, sin7);
                        PathMeasure pathMeasure = this.f14910c;
                        pathMeasure.setPath(path4, false);
                        float length = pathMeasure.getLength() * 0.9999f;
                        float[] fArr = this.f14911d;
                        pathMeasure.getPosTan(length, fArr, null);
                        path = path3;
                        path.cubicTo(f34, f35, f36, f37, fArr[0], fArr[1]);
                        cos6 = cos7;
                        sin6 = sin7;
                    } else {
                        float f38 = sin7 + sin9;
                        path = path3;
                        sin6 = sin7;
                        path.cubicTo(cos6 - f32, sin6 - f33, cos7 + cos9, f38, cos7, sin6);
                        cos6 = cos7;
                    }
                } else {
                    i5 = i10;
                    d7 = d16;
                    cos6 = cos7;
                    sin6 = sin7;
                    if (d19 == d20 - 1.0d) {
                        i10 = i5 + 1;
                        ceil2 = d20;
                        d16 = d7;
                    } else {
                        path.lineTo(cos6, sin6);
                    }
                }
                d18 += d17;
                i10 = i5 + 1;
                ceil2 = d20;
                d16 = d7;
            }
            PointF pointF2 = (PointF) eVar.e();
            path.offset(pointF2.x, pointF2.y);
            path.close();
        }
        path.close();
        this.f14922q.a(path);
        this.f14923r = z5;
        return path;
    }
}
