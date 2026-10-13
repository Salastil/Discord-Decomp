package bf;

/* loaded from: classes3.dex */
public final class h implements b {

    /* renamed from: b, reason: collision with root package name */
    public static h f2887b;

    /* renamed from: c, reason: collision with root package name */
    public static final i f2888c = new i(0, 0, 0, false, false);
    public Object a;

    public /* synthetic */ h(Object obj) {
        this.a = obj;
    }

    public static synchronized h a() {
        h hVar;
        synchronized (h.class) {
            try {
                if (f2887b == null) {
                    f2887b = new h();
                }
                hVar = f2887b;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return hVar;
    }

    @Override // bf.b
    public void f(ye.b bVar) {
        hg.a aVar = (hg.a) this.a;
        if (bVar.f20906e == 0) {
            aVar.e(null, aVar.T);
            return;
        }
        h hVar = aVar.L;
        if (hVar != null) {
            ((ze.k) hVar.a).b(bVar);
        }
    }
}
