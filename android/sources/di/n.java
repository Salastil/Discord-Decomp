package di;

/* loaded from: classes3.dex */
public final class n implements q {

    /* renamed from: i, reason: collision with root package name */
    public static final Object f7598i = new Object();

    /* renamed from: d, reason: collision with root package name */
    public volatile o f7599d;

    /* renamed from: e, reason: collision with root package name */
    public volatile Object f7600e;

    /* JADX WARN: Multi-variable type inference failed */
    public static n b(o oVar) {
        if (oVar instanceof n) {
            return (n) oVar;
        }
        n nVar = new n();
        nVar.f7600e = f7598i;
        nVar.f7599d = oVar;
        return nVar;
    }

    @Override // di.q
    public final Object a() {
        Object obj = this.f7600e;
        Object obj2 = f7598i;
        if (obj != obj2) {
            return obj;
        }
        synchronized (this) {
            try {
                Object obj3 = this.f7600e;
                if (obj3 != obj2) {
                    return obj3;
                }
                Object a = this.f7599d.a();
                Object obj4 = this.f7600e;
                if (obj4 != obj2 && obj4 != a) {
                    throw new IllegalStateException("Scoped provider was invoked recursively returning different results: " + obj4 + " & " + a + ". This is likely due to a circular dependency.");
                }
                this.f7600e = a;
                this.f7599d = null;
                return a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
