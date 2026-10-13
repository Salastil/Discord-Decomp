package com.google.firebase.messaging;

import a5.k0;
import android.app.Application;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import androidx.annotation.Keep;
import androidx.annotation.NonNull;
import com.google.android.gms.cloudmessaging.Rpc;
import com.google.android.gms.tasks.Task;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public class FirebaseMessaging {
    public static ha.l k;

    /* renamed from: m, reason: collision with root package name */
    public static ScheduledThreadPoolExecutor f6190m;
    public final ki.g a;

    /* renamed from: b, reason: collision with root package name */
    public final Context f6191b;

    /* renamed from: c, reason: collision with root package name */
    public final androidx.appcompat.widget.w f6192c;

    /* renamed from: d, reason: collision with root package name */
    public final h f6193d;

    /* renamed from: e, reason: collision with root package name */
    public final a3.f f6194e;

    /* renamed from: f, reason: collision with root package name */
    public final ScheduledThreadPoolExecutor f6195f;

    /* renamed from: g, reason: collision with root package name */
    public final ThreadPoolExecutor f6196g;

    /* renamed from: h, reason: collision with root package name */
    public final p f6197h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f6198i;
    public static final long j = TimeUnit.HOURS.toSeconds(8);

    /* renamed from: l, reason: collision with root package name */
    public static yi.a f6189l = new j(0);

    public FirebaseMessaging(ki.g gVar, yi.a aVar, yi.a aVar2, zi.d dVar, yi.a aVar3, vi.b bVar) {
        gVar.a();
        Context context = gVar.a;
        final p pVar = new p();
        final int i5 = 0;
        pVar.f6252b = 0;
        pVar.f6253c = context;
        gVar.a();
        Rpc rpc = new Rpc(gVar.a);
        final androidx.appcompat.widget.w wVar = new androidx.appcompat.widget.w();
        wVar.f1141d = gVar;
        wVar.f1142e = pVar;
        wVar.f1143i = rpc;
        wVar.f1144v = aVar;
        wVar.f1145w = aVar2;
        wVar.f1146x = dVar;
        final int i6 = 1;
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor(new a5.t("Firebase-Messaging-Task", 1));
        ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = new ScheduledThreadPoolExecutor(1, new a5.t("Firebase-Messaging-Init", 1));
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(0, 1, 30L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a5.t("Firebase-Messaging-File-Io", 1));
        this.f6198i = false;
        f6189l = aVar3;
        this.a = gVar;
        a3.f fVar = new a3.f();
        fVar.f58d = this;
        fVar.f56b = bVar;
        this.f6194e = fVar;
        gVar.a();
        final Context context2 = gVar.a;
        this.f6191b = context2;
        i iVar = new i();
        this.f6197h = pVar;
        this.f6192c = wVar;
        this.f6193d = new h(newSingleThreadExecutor);
        this.f6195f = scheduledThreadPoolExecutor;
        this.f6196g = threadPoolExecutor;
        gVar.a();
        if (context instanceof Application) {
            ((Application) context).registerActivityLifecycleCallbacks(iVar);
        } else {
            Log.w("FirebaseMessaging", "Context " + context + " was not an application, can't register for lifecycle callbacks. Some notification events may be dropped as a result.");
        }
        scheduledThreadPoolExecutor.execute(new Runnable(this) { // from class: com.google.firebase.messaging.k

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ FirebaseMessaging f6243e;

            {
                this.f6243e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                jg.l r5;
                int i10;
                switch (i5) {
                    case 0:
                        FirebaseMessaging firebaseMessaging = this.f6243e;
                        if (firebaseMessaging.f6194e.m() && firebaseMessaging.h(firebaseMessaging.d())) {
                            synchronized (firebaseMessaging) {
                                if (!firebaseMessaging.f6198i) {
                                    firebaseMessaging.g(0L);
                                }
                            }
                            return;
                        }
                        return;
                    default:
                        FirebaseMessaging firebaseMessaging2 = this.f6243e;
                        Context context3 = firebaseMessaging2.f6191b;
                        ah.d.e(context3);
                        androidx.appcompat.widget.w wVar2 = firebaseMessaging2.f6192c;
                        boolean f2 = firebaseMessaging2.f();
                        if (Build.VERSION.SDK_INT >= 29) {
                            SharedPreferences D = com.facebook.imagepipeline.nativecode.c.D(context3);
                            if (!D.contains("proxy_retention") || D.getBoolean("proxy_retention", false) != f2) {
                                Rpc rpc2 = (Rpc) wVar2.f1143i;
                                if (rpc2.f5645c.h() >= 241100000) {
                                    Bundle bundle = new Bundle();
                                    bundle.putBoolean("proxy_retention", f2);
                                    xe.k b10 = xe.k.b(rpc2.f5644b);
                                    synchronized (b10) {
                                        i10 = b10.a;
                                        b10.a = i10 + 1;
                                    }
                                    r5 = b10.c(new xe.j(i10, 4, bundle, 0));
                                } else {
                                    r5 = k0.r(new IOException("SERVICE_NOT_AVAILABLE"));
                                }
                                r5.d(new com.discord.misc.utilities.threading.a(1), new ic.d(context3, f2, 4));
                            }
                        }
                        if (firebaseMessaging2.f()) {
                            firebaseMessaging2.e();
                            return;
                        }
                        return;
                }
            }
        });
        final ScheduledThreadPoolExecutor scheduledThreadPoolExecutor2 = new ScheduledThreadPoolExecutor(1, new a5.t("Firebase-Messaging-Topics-Io", 1));
        int i10 = y.j;
        k0.l(new Callable() { // from class: com.google.firebase.messaging.x
            @Override // java.util.concurrent.Callable
            public final Object call() {
                w wVar2;
                Context context3 = context2;
                ScheduledThreadPoolExecutor scheduledThreadPoolExecutor3 = scheduledThreadPoolExecutor2;
                FirebaseMessaging firebaseMessaging = this;
                p pVar2 = pVar;
                androidx.appcompat.widget.w wVar3 = wVar;
                synchronized (w.class) {
                    try {
                        WeakReference weakReference = w.f6275b;
                        wVar2 = weakReference != null ? (w) weakReference.get() : null;
                        if (wVar2 == null) {
                            SharedPreferences sharedPreferences = context3.getSharedPreferences("com.google.android.gms.appid", 0);
                            w wVar4 = new w();
                            synchronized (wVar4) {
                                wVar4.a = p9.c.b(sharedPreferences, scheduledThreadPoolExecutor3);
                            }
                            w.f6275b = new WeakReference(wVar4);
                            wVar2 = wVar4;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return new y(firebaseMessaging, pVar2, wVar2, wVar3, context3, scheduledThreadPoolExecutor3);
            }
        }, scheduledThreadPoolExecutor2).d(scheduledThreadPoolExecutor, new l(this, i5));
        scheduledThreadPoolExecutor.execute(new Runnable(this) { // from class: com.google.firebase.messaging.k

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ FirebaseMessaging f6243e;

            {
                this.f6243e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                jg.l r5;
                int i102;
                switch (i6) {
                    case 0:
                        FirebaseMessaging firebaseMessaging = this.f6243e;
                        if (firebaseMessaging.f6194e.m() && firebaseMessaging.h(firebaseMessaging.d())) {
                            synchronized (firebaseMessaging) {
                                if (!firebaseMessaging.f6198i) {
                                    firebaseMessaging.g(0L);
                                }
                            }
                            return;
                        }
                        return;
                    default:
                        FirebaseMessaging firebaseMessaging2 = this.f6243e;
                        Context context3 = firebaseMessaging2.f6191b;
                        ah.d.e(context3);
                        androidx.appcompat.widget.w wVar2 = firebaseMessaging2.f6192c;
                        boolean f2 = firebaseMessaging2.f();
                        if (Build.VERSION.SDK_INT >= 29) {
                            SharedPreferences D = com.facebook.imagepipeline.nativecode.c.D(context3);
                            if (!D.contains("proxy_retention") || D.getBoolean("proxy_retention", false) != f2) {
                                Rpc rpc2 = (Rpc) wVar2.f1143i;
                                if (rpc2.f5645c.h() >= 241100000) {
                                    Bundle bundle = new Bundle();
                                    bundle.putBoolean("proxy_retention", f2);
                                    xe.k b10 = xe.k.b(rpc2.f5644b);
                                    synchronized (b10) {
                                        i102 = b10.a;
                                        b10.a = i102 + 1;
                                    }
                                    r5 = b10.c(new xe.j(i102, 4, bundle, 0));
                                } else {
                                    r5 = k0.r(new IOException("SERVICE_NOT_AVAILABLE"));
                                }
                                r5.d(new com.discord.misc.utilities.threading.a(1), new ic.d(context3, f2, 4));
                            }
                        }
                        if (firebaseMessaging2.f()) {
                            firebaseMessaging2.e();
                            return;
                        }
                        return;
                }
            }
        });
    }

    public static void b(Runnable runnable, long j5) {
        synchronized (FirebaseMessaging.class) {
            try {
                if (f6190m == null) {
                    f6190m = new ScheduledThreadPoolExecutor(1, new a5.t("TAG", 1));
                }
                f6190m.schedule(runnable, j5, TimeUnit.SECONDS);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static synchronized ha.l c(Context context) {
        ha.l lVar;
        synchronized (FirebaseMessaging.class) {
            try {
                if (k == null) {
                    k = new ha.l(context);
                }
                lVar = k;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return lVar;
    }

    @NonNull
    @Keep
    public static synchronized FirebaseMessaging getInstance(@NonNull ki.g gVar) {
        FirebaseMessaging firebaseMessaging;
        synchronized (FirebaseMessaging.class) {
            gVar.a();
            firebaseMessaging = (FirebaseMessaging) gVar.f13384d.b(FirebaseMessaging.class);
            bf.t.h(firebaseMessaging, "Firebase Messaging component is not present");
        }
        return firebaseMessaging;
    }

    public final String a() {
        Task task;
        t d6 = d();
        if (!h(d6)) {
            return d6.a;
        }
        String c6 = p.c(this.a);
        h hVar = this.f6193d;
        synchronized (hVar) {
            task = (Task) ((s.e) hVar.f6240b).get(c6);
            if (task == null) {
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    Log.d("FirebaseMessaging", "Making new request for: " + c6);
                }
                androidx.appcompat.widget.w wVar = this.f6192c;
                task = wVar.r(wVar.N(p.c((ki.g) wVar.f1141d), "*", new Bundle())).n(this.f6196g, new bc.a(this, c6, d6, 3)).g((Executor) hVar.a, new cc.i(9, hVar, c6));
                ((s.e) hVar.f6240b).put(c6, task);
            } else if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "Joining ongoing request for: " + c6);
            }
        }
        try {
            return (String) k0.h(task);
        } catch (InterruptedException | ExecutionException e9) {
            throw new IOException(e9);
        }
    }

    public final t d() {
        t b10;
        ha.l c6 = c(this.f6191b);
        ki.g gVar = this.a;
        gVar.a();
        String c8 = "[DEFAULT]".equals(gVar.f13382b) ? "" : gVar.c();
        String c10 = p.c(this.a);
        synchronized (c6) {
            b10 = t.b(((SharedPreferences) c6.f9613d).getString(c8 + "|T|" + c10 + "|*", null));
        }
        return b10;
    }

    public final void e() {
        Task r5;
        int i5;
        Rpc rpc = (Rpc) this.f6192c.f1143i;
        if (rpc.f5645c.h() >= 241100000) {
            xe.k b10 = xe.k.b(rpc.f5644b);
            Bundle bundle = Bundle.EMPTY;
            synchronized (b10) {
                i5 = b10.a;
                b10.a = i5 + 1;
            }
            r5 = b10.c(new xe.j(i5, 5, bundle, 1)).f(xe.g.f20405i, xe.c.f20400i);
        } else {
            r5 = k0.r(new IOException("SERVICE_NOT_AVAILABLE"));
        }
        r5.d(this.f6195f, new l(this, 1));
    }

    public final boolean f() {
        Context context = this.f6191b;
        ah.d.e(context);
        if (!ah.d.g(context)) {
            return false;
        }
        ki.g gVar = this.a;
        gVar.a();
        if (gVar.f13384d.b(li.a.class) != null) {
            return true;
        }
        return com.facebook.imagepipeline.nativecode.b.l() && f6189l != null;
    }

    public final synchronized void g(long j5) {
        b(new u(this, Math.min(Math.max(30L, 2 * j5), j)), j5);
        this.f6198i = true;
    }

    public final boolean h(t tVar) {
        if (tVar != null) {
            return System.currentTimeMillis() > tVar.f6267c + t.f6265d || !this.f6197h.b().equals(tVar.f6266b);
        }
        return true;
    }
}
