package com.facebook.soloader;

import a5.k0;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Parcelable;
import android.util.Log;
import com.google.firebase.iid.FirebaseInstanceIdReceiver;
import java.io.File;
import java.io.IOException;
import java.lang.ref.SoftReference;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class f0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5094d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f5095e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f5096i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f5097v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f5098w;

    public /* synthetic */ f0(FirebaseInstanceIdReceiver firebaseInstanceIdReceiver, Intent intent, Context context, boolean z5, BroadcastReceiver.PendingResult pendingResult) {
        this.f5096i = intent;
        this.f5097v = context;
        this.f5095e = z5;
        this.f5098w = pendingResult;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Executor executor;
        int i5;
        switch (this.f5094d) {
            case 0:
                q qVar = (q) this.f5097v;
                boolean z5 = this.f5095e;
                File file = ((i0) this.f5098w).a;
                r.h("fb-UnpackingSoSource", "starting syncer worker");
                try {
                    if (z5) {
                        try {
                            c0.c(file);
                        } catch (Throwable th2) {
                            r.h("fb-UnpackingSoSource", "releasing dso store lock for " + file + " (from syncer thread)");
                            qVar.close();
                            throw th2;
                        }
                    }
                    i0.i((File) this.f5096i, (byte) 1, z5);
                    r.h("fb-UnpackingSoSource", "releasing dso store lock for " + file + " (from syncer thread)");
                    qVar.close();
                    return;
                } catch (IOException e9) {
                    throw new RuntimeException(e9);
                }
            default:
                Intent intent = (Intent) this.f5096i;
                Context context = (Context) this.f5097v;
                boolean z6 = this.f5095e;
                BroadcastReceiver.PendingResult pendingResult = (BroadcastReceiver.PendingResult) this.f5098w;
                try {
                    Parcelable parcelableExtra = intent.getParcelableExtra("wrapped_intent");
                    Intent intent2 = parcelableExtra instanceof Intent ? (Intent) parcelableExtra : null;
                    if (intent2 != null) {
                        i5 = FirebaseInstanceIdReceiver.a(intent2);
                    } else {
                        int i6 = 500;
                        if (intent.getExtras() != null) {
                            xe.a aVar = new xe.a(intent);
                            CountDownLatch countDownLatch = new CountDownLatch(1);
                            synchronized (FirebaseInstanceIdReceiver.class) {
                                try {
                                    SoftReference softReference = FirebaseInstanceIdReceiver.f6187b;
                                    executor = softReference != null ? (Executor) softReference.get() : null;
                                    if (executor == null) {
                                        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(1, 1, 60L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a5.t("pscm-ack-executor", 1));
                                        threadPoolExecutor.allowCoreThreadTimeOut(true);
                                        executor = Executors.unconfigurableExecutorService(threadPoolExecutor);
                                        FirebaseInstanceIdReceiver.f6187b = new SoftReference(executor);
                                    }
                                } finally {
                                }
                            }
                            executor.execute(new a5.s(context, aVar, countDownLatch, 14));
                            try {
                                i6 = ((Integer) k0.h(new com.google.firebase.messaging.h(context).b(intent))).intValue();
                            } catch (InterruptedException | ExecutionException e10) {
                                Log.e("FirebaseMessaging", "Failed to send message to service.", e10);
                            }
                            try {
                                if (!countDownLatch.await(TimeUnit.SECONDS.toMillis(1L), TimeUnit.MILLISECONDS)) {
                                    Log.w("CloudMessagingReceiver", "Message ack timed out");
                                }
                            } catch (InterruptedException e11) {
                                Log.w("CloudMessagingReceiver", "Message ack failed: ".concat(e11.toString()));
                            }
                        }
                        i5 = i6;
                    }
                    if (z6 && pendingResult != null) {
                        pendingResult.setResultCode(i5);
                    }
                    if (pendingResult != null) {
                        pendingResult.finish();
                        return;
                    }
                    return;
                } catch (Throwable th3) {
                    if (pendingResult != null) {
                        pendingResult.finish();
                    }
                    throw th3;
                }
        }
    }

    public f0(i0 i0Var, boolean z5, File file, q qVar) {
        this.f5098w = i0Var;
        this.f5095e = z5;
        this.f5096i = file;
        this.f5097v = qVar;
    }
}
