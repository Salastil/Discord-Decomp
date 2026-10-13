package bs;

import java.lang.ref.SoftReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class t extends ClassValue {
    @Override // java.lang.ClassValue
    public final Object computeValue(Class type) {
        Intrinsics.checkNotNullParameter(type, "type");
        y0 y0Var = new y0();
        y0Var.a = new SoftReference(null);
        return y0Var;
    }
}
