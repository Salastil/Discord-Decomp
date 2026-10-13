package y3;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.PowerManager;
import androidx.appcompat.widget.v0;
import androidx.work.impl.background.systemalarm.SystemAlarmService;
import e4.o;
import f4.l;
import f4.u;
import f4.v;
import f4.w;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.x0;
import v3.p;
import w3.j;

/* loaded from: classes.dex */
public final class g implements a4.e, u {
    public static final String L = p.f("DelayMetCommandHandler");
    public final l E;
    public final h4.a F;
    public PowerManager.WakeLock G;
    public boolean H;
    public final j I;
    public final CoroutineDispatcher J;
    public volatile x0 K;

    /* renamed from: d, reason: collision with root package name */
    public final Context f20635d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20636e;

    /* renamed from: i, reason: collision with root package name */
    public final e4.j f20637i;

    /* renamed from: v, reason: collision with root package name */
    public final i f20638v;

    /* renamed from: w, reason: collision with root package name */
    public final a4.i f20639w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f20640x;

    /* renamed from: y, reason: collision with root package name */
    public int f20641y;

    public g(Context context, int i5, i iVar, j jVar) {
        this.f20635d = context;
        this.f20636e = i5;
        this.f20638v = iVar;
        this.f20637i = jVar.a;
        this.I = jVar;
        c4.l lVar = iVar.f20648w.j;
        h4.b bVar = iVar.f20645e;
        this.E = bVar.a;
        this.F = bVar.f9518d;
        this.J = bVar.f9516b;
        this.f20639w = new a4.i(lVar);
        this.H = false;
        this.f20641y = 0;
        this.f20640x = new Object();
    }

    public static void a(g gVar) {
        boolean z5;
        int i5 = gVar.f20636e;
        h4.a aVar = gVar.F;
        Context context = gVar.f20635d;
        String str = L;
        i iVar = gVar.f20638v;
        e4.j jVar = gVar.f20637i;
        String str2 = jVar.a;
        if (gVar.f20641y >= 2) {
            p.d().a(str, "Already stopped work for " + str2);
            return;
        }
        gVar.f20641y = 2;
        p.d().a(str, "Stopping work for WorkSpec " + str2);
        Intent intent = new Intent(context, (Class<?>) SystemAlarmService.class);
        intent.setAction("ACTION_STOP_WORK");
        c.c(intent, jVar);
        aVar.execute(new v0(iVar, intent, i5, 5));
        w3.e eVar = iVar.f20647v;
        String str3 = jVar.a;
        synchronized (eVar.k) {
            z5 = eVar.c(str3) != null;
        }
        if (!z5) {
            p.d().a(str, "Processor does not have WorkSpec " + str2 + ". No need to reschedule");
            return;
        }
        p.d().a(str, "WorkSpec " + str2 + " needs to be rescheduled");
        Intent intent2 = new Intent(context, (Class<?>) SystemAlarmService.class);
        intent2.setAction("ACTION_SCHEDULE_WORK");
        c.c(intent2, jVar);
        aVar.execute(new v0(iVar, intent2, i5, 5));
    }

    public static void c(g gVar) {
        if (gVar.f20641y != 0) {
            p.d().a(L, "Already started work for " + gVar.f20637i);
            return;
        }
        gVar.f20641y = 1;
        p.d().a(L, "onAllConstraintsMet for " + gVar.f20637i);
        if (!gVar.f20638v.f20647v.g(gVar.I, null)) {
            gVar.d();
            return;
        }
        w wVar = gVar.f20638v.f20646i;
        e4.j jVar = gVar.f20637i;
        synchronized (wVar.f8376d) {
            p.d().a(w.f8373e, "Starting timer for " + jVar);
            wVar.a(jVar);
            v vVar = new v(wVar, jVar);
            wVar.f8374b.put(jVar, vVar);
            wVar.f8375c.put(jVar, gVar);
            ((Handler) wVar.a.f17275e).postDelayed(vVar, 600000L);
        }
    }

    @Override // a4.e
    public final void b(o oVar, a4.c cVar) {
        boolean z5 = cVar instanceof a4.a;
        l lVar = this.E;
        if (z5) {
            lVar.execute(new f(this, 1));
        } else {
            lVar.execute(new f(this, 0));
        }
    }

    public final void d() {
        synchronized (this.f20640x) {
            try {
                if (this.K != null) {
                    this.K.f(null);
                }
                this.f20638v.f20646i.a(this.f20637i);
                PowerManager.WakeLock wakeLock = this.G;
                if (wakeLock != null && wakeLock.isHeld()) {
                    p.d().a(L, "Releasing wakelock " + this.G + "for WorkSpec " + this.f20637i);
                    this.G.release();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void e() {
        String str = this.f20637i.a;
        Context context = this.f20635d;
        StringBuilder p3 = k0.d.p(str, " (");
        p3.append(this.f20636e);
        p3.append(")");
        this.G = f4.o.a(context, p3.toString());
        p d6 = p.d();
        String str2 = L;
        d6.a(str2, "Acquiring wakelock " + this.G + "for WorkSpec " + str);
        this.G.acquire();
        o n6 = this.f20638v.f20648w.f19662c.t().n(str);
        if (n6 == null) {
            this.E.execute(new f(this, 0));
            return;
        }
        boolean b10 = n6.b();
        this.H = b10;
        if (b10) {
            this.K = a4.l.a(this.f20639w, n6, this.J, this);
            return;
        }
        p.d().a(str2, "No constraints for " + str);
        this.E.execute(new f(this, 1));
    }

    public final void f(boolean z5) {
        p d6 = p.d();
        StringBuilder sb2 = new StringBuilder("onExecuted ");
        e4.j jVar = this.f20637i;
        sb2.append(jVar);
        sb2.append(", ");
        sb2.append(z5);
        d6.a(L, sb2.toString());
        d();
        int i5 = this.f20636e;
        i iVar = this.f20638v;
        h4.a aVar = this.F;
        Context context = this.f20635d;
        if (z5) {
            Intent intent = new Intent(context, (Class<?>) SystemAlarmService.class);
            intent.setAction("ACTION_SCHEDULE_WORK");
            c.c(intent, jVar);
            aVar.execute(new v0(iVar, intent, i5, 5));
        }
        if (this.H) {
            Intent intent2 = new Intent(context, (Class<?>) SystemAlarmService.class);
            intent2.setAction("ACTION_CONSTRAINTS_CHANGED");
            aVar.execute(new v0(iVar, intent2, i5, 5));
        }
    }
}
