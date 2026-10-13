package o4;

import android.view.animation.Interpolator;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public abstract class e {

    /* renamed from: c, reason: collision with root package name */
    public final b f15746c;

    /* renamed from: e, reason: collision with root package name */
    public e4.e f15748e;
    public final ArrayList a = new ArrayList(1);

    /* renamed from: b, reason: collision with root package name */
    public boolean f15745b = false;

    /* renamed from: d, reason: collision with root package name */
    public float f15747d = 0.0f;

    /* renamed from: f, reason: collision with root package name */
    public Object f15749f = null;

    /* renamed from: g, reason: collision with root package name */
    public float f15750g = -1.0f;

    /* renamed from: h, reason: collision with root package name */
    public float f15751h = -1.0f;

    public e(List list) {
        b dVar;
        if (list.isEmpty()) {
            dVar = new io.sentry.hints.j(15);
        } else {
            dVar = list.size() == 1 ? new d(list) : new c(list);
        }
        this.f15746c = dVar;
    }

    public final void a(a aVar) {
        this.a.add(aVar);
    }

    public float b() {
        if (this.f15751h == -1.0f) {
            this.f15751h = this.f15746c.t();
        }
        return this.f15751h;
    }

    public final float c() {
        Interpolator interpolator;
        y4.a h6 = this.f15746c.h();
        if (h6 == null || h6.c() || (interpolator = h6.f20653d) == null) {
            return 0.0f;
        }
        return interpolator.getInterpolation(d());
    }

    public final float d() {
        if (this.f15745b) {
            return 0.0f;
        }
        y4.a h6 = this.f15746c.h();
        if (h6.c()) {
            return 0.0f;
        }
        return (this.f15747d - h6.b()) / (h6.a() - h6.b());
    }

    public Object e() {
        float d6 = d();
        e4.e eVar = this.f15748e;
        b bVar = this.f15746c;
        if (eVar == null && bVar.f(d6)) {
            return this.f15749f;
        }
        y4.a h6 = bVar.h();
        Interpolator interpolator = h6.f20654e;
        Interpolator interpolator2 = h6.f20655f;
        Object f2 = (interpolator == null || interpolator2 == null) ? f(h6, c()) : g(h6, d6, interpolator.getInterpolation(d6), interpolator2.getInterpolation(d6));
        this.f15749f = f2;
        return f2;
    }

    public abstract Object f(y4.a aVar, float f2);

    public Object g(y4.a aVar, float f2, float f10, float f11) {
        throw new UnsupportedOperationException("This animation does not support split dimensions!");
    }

    public void h() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.a;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((a) arrayList.get(i5)).a();
            i5++;
        }
    }

    public void i(float f2) {
        b bVar = this.f15746c;
        if (bVar.isEmpty()) {
            return;
        }
        if (this.f15750g == -1.0f) {
            this.f15750g = bVar.w();
        }
        float f10 = this.f15750g;
        if (f2 < f10) {
            if (f10 == -1.0f) {
                this.f15750g = bVar.w();
            }
            f2 = this.f15750g;
        } else if (f2 > b()) {
            f2 = b();
        }
        if (f2 == this.f15747d) {
            return;
        }
        this.f15747d = f2;
        if (bVar.j(f2)) {
            h();
        }
    }

    public final void j(e4.e eVar) {
        e4.e eVar2 = this.f15748e;
        if (eVar2 != null) {
            eVar2.getClass();
        }
        this.f15748e = eVar;
    }
}
