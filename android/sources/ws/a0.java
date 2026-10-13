package ws;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f20058b = new int[10];

    public final int a() {
        if ((this.a & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            return this.f20058b[7];
        }
        return 65535;
    }

    public final void b(a0 other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i5 = 0;
        while (i5 < 10) {
            int i6 = i5 + 1;
            if (((1 << i5) & other.a) != 0) {
                c(i5, other.f20058b[i5]);
            }
            i5 = i6;
        }
    }

    public final void c(int i5, int i6) {
        if (i5 >= 0) {
            int[] iArr = this.f20058b;
            if (i5 >= iArr.length) {
                return;
            }
            this.a = (1 << i5) | this.a;
            iArr[i5] = i6;
        }
    }
}
