package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n extends k1 {
    public char[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3217b;

    @Override // bs.k1
    public final Object a() {
        char[] copyOf = Arrays.copyOf(this.a, this.f3217b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        char[] cArr = this.a;
        if (cArr.length < i5) {
            int length = cArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            char[] copyOf = Arrays.copyOf(cArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3217b;
    }
}
