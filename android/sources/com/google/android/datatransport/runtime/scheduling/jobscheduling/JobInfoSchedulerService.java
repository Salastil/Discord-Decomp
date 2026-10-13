package com.google.android.datatransport.runtime.scheduling.jobscheduling;

import android.app.job.JobParameters;
import android.app.job.JobService;
import android.util.Base64;
import cc.e;
import cc.k;
import gc.a;
import java.util.concurrent.Executor;
import k2.r;
import wb.i;
import wb.p;

/* loaded from: classes3.dex */
public class JobInfoSchedulerService extends JobService {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ int f5198d = 0;

    @Override // android.app.job.JobService
    public final boolean onStartJob(JobParameters jobParameters) {
        String string = jobParameters.getExtras().getString("backendName");
        String string2 = jobParameters.getExtras().getString("extras");
        int i5 = jobParameters.getExtras().getInt("priority");
        int i6 = jobParameters.getExtras().getInt("attemptNumber");
        p.b(getApplicationContext());
        r a = i.a();
        a.K(string);
        a.f13144v = a.b(i5);
        if (string2 != null) {
            a.f13143i = Base64.decode(string2, 0);
        }
        k kVar = p.a().f19719d;
        ((Executor) kVar.f3402x).execute(new e(kVar, a.k(), i6, new a1.k(5, this, jobParameters), 0));
        return true;
    }

    @Override // android.app.job.JobService
    public final boolean onStopJob(JobParameters jobParameters) {
        return true;
    }
}
