package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r0 extends k1 {
    public long[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3233b;

    @Override // bs.k1
    public final Object a() {
        long[] copyOf = Arrays.copyOf(this.a, this.f3233b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        long[] jArr = this.a;
        if (jArr.length < i5) {
            int length = jArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            long[] copyOf = Arrays.copyOf(jArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3233b;
    }
}
