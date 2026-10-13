package io.sentry;

import java.io.Closeable;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URI;

/* loaded from: classes3.dex */
public final class SpotlightIntegration implements l1, h5, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public v5 f10988d;

    /* renamed from: e, reason: collision with root package name */
    public ILogger f10989e = j2.f11638d;

    /* renamed from: i, reason: collision with root package name */
    public a1 f10990i = g2.f11557v;

    public static void c(HttpURLConnection httpURLConnection) {
        try {
            httpURLConnection.getInputStream().close();
        } catch (IOException unused) {
        } finally {
            httpURLConnection.disconnect();
        }
    }

    public static HttpURLConnection f(String str) {
        HttpURLConnection httpURLConnection = (HttpURLConnection) URI.create(str).toURL().openConnection();
        httpURLConnection.setReadTimeout(1000);
        httpURLConnection.setConnectTimeout(1000);
        httpURLConnection.setRequestMethod("POST");
        httpURLConnection.setDoOutput(true);
        httpURLConnection.setRequestProperty("Content-Encoding", "gzip");
        httpURLConnection.setRequestProperty("Content-Type", "application/x-sentry-envelope");
        httpURLConnection.setRequestProperty("Accept", "application/json");
        httpURLConnection.setRequestProperty("Connection", "close");
        httpURLConnection.connect();
        return httpURLConnection;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f10990i.a(0L);
        v5 v5Var = this.f10988d;
        if (v5Var == null || v5Var.getBeforeEnvelopeCallback() != this) {
            return;
        }
        this.f10988d.setBeforeEnvelopeCallback(null);
    }

    @Override // io.sentry.l1
    public final void register(x0 x0Var, v5 v5Var) {
        this.f10988d = v5Var;
        this.f10989e = v5Var.getLogger();
        if (v5Var.getBeforeEnvelopeCallback() != null || !v5Var.isEnableSpotlight()) {
            this.f10989e.u(SentryLevel.DEBUG, "SpotlightIntegration is not enabled. BeforeEnvelopeCallback is already set or spotlight is not enabled.", new Object[0]);
            return;
        }
        this.f10990i = new e4.i(v5Var);
        v5Var.setBeforeEnvelopeCallback(this);
        this.f10989e.u(SentryLevel.DEBUG, "SpotlightIntegration enabled.", new Object[0]);
        com.facebook.imagepipeline.nativecode.b.a("Spotlight");
    }
}
