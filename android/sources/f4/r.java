package f4;

import android.content.Context;
import java.util.UUID;

/* loaded from: classes.dex */
public final class r implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ g4.j f8364d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ UUID f8365e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ v3.g f8366i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Context f8367v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ s f8368w;

    public r(s sVar, g4.j jVar, UUID uuid, v3.g gVar, Context context) {
        this.f8368w = sVar;
        this.f8364d = jVar;
        this.f8365e = uuid;
        this.f8366i = gVar;
        this.f8367v = context;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            if (!(this.f8364d.f9110d instanceof g4.a)) {
                String uuid = this.f8365e.toString();
                e4.o n6 = this.f8368w.f8370c.n(uuid);
                if (n6 == null || n6.f7967b.a()) {
                    throw new IllegalStateException("Calls to setForegroundAsync() must complete before a ListenableWorker signals completion of work by returning an instance of Result.");
                }
                ((w3.e) this.f8368w.f8369b).f(uuid, this.f8366i);
                this.f8367v.startService(d4.b.a(this.f8367v, ks.n.m(n6), this.f8366i));
            }
            this.f8364d.j(null);
        } catch (Throwable th2) {
            this.f8364d.k(th2);
        }
    }
}
