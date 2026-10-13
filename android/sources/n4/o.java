package n4;

import android.graphics.Path;
import android.graphics.PointF;
import android.graphics.RectF;
import io.sentry.w1;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class o implements o4.a, k, m {

    /* renamed from: c, reason: collision with root package name */
    public final String f14925c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f14926d;

    /* renamed from: e, reason: collision with root package name */
    public final v f14927e;

    /* renamed from: f, reason: collision with root package name */
    public final o4.e f14928f;

    /* renamed from: g, reason: collision with root package name */
    public final o4.e f14929g;

    /* renamed from: h, reason: collision with root package name */
    public final o4.i f14930h;
    public boolean k;
    public final Path a = new Path();

    /* renamed from: b, reason: collision with root package name */
    public final RectF f14924b = new RectF();

    /* renamed from: i, reason: collision with root package name */
    public final w1 f14931i = new w1(1);
    public o4.e j = null;

    public o(v vVar, t4.b bVar, s4.j jVar) {
        this.f14925c = jVar.f17783b;
        this.f14926d = jVar.f17785d;
        this.f14927e = vVar;
        o4.e l02 = jVar.f17786e.l0();
        this.f14928f = l02;
        o4.e l03 = ((r4.e) jVar.f17787f).l0();
        this.f14929g = l03;
        o4.i l04 = jVar.f17784c.l0();
        this.f14930h = l04;
        bVar.f(l02);
        bVar.f(l03);
        bVar.f(l04);
        l02.a(this);
        l03.a(this);
        l04.a(this);
    }

    @Override // o4.a
    public final void a() {
        this.k = false;
        this.f14927e.invalidateSelf();
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
                    this.f14931i.a.add(tVar);
                    tVar.c(this);
                    i5++;
                }
            }
            if (cVar instanceof q) {
                this.j = ((q) cVar).f14940b;
            }
            i5++;
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        if (obj == z.f13817g) {
            this.f14929g.j(eVar);
        } else if (obj == z.f13819i) {
            this.f14928f.j(eVar);
        } else if (obj == z.f13818h) {
            this.f14930h.j(eVar);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        x4.g.f(eVar, i5, arrayList, eVar2, this);
    }

    @Override // n4.c
    public final String getName() {
        return this.f14925c;
    }

    @Override // n4.m
    public final Path h() {
        float f2;
        o4.e eVar;
        boolean z5 = this.k;
        Path path = this.a;
        if (z5) {
            return path;
        }
        path.reset();
        if (this.f14926d) {
            this.k = true;
            return path;
        }
        PointF pointF = (PointF) this.f14929g.e();
        float f10 = pointF.x / 2.0f;
        float f11 = pointF.y / 2.0f;
        o4.i iVar = this.f14930h;
        float k = iVar == null ? 0.0f : iVar.k();
        if (k == 0.0f && (eVar = this.j) != null) {
            k = Math.min(((Float) eVar.e()).floatValue(), Math.min(f10, f11));
        }
        float min = Math.min(f10, f11);
        if (k > min) {
            k = min;
        }
        PointF pointF2 = (PointF) this.f14928f.e();
        path.moveTo(pointF2.x + f10, (pointF2.y - f11) + k);
        path.lineTo(pointF2.x + f10, (pointF2.y + f11) - k);
        RectF rectF = this.f14924b;
        if (k > 0.0f) {
            float f12 = pointF2.x + f10;
            float f13 = k * 2.0f;
            f2 = 2.0f;
            float f14 = pointF2.y + f11;
            rectF.set(f12 - f13, f14 - f13, f12, f14);
            path.arcTo(rectF, 0.0f, 90.0f, false);
        } else {
            f2 = 2.0f;
        }
        path.lineTo((pointF2.x - f10) + k, pointF2.y + f11);
        if (k > 0.0f) {
            float f15 = pointF2.x - f10;
            float f16 = pointF2.y + f11;
            float f17 = k * f2;
            rectF.set(f15, f16 - f17, f17 + f15, f16);
            path.arcTo(rectF, 90.0f, 90.0f, false);
        }
        path.lineTo(pointF2.x - f10, (pointF2.y - f11) + k);
        if (k > 0.0f) {
            float f18 = pointF2.x - f10;
            float f19 = pointF2.y - f11;
            float f20 = k * f2;
            rectF.set(f18, f19, f18 + f20, f20 + f19);
            path.arcTo(rectF, 180.0f, 90.0f, false);
        }
        path.lineTo((pointF2.x + f10) - k, pointF2.y - f11);
        if (k > 0.0f) {
            float f21 = pointF2.x + f10;
            float f22 = k * f2;
            float f23 = pointF2.y - f11;
            rectF.set(f21 - f22, f23, f21, f22 + f23);
            path.arcTo(rectF, 270.0f, 90.0f, false);
        }
        path.close();
        this.f14931i.a(path);
        this.k = true;
        return path;
    }
}
