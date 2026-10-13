package xo;

import java.util.Random;
import java.util.concurrent.ThreadLocalRandom;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends wo.a {
    @Override // wo.d
    public final int c(int i5, int i6) {
        return ThreadLocalRandom.current().nextInt(i5, i6);
    }

    @Override // wo.a
    public final Random d() {
        ThreadLocalRandom current = ThreadLocalRandom.current();
        Intrinsics.checkNotNullExpressionValue(current, "current(...)");
        return current;
    }
}
