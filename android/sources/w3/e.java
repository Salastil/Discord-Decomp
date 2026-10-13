package w3;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.PowerManager;
import androidx.appcompat.widget.b4;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.foreground.SystemForegroundService;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import jc.b0;
import nd.v;

/* loaded from: classes.dex */
public final class e implements d4.a {

    /* renamed from: l, reason: collision with root package name */
    public static final String f19635l = v3.p.f("Processor");

    /* renamed from: b, reason: collision with root package name */
    public final Context f19636b;

    /* renamed from: c, reason: collision with root package name */
    public final v3.b f19637c;

    /* renamed from: d, reason: collision with root package name */
    public final h4.b f19638d;

    /* renamed from: e, reason: collision with root package name */
    public final WorkDatabase f19639e;

    /* renamed from: g, reason: collision with root package name */
    public final HashMap f19641g = new HashMap();

    /* renamed from: f, reason: collision with root package name */
    public final HashMap f19640f = new HashMap();

    /* renamed from: i, reason: collision with root package name */
    public final HashSet f19643i = new HashSet();
    public final ArrayList j = new ArrayList();
    public PowerManager.WakeLock a = null;
    public final Object k = new Object();

    /* renamed from: h, reason: collision with root package name */
    public final HashMap f19642h = new HashMap();

    public e(Context context, v3.b bVar, h4.b bVar2, WorkDatabase workDatabase) {
        this.f19636b = context;
        this.f19637c = bVar;
        this.f19638d = bVar2;
        this.f19639e = workDatabase;
    }

    public static boolean d(String str, r rVar, int i5) {
        if (rVar == null) {
            v3.p.d().a(f19635l, "WorkerWrapper could not be found for " + str);
            return false;
        }
        rVar.N = i5;
        rVar.h();
        rVar.M.cancel(true);
        if (rVar.f19675v == null || !(rVar.M.f9110d instanceof g4.a)) {
            v3.p.d().a(r.O, "WorkSpec " + rVar.f19674i + " is already done. Not interrupting.");
        } else {
            rVar.f19675v.e(i5);
        }
        v3.p.d().a(f19635l, "WorkerWrapper interrupted for " + str);
        return true;
    }

    public final void a(c cVar) {
        synchronized (this.k) {
            this.j.add(cVar);
        }
    }

    public final r b(String str) {
        r rVar = (r) this.f19640f.remove(str);
        boolean z5 = rVar != null;
        if (!z5) {
            rVar = (r) this.f19641g.remove(str);
        }
        this.f19642h.remove(str);
        if (z5) {
            synchronized (this.k) {
                try {
                    if (this.f19640f.isEmpty()) {
                        Context context = this.f19636b;
                        String str2 = d4.b.G;
                        Intent intent = new Intent(context, (Class<?>) SystemForegroundService.class);
                        intent.setAction("ACTION_STOP_FOREGROUND");
                        try {
                            this.f19636b.startService(intent);
                        } catch (Throwable th2) {
                            v3.p.d().c(f19635l, "Unable to stop foreground service", th2);
                        }
                        PowerManager.WakeLock wakeLock = this.a;
                        if (wakeLock != null) {
                            wakeLock.release();
                            this.a = null;
                        }
                    }
                } finally {
                }
            }
        }
        return rVar;
    }

    public final r c(String str) {
        r rVar = (r) this.f19640f.get(str);
        return rVar == null ? (r) this.f19641g.get(str) : rVar;
    }

    public final void e(c cVar) {
        synchronized (this.k) {
            this.j.remove(cVar);
        }
    }

    public final void f(String str, v3.g gVar) {
        synchronized (this.k) {
            try {
                v3.p.d().e(f19635l, "Moving WorkSpec (" + str + ") to the foreground");
                r rVar = (r) this.f19641g.remove(str);
                if (rVar != null) {
                    if (this.a == null) {
                        PowerManager.WakeLock a = f4.o.a(this.f19636b, "ProcessorForegroundLck");
                        this.a = a;
                        a.acquire();
                    }
                    this.f19640f.put(str, rVar);
                    Intent c6 = d4.b.c(this.f19636b, ks.n.m(rVar.f19674i), gVar);
                    Context context = this.f19636b;
                    if (Build.VERSION.SDK_INT >= 26) {
                        y0.a.c(context, c6);
                    } else {
                        context.startService(c6);
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean g(j jVar, e4.e eVar) {
        boolean z5;
        e4.j jVar2 = jVar.a;
        String str = jVar2.a;
        ArrayList arrayList = new ArrayList();
        e4.o oVar = (e4.o) this.f19639e.n(new com.facebook.react.runtime.p(this, arrayList, str));
        if (oVar == null) {
            v3.p.d().g(f19635l, "Didn't find WorkSpec for id " + jVar2);
            this.f19638d.f9518d.execute(new b0(28, this, jVar2));
            return false;
        }
        synchronized (this.k) {
            try {
                synchronized (this.k) {
                    z5 = c(str) != null;
                }
                if (z5) {
                    Set set = (Set) this.f19642h.get(str);
                    if (((j) set.iterator().next()).a.f7956b == jVar2.f7956b) {
                        set.add(jVar);
                        v3.p.d().a(f19635l, "Work " + jVar2 + " is already enqueued for processing");
                    } else {
                        this.f19638d.f9518d.execute(new b0(28, this, jVar2));
                    }
                    return false;
                }
                if (oVar.f7983t != jVar2.f7956b) {
                    this.f19638d.f9518d.execute(new b0(28, this, jVar2));
                    return false;
                }
                Context context = this.f19636b;
                v3.b bVar = this.f19637c;
                h4.b bVar2 = this.f19638d;
                WorkDatabase workDatabase = this.f19639e;
                b4 b4Var = new b4();
                new e4.e(24);
                b4Var.f927d = context.getApplicationContext();
                b4Var.f929i = bVar2;
                b4Var.f928e = this;
                b4Var.f930v = bVar;
                b4Var.f931w = workDatabase;
                b4Var.f932x = oVar;
                b4Var.f933y = arrayList;
                r rVar = new r(b4Var);
                g4.j jVar3 = rVar.L;
                jVar3.a(new v(this, jVar3, rVar, 4), this.f19638d.f9518d);
                this.f19641g.put(str, rVar);
                HashSet hashSet = new HashSet();
                hashSet.add(jVar);
                this.f19642h.put(str, hashSet);
                this.f19638d.a.execute(rVar);
                v3.p.d().a(f19635l, e.class.getSimpleName() + ": processing " + jVar2);
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
