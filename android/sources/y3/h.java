package y3;

import android.content.Intent;
import android.os.PowerManager;
import androidx.work.impl.background.systemalarm.SystemAlarmService;
import f4.l;
import f4.o;
import v3.p;

/* loaded from: classes.dex */
public final class h implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20642d;

    /* renamed from: e, reason: collision with root package name */
    public final i f20643e;

    public /* synthetic */ h(i iVar, int i5) {
        this.f20642d = i5;
        this.f20643e = iVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        h4.a aVar;
        h hVar;
        boolean isEmpty;
        boolean isEmpty2;
        switch (this.f20642d) {
            case 0:
                synchronized (this.f20643e.f20650y) {
                    i iVar = this.f20643e;
                    iVar.E = (Intent) iVar.f20650y.get(0);
                }
                Intent intent = this.f20643e.E;
                if (intent != null) {
                    String action = intent.getAction();
                    int intExtra = this.f20643e.E.getIntExtra("KEY_START_ID", 0);
                    p d6 = p.d();
                    String str = i.H;
                    d6.a(str, "Processing command " + this.f20643e.E + ", " + intExtra);
                    PowerManager.WakeLock a = o.a(this.f20643e.f20644d, action + " (" + intExtra + ")");
                    try {
                        p.d().a(str, "Acquiring operation wake lock (" + action + ") " + a);
                        a.acquire();
                        i iVar2 = this.f20643e;
                        iVar2.f20649x.a(iVar2.E, intExtra, iVar2);
                        p.d().a(str, "Releasing operation wake lock (" + action + ") " + a);
                        a.release();
                        i iVar3 = this.f20643e;
                        aVar = iVar3.f20645e.f9518d;
                        hVar = new h(iVar3, 1);
                    } catch (Throwable th2) {
                        try {
                            p d7 = p.d();
                            String str2 = i.H;
                            d7.c(str2, "Unexpected error in onHandleIntent", th2);
                            p.d().a(str2, "Releasing operation wake lock (" + action + ") " + a);
                            a.release();
                            i iVar4 = this.f20643e;
                            aVar = iVar4.f20645e.f9518d;
                            hVar = new h(iVar4, 1);
                        } catch (Throwable th3) {
                            p.d().a(i.H, "Releasing operation wake lock (" + action + ") " + a);
                            a.release();
                            i iVar5 = this.f20643e;
                            iVar5.f20645e.f9518d.execute(new h(iVar5, 1));
                            throw th3;
                        }
                    }
                    aVar.execute(hVar);
                    return;
                }
                return;
            default:
                i iVar6 = this.f20643e;
                p d8 = p.d();
                String str3 = i.H;
                d8.a(str3, "Checking if commands are complete.");
                i.b();
                synchronized (iVar6.f20650y) {
                    try {
                        if (iVar6.E != null) {
                            p.d().a(str3, "Removing command " + iVar6.E);
                            if (!((Intent) iVar6.f20650y.remove(0)).equals(iVar6.E)) {
                                throw new IllegalStateException("Dequeue-d command is not the first.");
                            }
                            iVar6.E = null;
                        }
                        l lVar = iVar6.f20645e.a;
                        c cVar = iVar6.f20649x;
                        synchronized (cVar.f20627i) {
                            isEmpty = cVar.f20626e.isEmpty();
                        }
                        if (isEmpty && iVar6.f20650y.isEmpty()) {
                            synchronized (lVar.f8347e) {
                                isEmpty2 = lVar.f8348i.isEmpty();
                            }
                            if (isEmpty2) {
                                p.d().a(str3, "No more commands & intents.");
                                SystemAlarmService systemAlarmService = iVar6.F;
                                if (systemAlarmService != null) {
                                    systemAlarmService.a();
                                }
                            }
                        }
                        if (!iVar6.f20650y.isEmpty()) {
                            iVar6.c();
                        }
                    } catch (Throwable th4) {
                        throw th4;
                    }
                }
                return;
        }
    }
}
