package io.sentry.cache.tape;

import java.io.Closeable;

/* loaded from: classes3.dex */
public abstract class f implements Iterable, Closeable {
    public void clear() {
        x(size());
    }

    public abstract void i(Object obj);

    public abstract int size();

    public abstract void x(int i5);
}
