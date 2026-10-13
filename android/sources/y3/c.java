package y3;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import androidx.appcompat.widget.v0;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import androidx.work.impl.background.systemalarm.ConstraintProxyUpdateReceiver;
import androidx.work.impl.background.systemalarm.SystemAlarmService;
import e4.j;
import e4.o;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import ks.n;
import v3.p;
import v3.q;
import v3.r;

/* loaded from: classes.dex */
public final class c implements w3.c {

    /* renamed from: x, reason: collision with root package name */
    public static final String f20624x = p.f("CommandHandler");

    /* renamed from: d, reason: collision with root package name */
    public final Context f20625d;

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f20626e = new HashMap();

    /* renamed from: i, reason: collision with root package name */
    public final Object f20627i = new Object();

    /* renamed from: v, reason: collision with root package name */
    public final r f20628v;

    /* renamed from: w, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f20629w;

    public c(Context context, r rVar, io.sentry.internal.debugmeta.c cVar) {
        this.f20625d = context;
        this.f20628v = rVar;
        this.f20629w = cVar;
    }

    public static j b(Intent intent) {
        return new j(intent.getStringExtra("KEY_WORKSPEC_ID"), intent.getIntExtra("KEY_WORKSPEC_GENERATION", 0));
    }

    public static void c(Intent intent, j jVar) {
        intent.putExtra("KEY_WORKSPEC_ID", jVar.a);
        intent.putExtra("KEY_WORKSPEC_GENERATION", jVar.f7956b);
    }

    public final void a(Intent intent, int i5, i iVar) {
        List<w3.j> list;
        String action = intent.getAction();
        int i6 = 5;
        if ("ACTION_CONSTRAINTS_CHANGED".equals(action)) {
            p.d().a(f20624x, "Handling constraints changed " + intent);
            Context context = this.f20625d;
            e eVar = new e(context, this.f20628v, i5, iVar);
            ArrayList j = iVar.f20648w.f19662c.t().j();
            String str = d.a;
            Iterator it = j.iterator();
            boolean z5 = false;
            boolean z6 = false;
            boolean z7 = false;
            boolean z8 = false;
            while (it.hasNext()) {
                v3.e eVar2 = ((o) it.next()).j;
                z5 |= eVar2.f19196d;
                z6 |= eVar2.f19194b;
                z7 |= eVar2.f19197e;
                z8 |= eVar2.a != q.f19212d;
                if (z5 && z6 && z7 && z8) {
                    break;
                }
            }
            String str2 = ConstraintProxyUpdateReceiver.a;
            Intent intent2 = new Intent("androidx.work.impl.background.systemalarm.UpdateProxies");
            intent2.setComponent(new ComponentName(context, (Class<?>) ConstraintProxyUpdateReceiver.class));
            intent2.putExtra("KEY_BATTERY_NOT_LOW_PROXY_ENABLED", z5).putExtra("KEY_BATTERY_CHARGING_PROXY_ENABLED", z6).putExtra("KEY_STORAGE_NOT_LOW_PROXY_ENABLED", z7).putExtra("KEY_NETWORK_STATE_PROXY_ENABLED", z8);
            context.sendBroadcast(intent2);
            ArrayList arrayList = new ArrayList(j.size());
            eVar.a.getClass();
            long currentTimeMillis = System.currentTimeMillis();
            Iterator it2 = j.iterator();
            while (it2.hasNext()) {
                o oVar = (o) it2.next();
                if (currentTimeMillis >= oVar.a() && (!oVar.b() || eVar.f20632c.a(oVar))) {
                    arrayList.add(oVar);
                }
            }
            Iterator it3 = arrayList.iterator();
            while (it3.hasNext()) {
                o oVar2 = (o) it3.next();
                String str3 = oVar2.a;
                j m5 = n.m(oVar2);
                Intent intent3 = new Intent(context, (Class<?>) SystemAlarmService.class);
                intent3.setAction("ACTION_DELAY_MET");
                c(intent3, m5);
                p.d().a(e.f20630d, "Creating a delay_met command for workSpec with id (" + str3 + ")");
                iVar.f20645e.f9518d.execute(new v0(iVar, intent3, eVar.f20631b, i6));
            }
            return;
        }
        if ("ACTION_RESCHEDULE".equals(action)) {
            p.d().a(f20624x, "Handling reschedule " + intent + ", " + i5);
            iVar.f20648w.c();
            return;
        }
        Bundle extras = intent.getExtras();
        String[] strArr = {"KEY_WORKSPEC_ID"};
        if (extras == null || extras.isEmpty() || extras.get(strArr[0]) == null) {
            p.d().b(f20624x, "Invalid request for " + action + " , requires KEY_WORKSPEC_ID .");
            return;
        }
        if ("ACTION_SCHEDULE_WORK".equals(action)) {
            Context context2 = this.f20625d;
            j b10 = b(intent);
            p d6 = p.d();
            String str4 = f20624x;
            d6.a(str4, "Handling schedule work for " + b10);
            WorkDatabase workDatabase = iVar.f20648w.f19662c;
            workDatabase.c();
            try {
                o n6 = workDatabase.t().n(b10.a);
                if (n6 == null) {
                    p.d().g(str4, "Skipping scheduling " + b10 + " because it's no longer in the DB");
                    return;
                }
                if (n6.f7967b.a()) {
                    p.d().g(str4, "Skipping scheduling " + b10 + "because it is finished.");
                    return;
                }
                long a = n6.a();
                if (n6.b()) {
                    p.d().a(str4, "Opportunistically setting an alarm for " + b10 + "at " + a);
                    b.b(context2, workDatabase, b10, a);
                    Intent intent4 = new Intent(context2, (Class<?>) SystemAlarmService.class);
                    intent4.setAction("ACTION_CONSTRAINTS_CHANGED");
                    iVar.f20645e.f9518d.execute(new v0(iVar, intent4, i5, i6));
                } else {
                    p.d().a(str4, "Setting up Alarms for " + b10 + "at " + a);
                    b.b(context2, workDatabase, b10, a);
                }
                workDatabase.o();
                return;
            } finally {
                workDatabase.k();
            }
        }
        if ("ACTION_DELAY_MET".equals(action)) {
            synchronized (this.f20627i) {
                try {
                    j b11 = b(intent);
                    p d7 = p.d();
                    String str5 = f20624x;
                    d7.a(str5, "Handing delay met for " + b11);
                    if (this.f20626e.containsKey(b11)) {
                        p.d().a(str5, "WorkSpec " + b11 + " is is already being handled for ACTION_DELAY_MET");
                    } else {
                        g gVar = new g(this.f20625d, i5, iVar, this.f20629w.U(b11));
                        this.f20626e.put(b11, gVar);
                        gVar.e();
                    }
                } finally {
                }
            }
            return;
        }
        if (!"ACTION_STOP_WORK".equals(action)) {
            if (!"ACTION_EXECUTION_COMPLETED".equals(action)) {
                p.d().g(f20624x, "Ignoring intent " + intent);
                return;
            }
            j b12 = b(intent);
            boolean z10 = intent.getExtras().getBoolean("KEY_NEEDS_RESCHEDULE");
            p.d().a(f20624x, "Handling onExecutionCompleted " + intent + ", " + i5);
            e(b12, z10);
            return;
        }
        io.sentry.internal.debugmeta.c cVar = this.f20629w;
        Bundle extras2 = intent.getExtras();
        String string = extras2.getString("KEY_WORKSPEC_ID");
        if (extras2.containsKey("KEY_WORKSPEC_GENERATION")) {
            int i10 = extras2.getInt("KEY_WORKSPEC_GENERATION");
            ArrayList arrayList2 = new ArrayList(1);
            w3.j R = cVar.R(new j(string, i10));
            list = arrayList2;
            if (R != null) {
                arrayList2.add(R);
                list = arrayList2;
            }
        } else {
            list = cVar.Q(string);
        }
        for (w3.j workSpecId : list) {
            p.d().a(f20624x, "Handing stopWork work for " + string);
            e4.c cVar2 = iVar.G;
            cVar2.getClass();
            Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
            cVar2.b1(workSpecId, -512);
            j id2 = workSpecId.a;
            Context context3 = this.f20625d;
            WorkDatabase workDatabase2 = iVar.f20648w.f19662c;
            String str6 = b.a;
            e4.i p3 = workDatabase2.p();
            e4.g p5 = p3.p(id2);
            if (p5 != null) {
                b.a(context3, id2, p5.f7950c);
                p.d().a(b.a, "Removing SystemIdInfo for workSpecId (" + id2 + ")");
                Intrinsics.checkNotNullParameter(id2, "id");
                Intrinsics.checkNotNullParameter(id2, "id");
                String str7 = id2.a;
                int i11 = id2.f7956b;
                WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) p3.f7952d;
                workDatabase_Impl.b();
                e4.h hVar = (e4.h) p3.f7954i;
                h3.j a10 = hVar.a();
                if (str7 == null) {
                    a10.S(1);
                } else {
                    a10.n(1, str7);
                }
                a10.z(2, i11);
                workDatabase_Impl.c();
                try {
                    a10.c();
                    workDatabase_Impl.o();
                } finally {
                    workDatabase_Impl.k();
                    hVar.e(a10);
                }
            }
            iVar.e(id2, false);
        }
    }

    @Override // w3.c
    public final void e(j jVar, boolean z5) {
        synchronized (this.f20627i) {
            try {
                g gVar = (g) this.f20626e.remove(jVar);
                this.f20629w.R(jVar);
                if (gVar != null) {
                    gVar.f(z5);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
