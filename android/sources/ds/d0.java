package ds;

import bs.c2;
import bs.f2;
import bs.i2;
import bs.z1;
import fo.j0;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public abstract class d0 {
    public static final Set a;

    static {
        Intrinsics.checkNotNullParameter(fo.c0.f8809e, "<this>");
        Intrinsics.checkNotNullParameter(fo.f0.f8814e, "<this>");
        Intrinsics.checkNotNullParameter(fo.y.f8843e, "<this>");
        Intrinsics.checkNotNullParameter(j0.f8817e, "<this>");
        SerialDescriptor[] elements = {c2.f3170b, f2.f3185b, z1.f3263b, i2.f3198b};
        Intrinsics.checkNotNullParameter(elements, "elements");
        a = kotlin.collections.x.J(elements);
    }

    public static final boolean a(SerialDescriptor serialDescriptor) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        return serialDescriptor.isInline() && a.contains(serialDescriptor);
    }
}
