package a5;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import androidx.core.util.Consumer;
import com.android.billingclient.api.BillingFlowParams;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.QueryProductDetailsParams;
import com.google.android.gms.internal.play_billing.a2;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.a5;
import com.google.android.gms.internal.play_billing.b1;
import com.google.android.gms.internal.play_billing.e4;
import com.google.android.gms.internal.play_billing.u0;
import com.google.android.gms.internal.play_billing.u3;
import com.google.android.gms.internal.play_billing.v0;
import com.google.android.gms.internal.play_billing.w0;
import com.google.android.gms.internal.play_billing.w3;
import com.google.android.gms.internal.play_billing.w4;
import com.google.android.gms.internal.play_billing.x4;
import com.google.android.gms.internal.play_billing.y0;
import com.google.android.gms.internal.play_billing.y1;
import com.google.android.gms.internal.play_billing.y4;
import com.google.android.gms.internal.play_billing.z0;
import com.google.android.gms.internal.play_billing.z4;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* loaded from: classes.dex */
public final class d0 extends b {
    public final Context E;
    public volatile int F;
    public volatile com.google.android.gms.internal.play_billing.j G;
    public volatile c0 H;
    public volatile ScheduledExecutorService I;

    public d0(io.sentry.hints.j jVar, Context context, a aVar) {
        super(jVar, context, aVar);
        this.F = 0;
        this.E = context;
    }

    public final synchronized boolean M() {
        if (this.F == 2 && this.G != null) {
            if (this.H != null) {
                return true;
            }
        }
        return false;
    }

    public final y0 N(int i5) {
        if (!M()) {
            com.google.android.gms.internal.play_billing.s.h("BillingClientTesting", "Billing Override Service is not ready.");
            O(94, 28, g0.a(-1, "Billing Override Service connection is disconnected."));
            return new w0(0);
        }
        a0 a0Var = new a0(i5, 0, this);
        x4 x4Var = new x4();
        x4Var.f5889c = new a5();
        z4 z4Var = new z4(x4Var);
        x4Var.f5888b = z4Var;
        x4Var.a = a0.class;
        try {
            a0Var.I(x4Var);
            x4Var.a = "billingOverrideService.getBillingOverride";
            return z4Var;
        } catch (Exception e9) {
            y1 y1Var = new y1(e9);
            a2 a2Var = w4.f5875x;
            y4 y4Var = z4Var.f5897e;
            if (a2Var.w(y4Var, null, y1Var)) {
                w4.d(y4Var);
            }
            return z4Var;
        }
    }

    public final void O(int i5, int i6, BillingResult billingResult) {
        int i10 = e0.a;
        u3 b10 = e0.b(i5, i6, billingResult, null, a4.BROADCAST_ACTION_UNSPECIFIED);
        Objects.requireNonNull(b10, "ApiFailure should not be null");
        this.f132h.w(b10);
    }

    public final void P(int i5) {
        int i6 = e0.a;
        w3 c6 = e0.c(i5, a4.BROADCAST_ACTION_UNSPECIFIED);
        Objects.requireNonNull(c6, "ApiSuccess should not be null");
        e4.r rVar = this.f132h;
        rVar.getClass();
        try {
            rVar.H(c6, (e4) rVar.f8000e);
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public final void Q(int i5, Consumer consumer, Runnable runnable) {
        ScheduledExecutorService scheduledExecutorService;
        y0 N = N(i5);
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        synchronized (this) {
            try {
                if (this.I == null) {
                    this.I = Executors.newSingleThreadScheduledExecutor();
                }
                scheduledExecutorService = this.I;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (!N.isDone()) {
            b1 b1Var = new b1();
            b1Var.E = N;
            z0 z0Var = new z0();
            z0Var.f5895d = b1Var;
            b1Var.F = scheduledExecutorService.schedule(z0Var, 28500L, timeUnit);
            N.b(z0Var, u0.f5848d);
            N = b1Var;
        }
        xe.k kVar = new xe.k(this, i5, consumer, runnable);
        N.b(new v0(0, N, kVar), i());
    }

    @Override // a5.b, com.android.billingclient.api.BillingClient
    public final void a(final h hVar, final com.discord.billing.a aVar) {
        Q(4, new Consumer() { // from class: a5.z
            @Override // androidx.core.util.Consumer
            public final void accept(Object obj) {
                String str = hVar.f173b;
                aVar.a((BillingResult) obj, str);
            }
        }, new s(this, hVar, aVar));
    }

    @Override // a5.b, com.android.billingclient.api.BillingClient
    public final void b() {
        synchronized (this) {
            P(27);
            try {
                try {
                    if (this.H != null && this.G != null) {
                        com.google.android.gms.internal.play_billing.s.g("BillingClientTesting", "Unbinding from Billing Override Service.");
                        this.E.unbindService(this.H);
                        this.H = new c0(0, this);
                    }
                    this.G = null;
                    if (this.I != null) {
                        this.I.shutdownNow();
                        this.I = null;
                    }
                } catch (RuntimeException e9) {
                    com.google.android.gms.internal.play_billing.s.i("BillingClientTesting", "There was an exception while ending Billing Override Service connection!", e9);
                }
                this.F = 3;
            } catch (Throwable th2) {
                this.F = 3;
                throw th2;
            }
        }
        super.b();
    }

    @Override // a5.b, com.android.billingclient.api.BillingClient
    public final BillingResult e(Activity activity, BillingFlowParams billingFlowParams) {
        int i5 = 0;
        try {
            i5 = ((Integer) N(2).get(28500L, TimeUnit.MILLISECONDS)).intValue();
        } catch (TimeoutException e9) {
            O(102, 28, g0.f172r);
            com.google.android.gms.internal.play_billing.s.i("BillingClientTesting", "Asynchronous call to Billing Override Service timed out.", e9);
        } catch (Exception e10) {
            if (e10 instanceof InterruptedException) {
                Thread.currentThread().interrupt();
            }
            O(95, 28, g0.f172r);
            com.google.android.gms.internal.play_billing.s.i("BillingClientTesting", "An error occurred while retrieving billing override.", e10);
        }
        if (i5 > 0) {
            BillingResult a = g0.a(i5, "Billing override value was set by a license tester.");
            O(93, 2, a);
            J(a);
            return a;
        }
        try {
            return super.e(activity, billingFlowParams);
        } catch (Exception e11) {
            BillingResult billingResult = g0.f162f;
            O(103, 2, billingResult);
            com.google.android.gms.internal.play_billing.s.i("BillingClientTesting", "An internal error occurred.", e11);
            return billingResult;
        }
    }

    @Override // a5.b, com.android.billingclient.api.BillingClient
    public final void f(QueryProductDetailsParams queryProductDetailsParams, k kVar) {
        Q(7, new y(0, kVar), new s(this, queryProductDetailsParams, kVar, 1));
    }

    @Override // a5.b, com.android.billingclient.api.BillingClient
    public final void h(c cVar) {
        synchronized (this) {
            if (M()) {
                com.google.android.gms.internal.play_billing.s.g("BillingClientTesting", "Billing Override Service connection is valid. No need to re-initialize.");
                P(26);
            } else {
                int i5 = 1;
                if (this.F == 1) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClientTesting", "Client is already in the process of connecting to Billing Override Service.");
                } else if (this.F == 3) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClientTesting", "Billing Override Service Client was already closed and can't be reused. Please create another instance.");
                    O(38, 26, g0.a(-1, "Billing Override Service connection is disconnected."));
                } else {
                    this.F = 1;
                    com.google.android.gms.internal.play_billing.s.g("BillingClientTesting", "Starting Billing Override Service setup.");
                    this.H = new c0(0, this);
                    Intent intent = new Intent("com.google.android.apps.play.billingtestcompanion.BillingOverrideService.BIND");
                    intent.setPackage("com.google.android.apps.play.billingtestcompanion");
                    Context context = this.E;
                    List<ResolveInfo> queryIntentServices = context.getPackageManager().queryIntentServices(intent, 0);
                    if (queryIntentServices == null || queryIntentServices.isEmpty()) {
                        i5 = 41;
                    } else {
                        ServiceInfo serviceInfo = queryIntentServices.get(0).serviceInfo;
                        if (serviceInfo != null) {
                            String str = serviceInfo.packageName;
                            String str2 = serviceInfo.name;
                            if (!Objects.equals(str, "com.google.android.apps.play.billingtestcompanion") || str2 == null) {
                                com.google.android.gms.internal.play_billing.s.h("BillingClientTesting", "The device doesn't have valid Play Billing Lab.");
                            } else {
                                ComponentName componentName = new ComponentName(str, str2);
                                Intent intent2 = new Intent(intent);
                                intent2.setComponent(componentName);
                                if (context.bindService(intent2, this.H, 1)) {
                                    com.google.android.gms.internal.play_billing.s.g("BillingClientTesting", "Billing Override Service was bonded successfully.");
                                } else {
                                    com.google.android.gms.internal.play_billing.s.h("BillingClientTesting", "Connection to Billing Override Service is blocked.");
                                }
                            }
                            i5 = 39;
                        }
                    }
                    this.F = 0;
                    com.google.android.gms.internal.play_billing.s.g("BillingClientTesting", "Billing Override Service unavailable on device.");
                    O(i5, 26, g0.a(2, "Billing Override Service unavailable on device."));
                }
            }
        }
        F(cVar);
    }

    public d0(io.sentry.hints.j jVar, Context context, com.discord.billing.b bVar, a aVar) {
        super(jVar, context, bVar, aVar);
        this.F = 0;
        this.E = context;
    }
}
