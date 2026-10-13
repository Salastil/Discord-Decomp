package a5;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.DeadObjectException;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import com.android.billingclient.api.BillingResult;
import com.google.android.gms.internal.play_billing.a2;
import com.google.android.gms.internal.play_billing.q4;
import com.google.android.gms.internal.play_billing.r4;
import com.google.android.gms.internal.play_billing.s4;
import com.google.android.gms.internal.play_billing.t3;
import com.google.android.gms.internal.play_billing.t4;
import com.google.android.gms.internal.play_billing.u3;
import com.google.android.gms.internal.play_billing.u4;
import com.google.android.gms.internal.play_billing.v3;
import com.google.android.gms.internal.play_billing.w3;
import com.google.android.gms.internal.play_billing.x3;
import com.google.android.gms.internal.play_billing.y3;
import com.google.android.gms.internal.play_billing.z3;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public final class v implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final c f227d;

    /* renamed from: e, reason: collision with root package name */
    public final com.google.android.gms.internal.play_billing.n f228e;

    /* renamed from: i, reason: collision with root package name */
    public final com.google.android.gms.internal.play_billing.n f229i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ b f230v;

    public v(b bVar, c cVar) {
        this.f230v = bVar;
        a2 a2Var = bVar.D;
        this.f228e = new com.google.android.gms.internal.play_billing.n(a2Var);
        this.f229i = new com.google.android.gms.internal.play_billing.n(a2Var);
        this.f227d = cVar;
    }

    public final Long a(boolean z5) {
        try {
            if (z5) {
                synchronized (this.f230v.a) {
                    try {
                        com.google.android.gms.internal.play_billing.n nVar = this.f228e;
                        if (!nVar.f5774b) {
                            return null;
                        }
                        long d6 = nVar.a.d();
                        if (!nVar.f5774b) {
                            throw new IllegalStateException("This stopwatch is already stopped.");
                        }
                        nVar.f5774b = false;
                        long j = (d6 - nVar.f5776d) + nVar.f5775c;
                        nVar.f5775c = j;
                        return Long.valueOf(TimeUnit.MILLISECONDS.convert(j, TimeUnit.NANOSECONDS));
                    } finally {
                    }
                }
            }
            synchronized (this.f230v.a) {
                try {
                    com.google.android.gms.internal.play_billing.n nVar2 = this.f229i;
                    if (!nVar2.f5774b) {
                        return null;
                    }
                    long d7 = nVar2.a.d();
                    if (!nVar2.f5774b) {
                        throw new IllegalStateException("This stopwatch is already stopped.");
                    }
                    nVar2.f5774b = false;
                    long j5 = (d7 - nVar2.f5776d) + nVar2.f5775c;
                    nVar2.f5775c = j5;
                    return Long.valueOf(TimeUnit.MILLISECONDS.convert(j5, TimeUnit.NANOSECONDS));
                } finally {
                }
            }
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception getting connection establishment duration.", th2);
            return null;
        }
        com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception getting connection establishment duration.", th2);
        return null;
    }

    public final void b(BillingResult billingResult, int i5, String str, boolean z5, int i6) {
        try {
            x3 s2 = y3.s();
            int i10 = billingResult.a;
            s2.c();
            y3.r((y3) s2.f5728e, i10);
            String str2 = billingResult.f3601c;
            s2.c();
            y3.u((y3) s2.f5728e, str2);
            s2.c();
            y3.x((y3) s2.f5728e, i5);
            s2.c();
            y3.v((y3) s2.f5728e, i6);
            if (str != null) {
                s2.c();
                y3.t((y3) s2.f5728e, str);
            }
            Long a = a(z5);
            b bVar = this.f230v;
            if (!z5) {
                q4 r5 = r4.r();
                r5.c();
                r4.s((r4) r5.f5728e, (y3) s2.a());
                if (a != null) {
                    long longValue = a.longValue();
                    r5.c();
                    r4.t((r4) r5.f5728e, longValue);
                }
                bVar.f132h.E((r4) r5.a());
                return;
            }
            t4 r7 = u4.r();
            r7.e(false);
            r7.f();
            r7.c();
            u4.v((u4) r7.f5728e, i6);
            if (a != null) {
                long longValue2 = a.longValue();
                r7.c();
                u4.u((u4) r7.f5728e, longValue2);
            }
            t3 u5 = u3.u();
            u5.e(s2);
            u5.c();
            u3.t((u3) u5.f5728e, 6);
            u5.f(r7);
            bVar.B((u3) u5.a());
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
    }

    public final void c(int i5, boolean z5) {
        try {
            Long a = a(z5);
            b bVar = this.f230v;
            if (!z5) {
                q4 r5 = r4.r();
                x3 s2 = y3.s();
                s2.c();
                y3.r((y3) s2.f5728e, 0);
                s2.c();
                y3.v((y3) s2.f5728e, i5);
                r5.c();
                r4.s((r4) r5.f5728e, (y3) s2.a());
                if (a != null) {
                    long longValue = a.longValue();
                    r5.c();
                    r4.t((r4) r5.f5728e, longValue);
                }
                bVar.f132h.E((r4) r5.a());
                return;
            }
            v3 s5 = w3.s();
            s5.c();
            w3.r((w3) s5.f5728e, 6);
            t4 r7 = u4.r();
            r7.e(false);
            r7.f();
            r7.c();
            u4.v((u4) r7.f5728e, i5);
            if (a != null) {
                long longValue2 = a.longValue();
                r7.c();
                u4.u((u4) r7.f5728e, longValue2);
            }
            s5.c();
            w3.w((w3) s5.f5728e, (u4) r7.a());
            bVar.C((w3) s5.a());
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
    }

    public final void d(BillingResult billingResult) {
        b bVar = this.f230v;
        synchronized (bVar.a) {
            try {
                if (bVar.f126b == 3) {
                    return;
                }
                try {
                    this.f227d.onBillingSetupFinished(billingResult);
                } catch (Throwable th2) {
                    com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while calling onBillingSetupFinished.", th2);
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
    }

    public final void e(Exception exc, boolean z5, int i5) {
        com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while invoking initialize AIDL method", exc);
        boolean z6 = exc instanceof DeadObjectException;
        int i6 = z6 ? 132 : exc instanceof RemoteException ? 134 : exc instanceof SecurityException ? 133 : 131;
        String a = e0.a(exc);
        this.f230v.E(0);
        b(z6 ? g0.f164h : g0.f162f, i6, a, z5, i5);
        d(z6 ? g0.f164h : g0.f162f);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0045  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0048  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x002c  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0026  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(Exception exc, boolean z5) {
        int i5;
        int i6;
        com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while checking if billing is supported; try to reconnect", exc);
        boolean z6 = exc instanceof DeadObjectException;
        if (z6) {
            i6 = 91;
        } else if (exc instanceof RemoteException) {
            i6 = 90;
        } else {
            if (!(exc instanceof SecurityException)) {
                i5 = 42;
                String a = !f0.e.a(i5, 42) ? e0.a(exc) : null;
                this.f230v.E(0);
                b(!z6 ? g0.f164h : g0.f162f, i5, a, z5, 0);
                d(!z6 ? g0.f164h : g0.f162f);
            }
            i6 = 92;
        }
        i5 = i6;
        String a10 = !f0.e.a(i5, 42) ? e0.a(exc) : null;
        this.f230v.E(0);
        b(!z6 ? g0.f164h : g0.f162f, i5, a10, z5, 0);
        d(!z6 ? g0.f164h : g0.f162f);
    }

    @Override // android.content.ServiceConnection
    public final void onBindingDied(ComponentName componentName) {
        boolean z5;
        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Billing service died.");
        try {
            b bVar = this.f230v;
            synchronized (bVar.a) {
                z5 = true;
                if (bVar.f126b != 1) {
                    z5 = false;
                }
            }
            if (z5) {
                e4.r rVar = bVar.f132h;
                t3 u5 = u3.u();
                u5.c();
                u3.t((u3) u5.f5728e, 6);
                x3 s2 = y3.s();
                s2.c();
                y3.x((y3) s2.f5728e, 110);
                u5.e(s2);
                t4 r5 = u4.r();
                r5.e(false);
                r5.f();
                u5.f(r5);
                rVar.w((u3) u5.a());
            } else {
                bVar.f132h.B(z3.r());
            }
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
        b bVar2 = this.f230v;
        synchronized (bVar2.a) {
            if (bVar2.f126b != 3 && bVar2.f126b != 0) {
                bVar2.E(0);
                bVar2.G();
                try {
                    this.f227d.onBillingServiceDisconnected();
                } catch (Throwable th3) {
                    com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while calling onBillingServiceDisconnected.", th3);
                }
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        com.google.android.gms.internal.play_billing.d bVar;
        com.google.android.gms.internal.play_billing.s.g("BillingClient", "Billing service connected.");
        b bVar2 = this.f230v;
        synchronized (bVar2.a) {
            try {
                if (bVar2.f126b == 3) {
                    return;
                }
                int i5 = com.google.android.gms.internal.play_billing.c.f5708g;
                int i6 = 0;
                if (iBinder == null) {
                    bVar = null;
                } else {
                    IInterface queryLocalInterface = iBinder.queryLocalInterface("com.android.vending.billing.IInAppBillingService");
                    bVar = queryLocalInterface instanceof com.google.android.gms.internal.play_billing.d ? (com.google.android.gms.internal.play_billing.d) queryLocalInterface : new com.google.android.gms.internal.play_billing.b(iBinder, "com.android.vending.billing.IInAppBillingService", 0);
                }
                bVar2.f133i = bVar;
                if (b.j(new u(i6, this), 30000L, new a3.h(1, this), bVar2.k(), bVar2.i()) == null) {
                    BillingResult n6 = bVar2.n();
                    bVar2.D(25, n6);
                    d(n6);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        boolean z5;
        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Billing service disconnected.");
        try {
            b bVar = this.f230v;
            synchronized (bVar.a) {
                z5 = true;
                if (bVar.f126b != 1) {
                    z5 = false;
                }
            }
            if (z5) {
                e4.r rVar = bVar.f132h;
                t3 u5 = u3.u();
                u5.c();
                u3.t((u3) u5.f5728e, 6);
                x3 s2 = y3.s();
                s2.c();
                y3.x((y3) s2.f5728e, 109);
                u5.e(s2);
                t4 r5 = u4.r();
                r5.e(false);
                r5.f();
                u5.f(r5);
                rVar.w((u3) u5.a());
            } else {
                bVar.f132h.F(s4.r());
            }
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to log.", th2);
        }
        b bVar2 = this.f230v;
        synchronized (bVar2.a) {
            try {
                if (com.facebook.imagepipeline.nativecode.c.f4681e) {
                    if (bVar2.f126b != 3 && bVar2.f126b != 0) {
                        com.google.android.gms.internal.play_billing.n nVar = this.f229i;
                        nVar.f5775c = 0L;
                        nVar.f5774b = false;
                        nVar.a();
                    }
                    return;
                }
                com.google.android.gms.internal.play_billing.n nVar2 = this.f229i;
                nVar2.f5775c = 0L;
                nVar2.f5774b = false;
                nVar2.a();
                if (bVar2.f126b == 3) {
                    return;
                }
                bVar2.E(0);
                try {
                    this.f227d.onBillingServiceDisconnected();
                } catch (Throwable th3) {
                    com.google.android.gms.internal.play_billing.s.i("BillingClient", "Exception while calling onBillingServiceDisconnected.", th3);
                }
            } finally {
            }
        }
    }
}
