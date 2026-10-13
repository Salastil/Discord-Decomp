package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g2 extends k1 {
    public short[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3188b;

    @Override // bs.k1
    public final Object a() {
        short[] storage = Arrays.copyOf(this.a, this.f3188b);
        Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.k0(storage);
    }

    @Override // bs.k1
    public final void b(int i5) {
        short[] sArr = this.a;
        if (sArr.length < i5) {
            int length = sArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            short[] storage = Arrays.copyOf(sArr, i5);
            Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
            Intrinsics.checkNotNullParameter(storage, "storage");
            this.a = storage;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3188b;
    }
}
