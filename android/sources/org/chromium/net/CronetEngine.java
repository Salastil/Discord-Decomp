package org.chromium.net;

import a3.e;
import android.content.Context;
import android.os.Process;
import android.os.SystemClock;
import android.os.Trace;
import android.util.Log;
import ch.u;
import java.lang.reflect.Method;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLStreamHandlerFactory;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.Executor;
import org.chromium.net.BidirectionalStream;
import org.chromium.net.ConnectionMigrationOptions;
import org.chromium.net.DnsOptions;
import org.chromium.net.ProxyOptions;
import org.chromium.net.QuicOptions;
import org.chromium.net.RequestFinishedInfo;
import org.chromium.net.UrlRequest;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public abstract class CronetEngine {
    public static final int ACTIVE_REQUEST_COUNT_UNKNOWN = -1;
    public static final int CONNECTION_METRIC_UNKNOWN = -1;
    public static final int EFFECTIVE_CONNECTION_TYPE_2G = 3;
    public static final int EFFECTIVE_CONNECTION_TYPE_3G = 4;
    public static final int EFFECTIVE_CONNECTION_TYPE_4G = 5;
    public static final int EFFECTIVE_CONNECTION_TYPE_OFFLINE = 1;
    public static final int EFFECTIVE_CONNECTION_TYPE_SLOW_2G = 2;
    public static final int EFFECTIVE_CONNECTION_TYPE_UNKNOWN = 0;
    private static final String TAG = "CronetEngine";
    public static final long UNBIND_NETWORK_HANDLE = -1;

    public static class Builder {
        public static final int HTTP_CACHE_DISABLED = 0;
        public static final int HTTP_CACHE_DISK = 3;
        public static final int HTTP_CACHE_DISK_NO_HTTP = 2;
        public static final int HTTP_CACHE_IN_MEMORY = 1;
        private static final String TAG = "CronetEngine.Builder";
        protected final ICronetEngineBuilder mBuilderDelegate;
        private final List<a> mExperimentalOptionsPatches;
        protected JSONObject mParsedExperimentalOptions;

        public static abstract class LibraryLoader {
            public abstract void loadLibrary(String str);
        }

        public Builder(Context context) {
            this(createBuilderDelegate(context));
        }

        public static int compareVersions(String str, String str2) {
            if (str == null || str2 == null) {
                throw new IllegalArgumentException("The input values cannot be null");
            }
            String[] split = str.split("\\.");
            String[] split2 = str2.split("\\.");
            for (int i5 = 0; i5 < split.length && i5 < split2.length; i5++) {
                try {
                    int parseInt = Integer.parseInt(split[i5]);
                    int parseInt2 = Integer.parseInt(split2[i5]);
                    if (parseInt != parseInt2) {
                        return Integer.signum(parseInt - parseInt2);
                    }
                } catch (NumberFormatException e9) {
                    throw new IllegalArgumentException(e.l("Unable to convert version segments into integers: ", split[i5], " & ", split2[i5]), e9);
                }
            }
            return Integer.signum(split.length - split2.length);
        }

        private static ICronetEngineBuilder createBuilderDelegate(Context context) {
            ht.a.c("CronetEngine#createBuilderDelegate");
            try {
                long uptimeMillis = SystemClock.uptimeMillis();
                c cVar = getEnabledCronetProviders(context, new ArrayList(CronetProvider.getAllProviderInfos(context))).get(0);
                lt.d a = lt.c.a(context, cVar.f16187b);
                lt.a aVar = new lt.a();
                aVar.f14257c = -1;
                try {
                    aVar.f14259e = Boolean.FALSE;
                    aVar.f14256b = 1;
                    aVar.f14258d = cVar.f16187b;
                    aVar.f14262h = Process.myUid();
                    aVar.f14260f = new u(ApiVersion.getCronetVersion());
                    if (Log.isLoggable(TAG, 3)) {
                        Log.d(TAG, String.format("Using '%s' provider for creating CronetEngine.Builder.", cVar.a));
                    }
                    ICronetEngineBuilder iCronetEngineBuilder = cVar.a.createBuilder().mBuilderDelegate;
                    String implCronetVersion = getImplCronetVersion(iCronetEngineBuilder);
                    if (implCronetVersion != null) {
                        aVar.f14261g = new u(implCronetVersion);
                    }
                    aVar.a = iCronetEngineBuilder.getLogCronetInitializationRef();
                    aVar.f14259e = Boolean.TRUE;
                    aVar.f14257c = (int) (SystemClock.uptimeMillis() - uptimeMillis);
                    a.b(aVar);
                    Trace.endSection();
                    return iCronetEngineBuilder;
                } catch (Throwable th2) {
                    aVar.f14257c = (int) (SystemClock.uptimeMillis() - uptimeMillis);
                    a.b(aVar);
                    throw th2;
                }
            } catch (Throwable th3) {
                try {
                    Trace.endSection();
                } catch (Throwable th4) {
                    th3.addSuppressed(th4);
                }
                throw th3;
            }
        }

        public static List<c> getEnabledCronetProviders(Context context, List<c> list) {
            if (list.isEmpty()) {
                throw new RuntimeException("Unable to find any Cronet provider. Have you included all necessary jars?");
            }
            Iterator<c> it = list.iterator();
            while (it.hasNext()) {
                if (!it.next().a.isEnabled()) {
                    it.remove();
                }
            }
            if (list.isEmpty()) {
                throw new RuntimeException("All available Cronet providers are disabled. A provider should be enabled before it can be used.");
            }
            Collections.sort(list, new b());
            return list;
        }

        private static int getImplApiLevel(ICronetEngineBuilder iCronetEngineBuilder) {
            try {
                Method implVersionMethod = getImplVersionMethod(iCronetEngineBuilder, "getApiLevel");
                if (implVersionMethod == null) {
                    return -1;
                }
                return ((Integer) implVersionMethod.invoke(null, null)).intValue();
            } catch (ReflectiveOperationException e9) {
                throw new RuntimeException("Failed to retrieve Cronet impl API level", e9);
            }
        }

        private static String getImplCronetVersion(ICronetEngineBuilder iCronetEngineBuilder) {
            try {
                Method implVersionMethod = getImplVersionMethod(iCronetEngineBuilder, "getCronetVersion");
                if (implVersionMethod == null) {
                    return null;
                }
                return (String) implVersionMethod.invoke(null, null);
            } catch (ReflectiveOperationException e9) {
                throw new RuntimeException("Failed to retrieve Cronet impl version", e9);
            }
        }

        private static Method getImplVersionMethod(ICronetEngineBuilder iCronetEngineBuilder, String str) {
            try {
                return iCronetEngineBuilder.getClass().getClassLoader().loadClass("org.chromium.net.impl.ImplVersion").getMethod(str, null);
            } catch (ClassNotFoundException | NoSuchMethodException unused) {
                return null;
            }
        }

        private int getMaximumApiLevel() {
            return ApiVersion.getMaximumAvailableApiLevel();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void lambda$setConnectionMigrationOptions$2(ConnectionMigrationOptions connectionMigrationOptions, JSONObject jSONObject) {
            JSONObject a = d.a(jSONObject, "QUIC");
            if (connectionMigrationOptions.getEnableDefaultNetworkMigration() != null) {
                a.put("migrate_sessions_on_network_change_v2", connectionMigrationOptions.getEnableDefaultNetworkMigration());
            }
            if (connectionMigrationOptions.getAllowServerMigration() != null) {
                a.put("allow_server_migration", connectionMigrationOptions.getAllowServerMigration());
            }
            if (connectionMigrationOptions.getMigrateIdleConnections() != null) {
                a.put("migrate_idle_sessions", connectionMigrationOptions.getMigrateIdleConnections());
            }
            if (connectionMigrationOptions.getIdleMigrationPeriodSeconds() != null) {
                a.put("idle_session_migration_period_seconds", connectionMigrationOptions.getIdleMigrationPeriodSeconds());
            }
            if (connectionMigrationOptions.getRetryPreHandshakeErrorsOnAlternateNetwork() != null) {
                a.put("retry_on_alternate_network_before_handshake", connectionMigrationOptions.getRetryPreHandshakeErrorsOnAlternateNetwork());
            }
            if (connectionMigrationOptions.getMaxTimeOnNonDefaultNetworkSeconds() != null) {
                a.put("max_time_on_non_default_network_seconds", connectionMigrationOptions.getMaxTimeOnNonDefaultNetworkSeconds());
            }
            if (connectionMigrationOptions.getMaxPathDegradingEagerMigrationsCount() != null) {
                a.put("max_migrations_to_non_default_network_on_path_degrading", connectionMigrationOptions.getMaxPathDegradingEagerMigrationsCount());
            }
            if (connectionMigrationOptions.getMaxWriteErrorEagerMigrationsCount() != null) {
                a.put("max_migrations_to_non_default_network_on_write_error", connectionMigrationOptions.getMaxWriteErrorEagerMigrationsCount());
            }
            if (connectionMigrationOptions.getEnablePathDegradationMigration() != null) {
                boolean booleanValue = connectionMigrationOptions.getEnablePathDegradationMigration().booleanValue();
                a.put("allow_port_migration", booleanValue);
                if (connectionMigrationOptions.getAllowNonDefaultNetworkUsage() != null) {
                    boolean booleanValue2 = connectionMigrationOptions.getAllowNonDefaultNetworkUsage().booleanValue();
                    if (!booleanValue && booleanValue2) {
                        throw new IllegalArgumentException("Unable to turn on non-default network usage without path degradation migration!");
                    }
                    if (!booleanValue || !booleanValue2) {
                        a.put("migrate_sessions_early_v2", false);
                    } else {
                        a.put("migrate_sessions_early_v2", true);
                        a.put("migrate_sessions_on_network_change_v2", true);
                    }
                }
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void lambda$setDnsOptions$1(DnsOptions dnsOptions, JSONObject jSONObject) {
            JSONObject a = d.a(jSONObject, "AsyncDNS");
            if (dnsOptions.getUseBuiltInDnsResolver() != null) {
                a.put("enable", dnsOptions.getUseBuiltInDnsResolver());
            }
            JSONObject a10 = d.a(jSONObject, "StaleDNS");
            if (dnsOptions.getEnableStaleDns() != null) {
                a10.put("enable", dnsOptions.getEnableStaleDns());
            }
            if (dnsOptions.getPersistHostCache() != null) {
                a10.put("persist_to_disk", dnsOptions.getPersistHostCache());
            }
            if (dnsOptions.getPersistHostCachePeriodMillis() != null) {
                a10.put("persist_delay_ms", dnsOptions.getPersistHostCachePeriodMillis());
            }
            if (dnsOptions.getStaleDnsOptions() != null) {
                DnsOptions.StaleDnsOptions staleDnsOptions = dnsOptions.getStaleDnsOptions();
                if (staleDnsOptions.getAllowCrossNetworkUsage() != null) {
                    a10.put("allow_other_network", staleDnsOptions.getAllowCrossNetworkUsage());
                }
                if (staleDnsOptions.getFreshLookupTimeoutMillis() != null) {
                    a10.put("delay_ms", staleDnsOptions.getFreshLookupTimeoutMillis());
                }
                if (staleDnsOptions.getUseStaleOnNameNotResolved() != null) {
                    a10.put("use_stale_on_name_not_resolved", staleDnsOptions.getUseStaleOnNameNotResolved());
                }
                if (staleDnsOptions.getMaxExpiredDelayMillis() != null) {
                    a10.put("max_expired_time_ms", staleDnsOptions.getMaxExpiredDelayMillis());
                }
            }
            JSONObject a11 = d.a(jSONObject, "QUIC");
            if (dnsOptions.getPreestablishConnectionsToStaleDnsResults() != null) {
                a11.put("race_stale_dns_on_connection", dnsOptions.getPreestablishConnectionsToStaleDnsResults());
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void lambda$setQuicOptions$0(QuicOptions quicOptions, JSONObject jSONObject) {
            JSONObject a = d.a(jSONObject, "QUIC");
            if (!quicOptions.getQuicHostAllowlist().isEmpty()) {
                Set<String> quicHostAllowlist = quicOptions.getQuicHostAllowlist();
                StringBuilder sb2 = new StringBuilder();
                Iterator<T> it = quicHostAllowlist.iterator();
                if (it.hasNext()) {
                    while (true) {
                        sb2.append((CharSequence) it.next());
                        if (!it.hasNext()) {
                            break;
                        } else {
                            sb2.append((CharSequence) ",");
                        }
                    }
                }
                a.put("host_whitelist", sb2.toString());
            }
            if (!quicOptions.getEnabledQuicVersions().isEmpty()) {
                Set<String> enabledQuicVersions = quicOptions.getEnabledQuicVersions();
                StringBuilder sb3 = new StringBuilder();
                Iterator<T> it2 = enabledQuicVersions.iterator();
                if (it2.hasNext()) {
                    while (true) {
                        sb3.append((CharSequence) it2.next());
                        if (!it2.hasNext()) {
                            break;
                        } else {
                            sb3.append((CharSequence) ",");
                        }
                    }
                }
                a.put("quic_version", sb3.toString());
            }
            if (!quicOptions.getConnectionOptions().isEmpty()) {
                Set<String> connectionOptions = quicOptions.getConnectionOptions();
                StringBuilder sb4 = new StringBuilder();
                Iterator<T> it3 = connectionOptions.iterator();
                if (it3.hasNext()) {
                    while (true) {
                        sb4.append((CharSequence) it3.next());
                        if (!it3.hasNext()) {
                            break;
                        } else {
                            sb4.append((CharSequence) ",");
                        }
                    }
                }
                a.put("connection_options", sb4.toString());
            }
            if (!quicOptions.getClientConnectionOptions().isEmpty()) {
                Set<String> clientConnectionOptions = quicOptions.getClientConnectionOptions();
                StringBuilder sb5 = new StringBuilder();
                Iterator<T> it4 = clientConnectionOptions.iterator();
                if (it4.hasNext()) {
                    while (true) {
                        sb5.append((CharSequence) it4.next());
                        if (!it4.hasNext()) {
                            break;
                        } else {
                            sb5.append((CharSequence) ",");
                        }
                    }
                }
                a.put("client_connection_options", sb5.toString());
            }
            if (!quicOptions.getExtraQuicheFlags().isEmpty()) {
                Set<String> extraQuicheFlags = quicOptions.getExtraQuicheFlags();
                StringBuilder sb6 = new StringBuilder();
                Iterator<T> it5 = extraQuicheFlags.iterator();
                if (it5.hasNext()) {
                    while (true) {
                        sb6.append((CharSequence) it5.next());
                        if (!it5.hasNext()) {
                            break;
                        } else {
                            sb6.append((CharSequence) ",");
                        }
                    }
                }
                a.put("set_quic_flags", sb6.toString());
            }
            if (quicOptions.getInMemoryServerConfigsCacheSize() != null) {
                a.put("max_server_configs_stored_in_properties", quicOptions.getInMemoryServerConfigsCacheSize());
            }
            if (quicOptions.getHandshakeUserAgent() != null) {
                a.put("user_agent_id", quicOptions.getHandshakeUserAgent());
            }
            if (quicOptions.getRetryWithoutAltSvcOnQuicErrors() != null) {
                a.put("retry_without_alt_svc_on_quic_errors", quicOptions.getRetryWithoutAltSvcOnQuicErrors());
            }
            if (quicOptions.getEnableTlsZeroRtt() != null) {
                a.put("disable_tls_zero_rtt", !quicOptions.getEnableTlsZeroRtt().booleanValue());
            }
            if (quicOptions.getPreCryptoHandshakeIdleTimeoutSeconds() != null) {
                a.put("max_idle_time_before_crypto_handshake_seconds", quicOptions.getPreCryptoHandshakeIdleTimeoutSeconds());
            }
            if (quicOptions.getCryptoHandshakeTimeoutSeconds() != null) {
                a.put("max_time_before_crypto_handshake_seconds", quicOptions.getCryptoHandshakeTimeoutSeconds());
            }
            if (quicOptions.getIdleConnectionTimeoutSeconds() != null) {
                a.put("idle_connection_timeout_seconds", quicOptions.getIdleConnectionTimeoutSeconds());
            }
            if (quicOptions.getRetransmittableOnWireTimeoutMillis() != null) {
                a.put("retransmittable_on_wire_timeout_milliseconds", quicOptions.getRetransmittableOnWireTimeoutMillis());
            }
            if (quicOptions.getCloseSessionsOnIpChange() != null) {
                a.put("close_sessions_on_ip_change", quicOptions.getCloseSessionsOnIpChange());
            }
            if (quicOptions.getGoawaySessionsOnIpChange() != null) {
                a.put("goaway_sessions_on_ip_change", quicOptions.getGoawaySessionsOnIpChange());
            }
            if (quicOptions.getInitialBrokenServicePeriodSeconds() != null) {
                a.put("initial_delay_for_broken_alternative_service_seconds", quicOptions.getInitialBrokenServicePeriodSeconds());
            }
            if (quicOptions.getIncreaseBrokenServicePeriodExponentially() != null) {
                a.put("exponential_backoff_on_initial_delay", quicOptions.getIncreaseBrokenServicePeriodExponentially());
            }
            if (quicOptions.getDelayJobsWithAvailableSpdySession() != null) {
                a.put("delay_main_job_with_available_spdy_session", quicOptions.getDelayJobsWithAvailableSpdySession());
            }
        }

        private void maybeSetExperimentalOptions() {
            JSONObject jSONObject = this.mParsedExperimentalOptions;
            List<a> list = this.mExperimentalOptionsPatches;
            if (jSONObject != null || !list.isEmpty()) {
                if (jSONObject == null) {
                    jSONObject = new JSONObject();
                }
                for (a aVar : list) {
                    try {
                        switch (aVar.a) {
                            case 0:
                                lambda$setQuicOptions$0((QuicOptions) aVar.f16186b, jSONObject);
                                continue;
                            case 1:
                                lambda$setConnectionMigrationOptions$2((ConnectionMigrationOptions) aVar.f16186b, jSONObject);
                                continue;
                            default:
                                lambda$setDnsOptions$1((DnsOptions) aVar.f16186b, jSONObject);
                                continue;
                        }
                    } catch (JSONException e9) {
                        throw new IllegalStateException("Unable to apply JSON patch!", e9);
                    }
                    throw new IllegalStateException("Unable to apply JSON patch!", e9);
                }
            }
            jSONObject = null;
            if (jSONObject != null) {
                this.mBuilderDelegate.setExperimentalOptions(jSONObject.toString());
            }
        }

        public Builder addPublicKeyPins(String str, Set<byte[]> set, boolean z5, Date date) {
            this.mBuilderDelegate.addPublicKeyPins(str, set, z5, date);
            return this;
        }

        public Builder addQuicHint(String str, int i5, int i6) {
            this.mBuilderDelegate.addQuicHint(str, i5, i6);
            return this;
        }

        public CronetEngine build() {
            return buildExperimental();
        }

        public ExperimentalCronetEngine buildExperimental() {
            int implApiLevel = getImplApiLevel(this.mBuilderDelegate);
            if (implApiLevel != -1 && implApiLevel < getMaximumApiLevel()) {
                Log.w(TAG, "The implementation version is lower than the API version. Calls to methods added in API " + (implApiLevel + 1) + " and newer will likely have no effect.");
            }
            maybeSetExperimentalOptions();
            return this.mBuilderDelegate.build();
        }

        public Builder enableBrotli(boolean z5) {
            this.mBuilderDelegate.enableBrotli(z5);
            return this;
        }

        public Builder enableHttp2(boolean z5) {
            this.mBuilderDelegate.enableHttp2(z5);
            return this;
        }

        public Builder enableHttpCache(int i5, long j) {
            this.mBuilderDelegate.enableHttpCache(i5, j);
            return this;
        }

        public Builder enableNetworkQualityEstimator(boolean z5) {
            this.mBuilderDelegate.enableNetworkQualityEstimator(z5);
            return this;
        }

        public Builder enablePublicKeyPinningBypassForLocalTrustAnchors(boolean z5) {
            this.mBuilderDelegate.enablePublicKeyPinningBypassForLocalTrustAnchors(z5);
            return this;
        }

        public Builder enableQuic(boolean z5) {
            this.mBuilderDelegate.enableQuic(z5);
            return this;
        }

        @Deprecated
        public Builder enableSdch(boolean z5) {
            return this;
        }

        public String getDefaultUserAgent() {
            return this.mBuilderDelegate.getDefaultUserAgent();
        }

        @ConnectionMigrationOptions.Experimental
        public Builder setConnectionMigrationOptions(ConnectionMigrationOptions connectionMigrationOptions) {
            if (this.mBuilderDelegate.getSupportedConfigOptions().contains(1)) {
                this.mBuilderDelegate.setConnectionMigrationOptions(connectionMigrationOptions);
                return this;
            }
            this.mExperimentalOptionsPatches.add(new a(1, connectionMigrationOptions));
            return this;
        }

        @DnsOptions.Experimental
        public Builder setDnsOptions(DnsOptions dnsOptions) {
            if (this.mBuilderDelegate.getSupportedConfigOptions().contains(2)) {
                this.mBuilderDelegate.setDnsOptions(dnsOptions);
                return this;
            }
            this.mExperimentalOptionsPatches.add(new a(2, dnsOptions));
            return this;
        }

        public Builder setLibraryLoader(LibraryLoader libraryLoader) {
            this.mBuilderDelegate.setLibraryLoader(libraryLoader);
            return this;
        }

        @ProxyOptions.Experimental
        public Builder setProxyOptions(ProxyOptions proxyOptions) {
            if (!this.mBuilderDelegate.getSupportedConfigOptions().contains(4)) {
                throw new UnsupportedOperationException("This Cronet implementation does not support ProxyOptions");
            }
            this.mBuilderDelegate.setProxyOptions(proxyOptions);
            return this;
        }

        @QuicOptions.Experimental
        public Builder setQuicOptions(QuicOptions quicOptions) {
            if (this.mBuilderDelegate.getSupportedConfigOptions().contains(3)) {
                this.mBuilderDelegate.setQuicOptions(quicOptions);
                return this;
            }
            this.mExperimentalOptionsPatches.add(new a(0, quicOptions));
            return this;
        }

        public Builder setStoragePath(String str) {
            this.mBuilderDelegate.setStoragePath(str);
            return this;
        }

        @Deprecated
        public Builder setThreadPriority(int i5) {
            this.mBuilderDelegate.setThreadPriority(i5);
            return this;
        }

        public Builder setUserAgent(String str) {
            this.mBuilderDelegate.setUserAgent(str);
            return this;
        }

        public Builder(ICronetEngineBuilder iCronetEngineBuilder) {
            this.mExperimentalOptionsPatches = new ArrayList();
            this.mBuilderDelegate = iCronetEngineBuilder;
        }

        @ConnectionMigrationOptions.Experimental
        public Builder setConnectionMigrationOptions(ConnectionMigrationOptions.Builder builder) {
            return setConnectionMigrationOptions(builder.build());
        }

        @DnsOptions.Experimental
        public Builder setDnsOptions(DnsOptions.Builder builder) {
            return setDnsOptions(builder.build());
        }

        @QuicOptions.Experimental
        public Builder setQuicOptions(QuicOptions.Builder builder) {
            return setQuicOptions(builder.build());
        }
    }

    public void addRequestFinishedListener(RequestFinishedInfo.Listener listener) {
    }

    public void addRttListener(NetworkQualityRttListener networkQualityRttListener) {
    }

    public void addThroughputListener(NetworkQualityThroughputListener networkQualityThroughputListener) {
    }

    public void bindToNetwork(long j) {
    }

    public void configureNetworkQualityEstimatorForTesting(boolean z5, boolean z6, boolean z7) {
    }

    public abstract URLStreamHandlerFactory createURLStreamHandlerFactory();

    public int getActiveRequestCount() {
        return -1;
    }

    public int getDownstreamThroughputKbps() {
        return -1;
    }

    public int getEffectiveConnectionType() {
        return 0;
    }

    @Deprecated
    public abstract byte[] getGlobalMetricsDeltas();

    public int getHttpRttMs() {
        return -1;
    }

    public int getTransportRttMs() {
        return -1;
    }

    public abstract String getVersionString();

    public BidirectionalStream.Builder newBidirectionalStreamBuilder(String str, BidirectionalStream.Callback callback, Executor executor) {
        throw new UnsupportedOperationException("Not implemented.");
    }

    public abstract UrlRequest.Builder newUrlRequestBuilder(String str, UrlRequest.Callback callback, Executor executor);

    public abstract URLConnection openConnection(URL url);

    public void removeRequestFinishedListener(RequestFinishedInfo.Listener listener) {
    }

    public void removeRttListener(NetworkQualityRttListener networkQualityRttListener) {
    }

    public void removeThroughputListener(NetworkQualityThroughputListener networkQualityThroughputListener) {
    }

    public abstract void shutdown();

    public void startNetLogToDisk(String str, boolean z5, int i5) {
    }

    public abstract void startNetLogToFile(String str, boolean z5);

    public abstract void stopNetLog();
}
