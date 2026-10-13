package y3;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.background.systemalarm.SystemAlarmService;
import e4.j;
import kotlin.jvm.internal.Intrinsics;
import v3.p;

/* loaded from: classes.dex */
public abstract class b {
    public static final String a = p.f("Alarms");

    public static void a(Context context, j jVar, int i5) {
        AlarmManager alarmManager = (AlarmManager) context.getSystemService("alarm");
        String str = c.f20624x;
        Intent intent = new Intent(context, (Class<?>) SystemAlarmService.class);
        intent.setAction("ACTION_DELAY_MET");
        c.c(intent, jVar);
        PendingIntent service = PendingIntent.getService(context, i5, intent, 603979776);
        if (service == null || alarmManager == null) {
            return;
        }
        p.d().a(a, "Cancelling existing alarm with (workSpecId, systemId) (" + jVar + ", " + i5 + ")");
        alarmManager.cancel(service);
    }

    public static void b(Context context, WorkDatabase workDatabase, j generationalId, long j) {
        e4.i p3 = workDatabase.p();
        e4.g p5 = p3.p(generationalId);
        if (p5 != null) {
            int i5 = p5.f7950c;
            a(context, generationalId, i5);
            AlarmManager alarmManager = (AlarmManager) context.getSystemService("alarm");
            String str = c.f20624x;
            Intent intent = new Intent(context, (Class<?>) SystemAlarmService.class);
            intent.setAction("ACTION_DELAY_MET");
            c.c(intent, generationalId);
            PendingIntent service = PendingIntent.getService(context, i5, intent, 201326592);
            if (alarmManager != null) {
                a.a(alarmManager, 0, j, service);
                return;
            }
            return;
        }
        Object n6 = workDatabase.n(new f4.e(0, new u4.b(workDatabase)));
        Intrinsics.checkNotNullExpressionValue(n6, "workDatabase.runInTransa…ANAGER_ID_KEY)\n        })");
        int intValue = ((Number) n6).intValue();
        Intrinsics.checkNotNullParameter(generationalId, "generationalId");
        p3.q(new e4.g(generationalId.a, generationalId.f7956b, intValue));
        AlarmManager alarmManager2 = (AlarmManager) context.getSystemService("alarm");
        String str2 = c.f20624x;
        Intent intent2 = new Intent(context, (Class<?>) SystemAlarmService.class);
        intent2.setAction("ACTION_DELAY_MET");
        c.c(intent2, generationalId);
        PendingIntent service2 = PendingIntent.getService(context, intValue, intent2, 201326592);
        if (alarmManager2 != null) {
            a.a(alarmManager2, 0, j, service2);
        }
    }
}
