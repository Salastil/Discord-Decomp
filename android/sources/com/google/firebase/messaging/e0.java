package com.google.firebase.messaging;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import java.util.ArrayDeque;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class e0 implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final Context f6229d;

    /* renamed from: e, reason: collision with root package name */
    public final Intent f6230e;

    /* renamed from: i, reason: collision with root package name */
    public final ScheduledThreadPoolExecutor f6231i;

    /* renamed from: v, reason: collision with root package name */
    public final ArrayDeque f6232v;

    /* renamed from: w, reason: collision with root package name */
    public c0 f6233w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f6234x;

    public e0(Context context) {
        ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = new ScheduledThreadPoolExecutor(0, new a5.t("Firebase-FirebaseInstanceIdServiceConnection", 1));
        this.f6232v = new ArrayDeque();
        this.f6234x = false;
        Context applicationContext = context.getApplicationContext();
        this.f6229d = applicationContext;
        this.f6230e = new Intent("com.google.firebase.MESSAGING_EVENT").setPackage(applicationContext.getPackageName());
        this.f6231i = scheduledThreadPoolExecutor;
    }

    public final synchronized void a() {
        try {
            if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "flush queue called");
            }
            while (!this.f6232v.isEmpty()) {
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    Log.d("FirebaseMessaging", "found intent to be delivered");
                }
                c0 c0Var = this.f6233w;
                if (c0Var == null || !c0Var.isBinderAlive()) {
                    c();
                    return;
                }
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    Log.d("FirebaseMessaging", "binder is alive, sending the intent.");
                }
                this.f6233w.a((d0) this.f6232v.poll());
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized jg.l b(Intent intent) {
        d0 d0Var;
        try {
            if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "new intent queued in the bind-strategy delivery");
            }
            d0Var = new d0(intent);
            ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = this.f6231i;
            d0Var.f6228b.a.b(scheduledThreadPoolExecutor, new app.rive.runtime.kotlin.core.a(20, scheduledThreadPoolExecutor.schedule(new s(1, d0Var), 20L, TimeUnit.SECONDS)));
            this.f6232v.add(d0Var);
            a();
        } catch (Throwable th2) {
            throw th2;
        }
        return d0Var.f6228b.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x005b A[LOOP:0: B:20:0x0053->B:22:0x005b, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0068 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c() {
        e0 e0Var;
        ArrayDeque arrayDeque;
        ff.a a;
        Context context;
        if (Log.isLoggable("FirebaseMessaging", 3)) {
            StringBuilder sb2 = new StringBuilder("binder is dead. start connection? ");
            sb2.append(!this.f6234x);
            Log.d("FirebaseMessaging", sb2.toString());
        }
        if (this.f6234x) {
            return;
        }
        this.f6234x = true;
        try {
            a = ff.a.a();
            context = this.f6229d;
            e0Var = this;
            try {
            } catch (SecurityException e9) {
                e = e9;
                Log.e("FirebaseMessaging", "Exception while binding the service", e);
                e0Var.f6234x = false;
                while (true) {
                    arrayDeque = e0Var.f6232v;
                    if (!arrayDeque.isEmpty()) {
                    }
                    ((d0) arrayDeque.poll()).f6228b.d(null);
                }
            }
        } catch (SecurityException e10) {
            e = e10;
            e0Var = this;
        }
        if (a.c(context, context.getClass().getName(), this.f6230e, e0Var, 65, null)) {
            return;
        }
        Log.e("FirebaseMessaging", "binding to the service failed");
        e0Var.f6234x = false;
        while (true) {
            arrayDeque = e0Var.f6232v;
            if (!arrayDeque.isEmpty()) {
                return;
            } else {
                ((d0) arrayDeque.poll()).f6228b.d(null);
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final synchronized void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        try {
            if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "onServiceConnected: " + componentName);
            }
            this.f6234x = false;
            if (iBinder instanceof c0) {
                this.f6233w = (c0) iBinder;
                a();
                return;
            }
            Log.e("FirebaseMessaging", "Invalid service connection: " + iBinder);
            ArrayDeque arrayDeque = this.f6232v;
            while (!arrayDeque.isEmpty()) {
                ((d0) arrayDeque.poll()).f6228b.d(null);
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        if (Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "onServiceDisconnected: " + componentName);
        }
        a();
    }
}
