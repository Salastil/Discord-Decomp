package f4;

import java.util.HashMap;

/* loaded from: classes.dex */
public final class w {

    /* renamed from: e, reason: collision with root package name */
    public static final String f8373e = v3.p.f("WorkTimer");
    public final rd.u a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f8374b = new HashMap();

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f8375c = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final Object f8376d = new Object();

    public w(rd.u uVar) {
        this.a = uVar;
    }

    public final void a(e4.j jVar) {
        synchronized (this.f8376d) {
            try {
                if (((v) this.f8374b.remove(jVar)) != null) {
                    v3.p.d().a(f8373e, "Stopping timer for " + jVar);
                    this.f8375c.remove(jVar);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
