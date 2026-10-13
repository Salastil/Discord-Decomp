package bs;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x1 extends k1 {
    public byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f3256b;

    @Override // bs.k1
    public final Object a() {
        byte[] storage = Arrays.copyOf(this.a, this.f3256b);
        Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
        Intrinsics.checkNotNullParameter(storage, "storage");
        return new fo.a0(storage);
    }

    @Override // bs.k1
    public final void b(int i5) {
        byte[] bArr = this.a;
        if (bArr.length < i5) {
            int length = bArr.length * 2;
            if (i5 < length) {
                i5 = length;
            }
            byte[] storage = Arrays.copyOf(bArr, i5);
            Intrinsics.checkNotNullExpressionValue(storage, "copyOf(...)");
            Intrinsics.checkNotNullParameter(storage, "storage");
            this.a = storage;
        }
    }

    @Override // bs.k1
    public final int d() {
        return this.f3256b;
    }
}
