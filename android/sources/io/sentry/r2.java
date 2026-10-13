package io.sentry;

import java.io.BufferedInputStream;
import java.io.OutputStream;
import java.io.Reader;
import java.io.Writer;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class r2 implements c1 {
    public static final r2 a = new r2();

    @Override // io.sentry.c1
    public final void a(Object obj, Writer writer) {
    }

    @Override // io.sentry.c1
    public final String b(ConcurrentHashMap concurrentHashMap) {
        return "";
    }

    @Override // io.sentry.c1
    public final Object c(Reader reader, Class cls) {
        return null;
    }

    @Override // io.sentry.c1
    public final io.sentry.internal.debugmeta.c d(BufferedInputStream bufferedInputStream) {
        return null;
    }

    @Override // io.sentry.c1
    public final void e(io.sentry.internal.debugmeta.c cVar, OutputStream outputStream) {
    }
}
