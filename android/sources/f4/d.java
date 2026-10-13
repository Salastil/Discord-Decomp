package f4;

import android.app.ActivityManager;
import android.app.AlarmManager;
import android.app.ApplicationExitInfo;
import android.app.PendingIntent;
import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteAccessPermException;
import android.database.sqlite.SQLiteCantOpenDatabaseException;
import android.database.sqlite.SQLiteConstraintException;
import android.database.sqlite.SQLiteDatabaseCorruptException;
import android.database.sqlite.SQLiteDatabaseLockedException;
import android.database.sqlite.SQLiteDiskIOException;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteTableLockedException;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import androidx.work.impl.utils.ForceStopRunnable$BroadcastReceiver;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import v3.y;

/* loaded from: classes.dex */
public final class d implements Runnable {

    /* renamed from: w, reason: collision with root package name */
    public static final String f8335w = v3.p.f("ForceStopRunnable");

    /* renamed from: x, reason: collision with root package name */
    public static final long f8336x = TimeUnit.DAYS.toMillis(3650);

    /* renamed from: d, reason: collision with root package name */
    public final Context f8337d;

    /* renamed from: e, reason: collision with root package name */
    public final w3.o f8338e;

    /* renamed from: i, reason: collision with root package name */
    public final u4.c f8339i;

    /* renamed from: v, reason: collision with root package name */
    public int f8340v = 0;

    public d(Context context, w3.o oVar) {
        this.f8337d = context.getApplicationContext();
        this.f8338e = oVar;
        this.f8339i = oVar.f19666g;
    }

    public static void c(Context context) {
        AlarmManager alarmManager = (AlarmManager) context.getSystemService("alarm");
        int i5 = Build.VERSION.SDK_INT >= 31 ? 167772160 : 134217728;
        Intent intent = new Intent();
        intent.setComponent(new ComponentName(context, (Class<?>) ForceStopRunnable$BroadcastReceiver.class));
        intent.setAction("ACTION_FORCE_STOP_RESCHEDULE");
        PendingIntent broadcast = PendingIntent.getBroadcast(context, -1, intent, i5);
        long currentTimeMillis = System.currentTimeMillis() + f8336x;
        if (alarmManager != null) {
            alarmManager.setExact(0, currentTimeMillis, broadcast);
        }
    }

    /* JADX WARN: Finally extract failed */
    /* JADX WARN: Removed duplicated region for block: B:112:0x0222  */
    /* JADX WARN: Removed duplicated region for block: B:114:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:122:0x023a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a() {
        boolean z5;
        int i5;
        PendingIntent broadcast;
        u4.c cVar = this.f8339i;
        w3.o oVar = this.f8338e;
        WorkDatabase workDatabase = oVar.f19662c;
        v3.b bVar = oVar.f19661b;
        u4.c cVar2 = oVar.f19666g;
        workDatabase = oVar.f19662c;
        String str = z3.b.f21128x;
        Context context = this.f8337d;
        JobScheduler jobScheduler = (JobScheduler) context.getSystemService("jobscheduler");
        ArrayList e9 = z3.b.e(context, jobScheduler);
        e4.i p3 = workDatabase.p();
        p3.getClass();
        a3.o g6 = a3.o.g(0, "SELECT DISTINCT work_spec_id FROM SystemIdInfo");
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) p3.f7952d;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                arrayList.add(D.isNull(0) ? null : D.getString(0));
            }
            HashSet hashSet = new HashSet(e9 != null ? e9.size() : 0);
            if (e9 != null && !e9.isEmpty()) {
                Iterator it = e9.iterator();
                while (it.hasNext()) {
                    JobInfo jobInfo = (JobInfo) it.next();
                    e4.j f2 = z3.b.f(jobInfo);
                    if (f2 != null) {
                        hashSet.add(f2.a);
                    } else {
                        z3.b.b(jobScheduler, jobInfo.getId());
                    }
                }
            }
            Iterator it2 = arrayList.iterator();
            while (true) {
                if (it2.hasNext()) {
                    if (!hashSet.contains((String) it2.next())) {
                        v3.p.d().a(z3.b.f21128x, "Reconciling jobs");
                        z5 = true;
                        break;
                    }
                } else {
                    z5 = false;
                    break;
                }
            }
            if (z5) {
                workDatabase.c();
                try {
                    e4.p t5 = workDatabase.t();
                    Iterator it3 = arrayList.iterator();
                    while (it3.hasNext()) {
                        t5.p(-1L, (String) it3.next());
                    }
                    workDatabase.o();
                    workDatabase.k();
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            e4.p t10 = workDatabase.t();
            e4.m s2 = workDatabase.s();
            workDatabase.c();
            try {
                ArrayList i6 = t10.i();
                boolean isEmpty = i6.isEmpty();
                if (!isEmpty) {
                    Iterator it4 = i6.iterator();
                    while (it4.hasNext()) {
                        e4.o oVar2 = (e4.o) it4.next();
                        y yVar = y.f19224d;
                        String str2 = oVar2.a;
                        t10.t(yVar, str2);
                        t10.u(-512, str2);
                        t10.p(-1L, str2);
                    }
                }
                WorkDatabase_Impl workDatabase_Impl2 = (WorkDatabase_Impl) s2.f7963e;
                workDatabase_Impl2.b();
                e4.h hVar = (e4.h) s2.f7965v;
                h3.j a = hVar.a();
                workDatabase_Impl2.c();
                try {
                    a.c();
                    workDatabase_Impl2.o();
                    workDatabase_Impl2.k();
                    hVar.e(a);
                    workDatabase.o();
                    workDatabase.k();
                    boolean z6 = !isEmpty || z5;
                    Long r5 = ((WorkDatabase) cVar2.f18811d).l().r("reschedule_needed");
                    String str3 = f8335w;
                    if (r5 != null && r5.longValue() == 1) {
                        v3.p.d().a(str3, "Rescheduling Workers.");
                        oVar.c();
                        cVar2.getClass();
                        Intrinsics.checkNotNullParameter("reschedule_needed", "key");
                        ((WorkDatabase) cVar2.f18811d).l().u(new e4.d("reschedule_needed", 0L));
                        return;
                    }
                    try {
                        i5 = Build.VERSION.SDK_INT;
                        int i10 = i5 >= 31 ? 570425344 : 536870912;
                        Intent intent = new Intent();
                        intent.setComponent(new ComponentName(context, (Class<?>) ForceStopRunnable$BroadcastReceiver.class));
                        intent.setAction("ACTION_FORCE_STOP_RESCHEDULE");
                        broadcast = PendingIntent.getBroadcast(context, -1, intent, i10);
                    } catch (IllegalArgumentException e10) {
                        e = e10;
                        if (v3.p.d().a <= 5) {
                            Log.w(str3, "Ignoring exception", e);
                        }
                        v3.p.d().a(str3, "Application was force-stopped, rescheduling.");
                        oVar.c();
                        bVar.f19184c.getClass();
                        long currentTimeMillis = System.currentTimeMillis();
                        cVar.getClass();
                        ((WorkDatabase) cVar.f18811d).l().u(new e4.d("last_force_stop_ms", Long.valueOf(currentTimeMillis)));
                        return;
                    } catch (SecurityException e11) {
                        e = e11;
                        if (v3.p.d().a <= 5) {
                        }
                        v3.p.d().a(str3, "Application was force-stopped, rescheduling.");
                        oVar.c();
                        bVar.f19184c.getClass();
                        long currentTimeMillis2 = System.currentTimeMillis();
                        cVar.getClass();
                        ((WorkDatabase) cVar.f18811d).l().u(new e4.d("last_force_stop_ms", Long.valueOf(currentTimeMillis2)));
                        return;
                    }
                    if (i5 >= 30) {
                        if (broadcast != null) {
                            broadcast.cancel();
                        }
                        List<ApplicationExitInfo> historicalProcessExitReasons = ((ActivityManager) context.getSystemService("activity")).getHistoricalProcessExitReasons(null, 0, 0);
                        if (historicalProcessExitReasons != null && !historicalProcessExitReasons.isEmpty()) {
                            Long r7 = ((WorkDatabase) cVar.f18811d).l().r("last_force_stop_ms");
                            long longValue = r7 != null ? r7.longValue() : 0L;
                            for (int i11 = 0; i11 < historicalProcessExitReasons.size(); i11++) {
                                ApplicationExitInfo b10 = com.google.firebase.messaging.m.b(historicalProcessExitReasons.get(i11));
                                if (b10.getReason() == 10 && b10.getTimestamp() >= longValue) {
                                    v3.p.d().a(str3, "Application was force-stopped, rescheduling.");
                                    oVar.c();
                                    bVar.f19184c.getClass();
                                    long currentTimeMillis22 = System.currentTimeMillis();
                                    cVar.getClass();
                                    ((WorkDatabase) cVar.f18811d).l().u(new e4.d("last_force_stop_ms", Long.valueOf(currentTimeMillis22)));
                                    return;
                                }
                            }
                        }
                        if (z6) {
                            return;
                        }
                        v3.p.d().a(str3, "Found unfinished work, scheduling it.");
                        w3.i.b(bVar, workDatabase, oVar.f19664e);
                        return;
                    }
                    if (broadcast == null) {
                        c(context);
                        v3.p.d().a(str3, "Application was force-stopped, rescheduling.");
                        oVar.c();
                        bVar.f19184c.getClass();
                        long currentTimeMillis222 = System.currentTimeMillis();
                        cVar.getClass();
                        ((WorkDatabase) cVar.f18811d).l().u(new e4.d("last_force_stop_ms", Long.valueOf(currentTimeMillis222)));
                        return;
                    }
                    if (z6) {
                    }
                } catch (Throwable th3) {
                    workDatabase_Impl2.k();
                    hVar.e(a);
                    throw th3;
                }
            } finally {
                workDatabase.k();
            }
        } finally {
            D.close();
            g6.i();
        }
    }

    public final boolean b() {
        v3.b bVar = this.f8338e.f19661b;
        bVar.getClass();
        boolean isEmpty = TextUtils.isEmpty(null);
        String str = f8335w;
        if (isEmpty) {
            v3.p.d().a(str, "The default process name was not specified.");
            return true;
        }
        boolean a = k.a(this.f8337d, bVar);
        v3.p.d().a(str, "Is default app process = " + a);
        return a;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Context context = this.f8337d;
        String str = f8335w;
        w3.o oVar = this.f8338e;
        try {
            if (!b()) {
                return;
            }
            while (true) {
                try {
                    d9.a.E(context);
                    v3.p.d().a(str, "Performing cleanup operations.");
                    try {
                        a();
                        return;
                    } catch (SQLiteAccessPermException | SQLiteCantOpenDatabaseException | SQLiteConstraintException | SQLiteDatabaseCorruptException | SQLiteDatabaseLockedException | SQLiteDiskIOException | SQLiteTableLockedException e9) {
                        int i5 = this.f8340v + 1;
                        this.f8340v = i5;
                        if (i5 >= 3) {
                            String str2 = d9.a.A(context) ? "The file system on the device is in a bad state. WorkManager cannot access the app's internal data store." : "WorkManager can't be accessed from direct boot, because credential encrypted storage isn't accessible.\nDon't access or initialise WorkManager from directAware components. See https://developer.android.com/training/articles/direct-boot";
                            v3.p.d().c(str, str2, e9);
                            IllegalStateException illegalStateException = new IllegalStateException(str2, e9);
                            oVar.f19661b.getClass();
                            throw illegalStateException;
                        }
                        long j = i5 * 300;
                        String str3 = "Retrying after " + j;
                        if (v3.p.d().a <= 3) {
                            Log.d(str, str3, e9);
                        }
                        try {
                            Thread.sleep(this.f8340v * 300);
                        } catch (InterruptedException unused) {
                        }
                    }
                } catch (SQLiteException e10) {
                    v3.p.d().b(str, "Unexpected SQLite exception during migrations");
                    IllegalStateException illegalStateException2 = new IllegalStateException("Unexpected SQLite exception during migrations", e10);
                    oVar.f19661b.getClass();
                    throw illegalStateException2;
                }
            }
        } finally {
            oVar.b();
        }
    }
}
