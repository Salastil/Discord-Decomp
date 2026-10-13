package androidx.work.impl.background.systemjob;

import a5.s;
import android.app.Application;
import android.app.job.JobParameters;
import android.app.job.JobService;
import android.os.Build;
import android.os.PersistableBundle;
import e4.j;
import h4.b;
import java.util.Arrays;
import java.util.HashMap;
import kotlin.jvm.internal.Intrinsics;
import v3.p;
import w3.c;
import w3.e;
import w3.o;
import z3.d;

/* loaded from: classes.dex */
public class SystemJobService extends JobService implements c {

    /* renamed from: w, reason: collision with root package name */
    public static final String f2586w = p.f("SystemJobService");

    /* renamed from: d, reason: collision with root package name */
    public o f2587d;

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f2588e = new HashMap();

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f2589i = new io.sentry.internal.debugmeta.c(24);

    /* renamed from: v, reason: collision with root package name */
    public e4.c f2590v;

    public static j a(JobParameters jobParameters) {
        try {
            PersistableBundle extras = jobParameters.getExtras();
            if (extras == null || !extras.containsKey("EXTRA_WORK_SPEC_ID")) {
                return null;
            }
            return new j(extras.getString("EXTRA_WORK_SPEC_ID"), extras.getInt("EXTRA_WORK_SPEC_GENERATION"));
        } catch (NullPointerException unused) {
            return null;
        }
    }

    @Override // w3.c
    public final void e(j jVar, boolean z5) {
        JobParameters jobParameters;
        p.d().a(f2586w, jVar.a + " executed on JobScheduler");
        synchronized (this.f2588e) {
            jobParameters = (JobParameters) this.f2588e.remove(jVar);
        }
        this.f2589i.R(jVar);
        if (jobParameters != null) {
            jobFinished(jobParameters, z5);
        }
    }

    @Override // android.app.Service
    public final void onCreate() {
        super.onCreate();
        try {
            o a = o.a(getApplicationContext());
            this.f2587d = a;
            e eVar = a.f19665f;
            this.f2590v = new e4.c(eVar, a.f19663d);
            eVar.a(this);
        } catch (IllegalStateException e9) {
            if (!Application.class.equals(getApplication().getClass())) {
                throw new IllegalStateException("WorkManager needs to be initialized via a ContentProvider#onCreate() or an Application#onCreate().", e9);
            }
            p.d().g(f2586w, "Could not find WorkManager instance; this may be because an auto-backup is in progress. Ignoring JobScheduler commands for now. Please make sure that you are initializing WorkManager if you have manually disabled WorkManagerInitializer.");
        }
    }

    @Override // android.app.Service
    public final void onDestroy() {
        super.onDestroy();
        o oVar = this.f2587d;
        if (oVar != null) {
            oVar.f19665f.e(this);
        }
    }

    @Override // android.app.job.JobService
    public final boolean onStartJob(JobParameters jobParameters) {
        if (this.f2587d == null) {
            p.d().a(f2586w, "WorkManager is not initialized; requesting retry.");
            jobFinished(jobParameters, true);
            return false;
        }
        j a = a(jobParameters);
        if (a == null) {
            p.d().b(f2586w, "WorkSpec id not found!");
            return false;
        }
        synchronized (this.f2588e) {
            try {
                if (this.f2588e.containsKey(a)) {
                    p.d().a(f2586w, "Job is already being executed by SystemJobService: " + a);
                    return false;
                }
                p.d().a(f2586w, "onStartJob for " + a);
                this.f2588e.put(a, jobParameters);
                int i5 = Build.VERSION.SDK_INT;
                e4.e eVar = new e4.e(24);
                if (z3.c.b(jobParameters) != null) {
                    eVar.f7944i = Arrays.asList(z3.c.b(jobParameters));
                }
                if (z3.c.a(jobParameters) != null) {
                    eVar.f7943e = Arrays.asList(z3.c.a(jobParameters));
                }
                if (i5 >= 28) {
                    d.a(jobParameters);
                }
                e4.c cVar = this.f2590v;
                w3.j workSpecId = this.f2589i.U(a);
                cVar.getClass();
                Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
                ((b) cVar.f7940i).a(new s((e) cVar.f7939e, workSpecId, eVar));
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // android.app.job.JobService
    public final boolean onStopJob(JobParameters jobParameters) {
        boolean contains;
        if (this.f2587d == null) {
            p.d().a(f2586w, "WorkManager is not initialized; requesting retry.");
            return true;
        }
        j a = a(jobParameters);
        if (a == null) {
            p.d().b(f2586w, "WorkSpec id not found!");
            return false;
        }
        p.d().a(f2586w, "onStopJob for " + a);
        synchronized (this.f2588e) {
            this.f2588e.remove(a);
        }
        w3.j workSpecId = this.f2589i.R(a);
        if (workSpecId != null) {
            int a10 = Build.VERSION.SDK_INT >= 31 ? z3.e.a(jobParameters) : -512;
            e4.c cVar = this.f2590v;
            cVar.getClass();
            Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
            cVar.b1(workSpecId, a10);
        }
        e eVar = this.f2587d.f19665f;
        String str = a.a;
        synchronized (eVar.k) {
            contains = eVar.f19643i.contains(str);
        }
        return !contains;
    }
}
