package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s1 extends k1 {
    public short[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3235b;

    @Override // bs.k1
    public final Object a() {
        short[] copyOf = Arrays.copyOf(this.a, this.f3235b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        short[] sArr = this.a;
        if (sArr.length < i5) {
            int length = sArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            short[] copyOf = Arrays.copyOf(sArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3235b;
    }
}
