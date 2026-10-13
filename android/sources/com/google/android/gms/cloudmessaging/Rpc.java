package com.google.android.gms.cloudmessaging;

import a5.g;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.util.Log;
import androidx.collection.SimpleArrayMap;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import jg.l;
import k2.r;
import xe.d;
import xe.f;
import yf.a;

/* loaded from: classes3.dex */
public final class Rpc {

    /* renamed from: h, reason: collision with root package name */
    public static int f5642h;

    /* renamed from: i, reason: collision with root package name */
    public static PendingIntent f5643i;
    public static final Pattern j = Pattern.compile("\\|ID\\|([^|]+)\\|:?+(.*)");
    public final SimpleArrayMap a = new SimpleArrayMap(0);

    /* renamed from: b, reason: collision with root package name */
    public final Context f5644b;

    /* renamed from: c, reason: collision with root package name */
    public final g f5645c;

    /* renamed from: d, reason: collision with root package name */
    public final ScheduledThreadPoolExecutor f5646d;

    /* renamed from: e, reason: collision with root package name */
    public final Messenger f5647e;

    /* renamed from: f, reason: collision with root package name */
    public Messenger f5648f;

    /* renamed from: g, reason: collision with root package name */
    public f f5649g;

    public Rpc(Context context) {
        this.f5644b = context;
        g gVar = new g();
        gVar.f156e = 0;
        gVar.f157i = context;
        this.f5645c = gVar;
        this.f5647e = new Messenger(new d(this, Looper.getMainLooper()));
        ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = new ScheduledThreadPoolExecutor(1);
        scheduledThreadPoolExecutor.setKeepAliveTime(60L, TimeUnit.SECONDS);
        scheduledThreadPoolExecutor.allowCoreThreadTimeOut(true);
        this.f5646d = scheduledThreadPoolExecutor;
    }

    public final l a(Bundle bundle) {
        String num;
        synchronized (Rpc.class) {
            int i5 = f5642h;
            f5642h = i5 + 1;
            num = Integer.toString(i5);
        }
        jg.g gVar = new jg.g();
        synchronized (this.a) {
            this.a.put(num, gVar);
        }
        Intent intent = new Intent();
        intent.setPackage("com.google.android.gms");
        if (this.f5645c.i() == 2) {
            intent.setAction("com.google.iid.TOKEN_REQUEST");
        } else {
            intent.setAction("com.google.android.c2dm.intent.REGISTER");
        }
        intent.putExtras(bundle);
        Context context = this.f5644b;
        synchronized (Rpc.class) {
            try {
                if (f5643i == null) {
                    Intent intent2 = new Intent();
                    intent2.setPackage("com.google.example.invalidpackage");
                    f5643i = PendingIntent.getBroadcast(context, 0, intent2, a.a);
                }
                intent.putExtra("app", f5643i);
            } finally {
            }
        }
        intent.putExtra("kid", "|ID|" + num + "|");
        if (Log.isLoggable("Rpc", 3)) {
            Log.d("Rpc", "Sending ".concat(String.valueOf(intent.getExtras())));
        }
        intent.putExtra("google.messenger", this.f5647e);
        if (this.f5648f != null || this.f5649g != null) {
            Message obtain = Message.obtain();
            obtain.obj = intent;
            try {
                Messenger messenger = this.f5648f;
                if (messenger != null) {
                    messenger.send(obtain);
                } else {
                    Messenger messenger2 = this.f5649g.f20403d;
                    messenger2.getClass();
                    messenger2.send(obtain);
                }
            } catch (RemoteException unused) {
                if (Log.isLoggable("Rpc", 3)) {
                    Log.d("Rpc", "Messenger failed, fallback to startService");
                }
            }
            gVar.a.b(xe.g.f20405i, new r(this, num, this.f5646d.schedule(new sg.d(4, gVar), 30L, TimeUnit.SECONDS), 28));
            return gVar.a;
        }
        if (this.f5645c.i() == 2) {
            this.f5644b.sendBroadcast(intent);
        } else {
            this.f5644b.startService(intent);
        }
        gVar.a.b(xe.g.f20405i, new r(this, num, this.f5646d.schedule(new sg.d(4, gVar), 30L, TimeUnit.SECONDS), 28));
        return gVar.a;
    }

    public final void b(String str, Bundle bundle) {
        synchronized (this.a) {
            try {
                jg.g gVar = (jg.g) this.a.remove(str);
                if (gVar != null) {
                    gVar.b(bundle);
                    return;
                }
                Log.w("Rpc", "Missing callback for " + str);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
