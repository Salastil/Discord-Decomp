package fi;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class g0 extends y {
    @Override // fi.y
    public final y b(Object obj) {
        obj.getClass();
        a(obj);
        return this;
    }

    public final h0 f() {
        int i5 = this.f8741b;
        if (i5 == 0) {
            int i6 = h0.f8661i;
            return x0.G;
        }
        if (i5 != 1) {
            h0 k = h0.k(i5, this.a);
            this.f8741b = k.size();
            this.f8742c = true;
            return k;
        }
        Object obj = this.a[0];
        Objects.requireNonNull(obj);
        int i10 = h0.f8661i;
        return new d1(obj);
    }
}
