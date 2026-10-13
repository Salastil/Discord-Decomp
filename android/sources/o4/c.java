package o4;

import java.util.List;

/* loaded from: classes.dex */
public final class c implements b {

    /* renamed from: d, reason: collision with root package name */
    public final List f15739d;

    /* renamed from: i, reason: collision with root package name */
    public y4.a f15741i = null;

    /* renamed from: v, reason: collision with root package name */
    public float f15742v = -1.0f;

    /* renamed from: e, reason: collision with root package name */
    public y4.a f15740e = a(0.0f);

    public c(List list) {
        this.f15739d = list;
    }

    public final y4.a a(float f2) {
        List list = this.f15739d;
        y4.a aVar = (y4.a) k0.d.g(1, list);
        if (f2 >= aVar.b()) {
            return aVar;
        }
        for (int size = list.size() - 2; size >= 1; size--) {
            y4.a aVar2 = (y4.a) list.get(size);
            if (this.f15740e != aVar2 && f2 >= aVar2.b() && f2 < aVar2.a()) {
                return aVar2;
            }
        }
        return (y4.a) list.get(0);
    }

    @Override // o4.b
    public final boolean f(float f2) {
        y4.a aVar = this.f15741i;
        y4.a aVar2 = this.f15740e;
        if (aVar == aVar2 && this.f15742v == f2) {
            return true;
        }
        this.f15741i = aVar2;
        this.f15742v = f2;
        return false;
    }

    @Override // o4.b
    public final y4.a h() {
        return this.f15740e;
    }

    @Override // o4.b
    public final boolean isEmpty() {
        return false;
    }

    @Override // o4.b
    public final boolean j(float f2) {
        y4.a aVar = this.f15740e;
        if (f2 >= aVar.b() && f2 < aVar.a()) {
            return !this.f15740e.c();
        }
        this.f15740e = a(f2);
        return true;
    }

    @Override // o4.b
    public final float t() {
        return ((y4.a) k0.d.g(1, this.f15739d)).a();
    }

    @Override // o4.b
    public final float w() {
        return ((y4.a) this.f15739d.get(0)).b();
    }
}
