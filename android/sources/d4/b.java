package d4;

import a4.i;
import android.app.Notification;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import androidx.appcompat.widget.v0;
import androidx.work.impl.foreground.SystemForegroundService;
import e4.j;
import f4.m;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;
import ks.n;
import v3.g;
import v3.p;
import w3.o;

/* loaded from: classes.dex */
public final class b implements a4.e, w3.c {
    public static final String G = p.f("SystemFgDispatcher");
    public final i E;
    public SystemForegroundService F;

    /* renamed from: d, reason: collision with root package name */
    public final o f7403d;

    /* renamed from: e, reason: collision with root package name */
    public final h4.b f7404e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f7405i = new Object();

    /* renamed from: v, reason: collision with root package name */
    public j f7406v;

    /* renamed from: w, reason: collision with root package name */
    public final LinkedHashMap f7407w;

    /* renamed from: x, reason: collision with root package name */
    public final HashMap f7408x;

    /* renamed from: y, reason: collision with root package name */
    public final HashMap f7409y;

    public b(Context context) {
        o a = o.a(context);
        this.f7403d = a;
        this.f7404e = a.f19663d;
        this.f7406v = null;
        this.f7407w = new LinkedHashMap();
        this.f7409y = new HashMap();
        this.f7408x = new HashMap();
        this.E = new i(a.j);
        a.f19665f.a(this);
    }

    public static Intent a(Context context, j jVar, g gVar) {
        Intent intent = new Intent(context, (Class<?>) SystemForegroundService.class);
        intent.setAction("ACTION_NOTIFY");
        intent.putExtra("KEY_NOTIFICATION_ID", gVar.a);
        intent.putExtra("KEY_FOREGROUND_SERVICE_TYPE", gVar.f19203b);
        intent.putExtra("KEY_NOTIFICATION", gVar.f19204c);
        intent.putExtra("KEY_WORKSPEC_ID", jVar.a);
        intent.putExtra("KEY_GENERATION", jVar.f7956b);
        return intent;
    }

    public static Intent c(Context context, j jVar, g gVar) {
        Intent intent = new Intent(context, (Class<?>) SystemForegroundService.class);
        intent.setAction("ACTION_START_FOREGROUND");
        intent.putExtra("KEY_WORKSPEC_ID", jVar.a);
        intent.putExtra("KEY_GENERATION", jVar.f7956b);
        intent.putExtra("KEY_NOTIFICATION_ID", gVar.a);
        intent.putExtra("KEY_FOREGROUND_SERVICE_TYPE", gVar.f19203b);
        intent.putExtra("KEY_NOTIFICATION", gVar.f19204c);
        return intent;
    }

    @Override // a4.e
    public final void b(e4.o oVar, a4.c cVar) {
        if (cVar instanceof a4.b) {
            String str = oVar.a;
            p.d().a(G, "Constraints unmet for WorkSpec " + str);
            j m5 = n.m(oVar);
            o oVar2 = this.f7403d;
            h4.b bVar = oVar2.f19663d;
            w3.e processor = oVar2.f19665f;
            w3.j token = new w3.j(m5);
            Intrinsics.checkNotNullParameter(processor, "processor");
            Intrinsics.checkNotNullParameter(token, "token");
            bVar.a(new m(processor, token, true, -512));
        }
    }

    public final void d(Intent intent) {
        int i5 = 0;
        int intExtra = intent.getIntExtra("KEY_NOTIFICATION_ID", 0);
        int intExtra2 = intent.getIntExtra("KEY_FOREGROUND_SERVICE_TYPE", 0);
        String stringExtra = intent.getStringExtra("KEY_WORKSPEC_ID");
        j jVar = new j(stringExtra, intent.getIntExtra("KEY_GENERATION", 0));
        Notification notification = (Notification) intent.getParcelableExtra("KEY_NOTIFICATION");
        p d6 = p.d();
        StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("Notifying with (id:", ", workSpecId: ", stringExtra, intExtra, ", notificationType :");
        n6.append(intExtra2);
        n6.append(")");
        d6.a(G, n6.toString());
        if (notification == null || this.F == null) {
            return;
        }
        g gVar = new g(intExtra, notification, intExtra2);
        LinkedHashMap linkedHashMap = this.f7407w;
        linkedHashMap.put(jVar, gVar);
        if (this.f7406v == null) {
            this.f7406v = jVar;
            SystemForegroundService systemForegroundService = this.F;
            systemForegroundService.f2592e.post(new c(systemForegroundService, intExtra, notification, intExtra2));
            return;
        }
        SystemForegroundService systemForegroundService2 = this.F;
        systemForegroundService2.f2592e.post(new v0(systemForegroundService2, intExtra, notification, 1));
        if (intExtra2 == 0 || Build.VERSION.SDK_INT < 29) {
            return;
        }
        Iterator it = linkedHashMap.entrySet().iterator();
        while (it.hasNext()) {
            i5 |= ((g) ((Map.Entry) it.next()).getValue()).f19203b;
        }
        g gVar2 = (g) linkedHashMap.get(this.f7406v);
        if (gVar2 != null) {
            SystemForegroundService systemForegroundService3 = this.F;
            systemForegroundService3.f2592e.post(new c(systemForegroundService3, gVar2.a, gVar2.f19204c, i5));
        }
    }

    @Override // w3.c
    public final void e(j jVar, boolean z5) {
        Map.Entry entry;
        synchronized (this.f7405i) {
            try {
                Job job = ((e4.o) this.f7408x.remove(jVar)) != null ? (Job) this.f7409y.remove(jVar) : null;
                if (job != null) {
                    job.f(null);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        g gVar = (g) this.f7407w.remove(jVar);
        if (jVar.equals(this.f7406v)) {
            if (this.f7407w.size() > 0) {
                Iterator it = this.f7407w.entrySet().iterator();
                Object next = it.next();
                while (true) {
                    entry = (Map.Entry) next;
                    if (!it.hasNext()) {
                        break;
                    } else {
                        next = it.next();
                    }
                }
                this.f7406v = (j) entry.getKey();
                if (this.F != null) {
                    g gVar2 = (g) entry.getValue();
                    SystemForegroundService systemForegroundService = this.F;
                    systemForegroundService.f2592e.post(new c(systemForegroundService, gVar2.a, gVar2.f19204c, gVar2.f19203b));
                    SystemForegroundService systemForegroundService2 = this.F;
                    systemForegroundService2.f2592e.post(new af.p(gVar2.a, 2, systemForegroundService2));
                }
            } else {
                this.f7406v = null;
            }
        }
        SystemForegroundService systemForegroundService3 = this.F;
        if (gVar == null || systemForegroundService3 == null) {
            return;
        }
        p.d().a(G, "Removing Notification (id: " + gVar.a + ", workSpecId: " + jVar + ", notificationType: " + gVar.f19203b);
        systemForegroundService3.f2592e.post(new af.p(gVar.a, 2, systemForegroundService3));
    }

    public final void f() {
        this.F = null;
        synchronized (this.f7405i) {
            try {
                Iterator it = this.f7409y.values().iterator();
                while (it.hasNext()) {
                    ((Job) it.next()).f(null);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f7403d.f19665f.e(this);
    }
}
