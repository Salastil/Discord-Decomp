package o4;

import java.util.List;

/* loaded from: classes.dex */
public final class d implements b {

    /* renamed from: d, reason: collision with root package name */
    public final y4.a f15743d;

    /* renamed from: e, reason: collision with root package name */
    public float f15744e = -1.0f;

    public d(List list) {
        this.f15743d = (y4.a) list.get(0);
    }

    @Override // o4.b
    public final boolean f(float f2) {
        if (this.f15744e == f2) {
            return true;
        }
        this.f15744e = f2;
        return false;
    }

    @Override // o4.b
    public final y4.a h() {
        return this.f15743d;
    }

    @Override // o4.b
    public final boolean isEmpty() {
        return false;
    }

    @Override // o4.b
    public final boolean j(float f2) {
        return !this.f15743d.c();
    }

    @Override // o4.b
    public final float t() {
        return this.f15743d.a();
    }

    @Override // o4.b
    public final float w() {
        return this.f15743d.b();
    }
}
