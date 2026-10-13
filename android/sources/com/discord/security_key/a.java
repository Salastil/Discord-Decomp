package com.discord.security_key;

import android.app.Activity;
import android.app.PendingIntent;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4368d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Activity f4369e;

    public /* synthetic */ a(Activity activity, int i5) {
        this.f4368d = i5;
        this.f4369e = activity;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit authenticateSecurityKey$lambda$3;
        Unit registerSecurityKey$lambda$0;
        switch (this.f4368d) {
            case 0:
                authenticateSecurityKey$lambda$3 = WebAuthn.authenticateSecurityKey$lambda$3(this.f4369e, (PendingIntent) obj);
                return authenticateSecurityKey$lambda$3;
            default:
                registerSecurityKey$lambda$0 = WebAuthn.registerSecurityKey$lambda$0(this.f4369e, (PendingIntent) obj);
                return registerSecurityKey$lambda$0;
        }
    }
}
