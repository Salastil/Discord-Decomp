package io.sentry.transport;

import java.net.Authenticator;
import java.net.PasswordAuthentication;

/* loaded from: classes3.dex */
public final class l extends Authenticator {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f12006b;

    public l(String str, String str2) {
        this.a = str;
        this.f12006b = str2;
    }

    @Override // java.net.Authenticator
    public final PasswordAuthentication getPasswordAuthentication() {
        if (getRequestorType() != Authenticator.RequestorType.PROXY) {
            return null;
        }
        return new PasswordAuthentication(this.a, this.f12006b.toCharArray());
    }
}
