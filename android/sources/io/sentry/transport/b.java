package io.sentry.transport;

import io.sentry.Hint;
import io.sentry.SentryLevel;
import io.sentry.i4;
import io.sentry.k4;
import io.sentry.v5;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f11986d;

    /* renamed from: e, reason: collision with root package name */
    public final Hint f11987e;

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.cache.d f11988i;

    /* renamed from: v, reason: collision with root package name */
    public final r f11989v = new r(-1);

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ c f11990w;

    public b(c cVar, io.sentry.internal.debugmeta.c cVar2, Hint hint, io.sentry.cache.d dVar) {
        this.f11990w = cVar;
        d9.a.L(cVar2, "Envelope is required.");
        this.f11986d = cVar2;
        this.f11987e = hint;
        d9.a.L(dVar, "EnvelopeCache is required.");
        this.f11988i = dVar;
    }

    public static /* synthetic */ void a(b bVar, w3.q qVar, io.sentry.hints.k kVar) {
        bVar.f11990w.f11993i.getLogger().u(SentryLevel.DEBUG, "Marking envelope submission result: %s", Boolean.valueOf(qVar.q()));
        kVar.b(qVar.q());
    }

    public final w3.q b() {
        Class cls;
        i4 now;
        io.sentry.internal.debugmeta.c cVar = this.f11986d;
        ((k4) cVar.f11622e).f11643v = null;
        io.sentry.cache.d dVar = this.f11988i;
        Hint hint = this.f11987e;
        boolean t5 = dVar.t(cVar, hint);
        Object b10 = hint.b("sentry:typeCheckHint");
        boolean isInstance = io.sentry.hints.c.class.isInstance(hint.b("sentry:typeCheckHint"));
        c cVar2 = this.f11990w;
        if (isInstance && b10 != null) {
            io.sentry.hints.c cVar3 = (io.sentry.hints.c) b10;
            v5 v5Var = cVar2.f11993i;
            if (cVar3.e(((k4) cVar.f11622e).f11640d)) {
                cVar3.f11597d.countDown();
                v5Var.getLogger().u(SentryLevel.DEBUG, "Disk flush envelope fired", new Object[0]);
            } else {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Not firing envelope flush as there's an ongoing transaction", new Object[0]);
            }
        }
        v5 v5Var2 = cVar2.f11993i;
        if (!cVar2.f11995w.isConnected()) {
            Object b11 = hint.b("sentry:typeCheckHint");
            boolean isInstance2 = io.sentry.hints.h.class.isInstance(hint.b("sentry:typeCheckHint"));
            r rVar = this.f11989v;
            if (isInstance2 && b11 != null) {
                ((io.sentry.hints.h) b11).c(true);
                return rVar;
            }
            if (!t5) {
                com.facebook.imagepipeline.nativecode.c.R(io.sentry.hints.h.class, b11, v5Var2.getLogger());
                v5Var2.getClientReportRecorder().j(io.sentry.clientreport.d.NETWORK_ERROR, cVar);
            }
            return rVar;
        }
        io.sentry.internal.debugmeta.c s2 = v5Var2.getClientReportRecorder().s(cVar);
        try {
            now = v5Var2.getDateProvider().now();
            cls = io.sentry.hints.h.class;
        } catch (IOException e9) {
            e = e9;
            cls = io.sentry.hints.h.class;
        }
        try {
            ((k4) s2.f11622e).f11643v = ki.b.s(Double.valueOf(now.d() / 1000000.0d).longValue());
            w3.q d6 = cVar2.f11996x.d(s2);
            if (d6.q()) {
                dVar.U(cVar);
                return d6;
            }
            String str = "The transport failed to send the envelope with response code " + d6.p();
            v5Var2.getLogger().u(SentryLevel.ERROR, str, new Object[0]);
            if (d6.p() >= 400) {
                dVar.U(cVar);
                if (d6.p() != 429) {
                    v5Var2.getClientReportRecorder().j(io.sentry.clientreport.d.NETWORK_ERROR, s2);
                }
            }
            throw new IllegalStateException(str);
        } catch (IOException e10) {
            e = e10;
            Object b12 = hint.b("sentry:typeCheckHint");
            Class cls2 = cls;
            if (cls2.isInstance(hint.b("sentry:typeCheckHint")) && b12 != null) {
                ((io.sentry.hints.h) b12).c(true);
            } else if (!t5) {
                com.facebook.imagepipeline.nativecode.c.R(cls2, b12, v5Var2.getLogger());
                v5Var2.getClientReportRecorder().j(io.sentry.clientreport.d.NETWORK_ERROR, s2);
            }
            throw new IllegalStateException("Sending the event failed.", e);
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f11990w.f11997y = this;
        w3.q qVar = this.f11989v;
        try {
            qVar = b();
            this.f11990w.f11993i.getLogger().u(SentryLevel.DEBUG, "Envelope flushed", new Object[0]);
        } catch (Throwable th2) {
            try {
                this.f11990w.f11993i.getLogger().i(SentryLevel.ERROR, th2, "Envelope submission failed", new Object[0]);
                throw th2;
            } finally {
                Hint hint = this.f11987e;
                Object b10 = hint.b("sentry:typeCheckHint");
                if (io.sentry.hints.k.class.isInstance(hint.b("sentry:typeCheckHint")) && b10 != null) {
                    a(this, qVar, (io.sentry.hints.k) b10);
                }
                this.f11990w.f11997y = null;
            }
        }
    }
}
