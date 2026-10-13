package org.chromium.net;

import android.content.Context;
import android.os.Trace;
import android.util.Log;
import ij.p;
import ij.r;
import ij.s0;
import java.net.URL;
import java.net.URLConnection;
import java.util.Collections;
import java.util.Date;
import java.util.Set;
import java.util.concurrent.Executor;
import kt.e;
import kt.f;
import kt.g;
import org.chromium.net.BidirectionalStream;
import org.chromium.net.ConnectionMigrationOptions;
import org.chromium.net.CronetEngine;
import org.chromium.net.DnsOptions;
import org.chromium.net.ExperimentalBidirectionalStream;
import org.chromium.net.ExperimentalUrlRequest;
import org.chromium.net.QuicOptions;
import org.chromium.net.UrlRequest;
import org.json.JSONException;
import org.json.JSONObject;

@Deprecated
/* loaded from: classes.dex */
public abstract class ExperimentalCronetEngine extends CronetEngine {
    public static final int CONNECTION_METRIC_UNKNOWN = -1;
    public static final int EFFECTIVE_CONNECTION_TYPE_2G = 3;
    public static final int EFFECTIVE_CONNECTION_TYPE_3G = 4;
    public static final int EFFECTIVE_CONNECTION_TYPE_4G = 5;
    public static final int EFFECTIVE_CONNECTION_TYPE_OFFLINE = 1;
    public static final int EFFECTIVE_CONNECTION_TYPE_SLOW_2G = 2;
    public static final int EFFECTIVE_CONNECTION_TYPE_UNKNOWN = 0;
    private static final String SHOULD_OVERRIDE_WITH_HTTPENGINE = "Cronet_OverrideWithHttpEngine";
    public static final long UNBIND_NETWORK_HANDLE = -1;

    public static class Builder extends CronetEngine.Builder {
        public Builder(Context context) {
            super(context);
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public /* bridge */ /* synthetic */ CronetEngine.Builder addPublicKeyPins(String str, Set set, boolean z5, Date date) {
            return addPublicKeyPins(str, (Set<byte[]>) set, z5, date);
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder enableSdch(boolean z5) {
            return this;
        }

        public ICronetEngineBuilder getBuilderDelegate() {
            return this.mBuilderDelegate;
        }

        public Builder setExperimentalOptions(String str) {
            JSONObject jSONObject;
            if (str == null || str.isEmpty()) {
                jSONObject = null;
            } else {
                try {
                    jSONObject = new JSONObject(str);
                } catch (JSONException e9) {
                    throw new IllegalArgumentException("Experimental options parsing failed", e9);
                }
            }
            this.mParsedExperimentalOptions = jSONObject;
            return this;
        }

        public Builder(ICronetEngineBuilder iCronetEngineBuilder) {
            super(iCronetEngineBuilder);
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder addPublicKeyPins(String str, Set<byte[]> set, boolean z5, Date date) {
            super.addPublicKeyPins(str, set, z5, date);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder addQuicHint(String str, int i5, int i6) {
            super.addQuicHint(str, i5, i6);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public ExperimentalCronetEngine build() {
            return buildExperimental();
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder enableHttp2(boolean z5) {
            super.enableHttp2(z5);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder enableHttpCache(int i5, long j) {
            super.enableHttpCache(i5, j);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder enableNetworkQualityEstimator(boolean z5) {
            super.enableNetworkQualityEstimator(z5);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder enablePublicKeyPinningBypassForLocalTrustAnchors(boolean z5) {
            super.enablePublicKeyPinningBypassForLocalTrustAnchors(z5);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder enableQuic(boolean z5) {
            super.enableQuic(z5);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        @ConnectionMigrationOptions.Experimental
        public Builder setConnectionMigrationOptions(ConnectionMigrationOptions connectionMigrationOptions) {
            super.setConnectionMigrationOptions(connectionMigrationOptions);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        @DnsOptions.Experimental
        public Builder setDnsOptions(DnsOptions dnsOptions) {
            super.setDnsOptions(dnsOptions);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder setLibraryLoader(CronetEngine.Builder.LibraryLoader libraryLoader) {
            super.setLibraryLoader(libraryLoader);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        @QuicOptions.Experimental
        public Builder setQuicOptions(QuicOptions quicOptions) {
            super.setQuicOptions(quicOptions);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder setStoragePath(String str) {
            super.setStoragePath(str);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder setThreadPriority(int i5) {
            super.setThreadPriority(i5);
            return this;
        }

        @Override // org.chromium.net.CronetEngine.Builder
        public Builder setUserAgent(String str) {
            super.setUserAgent(str);
            return this;
        }
    }

    public static boolean shouldOverrideWithHttpEngine(Context context) {
        boolean z5;
        g gVar;
        e c6;
        String cronetVersion = ApiVersion.getCronetVersion();
        try {
            Class.forName("org.chromium.net.impl.NativeCronetEngineBuilderImpl", false, lt.d.class.getClassLoader());
            z5 = true;
        } catch (ClassNotFoundException unused) {
            z5 = false;
        }
        boolean z6 = lt.d.a(context).getBoolean("android.net.http.EnableTelemetry", !z5);
        synchronized (f.f13696c) {
            try {
                String str = f.f13695b;
                if (str != null && !cronetVersion.equals(str)) {
                    throw new IllegalStateException("getHttpFlags() called multiple times with different versions");
                }
                gVar = f.a;
                if (gVar == null) {
                    f.f13695b = cronetVersion;
                    ht.a.c("HttpFlagsLoader#getHttpFlags loading flags");
                    try {
                        if (lt.d.a(context).getBoolean("android.net.http.ReadHttpFlags", true)) {
                            c6 = f.c(context);
                        } else {
                            Log.d("HttpFlagsLoader", "Not loading HTTP flags because they are disabled in the manifest");
                            c6 = null;
                        }
                        if (c6 == null) {
                            r a = ((kt.c) ((p) e.f13692f.a(5))).a();
                            a.getClass();
                            if (!r.d(a, true)) {
                                throw new s0();
                            }
                            c6 = (e) a;
                        }
                        context.getPackageName();
                        g c8 = g.c(c6, cronetVersion, z6);
                        f.a = c8;
                        if (Collections.unmodifiableMap(c8.a).get("Cronet_log_me") != null) {
                            throw new ClassCastException();
                        }
                        gVar = f.a;
                        Trace.endSection();
                    } finally {
                        try {
                            Trace.endSection();
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                        }
                    }
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
        if (Collections.unmodifiableMap(gVar.a).get(SHOULD_OVERRIDE_WITH_HTTPENGINE) == null) {
            return false;
        }
        throw new ClassCastException();
    }

    @Override // org.chromium.net.CronetEngine
    public abstract ExperimentalBidirectionalStream.Builder newBidirectionalStreamBuilder(String str, BidirectionalStream.Callback callback, Executor executor);

    @Override // org.chromium.net.CronetEngine
    public abstract ExperimentalUrlRequest.Builder newUrlRequestBuilder(String str, UrlRequest.Callback callback, Executor executor);

    public URLConnection openConnection(URL url, java.net.Proxy proxy) {
        return url.openConnection(proxy);
    }
}
