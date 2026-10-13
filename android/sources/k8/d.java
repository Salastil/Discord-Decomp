package k8;

import android.content.Context;
import android.os.Handler;
import java.util.LinkedHashMap;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import rd.u;

/* loaded from: classes3.dex */
public final class d {
    public long a;

    /* renamed from: b, reason: collision with root package name */
    public Object f13207b;

    /* renamed from: c, reason: collision with root package name */
    public Object f13208c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f13209d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13210e;

    public d(u runnableScheduler, e4.c launcher) {
        Intrinsics.checkNotNullParameter(runnableScheduler, "runnableScheduler");
        Intrinsics.checkNotNullParameter(launcher, "launcher");
        long millis = TimeUnit.MINUTES.toMillis(90L);
        Intrinsics.checkNotNullParameter(runnableScheduler, "runnableScheduler");
        Intrinsics.checkNotNullParameter(launcher, "launcher");
        this.f13207b = runnableScheduler;
        this.f13208c = launcher;
        this.a = millis;
        this.f13209d = new Object();
        this.f13210e = new LinkedHashMap();
    }

    public void a(w3.j token) {
        Runnable runnable;
        Intrinsics.checkNotNullParameter(token, "token");
        synchronized (this.f13209d) {
            runnable = (Runnable) ((LinkedHashMap) this.f13210e).remove(token);
        }
        if (runnable != null) {
            ((Handler) ((u) this.f13207b).f17275e).removeCallbacks(runnable);
        }
    }

    public void b(w3.j token) {
        Intrinsics.checkNotNullParameter(token, "token");
        wl.d dVar = new wl.d(1, this, token);
        synchronized (this.f13209d) {
        }
        u uVar = (u) this.f13207b;
        ((Handler) uVar.f17275e).postDelayed(dVar, this.a);
    }

    public d(Context context) {
        this.f13207b = "image_cache";
        this.a = 41943040L;
        this.f13209d = new r8.c(11);
        this.f13210e = context;
    }
}
