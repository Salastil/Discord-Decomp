package com.google.firebase.messaging;

import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.PowerManager;
import android.util.Log;
import java.io.IOException;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class u implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final long f6268d;

    /* renamed from: e, reason: collision with root package name */
    public final PowerManager.WakeLock f6269e;

    /* renamed from: i, reason: collision with root package name */
    public final FirebaseMessaging f6270i;

    /* renamed from: v, reason: collision with root package name */
    public final ThreadPoolExecutor f6271v = new ThreadPoolExecutor(0, 1, 30, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a5.t("firebase-iid-executor", 1));

    public u(FirebaseMessaging firebaseMessaging, long j) {
        this.f6270i = firebaseMessaging;
        this.f6268d = j;
        PowerManager.WakeLock newWakeLock = ((PowerManager) firebaseMessaging.f6191b.getSystemService("power")).newWakeLock(1, "fiid-sync");
        this.f6269e = newWakeLock;
        newWakeLock.setReferenceCounted(false);
    }

    public final boolean a() {
        ConnectivityManager connectivityManager = (ConnectivityManager) this.f6270i.f6191b.getSystemService("connectivity");
        NetworkInfo activeNetworkInfo = connectivityManager != null ? connectivityManager.getActiveNetworkInfo() : null;
        return activeNetworkInfo != null && activeNetworkInfo.isConnected();
    }

    public final boolean b() {
        try {
            if (this.f6270i.a() == null) {
                Log.e("FirebaseMessaging", "Token retrieval failed: null");
                return false;
            }
            if (!Log.isLoggable("FirebaseMessaging", 3)) {
                return true;
            }
            Log.d("FirebaseMessaging", "Token successfully retrieved");
            return true;
        } catch (IOException e9) {
            String message = e9.getMessage();
            if (!"SERVICE_NOT_AVAILABLE".equals(message) && !"INTERNAL_SERVER_ERROR".equals(message) && !"InternalServerError".equals(message)) {
                if (e9.getMessage() != null) {
                    throw e9;
                }
                Log.w("FirebaseMessaging", "Token retrieval failed without exception message. Will retry token retrieval");
                return false;
            }
            Log.w("FirebaseMessaging", "Token retrieval failed: " + e9.getMessage() + ". Will retry token retrieval");
            return false;
        } catch (SecurityException unused) {
            Log.w("FirebaseMessaging", "Token retrieval failed with SecurityException. Will retry token retrieval");
            return false;
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        PowerManager.WakeLock wakeLock = this.f6269e;
        r e9 = r.e();
        FirebaseMessaging firebaseMessaging = this.f6270i;
        if (e9.i(firebaseMessaging.f6191b)) {
            wakeLock.acquire();
        }
        try {
            try {
                synchronized (firebaseMessaging) {
                    firebaseMessaging.f6198i = true;
                }
                if (!firebaseMessaging.f6197h.e()) {
                    synchronized (firebaseMessaging) {
                        firebaseMessaging.f6198i = false;
                    }
                    if (r.e().i(firebaseMessaging.f6191b)) {
                        wakeLock.release();
                        return;
                    }
                    return;
                }
                if (r.e().h(firebaseMessaging.f6191b) && !a()) {
                    c4.d dVar = new c4.d();
                    dVar.f3303b = this;
                    dVar.a();
                    if (r.e().i(firebaseMessaging.f6191b)) {
                        wakeLock.release();
                        return;
                    }
                    return;
                }
                if (b()) {
                    synchronized (firebaseMessaging) {
                        firebaseMessaging.f6198i = false;
                    }
                } else {
                    firebaseMessaging.g(this.f6268d);
                }
                if (r.e().i(firebaseMessaging.f6191b)) {
                    wakeLock.release();
                }
            } catch (IOException e10) {
                Log.e("FirebaseMessaging", "Topic sync or token retrieval failed on hard failure exceptions: " + e10.getMessage() + ". Won't retry the operation.");
                synchronized (firebaseMessaging) {
                    firebaseMessaging.f6198i = false;
                    if (r.e().i(firebaseMessaging.f6191b)) {
                        wakeLock.release();
                    }
                }
            }
        } catch (Throwable th2) {
            if (r.e().i(firebaseMessaging.f6191b)) {
                wakeLock.release();
            }
            throw th2;
        }
    }
}
