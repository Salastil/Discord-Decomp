package o4;

/* loaded from: classes.dex */
public final class i extends k {
    @Override // o4.e
    public final Object f(y4.a aVar, float f2) {
        return Float.valueOf(l(aVar, f2));
    }

    public final float k() {
        return l(this.f15746c.h(), c());
    }

    public final float l(y4.a aVar, float f2) {
        float f10;
        Object obj = aVar.f20651b;
        Object obj2 = aVar.f20651b;
        if (obj == null || aVar.f20652c == null) {
            throw new IllegalStateException("Missing values for keyframe.");
        }
        e4.e eVar = this.f15748e;
        if (eVar != null) {
            f10 = f2;
            Float f11 = (Float) eVar.t(aVar.f20656g, aVar.f20657h.floatValue(), (Float) obj2, (Float) aVar.f20652c, f10, d(), this.f15747d);
            if (f11 != null) {
                return f11.floatValue();
            }
        } else {
            f10 = f2;
        }
        if (aVar.f20658i == -3987645.8f) {
            aVar.f20658i = ((Float) obj2).floatValue();
        }
        float f12 = aVar.f20658i;
        if (aVar.j == -3987645.8f) {
            aVar.j = ((Float) aVar.f20652c).floatValue();
        }
        return x4.g.e(f12, aVar.j, f10);
    }
}
