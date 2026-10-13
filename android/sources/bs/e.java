package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends k1 {
    public boolean[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3178b;

    @Override // bs.k1
    public final Object a() {
        boolean[] copyOf = Arrays.copyOf(this.a, this.f3178b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        boolean[] zArr = this.a;
        if (zArr.length < i5) {
            int length = zArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            boolean[] copyOf = Arrays.copyOf(zArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3178b;
    }
}
