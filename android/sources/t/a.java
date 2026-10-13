package t;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class a {
    public static final int[] a = new int[0];

    /* renamed from: b, reason: collision with root package name */
    public static final long[] f18149b = new long[0];

    /* renamed from: c, reason: collision with root package name */
    public static final Object[] f18150c = new Object[0];

    public static final int a(int i5, int i6, int[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        int i10 = i5 - 1;
        int i11 = 0;
        while (i11 <= i10) {
            int i12 = (i11 + i10) >>> 1;
            int i13 = array[i12];
            if (i13 < i6) {
                i11 = i12 + 1;
            } else {
                if (i13 <= i6) {
                    return i12;
                }
                i10 = i12 - 1;
            }
        }
        return ~i11;
    }

    public static final int b(long[] array, int i5, long j) {
        Intrinsics.checkNotNullParameter(array, "array");
        int i6 = i5 - 1;
        int i10 = 0;
        while (i10 <= i6) {
            int i11 = (i10 + i6) >>> 1;
            long j5 = array[i11];
            if (j5 < j) {
                i10 = i11 + 1;
            } else {
                if (j5 <= j) {
                    return i11;
                }
                i6 = i11 - 1;
            }
        }
        return ~i10;
    }

    public static final void c(String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        throw new IllegalArgumentException(message);
    }
}
