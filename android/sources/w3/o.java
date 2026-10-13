package w3;

import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.BroadcastReceiver;
import android.content.Context;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import v3.z;

/* loaded from: classes.dex */
public final class o extends z {
    public static o k;

    /* renamed from: l, reason: collision with root package name */
    public static o f19659l;

    /* renamed from: m, reason: collision with root package name */
    public static final Object f19660m;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final v3.b f19661b;

    /* renamed from: c, reason: collision with root package name */
    public final WorkDatabase f19662c;

    /* renamed from: d, reason: collision with root package name */
    public final h4.b f19663d;

    /* renamed from: e, reason: collision with root package name */
    public final List f19664e;

    /* renamed from: f, reason: collision with root package name */
    public final e f19665f;

    /* renamed from: g, reason: collision with root package name */
    public final u4.c f19666g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f19667h = false;

    /* renamed from: i, reason: collision with root package name */
    public BroadcastReceiver.PendingResult f19668i;
    public final c4.l j;

    static {
        v3.p.f("WorkManagerImpl");
        k = null;
        f19659l = null;
        f19660m = new Object();
    }

    public o(Context context, final v3.b bVar, h4.b bVar2, final WorkDatabase workDatabase, final List list, e eVar, c4.l lVar) {
        Context applicationContext = context.getApplicationContext();
        if (n.a(applicationContext)) {
            throw new IllegalStateException("Cannot initialize WorkManager in direct boot mode");
        }
        v3.p pVar = new v3.p(bVar.f19188g);
        synchronized (v3.p.f19210b) {
            v3.p.f19211c = pVar;
        }
        this.a = applicationContext;
        this.f19663d = bVar2;
        this.f19662c = workDatabase;
        this.f19665f = eVar;
        this.j = lVar;
        this.f19661b = bVar;
        this.f19664e = list;
        this.f19666g = new u4.c(workDatabase);
        final f4.l lVar2 = bVar2.a;
        String str = i.a;
        eVar.a(new c() { // from class: w3.h
            @Override // w3.c
            public final void e(e4.j jVar, boolean z5) {
                lVar2.execute(new com.appsflyer.internal.p(10, list, jVar, bVar, workDatabase));
            }
        });
        bVar2.a(new f4.d(applicationContext, this));
    }

    public static o a(Context context) {
        o oVar;
        Object obj = f19660m;
        synchronized (obj) {
            try {
                synchronized (obj) {
                    oVar = k;
                    if (oVar == null) {
                        oVar = f19659l;
                    }
                }
                return oVar;
            } catch (Throwable th2) {
                throw th2;
            } finally {
            }
        }
        if (oVar != null) {
            return oVar;
        }
        context.getApplicationContext();
        throw new IllegalStateException("WorkManager is not initialized properly.  You have explicitly disabled WorkManagerInitializer in your manifest, have not manually called WorkManager#initialize at this point, and your Application does not implement Configuration.Provider.");
    }

    public final void b() {
        synchronized (f19660m) {
            try {
                this.f19667h = true;
                BroadcastReceiver.PendingResult pendingResult = this.f19668i;
                if (pendingResult != null) {
                    pendingResult.finish();
                    this.f19668i = null;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void c() {
        ArrayList e9;
        String str = z3.b.f21128x;
        Context context = this.a;
        JobScheduler jobScheduler = (JobScheduler) context.getSystemService("jobscheduler");
        if (jobScheduler != null && (e9 = z3.b.e(context, jobScheduler)) != null && !e9.isEmpty()) {
            Iterator it = e9.iterator();
            while (it.hasNext()) {
                z3.b.b(jobScheduler, ((JobInfo) it.next()).getId());
            }
        }
        WorkDatabase workDatabase = this.f19662c;
        e4.p t5 = workDatabase.t();
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) t5.a;
        workDatabase_Impl.b();
        e4.h hVar = (e4.h) t5.f7996m;
        h3.j a = hVar.a();
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
            workDatabase_Impl.k();
            hVar.e(a);
            i.b(this.f19661b, workDatabase, this.f19664e);
        } catch (Throwable th2) {
            workDatabase_Impl.k();
            hVar.e(a);
            throw th2;
        }
    }
}
