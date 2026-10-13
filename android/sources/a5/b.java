package a5;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingFlowParams;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.ProxyBillingActivity;
import com.android.billingclient.api.QueryProductDetailsParams;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.discord.billing.BillingManager$getUserCountry$1;
import com.google.android.gms.internal.play_billing.a2;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.d4;
import com.google.android.gms.internal.play_billing.e4;
import com.google.android.gms.internal.play_billing.h1;
import com.google.android.gms.internal.play_billing.i1;
import com.google.android.gms.internal.play_billing.t3;
import com.google.android.gms.internal.play_billing.t4;
import com.google.android.gms.internal.play_billing.u3;
import com.google.android.gms.internal.play_billing.u4;
import com.google.android.gms.internal.play_billing.v0;
import com.google.android.gms.internal.play_billing.v3;
import com.google.android.gms.internal.play_billing.w3;
import io.sentry.v5;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.Random;
import java.util.concurrent.Callable;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* loaded from: classes.dex */
public class b extends BillingClient {
    public com.google.android.gms.internal.play_billing.v A;
    public ExecutorService B;
    public final Long C;
    public final a2 D;

    /* renamed from: c, reason: collision with root package name */
    public final String f127c;

    /* renamed from: d, reason: collision with root package name */
    public final String f128d;

    /* renamed from: f, reason: collision with root package name */
    public volatile n0 f130f;

    /* renamed from: g, reason: collision with root package name */
    public final Context f131g;

    /* renamed from: h, reason: collision with root package name */
    public final e4.r f132h;

    /* renamed from: i, reason: collision with root package name */
    public volatile com.google.android.gms.internal.play_billing.d f133i;
    public volatile v j;
    public boolean k;

    /* renamed from: m, reason: collision with root package name */
    public boolean f135m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f136n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f137o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f138p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f139q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f140r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f141s;

    /* renamed from: t, reason: collision with root package name */
    public boolean f142t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f143u;

    /* renamed from: v, reason: collision with root package name */
    public boolean f144v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f145w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f146x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f147y;

    /* renamed from: z, reason: collision with root package name */
    public final io.sentry.hints.j f148z;
    public final Object a = new Object();

    /* renamed from: b, reason: collision with root package name */
    public volatile int f126b = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Handler f129e = new Handler(Looper.getMainLooper());

    /* renamed from: l, reason: collision with root package name */
    public int f134l = 0;

    public b(io.sentry.hints.j jVar, Context context, com.discord.billing.b bVar, a aVar) {
        int i5 = com.google.android.gms.internal.play_billing.v.f5852i;
        this.A = com.google.android.gms.internal.play_billing.d0.G;
        long nextLong = new Random().nextLong();
        this.C = Long.valueOf(nextLong);
        this.D = com.google.android.gms.internal.play_billing.l.a;
        this.f127c = z4.a.a;
        String p3 = p();
        this.f128d = p3;
        this.f131g = context.getApplicationContext();
        d4 B = e4.B();
        B.k();
        if (p3 != null) {
            B.c();
            e4.A((e4) B.f5728e, p3);
        }
        B.j(this.f131g.getPackageName());
        B.c();
        e4.F((e4) B.f5728e, nextLong);
        B.c();
        e4.y((e4) B.f5728e);
        B.e(Build.VERSION.SDK_INT);
        B.h();
        s(B, context);
        try {
            B.f(this.f131g.getPackageManager().getPackageInfo(this.f131g.getPackageName(), 0).versionCode);
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error getting app version code.", th2);
        }
        this.f132h = new e4.r(this.f131g, (e4) B.a());
        if (bVar == null) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Billing client should have a valid listener but the provided is null.");
        }
        this.f130f = new n0(this.f131g, bVar, this.f132h);
        this.f148z = jVar;
        this.f131g.getPackageName();
    }

    public static Future j(Callable callable, long j, Runnable runnable, Handler handler, ExecutorService executorService) {
        try {
            Future submit = executorService.submit(callable);
            handler.postDelayed(new ii.o(2, submit, runnable), (long) (j * 0.95d));
            return submit;
        } catch (Exception e9) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Async task throws exception!", e9);
            return null;
        }
    }

    public static String p() {
        try {
            return (String) Class.forName("com.android.billingclient.ktx.BuildConfig").getField("VERSION_NAME").get(null);
        } catch (Exception unused) {
            return null;
        }
    }

    public static /* bridge */ /* synthetic */ void q(b bVar, int i5) {
        bVar.f134l = i5;
        bVar.f147y = i5 >= 28;
        bVar.f146x = i5 >= 26;
        bVar.f145w = i5 >= 24;
        bVar.f144v = i5 >= 21;
        bVar.f143u = i5 >= 20;
        bVar.f142t = i5 >= 19;
        bVar.f141s = i5 >= 18;
        bVar.f140r = i5 >= 17;
        bVar.f139q = i5 >= 16;
        bVar.f138p = i5 >= 15;
        bVar.f137o = i5 >= 14;
        bVar.f136n = i5 >= 9;
        bVar.f135m = i5 >= 6;
    }

    public static void r(b bVar, int i5) {
        if (i5 != 0) {
            bVar.E(0);
            return;
        }
        synchronized (bVar.a) {
            try {
                if (bVar.f126b == 3) {
                    return;
                }
                bVar.E(2);
                n0 n0Var = bVar.f130f != null ? bVar.f130f : null;
                if (n0Var != null) {
                    boolean z5 = bVar.f144v;
                    m0 m0Var = n0Var.f200d;
                    IntentFilter intentFilter = new IntentFilter("com.android.vending.billing.PURCHASES_UPDATED");
                    IntentFilter intentFilter2 = new IntentFilter("com.android.vending.billing.LOCAL_BROADCAST_PURCHASES_UPDATED");
                    intentFilter2.addAction("com.android.vending.billing.ALTERNATIVE_BILLING");
                    n0Var.f202f = z5;
                    m0 m0Var2 = n0Var.f201e;
                    Context context = n0Var.a;
                    m0Var2.a(context, intentFilter2);
                    if (n0Var.f202f) {
                        m0Var.b(context, intentFilter);
                    } else {
                        m0Var.a(context, intentFilter);
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static final void s(d4 d4Var, Context context) {
        try {
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            if (activityManager != null) {
                ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
                activityManager.getMemoryInfo(memoryInfo);
                int i5 = (int) (memoryInfo.totalMem / v5.MAX_EVENT_SIZE_BYTES);
                d4Var.c();
                e4.x((e4) d4Var.f5728e, i5);
                String str = Build.BRAND;
                d4Var.c();
                e4.t((e4) d4Var.f5728e);
                String str2 = Build.MODEL;
                d4Var.c();
                e4.w((e4) d4Var.f5728e);
                String str3 = Build.MANUFACTURER;
                d4Var.c();
                e4.v((e4) d4Var.f5728e);
                String str4 = Build.FINGERPRINT;
                d4Var.c();
                e4.u((e4) d4Var.f5728e);
            }
        } catch (RuntimeException e9) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Runtime error while populating device info.", e9);
        }
    }

    public final void A(BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111, BillingResult billingResult, int i5, Exception exc) {
        com.google.android.gms.internal.play_billing.s.i("BillingClient", "getBillingConfig got an exception.", exc);
        w(i5, 13, billingResult, e0.a(exc));
        c00111.onBillingConfigResponse(billingResult, null);
    }

    public final void B(u3 u3Var) {
        try {
            this.f132h.x(u3Var, this.f134l);
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
    }

    public final void C(w3 w3Var) {
        try {
            e4.r rVar = this.f132h;
            int i5 = this.f134l;
            rVar.getClass();
            try {
                d4 d4Var = (d4) ((e4) rVar.f8000e).l();
                d4Var.c();
                e4.E((e4) d4Var.f5728e, i5);
                e4 e4Var = (e4) d4Var.a();
                rVar.f8000e = e4Var;
                try {
                    rVar.H(w3Var, e4Var);
                } catch (Throwable th2) {
                    com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to log.", th2);
                }
            } catch (Throwable th3) {
                com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to log.", th3);
            }
        } catch (Throwable th4) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th4);
        }
    }

    public final void D(int i5, BillingResult billingResult) {
        try {
            int i6 = e0.a;
            t3 t3Var = (t3) e0.b(i5, 6, billingResult, null, a4.BROADCAST_ACTION_UNSPECIFIED).l();
            t4 r5 = u4.r();
            r5.e(false);
            r5.f();
            t3Var.f(r5);
            B((u3) t3Var.a());
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
    }

    public final void E(int i5) {
        synchronized (this.a) {
            try {
                if (this.f126b == 3) {
                    return;
                }
                int i6 = this.f126b;
                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Setting clientState from " + (i6 != 0 ? i6 != 1 ? i6 != 2 ? "CLOSED" : "CONNECTED" : "CONNECTING" : "DISCONNECTED") + " to " + (i5 != 0 ? i5 != 1 ? i5 != 2 ? "CLOSED" : "CONNECTED" : "CONNECTING" : "DISCONNECTED"));
                this.f126b = i5;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void F(c cVar) {
        int i5;
        BillingResult billingResult;
        synchronized (this.a) {
            try {
                if (I()) {
                    billingResult = m();
                } else if (this.f126b == 1) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", "Client is already in the process of connecting to billing service.");
                    billingResult = g0.f159c;
                    D(37, billingResult);
                } else if (this.f126b == 3) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", "Client was already closed and can't be reused. Please create another instance.");
                    billingResult = g0.f164h;
                    D(38, billingResult);
                } else {
                    E(1);
                    G();
                    com.google.android.gms.internal.play_billing.s.g("BillingClient", "Starting in-app billing setup.");
                    this.j = new v(this, cVar);
                    v vVar = this.j;
                    synchronized (vVar.f230v.a) {
                        com.google.android.gms.internal.play_billing.n nVar = vVar.f228e;
                        nVar.f5775c = 0L;
                        nVar.f5774b = false;
                        nVar.a();
                    }
                    Intent intent = new Intent("com.android.vending.billing.InAppBillingService.BIND");
                    intent.setPackage("com.android.vending");
                    List<ResolveInfo> queryIntentServices = this.f131g.getPackageManager().queryIntentServices(intent, 0);
                    if (queryIntentServices == null || queryIntentServices.isEmpty()) {
                        i5 = 41;
                    } else {
                        ServiceInfo serviceInfo = queryIntentServices.get(0).serviceInfo;
                        i5 = 40;
                        if (serviceInfo != null) {
                            String str = serviceInfo.packageName;
                            String str2 = serviceInfo.name;
                            if (!Objects.equals(str, "com.android.vending") || str2 == null) {
                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "The device doesn't have valid Play Store.");
                            } else {
                                ComponentName componentName = new ComponentName(str, str2);
                                Intent intent2 = new Intent(intent);
                                intent2.setComponent(componentName);
                                intent2.putExtra("playBillingLibraryVersion", this.f127c);
                                synchronized (this.a) {
                                    try {
                                        if (this.f126b == 2) {
                                            billingResult = m();
                                        } else if (this.f126b != 1) {
                                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Client state no longer CONNECTING, returning service disconnected.");
                                            billingResult = g0.f164h;
                                            D(105, billingResult);
                                        } else {
                                            v vVar2 = this.j;
                                            if (this.f131g.bindService(intent2, vVar2, 1)) {
                                                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Service was bonded successfully.");
                                                billingResult = null;
                                            } else {
                                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Connection to Billing service is blocked.");
                                                i5 = 39;
                                            }
                                        }
                                    } finally {
                                    }
                                }
                            }
                        } else {
                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "The device doesn't have valid Play Store.");
                        }
                    }
                    E(0);
                    com.google.android.gms.internal.play_billing.s.g("BillingClient", "Billing service unavailable on device.");
                    billingResult = g0.a;
                    D(i5, billingResult);
                }
            } finally {
            }
        }
        if (billingResult != null) {
            cVar.onBillingSetupFinished(billingResult);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void G() {
        synchronized (this.a) {
            if (this.j != null) {
                try {
                    this.f131g.unbindService(this.j);
                } catch (Throwable th2) {
                    try {
                        com.google.android.gms.internal.play_billing.s.i("BillingClient", "There was an exception while unbinding service!", th2);
                        this.f133i = null;
                        this.j = null;
                    } finally {
                        this.f133i = null;
                        this.j = null;
                    }
                }
            }
        }
    }

    public final boolean H(long j) {
        a2 a2Var = this.D;
        if (a2Var == null) {
            throw new NullPointerException("ticker");
        }
        long d6 = a2Var.d();
        int i5 = com.facebook.imagepipeline.nativecode.c.f4680d;
        long j5 = j;
        for (int i6 = 1; i6 <= i5; i6++) {
            try {
            } catch (Exception e9) {
                if (e9 instanceof InterruptedException) {
                    Thread.currentThread().interrupt();
                }
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error during reconnection attempt: ", e9);
            }
            if (Math.max(0L, j5) <= 0) {
                com.google.android.gms.internal.play_billing.s.h("BillingClient", "No time remaining for reconnection attempt.");
                return I();
            }
            com.google.android.gms.internal.play_billing.s.g("BillingClient", "Already connected or not opted into auto reconnection.");
            BillingResult billingResult = g0.f163g;
            TimeUnit.MILLISECONDS.getClass();
            int i10 = billingResult.a;
            if (i10 == 0) {
                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Reconnection succeeded with result: " + i10);
                return I();
            }
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Reconnection failed with result: " + i10);
            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
            long d7 = (a2Var.d() - d6) + 0;
            TimeUnit timeUnit2 = TimeUnit.NANOSECONDS;
            j5 = j - timeUnit.convert(d7, timeUnit2);
            long pow = ((long) Math.pow(2.0d, i6 - 1)) * 1000;
            if (j5 < pow) {
                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Reconnection failed due to timeout limit reached.");
                return I();
            }
            if (i6 < i5 && pow > 0) {
                try {
                    Thread.sleep(pow);
                    j5 = j - timeUnit.convert((a2Var.d() - d6) + 0, timeUnit2);
                } catch (InterruptedException e10) {
                    Thread.currentThread().interrupt();
                    com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error sleeping during reconnection attempt: ", e10);
                }
            }
        }
        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Max retries reached.");
        return I();
    }

    public final boolean I() {
        boolean z5;
        synchronized (this.a) {
            try {
                z5 = false;
                if (this.f126b == 2 && this.f133i != null && this.j != null) {
                    z5 = true;
                }
            } finally {
            }
        }
        return z5;
    }

    public final void J(BillingResult billingResult) {
        if (Thread.interrupted()) {
            return;
        }
        this.f129e.post(new ii.o(1, this, billingResult));
    }

    @Override // com.android.billingclient.api.BillingClient
    public void a(h hVar, com.discord.billing.a aVar) {
        if (j(new q(this, aVar, hVar, 1), 30000L, new s(this, aVar, hVar, 0), k(), i()) == null) {
            BillingResult n6 = n();
            u(25, 4, n6);
            aVar.a(n6, hVar.f173b);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0049 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // com.android.billingclient.api.BillingClient
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b() {
        try {
            int i5 = e0.a;
            C(e0.c(12, a4.BROADCAST_ACTION_UNSPECIFIED));
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
        synchronized (this.a) {
            try {
                if (this.f130f != null) {
                    n0 n0Var = this.f130f;
                    m0 m0Var = n0Var.f200d;
                    Context context = n0Var.a;
                    m0Var.c(context);
                    n0Var.f201e.c(context);
                }
            } finally {
                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Unbinding from service.");
                G();
                synchronized (this) {
                }
            }
            try {
                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Unbinding from service.");
                G();
            } catch (Throwable th3) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "There was an exception while unbinding from the service while ending connection!", th3);
            }
            try {
                synchronized (this) {
                    ExecutorService executorService = this.B;
                    if (executorService != null) {
                        executorService.shutdownNow();
                        this.B = null;
                    }
                }
            } finally {
                try {
                } finally {
                }
            }
        }
    }

    @Override // com.android.billingclient.api.BillingClient
    public final void c(BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111) {
        if (j(new r(this, c00111), 30000L, new v0(2, this, c00111), k(), i()) == null) {
            BillingResult n6 = n();
            u(25, 13, n6);
            c00111.onBillingConfigResponse(n6, null);
        }
    }

    @Override // com.android.billingclient.api.BillingClient
    public final boolean d() {
        return I();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:165:0x071a  */
    /* JADX WARN: Removed duplicated region for block: B:185:0x0725 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:294:0x01ae  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0168  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x01a1  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0317  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0325  */
    /* JADX WARN: Type inference failed for: r4v26, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r4v47, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r6v33, types: [android.os.BaseBundle, android.os.Bundle] */
    @Override // com.android.billingclient.api.BillingClient
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public BillingResult e(Activity activity, final BillingFlowParams billingFlowParams) {
        com.google.android.gms.internal.play_billing.q listIterator;
        String str;
        String str2;
        long j;
        String str3;
        BillingResult billingResult;
        i iVar;
        BillingResult billingResult2;
        HashSet hashSet;
        long j5;
        boolean z5;
        String str4;
        Future j7;
        long j10;
        boolean z6;
        long j11;
        boolean z7;
        long j12;
        Object obj;
        int a;
        int i5;
        String str5;
        String str6;
        ArrayList arrayList;
        boolean z8;
        long nextLong = new Random().nextLong();
        if (this.f130f == null || this.f130f.f198b == null) {
            BillingResult billingResult3 = g0.f171q;
            v(12, billingResult3, nextLong);
            return billingResult3;
        }
        try {
            com.google.android.gms.internal.play_billing.s.g("BillingClient", "Already connected or not opted into auto reconnection.");
            BillingResult billingResult4 = g0.f163g;
            TimeUnit.MILLISECONDS.getClass();
            int i6 = billingResult4.a;
            if (i6 == 0) {
                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Reconnection succeeded with result: " + i6);
            } else {
                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Reconnection failed with result: " + i6);
            }
        } catch (Exception e9) {
            if (e9 instanceof InterruptedException) {
                Thread.currentThread().interrupt();
            }
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error during reconnection attempt: ", e9);
        }
        if (!I()) {
            BillingResult billingResult5 = g0.f164h;
            v(2, billingResult5, nextLong);
            J(billingResult5);
            return billingResult5;
        }
        synchronized (this.a) {
            try {
                if (this.j != null) {
                    this.j.getClass();
                }
            } finally {
            }
        }
        ArrayList arrayList2 = new ArrayList();
        arrayList2.addAll(billingFlowParams.f3599e);
        com.google.android.gms.internal.play_billing.t tVar = billingFlowParams.f3598d;
        Iterator it = arrayList2.iterator();
        if ((it.hasNext() ? it.next() : null) != null) {
            throw new ClassCastException();
        }
        com.google.android.gms.internal.play_billing.q qVar = (com.google.android.gms.internal.play_billing.q) tVar.iterator();
        e eVar = (e) (qVar.hasNext() ? qVar.next() : null);
        ProductDetails productDetails = eVar.a;
        String str7 = productDetails.f3603c;
        String str8 = productDetails.f3604d;
        if (str8.equals("subs") && !this.k) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Current client doesn't support subscriptions.");
            BillingResult billingResult6 = g0.j;
            x(9, billingResult6, nextLong, false);
            J(billingResult6);
            return billingResult6;
        }
        if (billingFlowParams.f3596b == null) {
            a0 a0Var = billingFlowParams.f3597c;
            a0Var.getClass();
            if (a0Var.f124e == 0 && !billingFlowParams.a) {
                com.google.android.gms.internal.play_billing.t tVar2 = billingFlowParams.f3598d;
                if (tVar2 != null) {
                    int size = tVar2.size();
                    for (int i10 = 0; i10 < size; i10++) {
                        ((e) tVar2.get(i10)).getClass();
                    }
                }
                if (arrayList2.size() <= 1 && !this.f139q) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", "Current client doesn't support multi-item purchases.");
                    BillingResult billingResult7 = g0.k;
                    x(19, billingResult7, nextLong, false);
                    J(billingResult7);
                    return billingResult7;
                }
                if (tVar.isEmpty() && !this.f140r) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", "Current client doesn't support purchases with ProductDetails.");
                    BillingResult billingResult8 = g0.f168n;
                    x(20, billingResult8, nextLong, false);
                    J(billingResult8);
                    return billingResult8;
                }
                listIterator = tVar.listIterator(0);
                while (listIterator.hasNext()) {
                    String str9 = ((e) listIterator.next()).f152b;
                    if (str9 != null) {
                        if (str9.contains(":") && !this.f147y) {
                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Current Play Store version doesn't support gift code purchase.");
                            BillingResult billingResult9 = g0.f167m;
                            x(143, billingResult9, nextLong, false);
                            J(billingResult9);
                            return billingResult9;
                        }
                    }
                }
                if (billingFlowParams.f3598d.isEmpty()) {
                    e eVar2 = (e) billingFlowParams.f3598d.get(0);
                    int i11 = 1;
                    str = null;
                    while (true) {
                        if (i11 < billingFlowParams.f3598d.size()) {
                            e eVar3 = (e) billingFlowParams.f3598d.get(i11);
                            str2 = str7;
                            if (!eVar3.a.f3604d.equals(eVar2.a.f3604d) && !eVar3.a.f3604d.equals("play_pass_subs")) {
                                j = nextLong;
                                billingResult2 = g0.a(5, "All products should have same ProductType.");
                                str3 = str8;
                                break;
                            }
                            i11++;
                            str7 = str2;
                        } else {
                            str2 = str7;
                            ProductDetails productDetails2 = eVar2.a;
                            String optString = productDetails2.f3602b.optString("packageName");
                            HashMap hashMap = new HashMap();
                            HashSet hashSet2 = new HashSet();
                            j = nextLong;
                            com.google.android.gms.internal.play_billing.t tVar3 = billingFlowParams.f3598d;
                            int size2 = tVar3.size();
                            str3 = str8;
                            int i12 = 0;
                            while (true) {
                                if (i12 < size2) {
                                    com.google.android.gms.internal.play_billing.t tVar4 = tVar3;
                                    e eVar4 = (e) tVar3.get(i12);
                                    eVar4.getClass();
                                    int i13 = size2;
                                    ProductDetails productDetails3 = eVar4.a;
                                    int i14 = i12;
                                    ArrayList arrayList3 = productDetails3.f3609i;
                                    String str10 = productDetails3.f3603c;
                                    if (arrayList3 != null) {
                                        hashSet = hashSet2;
                                        if (eVar4.f152b == null) {
                                            billingResult = g0.a(5, "offerToken is required for constructing ProductDetailsParams for subscriptions. Missing value for product id: " + str10);
                                            break;
                                        }
                                    } else {
                                        hashSet = hashSet2;
                                    }
                                    if (hashMap.containsKey(str10)) {
                                        billingResult = g0.a(5, "ProductId can not be duplicated. Invalid product id: " + str10 + ".");
                                        break;
                                    }
                                    hashMap.put(str10, eVar4);
                                    if (!productDetails2.f3604d.equals("play_pass_subs") && !productDetails3.f3604d.equals("play_pass_subs") && !optString.equals(productDetails3.f3602b.optString("packageName"))) {
                                        billingResult = g0.a(5, "All products must have the same package name.");
                                        break;
                                    }
                                    i12 = i14 + 1;
                                    size2 = i13;
                                    tVar3 = tVar4;
                                    hashSet2 = hashSet;
                                } else {
                                    Iterator it2 = hashSet2.iterator();
                                    while (true) {
                                        if (it2.hasNext()) {
                                            String str11 = (String) it2.next();
                                            if (hashMap.containsKey(str11)) {
                                                ((e) hashMap.get(str11)).getClass();
                                                billingResult = g0.a(5, "OldProductId must not be one of the products to be purchased. Invalid old product id: " + str11 + ".");
                                                break;
                                            }
                                        } else {
                                            ArrayList arrayList4 = productDetails2.j;
                                            String str12 = eVar2.f152b;
                                            if (str12 != null && arrayList4 != null) {
                                                Iterator it3 = arrayList4.iterator();
                                                while (true) {
                                                    if (!it3.hasNext()) {
                                                        iVar = null;
                                                        break;
                                                    }
                                                    iVar = (i) it3.next();
                                                    if (str12.equals(iVar.f179d)) {
                                                        break;
                                                    }
                                                }
                                                if (iVar != null && iVar.f182g != null) {
                                                    billingResult = g0.a(5, "Both autoPayDetails and autoPayBalanceThreshold is required for constructing ProductDetailsParams for autopay.");
                                                }
                                            }
                                            billingResult = g0.f163g;
                                        }
                                    }
                                }
                            }
                            billingResult2 = billingResult;
                        }
                    }
                } else {
                    str2 = str7;
                    j = nextLong;
                    billingResult2 = g0.f163g;
                    str3 = str8;
                    str = null;
                }
                if (billingResult2 == g0.f163g) {
                    x(108, billingResult2, j, false);
                    J(billingResult2);
                    return billingResult2;
                }
                boolean z10 = false;
                long j13 = j;
                if (this.f135m) {
                    boolean z11 = this.f136n;
                    this.f148z.getClass();
                    this.f148z.getClass();
                    String str13 = this.f128d;
                    long longValue = this.C.longValue();
                    this.f131g.getPackageName();
                    z5 = false;
                    final ?? bundle = new Bundle();
                    com.google.android.gms.internal.play_billing.s.b(bundle, str13, longValue);
                    bundle.putLong("billingClientTransactionId", j13);
                    int i15 = billingFlowParams.f3597c.f124e;
                    if (i15 != 0) {
                        bundle.putInt("prorationMode", i15);
                    }
                    if (!TextUtils.isEmpty(billingFlowParams.f3596b)) {
                        bundle.putString("accountId", billingFlowParams.f3596b);
                    }
                    if (TextUtils.isEmpty(str)) {
                        str5 = str;
                    } else {
                        str5 = str;
                        bundle.putString("obfuscatedProfileId", str5);
                    }
                    if (!TextUtils.isEmpty(str5)) {
                        bundle.putStringArrayList("skusToReplace", new ArrayList(Arrays.asList(str5)));
                    }
                    if (!TextUtils.isEmpty((String) billingFlowParams.f3597c.f125i)) {
                        bundle.putString("oldSkuPurchaseToken", (String) billingFlowParams.f3597c.f125i);
                    }
                    if (!TextUtils.isEmpty(null)) {
                        bundle.putString("oldSkuPurchaseId", null);
                    }
                    billingFlowParams.f3597c.getClass();
                    if (!TextUtils.isEmpty(null)) {
                        billingFlowParams.f3597c.getClass();
                        bundle.putString("originalExternalTransactionId", null);
                    }
                    if (!TextUtils.isEmpty(null)) {
                        bundle.putString("paymentsPurchaseParams", null);
                    }
                    if (z11) {
                        bundle.putBoolean("enablePendingPurchases", true);
                    }
                    ArrayList arrayList5 = new ArrayList();
                    com.google.android.gms.internal.play_billing.q listIterator2 = billingFlowParams.f3598d.listIterator(0);
                    while (listIterator2.hasNext()) {
                        ((e) listIterator2.next()).getClass();
                    }
                    if (!arrayList5.isEmpty()) {
                        h1 r5 = i1.r();
                        r5.c();
                        i1.s((i1) r5.f5728e, arrayList5);
                        bundle.putByteArray("subscriptionProductReplacementParamsList", ((i1) r5.a()).b());
                    }
                    if (arrayList2.isEmpty()) {
                        ArrayList arrayList6 = new ArrayList(tVar.size() - 1);
                        ArrayList arrayList7 = new ArrayList(tVar.size() - 1);
                        ArrayList arrayList8 = new ArrayList();
                        ArrayList arrayList9 = new ArrayList();
                        ArrayList arrayList10 = new ArrayList();
                        ArrayList arrayList11 = new ArrayList();
                        int i16 = 0;
                        while (i16 < tVar.size()) {
                            e eVar5 = (e) tVar.get(i16);
                            ProductDetails productDetails4 = eVar5.a;
                            long j14 = j13;
                            if (!productDetails4.f3607g.isEmpty()) {
                                arrayList8.add(productDetails4.f3607g);
                            }
                            String str14 = eVar5.f152b;
                            arrayList9.add(str14);
                            if (!TextUtils.isEmpty(str14) && (arrayList = productDetails4.j) != null && !arrayList.isEmpty()) {
                                Iterator it4 = arrayList.iterator();
                                while (it4.hasNext()) {
                                    i iVar2 = (i) it4.next();
                                    Iterator it5 = it4;
                                    if (!TextUtils.isEmpty(iVar2.f181f) && Objects.equals(iVar2.f179d, str14)) {
                                        str6 = iVar2.f181f;
                                        break;
                                    }
                                    it4 = it5;
                                }
                            }
                            str6 = productDetails4.f3608h;
                            if (!TextUtils.isEmpty(str6)) {
                                arrayList10.add(str6);
                            }
                            if (i16 > 0) {
                                arrayList6.add(((e) tVar.get(i16)).a.f3603c);
                                arrayList7.add(((e) tVar.get(i16)).a.f3604d);
                            }
                            i16++;
                            j13 = j14;
                        }
                        j5 = j13;
                        bundle.putStringArrayList("SKU_OFFER_ID_TOKEN_LIST", arrayList9);
                        if (!arrayList11.isEmpty()) {
                            bundle.putIntegerArrayList("autoPayBalanceThresholdList", arrayList11);
                        }
                        if (!arrayList8.isEmpty()) {
                            bundle.putStringArrayList("skuDetailsTokens", arrayList8);
                        }
                        if (!arrayList10.isEmpty()) {
                            bundle.putStringArrayList("SKU_SERIALIZED_DOCID_LIST", arrayList10);
                        }
                        if (!arrayList6.isEmpty()) {
                            bundle.putStringArrayList("additionalSkus", arrayList6);
                            bundle.putStringArrayList("additionalSkuTypes", arrayList7);
                        }
                    } else {
                        ArrayList arrayList12 = new ArrayList();
                        new ArrayList();
                        new ArrayList();
                        new ArrayList();
                        new ArrayList();
                        Iterator it6 = arrayList2.iterator();
                        if (it6.hasNext()) {
                            throw s4.h.b(it6);
                        }
                        if (!arrayList12.isEmpty()) {
                            bundle.putStringArrayList("skuDetailsTokens", arrayList12);
                        }
                        if (arrayList2.size() > 1) {
                            ArrayList arrayList13 = new ArrayList(arrayList2.size() - 1);
                            ArrayList arrayList14 = new ArrayList(arrayList2.size() - 1);
                            if (arrayList2.size() > 1) {
                                arrayList2.get(1).getClass();
                                throw new ClassCastException();
                            }
                            bundle.putStringArrayList("additionalSkus", arrayList13);
                            bundle.putStringArrayList("additionalSkuTypes", arrayList14);
                        }
                        j5 = j13;
                    }
                    if (bundle.containsKey("SKU_OFFER_ID_TOKEN_LIST") && !this.f137o) {
                        BillingResult billingResult10 = g0.f166l;
                        x(21, billingResult10, j5, false);
                        J(billingResult10);
                        return billingResult10;
                    }
                    if (TextUtils.isEmpty(eVar.a.f3602b.optString("packageName"))) {
                        z8 = false;
                    } else {
                        bundle.putString("skuPackageName", eVar.a.f3602b.optString("packageName"));
                        z8 = true;
                    }
                    str4 = null;
                    if (!TextUtils.isEmpty(null)) {
                        bundle.putString("accountName", null);
                    }
                    Intent intent = activity.getIntent();
                    if (intent == null) {
                        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Activity's intent is null.");
                    } else if (!TextUtils.isEmpty(intent.getStringExtra("PROXY_PACKAGE"))) {
                        String stringExtra = intent.getStringExtra("PROXY_PACKAGE");
                        bundle.putString("proxyPackage", stringExtra);
                        try {
                            bundle.putString("proxyPackageVersion", this.f131g.getPackageManager().getPackageInfo(stringExtra, 0).versionName);
                        } catch (PackageManager.NameNotFoundException unused) {
                            bundle.putString("proxyPackageVersion", "package not found");
                        }
                    }
                    final int i17 = this.f147y ? 28 : (!this.f140r || tVar.isEmpty()) ? (this.f138p && z8) ? 15 : this.f136n ? 9 : 6 : 17;
                    final String str15 = str2;
                    final ?? r42 = str3;
                    j7 = j(new Callable(i17, str15, r42, billingFlowParams, bundle) { // from class: a5.p

                        /* renamed from: e, reason: collision with root package name */
                        public final /* synthetic */ int f208e;

                        /* renamed from: i, reason: collision with root package name */
                        public final /* synthetic */ String f209i;

                        /* renamed from: v, reason: collision with root package name */
                        public final /* synthetic */ String f210v;

                        /* renamed from: w, reason: collision with root package name */
                        public final /* synthetic */ Bundle f211w;

                        {
                            this.f211w = bundle;
                        }

                        @Override // java.util.concurrent.Callable
                        public final Object call() {
                            Bundle c6;
                            com.google.android.gms.internal.play_billing.d dVar;
                            b bVar = b.this;
                            int i18 = this.f208e;
                            String str16 = this.f209i;
                            String str17 = this.f210v;
                            Bundle bundle2 = this.f211w;
                            try {
                                synchronized (bVar.a) {
                                    dVar = bVar.f133i;
                                }
                                if (dVar == null) {
                                    return com.google.android.gms.internal.play_billing.s.c(107, g0.f164h);
                                }
                                return ((com.google.android.gms.internal.play_billing.b) dVar).C(i18, bVar.f131g.getPackageName(), str16, str17, bundle2);
                            } catch (DeadObjectException e10) {
                                BillingResult billingResult11 = g0.f164h;
                                String a10 = e0.a(e10);
                                c6 = com.google.android.gms.internal.play_billing.s.c(5, billingResult11);
                                if (a10 != null) {
                                    c6.putString("ADDITIONAL_LOG_DETAILS", a10);
                                }
                                return c6;
                            } catch (Exception e11) {
                                BillingResult billingResult12 = g0.f162f;
                                String a11 = e0.a(e11);
                                c6 = com.google.android.gms.internal.play_billing.s.c(5, billingResult12);
                                if (a11 != null) {
                                    c6.putString("ADDITIONAL_LOG_DETAILS", a11);
                                }
                                return c6;
                            }
                        }
                    }, 5000L, null, this.f129e, i());
                    j10 = r42;
                    z10 = bundle;
                } else {
                    j5 = j13;
                    z5 = false;
                    str4 = str;
                    ?? r43 = str3;
                    j7 = j(new q(this, str2, r43, 0), 5000L, null, this.f129e, i());
                    j10 = r43;
                }
                try {
                    if (j7 == null) {
                        try {
                            BillingResult billingResult11 = g0.f158b;
                            x(25, billingResult11, j5, z5);
                            J(billingResult11);
                            return billingResult11;
                        } catch (CancellationException e10) {
                            e = e10;
                            z7 = z5;
                            j12 = j5;
                            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Time out while launching billing flow. Try to reconnect", e);
                            BillingResult billingResult12 = g0.f165i;
                            y(4, billingResult12, e0.a(e), j12, z7);
                            J(billingResult12);
                            return billingResult12;
                        } catch (TimeoutException e11) {
                            e = e11;
                            z7 = z5;
                            j12 = j5;
                            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Time out while launching billing flow. Try to reconnect", e);
                            BillingResult billingResult122 = g0.f165i;
                            y(4, billingResult122, e0.a(e), j12, z7);
                            J(billingResult122);
                            return billingResult122;
                        } catch (Exception e12) {
                            e = e12;
                            z6 = z5;
                            j11 = j5;
                            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while launching billing flow. Try to reconnect", e);
                            BillingResult billingResult13 = g0.f164h;
                            y(5, billingResult13, e0.a(e), j11, z6);
                            J(billingResult13);
                            return billingResult13;
                        }
                    }
                    boolean z12 = z5;
                    long j15 = j5;
                    Bundle bundle2 = (Bundle) j7.get(5000L, TimeUnit.MILLISECONDS);
                    int a10 = com.google.android.gms.internal.play_billing.s.a("BillingClient", bundle2);
                    String f2 = com.google.android.gms.internal.play_billing.s.f("BillingClient", bundle2);
                    if (a10 == 0) {
                        Intent intent2 = new Intent(activity, (Class<?>) ProxyBillingActivity.class);
                        intent2.putExtra("BUY_INTENT", (PendingIntent) bundle2.getParcelable("BUY_INTENT"));
                        intent2.putExtra("billingClientTransactionId", j15);
                        intent2.putExtra("wasServiceAutoReconnected", z12);
                        activity.startActivity(intent2);
                        return g0.f163g;
                    }
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", k0.c0(a10, "Unable to buy item, Error response code: "));
                    BillingResult a11 = g0.a(a10, f2);
                    try {
                        if (bundle2 != null) {
                            try {
                                obj = bundle2.get("LOG_REASON");
                            } catch (Throwable th2) {
                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Failed to get log reason from bundle: ".concat(String.valueOf(th2.getMessage())));
                            }
                            if (obj != null) {
                                if (obj instanceof Integer) {
                                    a = com.discord.chat.bridge.botuikit.a.a(((Integer) obj).intValue());
                                    i5 = 1;
                                    if (a == i5) {
                                        a = 23;
                                    }
                                    if (bundle2 != null) {
                                        try {
                                            str4 = bundle2.getString("ADDITIONAL_LOG_DETAILS");
                                        } catch (Throwable th3) {
                                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Failed to get additional log details from bundle: ".concat(String.valueOf(th3.getMessage())));
                                        }
                                    }
                                    y(a, a11, str4, j15, z12);
                                    J(a11);
                                    return a11;
                                }
                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Unexpected type for bundle log reason: " + obj.getClass().getName());
                            }
                        }
                        y(a, a11, str4, j15, z12);
                        J(a11);
                        return a11;
                    } catch (CancellationException e13) {
                        e = e13;
                        j12 = j15;
                        z7 = z12;
                        com.google.android.gms.internal.play_billing.s.i("BillingClient", "Time out while launching billing flow. Try to reconnect", e);
                        BillingResult billingResult1222 = g0.f165i;
                        y(4, billingResult1222, e0.a(e), j12, z7);
                        J(billingResult1222);
                        return billingResult1222;
                    } catch (TimeoutException e14) {
                        e = e14;
                        j12 = j15;
                        z7 = z12;
                        com.google.android.gms.internal.play_billing.s.i("BillingClient", "Time out while launching billing flow. Try to reconnect", e);
                        BillingResult billingResult12222 = g0.f165i;
                        y(4, billingResult12222, e0.a(e), j12, z7);
                        J(billingResult12222);
                        return billingResult12222;
                    } catch (Exception e15) {
                        e = e15;
                        j11 = j15;
                        z6 = z12;
                        com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while launching billing flow. Try to reconnect", e);
                        BillingResult billingResult132 = g0.f164h;
                        y(5, billingResult132, e0.a(e), j11, z6);
                        J(billingResult132);
                        return billingResult132;
                    }
                    i5 = 1;
                    a = 1;
                    if (a == i5) {
                    }
                    if (bundle2 != null) {
                    }
                } catch (CancellationException e16) {
                    e = e16;
                } catch (TimeoutException e17) {
                    e = e17;
                    j12 = j10;
                    z7 = z10;
                } catch (Exception e18) {
                    e = e18;
                }
            }
        }
        if (!this.f135m) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Current client doesn't support extra params for buy intent.");
            BillingResult billingResult14 = g0.f161e;
            x(18, billingResult14, nextLong, false);
            J(billingResult14);
            return billingResult14;
        }
        if (arrayList2.size() <= 1) {
        }
        if (tVar.isEmpty()) {
        }
        listIterator = tVar.listIterator(0);
        while (listIterator.hasNext()) {
        }
        if (billingFlowParams.f3598d.isEmpty()) {
        }
        if (billingResult2 == g0.f163g) {
        }
    }

    @Override // com.android.billingclient.api.BillingClient
    public void f(QueryProductDetailsParams queryProductDetailsParams, k kVar) {
        if (j(new q(this, kVar, queryProductDetailsParams, 2), 30000L, new v0(3, this, kVar), k(), i()) == null) {
            BillingResult n6 = n();
            u(25, 7, n6);
            com.google.android.gms.internal.play_billing.q qVar = com.google.android.gms.internal.play_billing.t.f5834e;
            com.google.android.gms.internal.play_billing.x xVar = com.google.android.gms.internal.play_billing.x.f5880w;
            kVar.a(n6, new QueryProductDetailsResult(xVar, xVar));
        }
    }

    @Override // com.android.billingclient.api.BillingClient
    public final void g(n nVar, com.discord.billing.b bVar) {
        if (j(new q(this, bVar, nVar.f197e), 30000L, new v0(1, this, bVar), k(), i()) == null) {
            BillingResult n6 = n();
            u(25, 9, n6);
            com.google.android.gms.internal.play_billing.q qVar = com.google.android.gms.internal.play_billing.t.f5834e;
            bVar.b(n6, com.google.android.gms.internal.play_billing.x.f5880w);
        }
    }

    @Override // com.android.billingclient.api.BillingClient
    public void h(c cVar) {
        F(cVar);
    }

    public final synchronized ExecutorService i() {
        try {
            if (this.B == null) {
                this.B = Executors.newFixedThreadPool(com.google.android.gms.internal.play_billing.s.a, new t(this));
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return this.B;
    }

    public final Handler k() {
        return Looper.myLooper() == null ? this.f129e : new Handler(Looper.myLooper());
    }

    public final ke.u l(BillingResult billingResult, int i5, String str, Exception exc) {
        com.google.android.gms.internal.play_billing.s.i("BillingClient", str, exc);
        w(i5, 7, billingResult, e0.a(exc));
        return new ke.u(billingResult.a, billingResult.f3601c, new ArrayList(), new ArrayList());
    }

    public final BillingResult m() {
        com.google.android.gms.internal.play_billing.s.g("BillingClient", "Service connection is valid. No need to re-initialize.");
        v3 s2 = w3.s();
        s2.c();
        w3.r((w3) s2.f5728e, 6);
        t4 r5 = u4.r();
        r5.c();
        u4.w((u4) r5.f5728e);
        r5.e(false);
        r5.f();
        s2.c();
        w3.w((w3) s2.f5728e, (u4) r5.a());
        C((w3) s2.a());
        return g0.f163g;
    }

    public final BillingResult n() {
        int[] iArr = {0, 3};
        synchronized (this.a) {
            for (int i5 = 0; i5 < 2; i5++) {
                if (this.f126b == iArr[i5]) {
                    return g0.f164h;
                }
            }
            return g0.f162f;
        }
    }

    public final void o() {
        if (TextUtils.isEmpty(null)) {
            this.f131g.getPackageName();
        }
    }

    public final io.sentry.internal.debugmeta.c t(BillingResult billingResult, int i5, String str, Exception exc) {
        w(i5, 9, billingResult, e0.a(exc));
        com.google.android.gms.internal.play_billing.s.i("BillingClient", str, exc);
        return new io.sentry.internal.debugmeta.c(1, billingResult, (Object) null);
    }

    public final void u(int i5, int i6, BillingResult billingResult) {
        try {
            int i10 = e0.a;
            B(e0.b(i5, i6, billingResult, null, a4.BROADCAST_ACTION_UNSPECIFIED));
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
    }

    public final void v(int i5, BillingResult billingResult, long j) {
        try {
            int i6 = e0.a;
            try {
                this.f132h.y(e0.b(i5, 2, billingResult, null, a4.BROADCAST_ACTION_UNSPECIFIED), this.f134l, j);
            } catch (Throwable th2) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
            }
        } catch (Throwable th3) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th3);
        }
    }

    public final void w(int i5, int i6, BillingResult billingResult, String str) {
        try {
            int i10 = e0.a;
            B(e0.b(i5, i6, billingResult, str, a4.BROADCAST_ACTION_UNSPECIFIED));
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
    }

    public final void x(int i5, BillingResult billingResult, long j, boolean z5) {
        try {
            int i6 = e0.a;
            try {
                this.f132h.A(e0.b(i5, 2, billingResult, null, a4.BROADCAST_ACTION_UNSPECIFIED), this.f134l, j, z5);
            } catch (Throwable th2) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
            }
        } catch (Throwable th3) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th3);
        }
    }

    public final void y(int i5, BillingResult billingResult, String str, long j, boolean z5) {
        try {
            int i6 = e0.a;
            try {
                this.f132h.A(e0.b(i5, 2, billingResult, str, a4.BROADCAST_ACTION_UNSPECIFIED), this.f134l, j, z5);
            } catch (Throwable th2) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
            }
        } catch (Throwable th3) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th3);
        }
    }

    public final void z(com.discord.billing.a aVar, String str, BillingResult billingResult, int i5, String str2, Exception exc) {
        com.google.android.gms.internal.play_billing.s.i("BillingClient", str2, exc);
        w(i5, 4, billingResult, e0.a(exc));
        aVar.a(billingResult, str);
    }

    public b(io.sentry.hints.j jVar, Context context, a aVar) {
        int i5 = com.google.android.gms.internal.play_billing.v.f5852i;
        this.A = com.google.android.gms.internal.play_billing.d0.G;
        long nextLong = new Random().nextLong();
        this.C = Long.valueOf(nextLong);
        this.D = com.google.android.gms.internal.play_billing.l.a;
        this.f127c = z4.a.a;
        String p3 = p();
        this.f128d = p3;
        this.f131g = context.getApplicationContext();
        d4 B = e4.B();
        B.k();
        if (p3 != null) {
            B.c();
            e4.A((e4) B.f5728e, p3);
        }
        B.j(this.f131g.getPackageName());
        B.c();
        e4.F((e4) B.f5728e, nextLong);
        B.c();
        e4.y((e4) B.f5728e);
        B.e(Build.VERSION.SDK_INT);
        B.h();
        s(B, context);
        try {
            B.f(this.f131g.getPackageManager().getPackageInfo(this.f131g.getPackageName(), 0).versionCode);
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error getting app version code.", th2);
        }
        this.f132h = new e4.r(this.f131g, (e4) B.a());
        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Billing client should have a valid listener but the provided is null.");
        this.f130f = new n0(this.f131g, null, this.f132h);
        this.f148z = jVar;
        this.f131g.getPackageName();
    }
}
