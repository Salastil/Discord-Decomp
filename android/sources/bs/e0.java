package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e0 extends k1 {
    public float[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3179b;

    @Override // bs.k1
    public final Object a() {
        float[] copyOf = Arrays.copyOf(this.a, this.f3179b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        float[] fArr = this.a;
        if (fArr.length < i5) {
            int length = fArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            float[] copyOf = Arrays.copyOf(fArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3179b;
    }
}
