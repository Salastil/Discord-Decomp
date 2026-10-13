package lh;

import android.graphics.RectF;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b implements d {
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public final float f13977b;

    public b(float f2, d dVar) {
        while (dVar instanceof b) {
            dVar = ((b) dVar).a;
            f2 += ((b) dVar).f13977b;
        }
        this.a = dVar;
        this.f13977b = f2;
    }

    @Override // lh.d
    public final float a(RectF rectF) {
        return Math.max(0.0f, this.a.a(rectF) + this.f13977b);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.a.equals(bVar.a) && this.f13977b == bVar.f13977b;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, Float.valueOf(this.f13977b)});
    }
}
