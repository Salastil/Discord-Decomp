package rr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 extends qr.x implements qr.a0 {
    public final void v(int i5) {
        synchronized (this) {
            Object[] objArr = this.E;
            Intrinsics.checkNotNull(objArr);
            d(Integer.valueOf(((Number) qr.y.c(objArr, (this.F + ((int) ((o() + this.H) - this.F))) - 1)).intValue() + i5));
        }
    }
}
