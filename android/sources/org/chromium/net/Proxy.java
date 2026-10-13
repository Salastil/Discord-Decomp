package org.chromium.net;

import androidx.annotation.NonNull;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.List;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes.dex */
public final class Proxy {
    public static final int HTTP = 0;
    public static final int HTTPS = 1;

    @NonNull
    private final Callback mCallback;

    @NonNull
    private final String mHost;
    private final int mPort;
    private final int mScheme;

    public static abstract class Callback {
        public abstract List<Map.Entry<String, String>> onBeforeTunnelRequest();

        public abstract boolean onTunnelHeadersReceived(@NonNull List<Map.Entry<String, String>> list, int i5);
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface Scheme {
    }

    public Proxy(int i5, @NonNull String str, int i6, @NonNull Callback callback) {
        if (i5 != 0 && i5 != 1) {
            throw new IllegalArgumentException(k0.d.i(i5, "Unknown scheme "));
        }
        this.mScheme = i5;
        Objects.requireNonNull(str);
        this.mHost = str;
        this.mPort = i6;
        Objects.requireNonNull(callback);
        this.mCallback = callback;
    }

    @NonNull
    public Callback getCallback() {
        return this.mCallback;
    }

    @NonNull
    public String getHost() {
        return this.mHost;
    }

    public int getPort() {
        return this.mPort;
    }

    public int getScheme() {
        return this.mScheme;
    }
}
