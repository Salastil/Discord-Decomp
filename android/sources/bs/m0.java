package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m0 extends k1 {
    public int[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3215b;

    @Override // bs.k1
    public final Object a() {
        int[] copyOf = Arrays.copyOf(this.a, this.f3215b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        int[] iArr = this.a;
        if (iArr.length < i5) {
            int length = iArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            int[] copyOf = Arrays.copyOf(iArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3215b;
    }
}
