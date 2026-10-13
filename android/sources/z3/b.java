package z3;

import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.os.PersistableBundle;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import androidx.work.impl.background.systemjob.SystemJobService;
import e4.h;
import e4.i;
import e4.j;
import e4.o;
import f4.f;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;
import ks.n;
import v3.p;
import v3.x;
import v3.y;
import w3.g;

/* loaded from: classes.dex */
public final class b implements g {

    /* renamed from: x, reason: collision with root package name */
    public static final String f21128x = p.f("SystemJobScheduler");

    /* renamed from: d, reason: collision with root package name */
    public final Context f21129d;

    /* renamed from: e, reason: collision with root package name */
    public final JobScheduler f21130e;

    /* renamed from: i, reason: collision with root package name */
    public final a f21131i;

    /* renamed from: v, reason: collision with root package name */
    public final WorkDatabase f21132v;

    /* renamed from: w, reason: collision with root package name */
    public final v3.b f21133w;

    public b(Context context, WorkDatabase workDatabase, v3.b bVar) {
        JobScheduler jobScheduler = (JobScheduler) context.getSystemService("jobscheduler");
        a aVar = new a(context, bVar.f19184c);
        this.f21129d = context;
        this.f21130e = jobScheduler;
        this.f21131i = aVar;
        this.f21132v = workDatabase;
        this.f21133w = bVar;
    }

    public static void b(JobScheduler jobScheduler, int i5) {
        try {
            jobScheduler.cancel(i5);
        } catch (Throwable th2) {
            p.d().c(f21128x, String.format(Locale.getDefault(), "Exception while trying to cancel job (%d)", Integer.valueOf(i5)), th2);
        }
    }

    public static ArrayList e(Context context, JobScheduler jobScheduler) {
        List<JobInfo> list;
        try {
            list = jobScheduler.getAllPendingJobs();
        } catch (Throwable th2) {
            p.d().c(f21128x, "getAllPendingJobs() is not reliable on this device.", th2);
            list = null;
        }
        if (list == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(list.size());
        ComponentName componentName = new ComponentName(context, (Class<?>) SystemJobService.class);
        for (JobInfo jobInfo : list) {
            if (componentName.equals(jobInfo.getService())) {
                arrayList.add(jobInfo);
            }
        }
        return arrayList;
    }

    public static j f(JobInfo jobInfo) {
        PersistableBundle extras = jobInfo.getExtras();
        if (extras == null) {
            return null;
        }
        try {
            if (!extras.containsKey("EXTRA_WORK_SPEC_ID")) {
                return null;
            }
            return new j(extras.getString("EXTRA_WORK_SPEC_ID"), extras.getInt("EXTRA_WORK_SPEC_GENERATION", 0));
        } catch (NullPointerException unused) {
            return null;
        }
    }

    @Override // w3.g
    public final boolean a() {
        return true;
    }

    @Override // w3.g
    public final void c(String str) {
        ArrayList arrayList;
        Context context = this.f21129d;
        JobScheduler jobScheduler = this.f21130e;
        ArrayList e9 = e(context, jobScheduler);
        if (e9 == null) {
            arrayList = null;
        } else {
            ArrayList arrayList2 = new ArrayList(2);
            Iterator it = e9.iterator();
            while (it.hasNext()) {
                JobInfo jobInfo = (JobInfo) it.next();
                j f2 = f(jobInfo);
                if (f2 != null && str.equals(f2.a)) {
                    arrayList2.add(Integer.valueOf(jobInfo.getId()));
                }
            }
            arrayList = arrayList2;
        }
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            b(jobScheduler, ((Integer) it2.next()).intValue());
        }
        i p3 = this.f21132v.p();
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) p3.f7952d;
        workDatabase_Impl.b();
        h hVar = (h) p3.f7955v;
        h3.j a = hVar.a();
        if (str == null) {
            a.S(1);
        } else {
            a.n(1, str);
        }
        workDatabase_Impl.c();
        try {
            a.c();
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
            hVar.e(a);
        }
    }

    @Override // w3.g
    public final void d(o... oVarArr) {
        int intValue;
        v3.b bVar = this.f21133w;
        WorkDatabase workDatabase = this.f21132v;
        u4.b bVar2 = new u4.b(workDatabase);
        for (o oVar : oVarArr) {
            workDatabase.c();
            try {
                e4.p t5 = workDatabase.t();
                String str = oVar.a;
                o n6 = t5.n(str);
                String str2 = f21128x;
                if (n6 == null) {
                    p.d().g(str2, "Skipping scheduling " + str + " because it's no longer in the DB");
                    workDatabase.o();
                } else if (n6.f7967b != y.f19224d) {
                    p.d().g(str2, "Skipping scheduling " + str + " because it is no longer enqueued");
                    workDatabase.o();
                } else {
                    j generationalId = n.m(oVar);
                    e4.g p3 = workDatabase.p().p(generationalId);
                    if (p3 != null) {
                        intValue = p3.f7950c;
                    } else {
                        bVar.getClass();
                        Object n10 = ((WorkDatabase) bVar2.f18810e).n(new f(bVar.f19189h, 0, bVar2));
                        Intrinsics.checkNotNullExpressionValue(n10, "workDatabase.runInTransa…            id\n        })");
                        intValue = ((Number) n10).intValue();
                    }
                    if (p3 == null) {
                        Intrinsics.checkNotNullParameter(generationalId, "generationalId");
                        workDatabase.p().q(new e4.g(generationalId.a, generationalId.f7956b, intValue));
                    }
                    g(oVar, intValue);
                    workDatabase.o();
                }
            } finally {
                workDatabase.k();
            }
        }
    }

    public final void g(o oVar, int i5) {
        JobScheduler jobScheduler = this.f21130e;
        JobInfo a = this.f21131i.a(oVar, i5);
        p d6 = p.d();
        StringBuilder sb2 = new StringBuilder("Scheduling work ID ");
        String str = oVar.a;
        sb2.append(str);
        sb2.append("Job ID ");
        sb2.append(i5);
        String sb3 = sb2.toString();
        String str2 = f21128x;
        d6.a(str2, sb3);
        try {
            if (jobScheduler.schedule(a) == 0) {
                p.d().g(str2, "Unable to schedule work ID " + str);
                if (oVar.f7980q && oVar.f7981r == x.f19221d) {
                    oVar.f7980q = false;
                    p.d().a(str2, "Scheduling a non-expedited job (work ID " + str + ")");
                    g(oVar, i5);
                }
            }
        } catch (IllegalStateException e9) {
            ArrayList e10 = e(this.f21129d, jobScheduler);
            String format = String.format(Locale.getDefault(), "JobScheduler 100 job limit exceeded.  We count %d WorkManager jobs in JobScheduler; we have %d tracked jobs in our DB; our Configuration limit is %d.", Integer.valueOf(e10 != null ? e10.size() : 0), Integer.valueOf(this.f21132v.t().j().size()), Integer.valueOf(this.f21133w.j));
            p.d().b(str2, format);
            throw new IllegalStateException(format, e9);
        } catch (Throwable th2) {
            p.d().c(str2, "Unable to schedule " + oVar, th2);
        }
    }
}
