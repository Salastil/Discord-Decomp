package com.google.firebase.messaging;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.util.Log;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class z extends BroadcastReceiver {
    public a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ a0 f6289b;

    public z(a0 a0Var, a0 a0Var2) {
        this.f6289b = a0Var;
        this.a = a0Var2;
    }

    public final void a() {
        if (Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Connectivity change received registered");
        }
        this.f6289b.f6216d.registerReceiver(this, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
    }

    @Override // android.content.BroadcastReceiver
    public final synchronized void onReceive(Context context, Intent intent) {
        try {
            a0 a0Var = this.a;
            if (a0Var == null) {
                return;
            }
            if (a0Var.d()) {
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    Log.d("FirebaseMessaging", "Connectivity changed. Starting background sync.");
                }
                a0 a0Var2 = this.a;
                a0Var2.f6219v.f6286f.schedule(a0Var2, 0L, TimeUnit.SECONDS);
                context.unregisterReceiver(this);
                this.a = null;
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }
}
