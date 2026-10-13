package io.sentry;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class a0 extends v {

    /* renamed from: e, reason: collision with root package name */
    public final x0 f11001e;

    /* renamed from: f, reason: collision with root package name */
    public final c1 f11002f;

    /* renamed from: g, reason: collision with root package name */
    public final ILogger f11003g;

    public a0(x0 x0Var, c1 c1Var, ILogger iLogger, long j, int i5) {
        super(x0Var, iLogger, j, i5);
        d9.a.L(x0Var, "Scopes are required.");
        this.f11001e = x0Var;
        d9.a.L(c1Var, "Serializer is required.");
        this.f11002f = c1Var;
        d9.a.L(iLogger, "Logger is required.");
        this.f11003g = iLogger;
    }

    public static void c(a0 a0Var, File file, io.sentry.hints.h hVar) {
        ILogger iLogger = a0Var.f11003g;
        if (hVar.a()) {
            iLogger.u(SentryLevel.INFO, "File not deleted since retry was marked. %s.", file.getAbsolutePath());
            return;
        }
        try {
            if (!file.delete()) {
                iLogger.u(SentryLevel.ERROR, "Failed to delete '%s' %s", file.getAbsolutePath(), "after trying to capture it");
            }
        } catch (Throwable th2) {
            iLogger.i(SentryLevel.ERROR, th2, "Failed to delete '%s' %s", file.getAbsolutePath(), "after trying to capture it");
        }
        iLogger.u(SentryLevel.DEBUG, "Deleted file %s.", file.getAbsolutePath());
    }

    @Override // io.sentry.v
    public final boolean a(String str) {
        return str.endsWith(".envelope");
    }

    /* JADX WARN: Code restructure failed: missing block: B:58:0x0140, code lost:
    
        if (r2 != null) goto L56;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x0117, code lost:
    
        c(r8, r9, (io.sentry.hints.h) r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0163, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x0160, code lost:
    
        if (r2 != null) goto L56;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x0115, code lost:
    
        if (r2 != null) goto L56;
     */
    @Override // io.sentry.v
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(File file, Hint hint) {
        Object b10;
        boolean isFile = file.isFile();
        ILogger iLogger = this.f11003g;
        if (!isFile) {
            iLogger.u(SentryLevel.DEBUG, "'%s' is not a file.", file.getAbsolutePath());
            return;
        }
        if (!file.getName().endsWith(".envelope")) {
            iLogger.u(SentryLevel.DEBUG, "File '%s' doesn't match extension expected.", file.getAbsolutePath());
            return;
        }
        if (!file.getParentFile().canWrite()) {
            iLogger.u(SentryLevel.WARNING, "File '%s' cannot be deleted so it will not be processed.", file.getAbsolutePath());
            return;
        }
        try {
            try {
                try {
                    BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
                    try {
                        io.sentry.internal.debugmeta.c d6 = this.f11002f.d(bufferedInputStream);
                        if (d6 == null) {
                            iLogger.u(SentryLevel.ERROR, "Failed to deserialize cached envelope %s", file.getAbsolutePath());
                        } else {
                            this.f11001e.h(d6, hint);
                        }
                        Object b11 = hint.b("sentry:typeCheckHint");
                        if (!io.sentry.hints.f.class.isInstance(hint.b("sentry:typeCheckHint")) || b11 == null) {
                            com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.f.class, b11, iLogger);
                        } else if (!((io.sentry.hints.f) b11).d()) {
                            iLogger.u(SentryLevel.WARNING, "Timed out waiting for envelope submission.", new Object[0]);
                        }
                        bufferedInputStream.close();
                        Object b12 = hint.b("sentry:typeCheckHint");
                        if (!io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) || b12 == null) {
                            com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b12, iLogger);
                        } else {
                            c(this, file, (io.sentry.hints.h) b12);
                        }
                    } catch (Throwable th2) {
                        try {
                            bufferedInputStream.close();
                        } catch (Throwable th3) {
                            th2.addSuppressed(th3);
                        }
                        throw th2;
                    }
                } catch (Throwable th4) {
                    Object b13 = hint.b("sentry:typeCheckHint");
                    if (!io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) || b13 == null) {
                        com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b13, iLogger);
                    } else {
                        c(this, file, (io.sentry.hints.h) b13);
                    }
                    throw th4;
                }
            } catch (IOException e9) {
                iLogger.i(SentryLevel.ERROR, e9, "I/O on file '%s' failed.", file.getAbsolutePath());
                b10 = hint.b("sentry:typeCheckHint");
                if (io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                }
                com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b10, iLogger);
            }
        } catch (FileNotFoundException e10) {
            iLogger.i(SentryLevel.ERROR, e10, "File '%s' cannot be found.", file.getAbsolutePath());
            b10 = hint.b("sentry:typeCheckHint");
            if (io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint"))) {
            }
            com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b10, iLogger);
        } catch (Throwable th5) {
            iLogger.i(SentryLevel.ERROR, th5, "Failed to capture cached envelope %s", file.getAbsolutePath());
            Object b14 = hint.b("sentry:typeCheckHint");
            if (!io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) || b14 == null) {
                com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b14, iLogger);
            } else {
                ((io.sentry.hints.h) b14).c(false);
                iLogger.i(SentryLevel.INFO, th5, "File '%s' won't retry.", file.getAbsolutePath());
            }
            b10 = hint.b("sentry:typeCheckHint");
            if (io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint"))) {
            }
            com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b10, iLogger);
        }
    }
}
