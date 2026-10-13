package y4;

import android.graphics.PointF;
import android.view.animation.BaseInterpolator;
import android.view.animation.Interpolator;
import l4.i;
import s4.c;

/* loaded from: classes.dex */
public class a {
    public final i a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f20651b;

    /* renamed from: c, reason: collision with root package name */
    public Object f20652c;

    /* renamed from: d, reason: collision with root package name */
    public final Interpolator f20653d;

    /* renamed from: e, reason: collision with root package name */
    public final Interpolator f20654e;

    /* renamed from: f, reason: collision with root package name */
    public final Interpolator f20655f;

    /* renamed from: g, reason: collision with root package name */
    public final float f20656g;

    /* renamed from: h, reason: collision with root package name */
    public Float f20657h;

    /* renamed from: i, reason: collision with root package name */
    public float f20658i;
    public float j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public int f20659l;

    /* renamed from: m, reason: collision with root package name */
    public float f20660m;

    /* renamed from: n, reason: collision with root package name */
    public float f20661n;

    /* renamed from: o, reason: collision with root package name */
    public PointF f20662o;

    /* renamed from: p, reason: collision with root package name */
    public PointF f20663p;

    public a(i iVar, Object obj, Object obj2, BaseInterpolator baseInterpolator, float f2, Float f10) {
        this.f20658i = -3987645.8f;
        this.j = -3987645.8f;
        this.k = 784923401;
        this.f20659l = 784923401;
        this.f20660m = Float.MIN_VALUE;
        this.f20661n = Float.MIN_VALUE;
        this.f20662o = null;
        this.f20663p = null;
        this.a = iVar;
        this.f20651b = obj;
        this.f20652c = obj2;
        this.f20653d = baseInterpolator;
        this.f20654e = null;
        this.f20655f = null;
        this.f20656g = f2;
        this.f20657h = f10;
    }

    public final float a() {
        i iVar = this.a;
        if (iVar == null) {
            return 1.0f;
        }
        if (this.f20661n == Float.MIN_VALUE) {
            if (this.f20657h == null) {
                this.f20661n = 1.0f;
            } else {
                this.f20661n = ((this.f20657h.floatValue() - this.f20656g) / (iVar.f13751m - iVar.f13750l)) + b();
            }
        }
        return this.f20661n;
    }

    public final float b() {
        i iVar = this.a;
        if (iVar == null) {
            return 0.0f;
        }
        if (this.f20660m == Float.MIN_VALUE) {
            float f2 = iVar.f13750l;
            this.f20660m = (this.f20656g - f2) / (iVar.f13751m - f2);
        }
        return this.f20660m;
    }

    public final boolean c() {
        return this.f20653d == null && this.f20654e == null && this.f20655f == null;
    }

    public final String toString() {
        return "Keyframe{startValue=" + this.f20651b + ", endValue=" + this.f20652c + ", startFrame=" + this.f20656g + ", endFrame=" + this.f20657h + ", interpolator=" + this.f20653d + '}';
    }

    public a(i iVar, Object obj, Object obj2, BaseInterpolator baseInterpolator, BaseInterpolator baseInterpolator2, float f2) {
        this.f20658i = -3987645.8f;
        this.j = -3987645.8f;
        this.k = 784923401;
        this.f20659l = 784923401;
        this.f20660m = Float.MIN_VALUE;
        this.f20661n = Float.MIN_VALUE;
        this.f20662o = null;
        this.f20663p = null;
        this.a = iVar;
        this.f20651b = obj;
        this.f20652c = obj2;
        this.f20653d = null;
        this.f20654e = baseInterpolator;
        this.f20655f = baseInterpolator2;
        this.f20656g = f2;
        this.f20657h = null;
    }

    public a(i iVar, Object obj, Object obj2, Interpolator interpolator, Interpolator interpolator2, Interpolator interpolator3, float f2, Float f10) {
        this.f20658i = -3987645.8f;
        this.j = -3987645.8f;
        this.k = 784923401;
        this.f20659l = 784923401;
        this.f20660m = Float.MIN_VALUE;
        this.f20661n = Float.MIN_VALUE;
        this.f20662o = null;
        this.f20663p = null;
        this.a = iVar;
        this.f20651b = obj;
        this.f20652c = obj2;
        this.f20653d = interpolator;
        this.f20654e = interpolator2;
        this.f20655f = interpolator3;
        this.f20656g = f2;
        this.f20657h = f10;
    }

    public a(Object obj) {
        this.f20658i = -3987645.8f;
        this.j = -3987645.8f;
        this.k = 784923401;
        this.f20659l = 784923401;
        this.f20660m = Float.MIN_VALUE;
        this.f20661n = Float.MIN_VALUE;
        this.f20662o = null;
        this.f20663p = null;
        this.a = null;
        this.f20651b = obj;
        this.f20652c = obj;
        this.f20653d = null;
        this.f20654e = null;
        this.f20655f = null;
        this.f20656g = Float.MIN_VALUE;
        this.f20657h = Float.valueOf(Float.MAX_VALUE);
    }

    public a(c cVar, c cVar2) {
        this.f20658i = -3987645.8f;
        this.j = -3987645.8f;
        this.k = 784923401;
        this.f20659l = 784923401;
        this.f20660m = Float.MIN_VALUE;
        this.f20661n = Float.MIN_VALUE;
        this.f20662o = null;
        this.f20663p = null;
        this.a = null;
        this.f20651b = cVar;
        this.f20652c = cVar2;
        this.f20653d = null;
        this.f20654e = null;
        this.f20655f = null;
        this.f20656g = Float.MIN_VALUE;
        this.f20657h = Float.valueOf(Float.MAX_VALUE);
    }
}
