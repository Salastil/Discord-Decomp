package io.sentry.transport;

import io.sentry.Hint;
import java.util.Collections;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class i implements io.sentry.cache.d {

    /* renamed from: d, reason: collision with root package name */
    public static final i f12003d = new i();

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return Collections.emptyIterator();
    }

    @Override // io.sentry.cache.d
    public final boolean t(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        return false;
    }

    @Override // io.sentry.cache.d
    public final void U(io.sentry.internal.debugmeta.c cVar) {
    }
}
