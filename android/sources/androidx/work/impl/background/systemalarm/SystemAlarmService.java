package androidx.work.impl.background.systemalarm;

import android.content.Intent;
import android.os.PowerManager;
import androidx.lifecycle.w;
import f4.o;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Unit;
import v3.p;
import y3.i;

/* loaded from: classes.dex */
public class SystemAlarmService extends w {

    /* renamed from: v, reason: collision with root package name */
    public static final String f2583v = p.f("SystemAlarmService");

    /* renamed from: e, reason: collision with root package name */
    public i f2584e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2585i;

    public final void a() {
        this.f2585i = true;
        p.d().a(f2583v, "All commands completed in dispatcher");
        String str = o.a;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        synchronized (f4.p.a) {
            linkedHashMap.putAll(f4.p.f8356b);
            Unit unit = Unit.a;
        }
        for (Map.Entry entry : linkedHashMap.entrySet()) {
            PowerManager.WakeLock wakeLock = (PowerManager.WakeLock) entry.getKey();
            String str2 = (String) entry.getValue();
            if (wakeLock != null && wakeLock.isHeld()) {
                p.d().g(o.a, "WakeLock held for " + str2);
            }
        }
        stopSelf();
    }

    @Override // androidx.lifecycle.w, android.app.Service
    public final void onCreate() {
        super.onCreate();
        i iVar = new i(this);
        this.f2584e = iVar;
        if (iVar.F != null) {
            p.d().b(i.H, "A completion listener for SystemAlarmDispatcher already exists.");
        } else {
            iVar.F = this;
        }
        this.f2585i = false;
    }

    @Override // androidx.lifecycle.w, android.app.Service
    public final void onDestroy() {
        super.onDestroy();
        this.f2585i = true;
        i iVar = this.f2584e;
        iVar.getClass();
        p.d().a(i.H, "Destroying SystemAlarmDispatcher");
        iVar.f20647v.e(iVar);
        iVar.F = null;
    }

    @Override // android.app.Service
    public final int onStartCommand(Intent intent, int i5, int i6) {
        super.onStartCommand(intent, i5, i6);
        if (this.f2585i) {
            p.d().e(f2583v, "Re-initializing SystemAlarmDispatcher after a request to shut-down.");
            i iVar = this.f2584e;
            iVar.getClass();
            p d6 = p.d();
            String str = i.H;
            d6.a(str, "Destroying SystemAlarmDispatcher");
            iVar.f20647v.e(iVar);
            iVar.F = null;
            i iVar2 = new i(this);
            this.f2584e = iVar2;
            if (iVar2.F != null) {
                p.d().b(str, "A completion listener for SystemAlarmDispatcher already exists.");
            } else {
                iVar2.F = this;
            }
            this.f2585i = false;
        }
        if (intent == null) {
            return 3;
        }
        this.f2584e.a(i6, intent);
        return 3;
    }
}
