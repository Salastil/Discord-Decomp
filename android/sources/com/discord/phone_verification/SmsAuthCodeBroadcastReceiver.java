package com.discord.phone_verification;

import a3.e;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.support.v4.media.session.b;
import com.discord.logging.Log;
import com.google.android.gms.common.api.Status;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Regex;
import kotlin.text.m;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0004\u0018\u0000 \u00182\u00020\u0001:\u0001\u0018B\u001b\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00040\u0002¢\u0006\u0004\b\u0006\u0010\u0007J\u0017\u0010\t\u001a\u00020\u00032\u0006\u0010\b\u001a\u00020\u0003H\u0002¢\u0006\u0004\b\t\u0010\nJ\u0013\u0010\f\u001a\u00020\u0004*\u00020\u000bH\u0002¢\u0006\u0004\b\f\u0010\rJ\u001f\u0010\u0012\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u0010H\u0016¢\u0006\u0004\b\u0012\u0010\u0013R \u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00040\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010\u0014R\u0016\u0010\u0016\u001a\u00020\u00158\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0016\u0010\u0017¨\u0006\u0019"}, d2 = {"Lcom/discord/phone_verification/SmsAuthCodeBroadcastReceiver;", "Landroid/content/BroadcastReceiver;", "Lkotlin/Function1;", "", "", "onReceiveCallback", "<init>", "(Lkotlin/jvm/functions/Function1;)V", "message", "extractCode", "(Ljava/lang/String;)Ljava/lang/String;", "Landroid/os/Bundle;", "extractSecurityCode", "(Landroid/os/Bundle;)V", "Landroid/content/Context;", "context", "Landroid/content/Intent;", "intent", "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V", "Lkotlin/jvm/functions/Function1;", "", "handled", "Z", "Companion", "phone_verification_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSmsAuthCodeBroadcastReceiver.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SmsAuthCodeBroadcastReceiver.kt\ncom/discord/phone_verification/SmsAuthCodeBroadcastReceiver\n+ 2 _Strings.kt\nkotlin/text/StringsKt___StringsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,77:1\n434#2:78\n507#2,5:79\n1#3:84\n*S KotlinDebug\n*F\n+ 1 SmsAuthCodeBroadcastReceiver.kt\ncom/discord/phone_verification/SmsAuthCodeBroadcastReceiver\n*L\n31#1:78\n31#1:79,5\n*E\n"})
/* loaded from: classes.dex */
public final class SmsAuthCodeBroadcastReceiver extends BroadcastReceiver {

    @NotNull
    private static final String TAG = "SmsAuthCodeBroadcastReceiver";
    private boolean handled;

    @NotNull
    private final Function1<String, Unit> onReceiveCallback;

    /* JADX WARN: Multi-variable type inference failed */
    public SmsAuthCodeBroadcastReceiver(@NotNull Function1<? super String, Unit> onReceiveCallback) {
        Intrinsics.checkNotNullParameter(onReceiveCallback, "onReceiveCallback");
        this.onReceiveCallback = onReceiveCallback;
    }

    private final String extractCode(String message) {
        String str;
        String value;
        m b10 = new Regex("[\\d-]{6,11}").b(message);
        if (b10 == null || (value = b10.getValue()) == null) {
            str = null;
        } else {
            StringBuilder sb2 = new StringBuilder();
            int length = value.length();
            for (int i5 = 0; i5 < length; i5++) {
                char charAt = value.charAt(i5);
                if (Character.isDigit(charAt)) {
                    sb2.append(charAt);
                }
            }
            str = sb2.toString();
        }
        return str == null ? "" : str;
    }

    private final void extractSecurityCode(Bundle bundle) {
        String string = bundle.containsKey("com.google.android.gms.auth.api.phone.EXTRA_SMS_MESSAGE") ? bundle.getString("com.google.android.gms.auth.api.phone.EXTRA_SMS_MESSAGE") : null;
        String extractCode = string != null ? extractCode(string) : null;
        if (extractCode == null || extractCode.length() == 0) {
            Log.i$default(Log.INSTANCE, TAG, "Failed to extract code from SMS.", (Throwable) null, 4, (Object) null);
            return;
        }
        Log.i$default(Log.INSTANCE, TAG, e.k("Successfully extracted code from SMS: ", extractCode), (Throwable) null, 4, (Object) null);
        this.onReceiveCallback.invoke(extractCode);
        this.handled = true;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(@NotNull Context context, @NotNull Intent intent) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(intent, "intent");
        if (this.handled) {
            return;
        }
        Bundle extras = intent.getExtras();
        Status status = extras != null ? (Status) b.p(extras, "com.google.android.gms.auth.api.phone.EXTRA_STATUS", Status.class) : null;
        Integer valueOf = status != null ? Integer.valueOf(status.f5657d) : null;
        if (valueOf != null && valueOf.intValue() == 0) {
            Log.i$default(Log.INSTANCE, TAG, "Successfully caught SMS code.", (Throwable) null, 4, (Object) null);
            extractSecurityCode(extras);
        } else {
            if (valueOf != null && valueOf.intValue() == 15) {
                Log.i$default(Log.INSTANCE, TAG, "Timeout waiting for SMS code.", (Throwable) null, 4, (Object) null);
                return;
            }
            Log.i$default(Log.INSTANCE, TAG, "Unexpected status code while waiting for SMS code: " + (status != null ? Integer.valueOf(status.f5657d) : null), (Throwable) null, 4, (Object) null);
        }
    }
}
