package com.google.firebase.messaging;

import a5.k0;
import android.content.Context;
import android.content.Intent;
import android.util.Base64;
import android.util.Log;
import androidx.core.app.NotificationCompat$Builder;
import com.google.android.gms.tasks.Task;
import java.util.concurrent.ExecutorService;

/* loaded from: classes3.dex */
public final class h {

    /* renamed from: c, reason: collision with root package name */
    public static final Object f6238c = new Object();

    /* renamed from: d, reason: collision with root package name */
    public static e0 f6239d;
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f6240b;

    public h(ExecutorService executorService) {
        this.f6240b = new s.e(0);
        this.a = executorService;
    }

    public static Task a(Context context, Intent intent, boolean z5) {
        e0 e0Var;
        if (Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Binding to service");
        }
        synchronized (f6238c) {
            try {
                if (f6239d == null) {
                    f6239d = new e0(context);
                }
                e0Var = f6239d;
            } finally {
            }
        }
        if (!z5) {
            return e0Var.b(intent).f(new com.discord.misc.utilities.threading.a(1), new com.facebook.imageutils.a(29));
        }
        if (r.e().i(context)) {
            synchronized (b0.f6222b) {
                try {
                    if (b0.f6223c == null) {
                        ig.a aVar = new ig.a(context, "wake:com.google.firebase.iid.WakeLockHolder");
                        b0.f6223c = aVar;
                        synchronized (aVar.a) {
                            aVar.f10788g = true;
                        }
                    }
                    boolean booleanExtra = intent.getBooleanExtra("com.google.firebase.iid.WakeLockHolder.wakefulintent", false);
                    intent.putExtra("com.google.firebase.iid.WakeLockHolder.wakefulintent", true);
                    if (!booleanExtra) {
                        b0.f6223c.a(b0.a);
                    }
                    e0Var.b(intent).addOnCompleteListener(new app.rive.runtime.kotlin.core.a(18, intent));
                } finally {
                }
            }
        } else {
            e0Var.b(intent);
        }
        return k0.s(-1);
    }

    public Task b(Intent intent) {
        String stringExtra = intent.getStringExtra("gcm.rawData64");
        if (stringExtra != null) {
            intent.putExtra("rawData", Base64.decode(stringExtra, 0));
            intent.removeExtra("gcm.rawData64");
        }
        Context context = (Context) this.a;
        com.discord.misc.utilities.threading.a aVar = (com.discord.misc.utilities.threading.a) this.f6240b;
        boolean z5 = gf.c.c() && context.getApplicationInfo().targetSdkVersion >= 26;
        boolean z6 = (intent.getFlags() & 268435456) != 0;
        return (!z5 || z6) ? k0.l(new com.facebook.react.runtime.o(1, context, intent), aVar).g(aVar, new g(context, intent, z6)) : a(context, intent, z6);
    }

    public h(Context context) {
        this.a = context;
        this.f6240b = new com.discord.misc.utilities.threading.a(1);
    }

    public h(NotificationCompat$Builder notificationCompat$Builder, String str) {
        this.a = notificationCompat$Builder;
        this.f6240b = str;
    }
}
