package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends k1 {
    public byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3189b;

    @Override // bs.k1
    public final Object a() {
        byte[] copyOf = Arrays.copyOf(this.a, this.f3189b);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
        return copyOf;
    }

    @Override // bs.k1
    public final void b(int i5) {
        byte[] bArr = this.a;
        if (bArr.length < i5) {
            int length = bArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            byte[] copyOf = Arrays.copyOf(bArr, i5);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.a = copyOf;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3189b;
    }
}
