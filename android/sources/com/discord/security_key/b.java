package com.discord.security_key;

import jg.c;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4370d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ WebAuthn f4371e;

    public /* synthetic */ b(WebAuthn webAuthn, int i5) {
        this.f4370d = i5;
        this.f4371e = webAuthn;
    }

    @Override // jg.c
    public final void onFailure(Exception exc) {
        switch (this.f4370d) {
            case 0:
                WebAuthn.authenticateSecurityKey$lambda$5(this.f4371e, exc);
                break;
            default:
                WebAuthn.registerSecurityKey$lambda$2(this.f4371e, exc);
                break;
        }
    }
}
