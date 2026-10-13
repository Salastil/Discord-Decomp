package io.sentry;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.Charset;
import java.util.Collection;
import java.util.Iterator;
import java.util.concurrent.CountDownLatch;

/* loaded from: classes3.dex */
public final class z2 extends v {

    /* renamed from: i, reason: collision with root package name */
    public static final Charset f12095i = Charset.forName("UTF-8");

    /* renamed from: e, reason: collision with root package name */
    public final x0 f12096e;

    /* renamed from: f, reason: collision with root package name */
    public final p0 f12097f;

    /* renamed from: g, reason: collision with root package name */
    public final c1 f12098g;

    /* renamed from: h, reason: collision with root package name */
    public final ILogger f12099h;

    public z2(x0 x0Var, p0 p0Var, c1 c1Var, ILogger iLogger, long j, int i5) {
        super(x0Var, iLogger, j, i5);
        d9.a.L(x0Var, "Scopes are required.");
        this.f12096e = x0Var;
        d9.a.L(p0Var, "Envelope reader is required.");
        this.f12097f = p0Var;
        d9.a.L(c1Var, "Serializer is required.");
        this.f12098g = c1Var;
        d9.a.L(iLogger, "Logger is required.");
        this.f12099h = iLogger;
    }

    public static /* synthetic */ void c(z2 z2Var, File file, io.sentry.hints.h hVar) {
        ILogger iLogger = z2Var.f12099h;
        if (hVar.a()) {
            return;
        }
        try {
            if (file.delete()) {
                return;
            }
            iLogger.u(SentryLevel.ERROR, "Failed to delete: %s", file.getAbsolutePath());
        } catch (RuntimeException e9) {
            iLogger.i(SentryLevel.ERROR, e9, "Failed to delete: %s", file.getAbsolutePath());
        }
    }

    @Override // io.sentry.v
    public final boolean a(String str) {
        return (str == null || str.startsWith("session") || str.startsWith("previous_session") || str.startsWith("startup_crash")) ? false : true;
    }

    @Override // io.sentry.v
    public final void b(File file, Hint hint) {
        boolean a = a(file.getName());
        ILogger iLogger = this.f12099h;
        try {
            if (!a) {
                iLogger.u(SentryLevel.DEBUG, "File '%s' should be ignored.", file.getAbsolutePath());
                return;
            }
            try {
                BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
                try {
                    io.sentry.internal.debugmeta.c a10 = this.f12097f.a(bufferedInputStream);
                    if (a10 == null) {
                        iLogger.u(SentryLevel.ERROR, "Stream from path %s resulted in a null envelope.", file.getAbsolutePath());
                    } else {
                        e(a10, hint);
                        iLogger.u(SentryLevel.DEBUG, "File '%s' is done.", file.getAbsolutePath());
                    }
                    bufferedInputStream.close();
                    Object b10 = hint.b("sentry:typeCheckHint");
                    if (!io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) || b10 == null) {
                        com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b10, iLogger);
                    } else {
                        c(this, file, (io.sentry.hints.h) b10);
                    }
                } catch (Throwable th2) {
                    try {
                        bufferedInputStream.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            } catch (IOException e9) {
                iLogger.k(SentryLevel.ERROR, "Error processing envelope.", e9);
                Object b11 = hint.b("sentry:typeCheckHint");
                if (!io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) || b11 == null) {
                    com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b11, iLogger);
                } else {
                    c(this, file, (io.sentry.hints.h) b11);
                }
            }
        } catch (Throwable th4) {
            Object b12 = hint.b("sentry:typeCheckHint");
            if (!io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint")) || b12 == null) {
                com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b12, iLogger);
            } else {
                c(this, file, (io.sentry.hints.h) b12);
            }
            throw th4;
        }
    }

    public final f9.b d(n6 n6Var) {
        String str;
        ILogger iLogger = this.f12099h;
        if (n6Var != null && (str = n6Var.f11694y) != null) {
            try {
                Double valueOf = Double.valueOf(Double.parseDouble(str));
                if (e4.f.B(valueOf, false)) {
                    String str2 = n6Var.E;
                    if (str2 != null) {
                        Double valueOf2 = Double.valueOf(Double.parseDouble(str2));
                        if (e4.f.B(valueOf2, false)) {
                            return new f9.b(Boolean.TRUE, valueOf, valueOf2, Boolean.FALSE, (Double) null);
                        }
                    }
                    return e4.f.d(new f9.b(Boolean.TRUE, valueOf));
                }
                iLogger.u(SentryLevel.ERROR, "Invalid sample rate parsed from TraceContext: %s", str);
            } catch (Exception unused) {
                iLogger.u(SentryLevel.ERROR, "Unable to parse sample rate from TraceContext: %s", str);
            }
        }
        return new f9.b(Boolean.TRUE, null);
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x024a  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0272 A[ADDED_TO_REGION] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        int i5;
        Iterator it;
        int i6;
        String str;
        BufferedReader bufferedReader;
        Object b10;
        Object b11;
        String str2;
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        Iterable iterable = (Iterable) cVar.f11623i;
        k4 k4Var = (k4) cVar.f11622e;
        if (iterable instanceof Collection) {
            i5 = ((Collection) iterable).size();
        } else {
            Iterator it2 = iterable.iterator();
            int i10 = 0;
            while (it2.hasNext()) {
                it2.next();
                i10++;
            }
            i5 = i10;
        }
        Object[] objArr = {Integer.valueOf(i5)};
        ILogger iLogger = this.f12099h;
        iLogger.u(sentryLevel, "Processing Envelope with %d item(s)", objArr);
        Iterator it3 = iterable.iterator();
        int i11 = 0;
        while (it3.hasNext()) {
            o4 o4Var = (o4) it3.next();
            int i12 = i11 + 1;
            p4 p4Var = o4Var.a;
            p4 p4Var2 = o4Var.a;
            if (p4Var == null) {
                iLogger.u(SentryLevel.ERROR, "Item %d has no header", Integer.valueOf(i12));
                it = it3;
                i6 = i12;
            } else {
                boolean equals = v4.Event.equals(p4Var.f11731w);
                c1 c1Var = this.f12098g;
                it = it3;
                Charset charset = f12095i;
                i6 = i12;
                x0 x0Var = this.f12096e;
                if (equals) {
                    try {
                        str = "Item failed to process.";
                    } catch (Throwable th2) {
                        th = th2;
                        str = "Item failed to process.";
                    }
                    try {
                        bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(o4Var.f()), charset));
                        try {
                            SentryEvent sentryEvent = (SentryEvent) c1Var.c(bufferedReader, SentryEvent.class);
                            if (sentryEvent == null) {
                                iLogger.u(SentryLevel.ERROR, "Item %d of type %s returned null by the parser.", Integer.valueOf(i6), p4Var2.f11731w);
                            } else {
                                io.sentry.protocol.t tVar = sentryEvent.f11545i;
                                if (tVar != null) {
                                    String str3 = tVar.f11883d;
                                    if (str3.startsWith("sentry.javascript") || str3.startsWith("sentry.dart") || str3.startsWith("sentry.dotnet")) {
                                        hint.d(Boolean.TRUE, "sentry:isFromHybridSdk");
                                    }
                                }
                                io.sentry.protocol.v vVar = k4Var.f11640d;
                                if (vVar == null || vVar.equals(sentryEvent.f11543d)) {
                                    x0Var.x(sentryEvent, hint);
                                    iLogger.u(SentryLevel.DEBUG, "Item %d is being captured.", Integer.valueOf(i6));
                                    if (!f(hint)) {
                                        iLogger.u(SentryLevel.WARNING, "Timed out waiting for event id submission: %s", sentryEvent.f11543d);
                                        bufferedReader.close();
                                        return;
                                    }
                                } else {
                                    iLogger.u(SentryLevel.ERROR, "Item %d of has a different event id (%s) to the envelope header (%s)", Integer.valueOf(i6), k4Var.f11640d, sentryEvent.f11543d);
                                    bufferedReader.close();
                                }
                            }
                            bufferedReader.close();
                        } finally {
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        iLogger.k(SentryLevel.ERROR, str, th);
                        b10 = hint.b("sentry:typeCheckHint");
                        if (!(b10 instanceof io.sentry.hints.k)) {
                        }
                        b11 = hint.b("sentry:typeCheckHint");
                        if (io.sentry.android.core.q0.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                        }
                        it3 = it;
                        i11 = i6;
                    }
                    b10 = hint.b("sentry:typeCheckHint");
                    if (!(b10 instanceof io.sentry.hints.k) && !((io.sentry.hints.k) b10).e()) {
                        iLogger.u(SentryLevel.WARNING, "Envelope had a failed capture at item %d. No more items will be sent.", Integer.valueOf(i6));
                        return;
                    }
                    b11 = hint.b("sentry:typeCheckHint");
                    if (io.sentry.android.core.q0.class.isInstance(hint.b("sentry:typeCheckHint")) && b11 != null) {
                        io.sentry.android.core.q0 q0Var = (io.sentry.android.core.q0) b11;
                        q0Var.f11308i = new CountDownLatch(1);
                        q0Var.f11306d = false;
                        q0Var.f11307e = false;
                        it3 = it;
                        i11 = i6;
                    }
                } else {
                    v4 v4Var = v4.Transaction;
                    v4 v4Var2 = p4Var.f11731w;
                    v4 v4Var3 = p4Var.f11731w;
                    if (v4Var.equals(v4Var2)) {
                        try {
                            str2 = "Item failed to process.";
                        } catch (Throwable th4) {
                            th = th4;
                            str2 = "Item failed to process.";
                        }
                        try {
                            bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(o4Var.f()), charset));
                            try {
                                io.sentry.protocol.d0 d0Var = (io.sentry.protocol.d0) c1Var.c(bufferedReader, io.sentry.protocol.d0.class);
                                if (d0Var == null) {
                                    iLogger.u(SentryLevel.ERROR, "Item %d of type %s returned null by the parser.", Integer.valueOf(i6), p4Var2.f11731w);
                                } else {
                                    io.sentry.protocol.v vVar2 = k4Var.f11640d;
                                    if (vVar2 == null || vVar2.equals(d0Var.f11543d)) {
                                        n6 n6Var = k4Var.f11642i;
                                        if (d0Var.f11544e.i() != null) {
                                            d0Var.f11544e.i().a(d(n6Var));
                                        }
                                        x0Var.v(d0Var, n6Var, hint, null);
                                        iLogger.u(SentryLevel.DEBUG, "Item %d is being captured.", Integer.valueOf(i6));
                                        if (!f(hint)) {
                                            iLogger.u(SentryLevel.WARNING, "Timed out waiting for event id submission: %s", d0Var.f11543d);
                                            bufferedReader.close();
                                            return;
                                        }
                                    } else {
                                        iLogger.u(SentryLevel.ERROR, "Item %d of has a different event id (%s) to the envelope header (%s)", Integer.valueOf(i6), k4Var.f11640d, d0Var.f11543d);
                                        bufferedReader.close();
                                    }
                                }
                                bufferedReader.close();
                            } finally {
                                try {
                                    bufferedReader.close();
                                    throw th;
                                } catch (Throwable th5) {
                                    th.addSuppressed(th5);
                                }
                            }
                        } catch (Throwable th6) {
                            th = th6;
                            iLogger.k(SentryLevel.ERROR, str2, th);
                            b10 = hint.b("sentry:typeCheckHint");
                            if (!(b10 instanceof io.sentry.hints.k)) {
                            }
                            b11 = hint.b("sentry:typeCheckHint");
                            if (io.sentry.android.core.q0.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                            }
                            it3 = it;
                            i11 = i6;
                        }
                    } else {
                        x0Var.h(new io.sentry.internal.debugmeta.c(k4Var.f11640d, k4Var.f11641e, o4Var), hint);
                        iLogger.u(SentryLevel.DEBUG, "%s item %d is being captured.", v4Var3.getItemType(), Integer.valueOf(i6));
                        if (!f(hint)) {
                            iLogger.u(SentryLevel.WARNING, "Timed out waiting for item type submission: %s", v4Var3.getItemType());
                            return;
                        }
                    }
                    b10 = hint.b("sentry:typeCheckHint");
                    if (!(b10 instanceof io.sentry.hints.k)) {
                    }
                    b11 = hint.b("sentry:typeCheckHint");
                    if (io.sentry.android.core.q0.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                        io.sentry.android.core.q0 q0Var2 = (io.sentry.android.core.q0) b11;
                        q0Var2.f11308i = new CountDownLatch(1);
                        q0Var2.f11306d = false;
                        q0Var2.f11307e = false;
                        it3 = it;
                        i11 = i6;
                    }
                }
            }
            it3 = it;
            i11 = i6;
        }
    }

    public final boolean f(Hint hint) {
        Object b10 = hint.b("sentry:typeCheckHint");
        if (b10 instanceof io.sentry.hints.f) {
            return ((io.sentry.hints.f) b10).d();
        }
        com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.f.class, b10, this.f12099h);
        return true;
    }
}
