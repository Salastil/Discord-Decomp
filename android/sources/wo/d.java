package wo;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class d {

    /* renamed from: d, reason: collision with root package name */
    @NotNull
    public static final c f19972d = new c(null);

    /* renamed from: e, reason: collision with root package name */
    public static final a f19973e;

    static {
        Integer num = po.a.f16457b;
        f19973e = (num == null || num.intValue() >= 34) ? new xo.a() : new b();
    }

    public abstract int a(int i5);

    public int b() {
        return a(32);
    }

    public int c(int i5, int i6) {
        int b10;
        int i10;
        int i11;
        if (i6 <= i5) {
            Integer from = Integer.valueOf(i5);
            Integer until = Integer.valueOf(i6);
            Intrinsics.checkNotNullParameter(from, "from");
            Intrinsics.checkNotNullParameter(until, "until");
            throw new IllegalArgumentException(("Random range is empty: [" + from + ", " + until + ").").toString());
        }
        int i12 = i6 - i5;
        if (i12 > 0 || i12 == Integer.MIN_VALUE) {
            if (((-i12) & i12) == i12) {
                i11 = a(31 - Integer.numberOfLeadingZeros(i12));
            } else {
                do {
                    b10 = b() >>> 1;
                    i10 = b10 % i12;
                } while ((i12 - 1) + (b10 - i10) < 0);
                i11 = i10;
            }
            return i5 + i11;
        }
        while (true) {
            int b11 = b();
            if (i5 <= b11 && b11 < i6) {
                return b11;
            }
        }
    }
}
