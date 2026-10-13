package a5;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import java.util.Objects;

/* loaded from: classes.dex */
public final class c0 implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f150d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f151e;

    public /* synthetic */ c0(int i5, Object obj) {
        this.f150d = i5;
        this.f151e = obj;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        com.google.android.gms.internal.play_billing.j gVar;
        switch (this.f150d) {
            case 0:
                com.google.android.gms.internal.play_billing.s.g("BillingClientTesting", "Billing Override Service connected.");
                d0 d0Var = (d0) this.f151e;
                int i5 = com.google.android.gms.internal.play_billing.h.f5745g;
                if (iBinder == null) {
                    gVar = null;
                } else {
                    IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.apps.play.billingtestcompanion.aidl.IBillingOverrideService");
                    gVar = queryLocalInterface instanceof com.google.android.gms.internal.play_billing.j ? (com.google.android.gms.internal.play_billing.j) queryLocalInterface : new com.google.android.gms.internal.play_billing.g(iBinder, "com.google.android.apps.play.billingtestcompanion.aidl.IBillingOverrideService", 0);
                }
                d0Var.G = gVar;
                d0Var.F = 2;
                d0Var.P(26);
                break;
            case 1:
                ai.j jVar = (ai.j) this.f151e;
                jVar.f624b.b("ServiceConnectionImpl.onServiceConnected(%s)", componentName);
                jVar.a().post(new ai.h(this, iBinder));
                break;
            case 2:
                dg.g gVar2 = (dg.g) this.f151e;
                gVar2.f7550b.c("ServiceConnectionImpl.onServiceConnected(%s)", componentName);
                gVar2.a().post(new dg.f(this, iBinder));
                break;
            case 3:
                di.c cVar = (di.c) this.f151e;
                cVar.f7567b.b("ServiceConnectionImpl.onServiceConnected(%s)", componentName);
                cVar.a().post(new di.a(this, iBinder));
                break;
            default:
                uh.q qVar = (uh.q) this.f151e;
                qVar.f18921b.e("ServiceConnectionImpl.onServiceConnected(%s)", componentName);
                qVar.a().post(new th.g(this, iBinder));
                break;
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        switch (this.f150d) {
            case 0:
                com.google.android.gms.internal.play_billing.s.h("BillingClientTesting", "Billing Override Service disconnected.");
                d0 d0Var = (d0) this.f151e;
                d0Var.G = null;
                d0Var.F = 0;
                break;
            case 1:
                ai.j jVar = (ai.j) this.f151e;
                jVar.f624b.b("ServiceConnectionImpl.onServiceDisconnected(%s)", componentName);
                jVar.a().post(new ai.i(1, this));
                break;
            case 2:
                dg.g gVar = (dg.g) this.f151e;
                gVar.f7550b.c("ServiceConnectionImpl.onServiceDisconnected(%s)", componentName);
                gVar.a().post(new dg.e(this));
                break;
            case 3:
                di.c cVar = (di.c) this.f151e;
                cVar.f7567b.b("ServiceConnectionImpl.onServiceDisconnected(%s)", componentName);
                cVar.a().post(new di.b(this));
                break;
            default:
                uh.q qVar = (uh.q) this.f151e;
                qVar.f18921b.e("ServiceConnectionImpl.onServiceDisconnected(%s)", componentName);
                qVar.a().post(new uh.p(1, this));
                break;
        }
    }

    public /* synthetic */ c0(dg.g gVar) {
        this.f150d = 2;
        Objects.requireNonNull(gVar);
        this.f151e = gVar;
    }

    public /* synthetic */ c0(di.c cVar) {
        this.f150d = 3;
        Objects.requireNonNull(cVar);
        this.f151e = cVar;
    }
}
