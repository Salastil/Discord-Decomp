package uh;

/* loaded from: classes3.dex */
public final class f implements g {

    /* renamed from: i, reason: collision with root package name */
    public static final Object f18908i = new Object();

    /* renamed from: d, reason: collision with root package name */
    public volatile g f18909d;

    /* renamed from: e, reason: collision with root package name */
    public volatile Object f18910e = f18908i;

    public f(g gVar) {
        this.f18909d = gVar;
    }

    public static f b(g gVar) {
        return gVar instanceof f ? (f) gVar : new f(gVar);
    }

    @Override // uh.g
    public final Object a() {
        Object obj = this.f18910e;
        Object obj2 = f18908i;
        if (obj != obj2) {
            return obj;
        }
        synchronized (this) {
            try {
                Object obj3 = this.f18910e;
                if (obj3 != obj2) {
                    return obj3;
                }
                Object a = this.f18909d.a();
                Object obj4 = this.f18910e;
                if (obj4 != obj2 && obj4 != a) {
                    throw new IllegalStateException("Scoped provider was invoked recursively returning different results: " + obj4 + " & " + a + ". This is likely due to a circular dependency.");
                }
                this.f18910e = a;
                this.f18909d = null;
                return a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
