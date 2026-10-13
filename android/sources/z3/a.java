package z3;

import android.app.job.JobInfo;
import android.content.ComponentName;
import android.content.Context;
import android.net.NetworkRequest;
import android.os.Build;
import android.os.PersistableBundle;
import androidx.work.impl.background.systemjob.SystemJobService;
import e4.o;
import v3.p;
import v3.q;
import v3.r;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: c, reason: collision with root package name */
    public static final String f21126c = p.f("SystemJobInfoConverter");
    public final ComponentName a;

    /* renamed from: b, reason: collision with root package name */
    public final r f21127b;

    public a(Context context, r rVar) {
        this.f21127b = rVar;
        this.a = new ComponentName(context.getApplicationContext(), (Class<?>) SystemJobService.class);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final JobInfo a(o oVar, int i5) {
        int i6;
        v3.e eVar = oVar.j;
        PersistableBundle persistableBundle = new PersistableBundle();
        persistableBundle.putString("EXTRA_WORK_SPEC_ID", oVar.a);
        persistableBundle.putInt("EXTRA_WORK_SPEC_GENERATION", oVar.f7983t);
        persistableBundle.putBoolean("EXTRA_IS_PERIODIC", oVar.c());
        JobInfo.Builder requiresCharging = new JobInfo.Builder(i5, this.a).setRequiresCharging(eVar.f19194b);
        boolean z5 = eVar.f19195c;
        JobInfo.Builder extras = requiresCharging.setRequiresDeviceIdle(z5).setExtras(persistableBundle);
        q qVar = eVar.a;
        int i10 = Build.VERSION.SDK_INT;
        if (i10 < 30 || qVar != q.f19217x) {
            int ordinal = qVar.ordinal();
            if (ordinal != 0) {
                if (ordinal != 1) {
                    i6 = 2;
                    if (ordinal != 2) {
                        i6 = 3;
                        if (ordinal != 3) {
                            i6 = 4;
                            if (ordinal != 4 || i10 < 26) {
                                p.d().a(f21126c, "API version too low. Cannot convert network type value " + qVar);
                            }
                        }
                    }
                }
                i6 = 1;
            } else {
                i6 = 0;
            }
            extras.setRequiredNetworkType(i6);
        } else {
            extras.setRequiredNetwork(new NetworkRequest.Builder().addCapability(25).build());
        }
        if (!z5) {
            extras.setBackoffCriteria(oVar.f7976m, oVar.f7975l == v3.a.f19181e ? 0 : 1);
        }
        long a = oVar.a();
        this.f21127b.getClass();
        long max = Math.max(a - System.currentTimeMillis(), 0L);
        if (i10 <= 28) {
            extras.setMinimumLatency(max);
        } else if (max > 0) {
            extras.setMinimumLatency(max);
        } else if (!oVar.f7980q) {
            extras.setImportantWhileForeground(true);
        }
        if (eVar.a()) {
            for (v3.d dVar : eVar.f19200h) {
                extras.addTriggerContentUri(new JobInfo.TriggerContentUri(dVar.a, dVar.f19192b ? 1 : 0));
            }
            extras.setTriggerContentUpdateDelay(eVar.f19198f);
            extras.setTriggerContentMaxDelay(eVar.f19199g);
        }
        extras.setPersisted(false);
        int i11 = Build.VERSION.SDK_INT;
        if (i11 >= 26) {
            extras.setRequiresBatteryNotLow(eVar.f19196d);
            extras.setRequiresStorageNotLow(eVar.f19197e);
        }
        Object[] objArr = oVar.k > 0;
        boolean z6 = max > 0;
        if (i11 >= 31 && oVar.f7980q && objArr == false && !z6) {
            extras.setExpedited(true);
        }
        return extras.build();
    }
}
