package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a2 extends k1 {
    public int[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3161b;

    @Override // bs.k1
    public final Object a() {
        int[] storage = Arrays.copyOf(this.a, this.f3161b);
        Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.d0(storage);
    }

    @Override // bs.k1
    public final void b(int i5) {
        int[] iArr = this.a;
        if (iArr.length < i5) {
            int length = iArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            int[] storage = Arrays.copyOf(iArr, i5);
            Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
            Intrinsics.checkNotNullParameter(storage, "storage");
            this.a = storage;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3161b;
    }
}
