package o4;

import java.util.Collections;

/* loaded from: classes.dex */
public final class r extends e {

    /* renamed from: i, reason: collision with root package name */
    public final Object f15791i;

    public r(e4.e eVar, Object obj) {
        super(Collections.EMPTY_LIST);
        j(eVar);
        this.f15791i = obj;
    }

    @Override // o4.e
    public final float b() {
        return 1.0f;
    }

    @Override // o4.e
    public final Object e() {
        e4.e eVar = this.f15748e;
        Object obj = this.f15791i;
        float f2 = this.f15747d;
        return eVar.t(0.0f, 0.0f, obj, obj, f2, f2, f2);
    }

    @Override // o4.e
    public final Object f(y4.a aVar, float f2) {
        return e();
    }

    @Override // o4.e
    public final void h() {
        if (this.f15748e != null) {
            super.h();
        }
    }

    @Override // o4.e
    public final void i(float f2) {
        this.f15747d = f2;
    }
}
