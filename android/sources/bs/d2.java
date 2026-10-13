package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d2 extends k1 {
    public long[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3177b;

    @Override // bs.k1
    public final Object a() {
        long[] storage = Arrays.copyOf(this.a, this.f3177b);
        Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.g0(storage);
    }

    @Override // bs.k1
    public final void b(int i5) {
        long[] jArr = this.a;
        if (jArr.length < i5) {
            int length = jArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            long[] storage = Arrays.copyOf(jArr, i5);
            Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
            Intrinsics.checkNotNullParameter(storage, "storage");
            this.a = storage;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3177b;
    }
}
