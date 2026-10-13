package bs;

import java.lang.ref.SoftReference;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class y0 {
    public volatile SoftReference a;

    public final synchronized Object a(Function0 factory) {
        Intrinsics.checkNotNullParameter(factory, "factory");
        Object obj = this.a.get();
        if (obj != null) {
            return obj;
        }
        Object invoke = factory.invoke();
        this.a = new SoftReference(invoke);
        return invoke;
    }
}
