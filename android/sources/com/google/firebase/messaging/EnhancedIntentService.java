package com.google.firebase.messaging;

import a5.k0;
import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.util.Log;
import com.google.android.gms.tasks.Task;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public abstract class EnhancedIntentService extends Service {
    static final long MESSAGE_TIMEOUT_S = 20;
    private static final String TAG = "EnhancedIntentService";

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ int f6188d = 0;
    private Binder binder;
    final ExecutorService executor;
    private int lastStartId;
    private final Object lock;
    private int runningTasks;

    public EnhancedIntentService() {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(1, 1, 60L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a5.t("Firebase-Messaging-Intent-Handle", 1));
        threadPoolExecutor.allowCoreThreadTimeOut(true);
        this.executor = Executors.unconfigurableExecutorService(threadPoolExecutor);
        this.lock = new Object();
        this.runningTasks = 0;
    }

    public static Task access$000(EnhancedIntentService enhancedIntentService, Intent intent) {
        if (enhancedIntentService.handleIntentOnMainThread(intent)) {
            return k0.s(null);
        }
        jg.g gVar = new jg.g();
        enhancedIntentService.executor.execute(new androidx.fragment.app.e(enhancedIntentService, intent, gVar, 14));
        return gVar.a;
    }

    public final void a(Intent intent) {
        if (intent != null) {
            b0.a(intent);
        }
        synchronized (this.lock) {
            try {
                int i5 = this.runningTasks - 1;
                this.runningTasks = i5;
                if (i5 == 0) {
                    stopSelfResultHook(this.lastStartId);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public Intent getStartCommandIntent(Intent intent) {
        return intent;
    }

    public abstract void handleIntent(Intent intent);

    public boolean handleIntentOnMainThread(Intent intent) {
        return false;
    }

    @Override // android.app.Service
    public final synchronized IBinder onBind(Intent intent) {
        try {
            if (Log.isLoggable(TAG, 3)) {
                Log.d(TAG, "Service received bind request");
            }
            if (this.binder == null) {
                this.binder = new c0(new ve.i((Object) this));
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return this.binder;
    }

    @Override // android.app.Service
    public void onDestroy() {
        this.executor.shutdown();
        super.onDestroy();
    }

    @Override // android.app.Service
    public final int onStartCommand(Intent intent, int i5, int i6) {
        jg.l lVar;
        synchronized (this.lock) {
            this.lastStartId = i6;
            this.runningTasks++;
        }
        Intent startCommandIntent = getStartCommandIntent(intent);
        if (startCommandIntent == null) {
            a(intent);
            return 2;
        }
        if (handleIntentOnMainThread(startCommandIntent)) {
            lVar = k0.s(null);
        } else {
            jg.g gVar = new jg.g();
            this.executor.execute(new androidx.fragment.app.e(this, startCommandIntent, gVar, 14));
            lVar = gVar.a;
        }
        if (lVar.l()) {
            a(intent);
            return 2;
        }
        lVar.b(new com.discord.misc.utilities.threading.a(1), new cc.i(8, this, intent));
        return 3;
    }

    public boolean stopSelfResultHook(int i5) {
        return stopSelfResult(i5);
    }
}
