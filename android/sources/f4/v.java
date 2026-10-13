package f4;

/* loaded from: classes.dex */
public final class v implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final w f8371d;

    /* renamed from: e, reason: collision with root package name */
    public final e4.j f8372e;

    public v(w wVar, e4.j jVar) {
        this.f8371d = wVar;
        this.f8372e = jVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f8371d.f8376d) {
            try {
                if (((v) this.f8371d.f8374b.remove(this.f8372e)) != null) {
                    u uVar = (u) this.f8371d.f8375c.remove(this.f8372e);
                    if (uVar != null) {
                        e4.j jVar = this.f8372e;
                        y3.g gVar = (y3.g) uVar;
                        v3.p.d().a(y3.g.L, "Exceeded time limits on execution for " + jVar);
                        gVar.E.execute(new y3.f(gVar, 0));
                    }
                } else {
                    v3.p.d().a("WrkTimerRunnable", "Timer with " + this.f8372e + " is already marked as complete.");
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
