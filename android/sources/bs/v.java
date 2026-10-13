package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends k1 {
    public double[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3242b;

    @Override // bs.k1
    public final Object a() {
        double[] copyOf = Arrays.copyOf(this.a, this.f3242b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        double[] dArr = this.a;
        if (dArr.length < i5) {
            int length = dArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            double[] copyOf = Arrays.copyOf(dArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3242b;
    }
}
