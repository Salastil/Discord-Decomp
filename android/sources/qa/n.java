package qa;

import android.util.SparseIntArray;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class n extends b {
    public final int[] G;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(r8.b memoryTrimmableRegistry, w poolParams, s poolStatsTracker) {
        super(memoryTrimmableRegistry, poolParams, poolStatsTracker);
        Intrinsics.checkNotNullParameter(memoryTrimmableRegistry, "memoryTrimmableRegistry");
        Intrinsics.checkNotNullParameter(poolParams, "poolParams");
        Intrinsics.checkNotNullParameter(poolStatsTracker, "poolStatsTracker");
        SparseIntArray sparseIntArray = poolParams.f16735c;
        if (sparseIntArray != null) {
            this.G = new int[sparseIntArray.size()];
            int size = sparseIntArray.size();
            for (int i5 = 0; i5 < size; i5++) {
                this.G[i5] = sparseIntArray.keyAt(i5);
            }
        } else {
            this.G = new int[0];
        }
        this.f16690e.getClass();
        this.F.getClass();
    }

    @Override // qa.b
    public final Object a(int i5) {
        return new byte[i5];
    }

    @Override // qa.b
    public final void c(Object obj) {
        byte[] value = (byte[]) obj;
        Intrinsics.checkNotNullParameter(value, "value");
    }

    @Override // qa.b
    public final int e(int i5) {
        if (i5 <= 0) {
            throw new ai.k(Integer.valueOf(i5));
        }
        for (int i6 : this.G) {
            if (i6 >= i5) {
                return i6;
            }
        }
        return i5;
    }

    @Override // qa.b
    public final int f(Object obj) {
        byte[] value = (byte[]) obj;
        Intrinsics.checkNotNullParameter(value, "value");
        return value.length;
    }

    @Override // qa.b
    public final int g(int i5) {
        return i5;
    }
}
