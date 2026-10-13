package j9;

import f0.e;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b {
    public int a = 2;

    /* renamed from: b, reason: collision with root package name */
    public boolean f12431b = false;

    /* renamed from: c, reason: collision with root package name */
    public float[] f12432c = null;

    /* renamed from: d, reason: collision with root package name */
    public int f12433d = 0;

    /* renamed from: e, reason: collision with root package name */
    public float f12434e = 0.0f;

    /* renamed from: f, reason: collision with root package name */
    public int f12435f = 0;

    /* renamed from: g, reason: collision with root package name */
    public float f12436g = 0.0f;

    /* renamed from: h, reason: collision with root package name */
    public boolean f12437h = false;

    public final void a(float f2, float f10, float f11, float f12) {
        if (this.f12432c == null) {
            this.f12432c = new float[8];
        }
        float[] fArr = this.f12432c;
        fArr[1] = f2;
        fArr[0] = f2;
        fArr[3] = f10;
        fArr[2] = f10;
        fArr[5] = f11;
        fArr[4] = f11;
        fArr[7] = f12;
        fArr[6] = f12;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || b.class != obj.getClass()) {
            return false;
        }
        b bVar = (b) obj;
        if (this.f12431b == bVar.f12431b && this.f12433d == bVar.f12433d && Float.compare(bVar.f12434e, this.f12434e) == 0 && this.f12435f == bVar.f12435f && Float.compare(bVar.f12436g, this.f12436g) == 0 && this.a == bVar.a && this.f12437h == bVar.f12437h) {
            return Arrays.equals(this.f12432c, bVar.f12432c);
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.a;
        int b10 = (((i5 != 0 ? e.b(i5) : 0) * 31) + (this.f12431b ? 1 : 0)) * 31;
        float[] fArr = this.f12432c;
        int hashCode = (((b10 + (fArr != null ? Arrays.hashCode(fArr) : 0)) * 31) + this.f12433d) * 31;
        float f2 = this.f12434e;
        int floatToIntBits = (((hashCode + (f2 != 0.0f ? Float.floatToIntBits(f2) : 0)) * 31) + this.f12435f) * 31;
        float f10 = this.f12436g;
        return ((floatToIntBits + (f10 != 0.0f ? Float.floatToIntBits(f10) : 0)) * 961) + (this.f12437h ? 1 : 0);
    }
}
