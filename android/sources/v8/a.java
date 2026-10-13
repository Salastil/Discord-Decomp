package v8;

import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public interface a {
    @o8.c
    default long now() {
        return TimeUnit.NANOSECONDS.toMillis(nowNanos());
    }

    @o8.c
    long nowNanos();
}
