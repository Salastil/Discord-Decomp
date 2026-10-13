package io.sentry;

import java.net.URI;

/* loaded from: classes3.dex */
public final class y {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f12088b;

    /* renamed from: c, reason: collision with root package name */
    public final URI f12089c;

    public y(String str) {
        try {
            d9.a.L(str, "The DSN is required.");
            URI normalize = new URI(str).normalize();
            String scheme = normalize.getScheme();
            if (!"http".equalsIgnoreCase(scheme) && !"https".equalsIgnoreCase(scheme)) {
                throw new IllegalArgumentException("Invalid DSN scheme: " + scheme);
            }
            String userInfo = normalize.getUserInfo();
            if (userInfo == null || userInfo.isEmpty()) {
                throw new IllegalArgumentException("Invalid DSN: No public key provided.");
            }
            String[] split = userInfo.split(":", -1);
            String str2 = split[0];
            this.f12088b = str2;
            if (str2 == null || str2.isEmpty()) {
                throw new IllegalArgumentException("Invalid DSN: No public key provided.");
            }
            this.a = split.length > 1 ? split[1] : null;
            String path = normalize.getPath();
            path = path.endsWith("/") ? path.substring(0, path.length() - 1) : path;
            int lastIndexOf = path.lastIndexOf("/") + 1;
            String substring = path.substring(0, lastIndexOf);
            substring = substring.endsWith("/") ? substring : substring.concat("/");
            String substring2 = path.substring(lastIndexOf);
            if (substring2.isEmpty()) {
                throw new IllegalArgumentException("Invalid DSN: A Project Id is required.");
            }
            this.f12089c = new URI(scheme, null, normalize.getHost(), normalize.getPort(), substring + "api/" + substring2, null, null);
        } catch (Throwable th2) {
            throw new IllegalArgumentException(th2);
        }
    }
}
