package y3;

import android.content.Context;
import android.content.Intent;
import android.os.Looper;
import android.os.PowerManager;
import android.text.TextUtils;
import androidx.appcompat.widget.v0;
import androidx.work.impl.background.systemalarm.SystemAlarmService;
import e4.j;
import f4.w;
import java.util.ArrayList;
import java.util.Iterator;
import v3.p;
import w3.o;

/* loaded from: classes.dex */
public final class i implements w3.c {
    public static final String H = p.f("SystemAlarmDispatcher");
    public Intent E;
    public SystemAlarmService F;
    public final e4.c G;

    /* renamed from: d, reason: collision with root package name */
    public final Context f20644d;

    /* renamed from: e, reason: collision with root package name */
    public final h4.b f20645e;

    /* renamed from: i, reason: collision with root package name */
    public final w f20646i;

    /* renamed from: v, reason: collision with root package name */
    public final w3.e f20647v;

    /* renamed from: w, reason: collision with root package name */
    public final o f20648w;

    /* renamed from: x, reason: collision with root package name */
    public final c f20649x;

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f20650y;

    public i(SystemAlarmService systemAlarmService) {
        Context applicationContext = systemAlarmService.getApplicationContext();
        this.f20644d = applicationContext;
        io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(24);
        o a = o.a(systemAlarmService);
        v3.b bVar = a.f19661b;
        this.f20648w = a;
        this.f20649x = new c(applicationContext, bVar.f19184c, cVar);
        this.f20646i = new w(bVar.f19187f);
        w3.e eVar = a.f19665f;
        this.f20647v = eVar;
        h4.b bVar2 = a.f19663d;
        this.f20645e = bVar2;
        this.G = new e4.c(eVar, bVar2);
        eVar.a(this);
        this.f20650y = new ArrayList();
        this.E = null;
    }

    public static void b() {
        if (Looper.getMainLooper().getThread() != Thread.currentThread()) {
            throw new IllegalStateException("Needs to be invoked on the main thread.");
        }
    }

    public final void a(int i5, Intent intent) {
        p d6 = p.d();
        String str = H;
        d6.a(str, "Adding command " + intent + " (" + i5 + ")");
        b();
        String action = intent.getAction();
        if (TextUtils.isEmpty(action)) {
            p.d().g(str, "Unknown command. Ignoring");
            return;
        }
        if ("ACTION_CONSTRAINTS_CHANGED".equals(action)) {
            b();
            synchronized (this.f20650y) {
                try {
                    Iterator it = this.f20650y.iterator();
                    while (it.hasNext()) {
                        if ("ACTION_CONSTRAINTS_CHANGED".equals(((Intent) it.next()).getAction())) {
                            return;
                        }
                    }
                } finally {
                }
            }
        }
        intent.putExtra("KEY_START_ID", i5);
        synchronized (this.f20650y) {
            try {
                boolean isEmpty = this.f20650y.isEmpty();
                this.f20650y.add(intent);
                if (isEmpty) {
                    c();
                }
            } finally {
            }
        }
    }

    public final void c() {
        b();
        PowerManager.WakeLock a = f4.o.a(this.f20644d, "ProcessCommand");
        try {
            a.acquire();
            this.f20648w.f19663d.a(new h(this, 0));
        } finally {
            a.release();
        }
    }

    @Override // w3.c
    public final void e(j jVar, boolean z5) {
        h4.a aVar = this.f20645e.f9518d;
        String str = c.f20624x;
        Intent intent = new Intent(this.f20644d, (Class<?>) SystemAlarmService.class);
        intent.setAction("ACTION_EXECUTION_COMPLETED");
        intent.putExtra("KEY_NEEDS_RESCHEDULE", z5);
        c.c(intent, jVar);
        aVar.execute(new v0(this, intent, 0, 5));
    }
}
