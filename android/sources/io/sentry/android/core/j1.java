package io.sentry.android.core;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.SentryLevel;
import java.nio.charset.Charset;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class j1 extends BroadcastReceiver {
    public final io.sentry.x0 a;

    /* renamed from: b, reason: collision with root package name */
    public final SentryAndroidOptions f11253b;

    /* renamed from: c, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.g f11254c = new io.sentry.android.core.internal.util.g(LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE, 0);

    /* renamed from: d, reason: collision with root package name */
    public final char[] f11255d = new char[64];

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ SystemEventsBreadcrumbsIntegration f11256e;

    public j1(SystemEventsBreadcrumbsIntegration systemEventsBreadcrumbsIntegration, io.sentry.x0 x0Var, SentryAndroidOptions sentryAndroidOptions) {
        this.f11256e = systemEventsBreadcrumbsIntegration;
        this.a = x0Var;
        this.f11253b = sentryAndroidOptions;
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x008f, code lost:
    
        r2 = r11;
     */
    @Override // android.content.BroadcastReceiver
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onReceive(Context context, Intent intent) {
        i1 i1Var;
        Bundle extras;
        int i5;
        String action = intent.getAction();
        boolean equals = "android.intent.action.BATTERY_CHANGED".equals(action);
        SentryAndroidOptions sentryAndroidOptions = this.f11253b;
        String str = null;
        if (!equals) {
            i1Var = null;
        } else {
            if (this.f11254c.a()) {
                return;
            }
            Float b10 = o0.b(intent, sentryAndroidOptions);
            i1Var = new i1(b10 != null ? Integer.valueOf(b10.intValue()) : null, o0.d(intent, sentryAndroidOptions));
            SystemEventsBreadcrumbsIntegration systemEventsBreadcrumbsIntegration = this.f11256e;
            if (i1Var.equals(systemEventsBreadcrumbsIntegration.I)) {
                return;
            } else {
                systemEventsBreadcrumbsIntegration.I = i1Var;
            }
        }
        Breadcrumb breadcrumb = new Breadcrumb(System.currentTimeMillis());
        breadcrumb.f10976w = "system";
        breadcrumb.f10978y = "device.event";
        if (action != null) {
            int length = action.length();
            char[] cArr = this.f11255d;
            int length2 = cArr.length;
            int i6 = length - 1;
            while (true) {
                if (i6 < 0) {
                    break;
                }
                char charAt = action.charAt(i6);
                if (charAt == '.') {
                    str = new String(cArr, length2, cArr.length - length2);
                    break;
                }
                if (length2 == 0) {
                    Charset charset = io.sentry.util.l.a;
                    int lastIndexOf = action.lastIndexOf(".");
                    if (lastIndexOf >= 0 && action.length() > (i5 = lastIndexOf + 1)) {
                        str = action.substring(i5);
                    }
                } else {
                    length2--;
                    cArr[length2] = charAt;
                    i6--;
                }
            }
        }
        if (str != null) {
            breadcrumb.c(str, "action");
        }
        if (i1Var != null) {
            Integer num = i1Var.a;
            if (num != null) {
                breadcrumb.c(num, "level");
            }
            Boolean bool = i1Var.f11168b;
            if (bool != null) {
                breadcrumb.c(bool, "charging");
            }
        } else if (sentryAndroidOptions.isEnableSystemEventBreadcrumbsExtras() && (extras = intent.getExtras()) != null && !extras.isEmpty()) {
            HashMap hashMap = new HashMap(extras.size());
            for (String str2 : extras.keySet()) {
                try {
                    Object obj = extras.get(str2);
                    if (obj != null) {
                        hashMap.put(str2, obj.toString());
                    }
                } catch (Throwable th2) {
                    sentryAndroidOptions.getLogger().i(SentryLevel.ERROR, th2, "%s key of the %s action threw an error.", str2, action);
                }
            }
            breadcrumb.c(hashMap, "extras");
        }
        breadcrumb.F = SentryLevel.INFO;
        Hint hint = new Hint();
        hint.d(intent, "android:intent");
        this.a.g(breadcrumb, hint);
    }
}
