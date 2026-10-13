package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class z {

    /* renamed from: e, reason: collision with root package name */
    public static final long[] f3259e = new long[0];
    public final SerialDescriptor a;

    /* renamed from: b, reason: collision with root package name */
    public final ds.o f3260b;

    /* renamed from: c, reason: collision with root package name */
    public long f3261c;

    /* renamed from: d, reason: collision with root package name */
    public final long[] f3262d;

    public z(SerialDescriptor descriptor, ds.o readIfAbsent) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(readIfAbsent, "readIfAbsent");
        this.a = descriptor;
        this.f3260b = readIfAbsent;
        int f2 = descriptor.f();
        if (f2 <= 64) {
            this.f3261c = f2 != 64 ? (-1) << f2 : 0L;
            this.f3262d = f3259e;
            return;
        }
        this.f3261c = 0L;
        int i5 = (f2 - 1) >>> 6;
        long[] jArr = new long[i5];
        if ((f2 & 63) != 0) {
            Intrinsics.checkNotNullParameter(jArr, "<this>");
            jArr[i5 - 1] = (-1) << f2;
        }
        this.f3262d = jArr;
    }
}
