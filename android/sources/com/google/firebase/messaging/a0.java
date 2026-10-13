package com.google.firebase.messaging;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.PowerManager;
import android.util.Log;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class a0 implements Runnable {
    public static Boolean E;

    /* renamed from: x, reason: collision with root package name */
    public static final Object f6214x = new Object();

    /* renamed from: y, reason: collision with root package name */
    public static Boolean f6215y;

    /* renamed from: d, reason: collision with root package name */
    public final Context f6216d;

    /* renamed from: e, reason: collision with root package name */
    public final p f6217e;

    /* renamed from: i, reason: collision with root package name */
    public final PowerManager.WakeLock f6218i;

    /* renamed from: v, reason: collision with root package name */
    public final y f6219v;

    /* renamed from: w, reason: collision with root package name */
    public final long f6220w;

    public a0(y yVar, Context context, p pVar, long j) {
        this.f6219v = yVar;
        this.f6216d = context;
        this.f6220w = j;
        this.f6217e = pVar;
        this.f6218i = ((PowerManager) context.getSystemService("power")).newWakeLock(1, "wake:com.google.firebase.messaging");
    }

    public static boolean a(Context context) {
        boolean booleanValue;
        synchronized (f6214x) {
            try {
                Boolean bool = E;
                Boolean valueOf = Boolean.valueOf(bool == null ? b(context, "android.permission.ACCESS_NETWORK_STATE", bool) : bool.booleanValue());
                E = valueOf;
                booleanValue = valueOf.booleanValue();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return booleanValue;
    }

    public static boolean b(Context context, String str, Boolean bool) {
        if (bool != null) {
            return bool.booleanValue();
        }
        boolean z5 = context.checkCallingOrSelfPermission(str) == 0;
        if (!z5 && Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Missing Permission: " + str + ". This permission should normally be included by the manifest merger, but may needed to be manually added to your manifest");
        }
        return z5;
    }

    public static boolean c(Context context) {
        boolean booleanValue;
        synchronized (f6214x) {
            try {
                Boolean bool = f6215y;
                Boolean valueOf = Boolean.valueOf(bool == null ? b(context, "android.permission.WAKE_LOCK", bool) : bool.booleanValue());
                f6215y = valueOf;
                booleanValue = valueOf.booleanValue();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return booleanValue;
    }

    public final synchronized boolean d() {
        boolean z5;
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) this.f6216d.getSystemService("connectivity");
            NetworkInfo activeNetworkInfo = connectivityManager != null ? connectivityManager.getActiveNetworkInfo() : null;
            if (activeNetworkInfo != null) {
                z5 = activeNetworkInfo.isConnected();
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return z5;
    }

    /* JADX WARN: Finally extract failed */
    @Override // java.lang.Runnable
    public final void run() {
        y yVar = this.f6219v;
        Context context = this.f6216d;
        boolean c6 = c(context);
        PowerManager.WakeLock wakeLock = this.f6218i;
        if (c6) {
            wakeLock.acquire(f.a);
        }
        try {
            try {
                try {
                    yVar.d(true);
                    if (!this.f6217e.e()) {
                        yVar.d(false);
                        if (c(context)) {
                            try {
                                wakeLock.release();
                                return;
                            } catch (RuntimeException unused) {
                                Log.i("FirebaseMessaging", "TopicsSyncTask's wakelock was already released due to timeout.");
                                return;
                            }
                        }
                        return;
                    }
                    if (!a(context) || d()) {
                        if (yVar.e()) {
                            yVar.d(false);
                        } else {
                            yVar.f(this.f6220w);
                        }
                        if (c(context)) {
                            wakeLock.release();
                            return;
                        }
                        return;
                    }
                    new z(this, this).a();
                    if (c(context)) {
                        try {
                            wakeLock.release();
                        } catch (RuntimeException unused2) {
                            Log.i("FirebaseMessaging", "TopicsSyncTask's wakelock was already released due to timeout.");
                        }
                    }
                } catch (IOException e9) {
                    Log.e("FirebaseMessaging", "Failed to sync topics. Won't retry sync. " + e9.getMessage());
                    yVar.d(false);
                    if (c(context)) {
                        wakeLock.release();
                    }
                }
            } catch (RuntimeException unused3) {
                Log.i("FirebaseMessaging", "TopicsSyncTask's wakelock was already released due to timeout.");
            }
        } catch (Throwable th2) {
            if (c(context)) {
                try {
                    wakeLock.release();
                } catch (RuntimeException unused4) {
                    Log.i("FirebaseMessaging", "TopicsSyncTask's wakelock was already released due to timeout.");
                }
            }
            throw th2;
        }
    }
}
