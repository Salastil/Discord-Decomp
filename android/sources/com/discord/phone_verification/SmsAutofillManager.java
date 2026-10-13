package com.discord.phone_verification;

import af.k;
import android.content.Context;
import android.content.IntentFilter;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import wf.a;
import y0.b;
import ye.d;
import ze.h;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001B#\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004¢\u0006\u0004\b\b\u0010\tJ\r\u0010\n\u001a\u00020\u0006¢\u0006\u0004\b\n\u0010\u000bJ\r\u0010\f\u001a\u00020\u0006¢\u0006\u0004\b\f\u0010\u000bJ\r\u0010\r\u001a\u00020\u0006¢\u0006\u0004\b\r\u0010\u000bR\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010\u000eR\u0014\u0010\u0010\u001a\u00020\u000f8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0010\u0010\u0011¨\u0006\u0012"}, d2 = {"Lcom/discord/phone_verification/SmsAutofillManager;", "", "Landroid/content/Context;", "context", "Lkotlin/Function1;", "", "", "onSMSRetrieved", "<init>", "(Landroid/content/Context;Lkotlin/jvm/functions/Function1;)V", "startSmsRetriever", "()V", "registerReceiver", "unregisterReceiver", "Landroid/content/Context;", "Lcom/discord/phone_verification/SmsAuthCodeBroadcastReceiver;", "broadcastReceiver", "Lcom/discord/phone_verification/SmsAuthCodeBroadcastReceiver;", "phone_verification_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SmsAutofillManager {

    @NotNull
    private final SmsAuthCodeBroadcastReceiver broadcastReceiver;

    @NotNull
    private final Context context;

    public SmsAutofillManager(@NotNull Context context, @NotNull Function1<? super String, Unit> onSMSRetrieved) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onSMSRetrieved, "onSMSRetrieved");
        this.context = context;
        this.broadcastReceiver = new SmsAuthCodeBroadcastReceiver(onSMSRetrieved);
    }

    public final void registerReceiver() {
        b.f(this.context, this.broadcastReceiver, new IntentFilter("com.google.android.gms.auth.api.phone.SMS_RETRIEVED"), null, 2);
    }

    public final void startSmsRetriever() {
        a aVar = new a(this.context, null, te.a.k, ze.b.D, h.f21206c);
        Intrinsics.checkNotNullExpressionValue(aVar, "getClient(...)");
        k f2 = k.f();
        f2.f567e = new l8.a(19, aVar);
        f2.f564b = new d[]{wf.b.a};
        f2.f566d = 1567;
        aVar.b(1, f2.e());
    }

    public final void unregisterReceiver() {
        try {
            this.context.unregisterReceiver(this.broadcastReceiver);
        } catch (Exception unused) {
        }
    }
}
