package n4;

import android.graphics.Path;
import android.graphics.PointF;
import io.sentry.w1;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class f implements m, o4.a, k {

    /* renamed from: b, reason: collision with root package name */
    public final String f14861b;

    /* renamed from: c, reason: collision with root package name */
    public final v f14862c;

    /* renamed from: d, reason: collision with root package name */
    public final o4.j f14863d;

    /* renamed from: e, reason: collision with root package name */
    public final o4.e f14864e;

    /* renamed from: f, reason: collision with root package name */
    public final s4.a f14865f;

    /* renamed from: h, reason: collision with root package name */
    public boolean f14867h;
    public final Path a = new Path();

    /* renamed from: g, reason: collision with root package name */
    public final w1 f14866g = new w1(1);

    public f(v vVar, t4.b bVar, s4.a aVar) {
        this.f14861b = aVar.a;
        this.f14862c = vVar;
        o4.e l02 = aVar.f17750c.l0();
        this.f14863d = (o4.j) l02;
        o4.e l03 = aVar.f17749b.l0();
        this.f14864e = l03;
        this.f14865f = aVar;
        bVar.f(l02);
        bVar.f(l03);
        l02.a(this);
        l03.a(this);
    }

    @Override // o4.a
    public final void a() {
        this.f14867h = false;
        this.f14862c.invalidateSelf();
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
                    this.f14866g.a.add(tVar);
                    tVar.c(this);
                }
            }
            i5++;
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        if (obj == z.f13816f) {
            this.f14863d.j(eVar);
        } else if (obj == z.f13819i) {
            this.f14864e.j(eVar);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        x4.g.f(eVar, i5, arrayList, eVar2, this);
    }

    @Override // n4.c
    public final String getName() {
        return this.f14861b;
    }

    @Override // n4.m
    public final Path h() {
        boolean z5 = this.f14867h;
        Path path = this.a;
        if (z5) {
            return path;
        }
        path.reset();
        s4.a aVar = this.f14865f;
        if (aVar.f17752e) {
            this.f14867h = true;
            return path;
        }
        PointF pointF = (PointF) this.f14863d.e();
        float f2 = pointF.x / 2.0f;
        float f10 = pointF.y / 2.0f;
        float f11 = f2 * 0.55228f;
        float f12 = f10 * 0.55228f;
        path.reset();
        if (aVar.f17751d) {
            float f13 = -f10;
            path.moveTo(0.0f, f13);
            float f14 = 0.0f - f11;
            float f15 = -f2;
            float f16 = 0.0f - f12;
            path.cubicTo(f14, f13, f15, f16, f15, 0.0f);
            float f17 = f12 + 0.0f;
            path.cubicTo(f15, f17, f14, f10, 0.0f, f10);
            float f18 = f11 + 0.0f;
            path.cubicTo(f18, f10, f2, f17, f2, 0.0f);
            path.cubicTo(f2, f16, f18, f13, 0.0f, f13);
        } else {
            float f19 = -f10;
            path.moveTo(0.0f, f19);
            float f20 = f11 + 0.0f;
            float f21 = 0.0f - f12;
            path.cubicTo(f20, f19, f2, f21, f2, 0.0f);
            float f22 = f12 + 0.0f;
            path.cubicTo(f2, f22, f20, f10, 0.0f, f10);
            float f23 = 0.0f - f11;
            float f24 = -f2;
            path.cubicTo(f23, f10, f24, f22, f24, 0.0f);
            path.cubicTo(f24, f21, f23, f19, 0.0f, f19);
        }
        PointF pointF2 = (PointF) this.f14864e.e();
        path.offset(pointF2.x, pointF2.y);
        path.close();
        this.f14866g.a(path);
        this.f14867h = true;
        return path;
    }
}
