package ho;

import java.util.Comparator;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class b implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    @NotNull
    public static final b f10142d = new b();

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        Comparable a = (Comparable) obj;
        Comparable b10 = (Comparable) obj2;
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        return a.compareTo(b10);
    }

    @Override // java.util.Comparator
    public final Comparator reversed() {
        return c.f10143d;
    }
}
