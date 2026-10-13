package com.google.firebase.messaging;

import a5.k0;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import com.google.android.gms.tasks.Task;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* loaded from: classes3.dex */
public final class y {

    /* renamed from: i, reason: collision with root package name */
    public static final long f6281i = TimeUnit.HOURS.toSeconds(8);
    public static final /* synthetic */ int j = 0;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final p f6282b;

    /* renamed from: c, reason: collision with root package name */
    public final androidx.appcompat.widget.w f6283c;

    /* renamed from: d, reason: collision with root package name */
    public final FirebaseMessaging f6284d;

    /* renamed from: f, reason: collision with root package name */
    public final ScheduledThreadPoolExecutor f6286f;

    /* renamed from: h, reason: collision with root package name */
    public final w f6288h;

    /* renamed from: e, reason: collision with root package name */
    public final s.e f6285e = new s.e(0);

    /* renamed from: g, reason: collision with root package name */
    public boolean f6287g = false;

    public y(FirebaseMessaging firebaseMessaging, p pVar, w wVar, androidx.appcompat.widget.w wVar2, Context context, ScheduledThreadPoolExecutor scheduledThreadPoolExecutor) {
        this.f6284d = firebaseMessaging;
        this.f6282b = pVar;
        this.f6288h = wVar;
        this.f6283c = wVar2;
        this.a = context;
        this.f6286f = scheduledThreadPoolExecutor;
    }

    public static void a(Task task) {
        try {
            TimeUnit timeUnit = TimeUnit.SECONDS;
            k0.i(task, 30L);
        } catch (InterruptedException | TimeoutException e9) {
            throw new IOException("SERVICE_NOT_AVAILABLE", e9);
        } catch (ExecutionException e10) {
            Throwable cause = e10.getCause();
            if (cause instanceof IOException) {
                throw ((IOException) cause);
            }
            if (!(cause instanceof RuntimeException)) {
                throw new IOException(e10);
            }
            throw ((RuntimeException) cause);
        }
    }

    public final void b(String str) {
        String a = this.f6284d.a();
        Bundle bundle = new Bundle();
        bundle.putString("gcm.topic", "/topics/" + str);
        androidx.appcompat.widget.w wVar = this.f6283c;
        a(wVar.r(wVar.N(a, "/topics/" + str, bundle)));
    }

    public final void c(String str) {
        String a = this.f6284d.a();
        Bundle bundle = new Bundle();
        bundle.putString("gcm.topic", "/topics/" + str);
        bundle.putString("delete", "1");
        androidx.appcompat.widget.w wVar = this.f6283c;
        a(wVar.r(wVar.N(a, "/topics/" + str, bundle)));
    }

    public final synchronized void d(boolean z5) {
        this.f6287g = z5;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0093 A[Catch: IOException -> 0x0062, TRY_LEAVE, TryCatch #2 {IOException -> 0x0062, blocks: (B:8:0x002b, B:13:0x008b, B:15:0x0093, B:61:0x003c, B:63:0x0044, B:65:0x004f, B:66:0x0065, B:68:0x006d, B:70:0x0078), top: B:7:0x002b }] */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00aa A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean e() {
        v a;
        w wVar;
        while (true) {
            synchronized (this) {
                try {
                    a = this.f6288h.a();
                    if (a == null) {
                        break;
                    }
                } finally {
                }
            }
            try {
                String str = a.f6273b;
                String str2 = a.a;
                int hashCode = str.hashCode();
                if (hashCode != 83) {
                    if (hashCode == 85 && str.equals("U")) {
                        c(str2);
                        if (Log.isLoggable("FirebaseMessaging", 3)) {
                            Log.d("FirebaseMessaging", "Unsubscribe from topic: " + str2 + " succeeded.");
                        }
                        wVar = this.f6288h;
                        synchronized (wVar) {
                            p9.c cVar = wVar.a;
                            String str3 = a.f6274c;
                            synchronized (((ArrayDeque) cVar.f16326v)) {
                                if (((ArrayDeque) cVar.f16326v).remove(str3)) {
                                    ((ScheduledThreadPoolExecutor) cVar.f16327w).execute(new s(0, cVar));
                                }
                            }
                        }
                        synchronized (this.f6285e) {
                            try {
                                String str4 = a.f6274c;
                                if (this.f6285e.containsKey(str4)) {
                                    ArrayDeque arrayDeque = (ArrayDeque) this.f6285e.get(str4);
                                    jg.g gVar = (jg.g) arrayDeque.poll();
                                    if (gVar != null) {
                                        gVar.b(null);
                                    }
                                    if (arrayDeque.isEmpty()) {
                                        this.f6285e.remove(str4);
                                    }
                                }
                            } finally {
                            }
                        }
                    }
                    if (Log.isLoggable("FirebaseMessaging", 3)) {
                        Log.d("FirebaseMessaging", "Unknown topic operation" + a + ".");
                    }
                    wVar = this.f6288h;
                    synchronized (wVar) {
                    }
                } else {
                    if (str.equals("S")) {
                        b(str2);
                        if (Log.isLoggable("FirebaseMessaging", 3)) {
                            Log.d("FirebaseMessaging", "Subscribe to topic: " + str2 + " succeeded.");
                        }
                        wVar = this.f6288h;
                        synchronized (wVar) {
                        }
                    }
                    if (Log.isLoggable("FirebaseMessaging", 3)) {
                    }
                    wVar = this.f6288h;
                    synchronized (wVar) {
                    }
                }
            } catch (IOException e9) {
                if (!"SERVICE_NOT_AVAILABLE".equals(e9.getMessage()) && !"INTERNAL_SERVER_ERROR".equals(e9.getMessage())) {
                    if (e9.getMessage() != null) {
                        throw e9;
                    }
                    Log.e("FirebaseMessaging", "Topic operation failed without exception message. Will retry Topic operation.");
                    return false;
                }
                Log.e("FirebaseMessaging", "Topic operation failed: " + e9.getMessage() + ". Will retry Topic operation.");
                return false;
            }
        }
        if (Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "topic sync succeeded");
        }
        return true;
    }

    public final void f(long j5) {
        this.f6286f.schedule(new a0(this, this.a, this.f6282b, Math.min(Math.max(30L, 2 * j5), f6281i)), j5, TimeUnit.SECONDS);
        d(true);
    }
}
