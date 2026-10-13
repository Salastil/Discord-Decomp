package com.google.firebase.messaging;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public abstract class b0 {
    public static final long a = TimeUnit.MINUTES.toMillis(1);

    /* renamed from: b, reason: collision with root package name */
    public static final Object f6222b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static ig.a f6223c;

    public static void a(Intent intent) {
        synchronized (f6222b) {
            try {
                if (f6223c != null && intent.getBooleanExtra("com.google.firebase.iid.WakeLockHolder.wakefulintent", false)) {
                    intent.putExtra("com.google.firebase.iid.WakeLockHolder.wakefulintent", false);
                    f6223c.c();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static ComponentName b(Context context, Intent intent) {
        synchronized (f6222b) {
            try {
                if (f6223c == null) {
                    ig.a aVar = new ig.a(context, "wake:com.google.firebase.iid.WakeLockHolder");
                    f6223c = aVar;
                    synchronized (aVar.a) {
                        aVar.f10788g = true;
                    }
                }
                boolean booleanExtra = intent.getBooleanExtra("com.google.firebase.iid.WakeLockHolder.wakefulintent", false);
                intent.putExtra("com.google.firebase.iid.WakeLockHolder.wakefulintent", true);
                ComponentName startService = context.startService(intent);
                if (startService == null) {
                    return null;
                }
                if (!booleanExtra) {
                    f6223c.a(a);
                }
                return startService;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
