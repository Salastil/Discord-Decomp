package nd;

import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class c implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public final q0 f15075d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f15076e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ d f15077i;

    public c(d dVar, q0 q0Var) {
        this.f15077i = dVar;
        this.f15075d = q0Var;
    }

    @Override // nd.q0
    public final void b() {
        this.f15075d.b();
    }

    @Override // nd.q0
    public final int c(long j) {
        if (this.f15077i.b()) {
            return -3;
        }
        return this.f15075d.c(j);
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        d dVar = this.f15077i;
        if (dVar.b()) {
            return -3;
        }
        if (this.f15076e) {
            fVar.f14426e = 4;
            return -4;
        }
        long w5 = dVar.w();
        int f2 = this.f15075d.f(lVar, fVar, i5);
        if (f2 != -5) {
            long j = dVar.f15082w;
            if (j == Long.MIN_VALUE || ((f2 != -4 || fVar.f14438x < j) && !(f2 == -3 && w5 == Long.MIN_VALUE && !fVar.f14437w))) {
                return f2;
            }
            fVar.f();
            fVar.f14426e = 4;
            this.f15076e = true;
            return -4;
        }
        Format format = (Format) lVar.f7960i;
        format.getClass();
        int i6 = format.Z;
        int i10 = format.Y;
        if (i10 == 0 && i6 == 0) {
            return -5;
        }
        if (dVar.f15082w != Long.MIN_VALUE) {
            i6 = 0;
        }
        hc.f0 a = format.a();
        a.A = i10;
        a.B = i6;
        lVar.f7960i = new Format(a);
        return -5;
    }

    @Override // nd.q0
    public final boolean isReady() {
        return !this.f15077i.b() && this.f15075d.isReady();
    }
}
