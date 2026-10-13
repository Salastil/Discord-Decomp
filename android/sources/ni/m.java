package ni;

/* loaded from: classes3.dex */
public final class m implements yi.a {

    /* renamed from: c, reason: collision with root package name */
    public static final Object f15501c = new Object();
    public volatile Object a = f15501c;

    /* renamed from: b, reason: collision with root package name */
    public volatile yi.a f15502b;

    public m(yi.a aVar) {
        this.f15502b = aVar;
    }

    @Override // yi.a
    public final Object get() {
        Object obj;
        Object obj2 = this.a;
        Object obj3 = f15501c;
        if (obj2 != obj3) {
            return obj2;
        }
        synchronized (this) {
            try {
                obj = this.a;
                if (obj == obj3) {
                    obj = this.f15502b.get();
                    this.a = obj;
                    this.f15502b = null;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return obj;
    }
}
