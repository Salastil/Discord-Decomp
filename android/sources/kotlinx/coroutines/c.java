package kotlinx.coroutines;

import java.io.Closeable;
import kotlin.coroutines.f;
import kotlin.jvm.internal.Intrinsics;
import kr.n;
import nr.s;

/* loaded from: classes3.dex */
public abstract class c extends CoroutineDispatcher implements Closeable, AutoCloseable {
    static {
        n safeCast = new n(9);
        s baseKey = CoroutineDispatcher.f13599e;
        Intrinsics.checkNotNullParameter(baseKey, "baseKey");
        Intrinsics.checkNotNullParameter(safeCast, "safeCast");
        if (baseKey != null) {
            f fVar = baseKey.f13534e;
        }
    }
}
