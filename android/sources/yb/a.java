package yb;

import javax.inject.Provider;

/* loaded from: classes3.dex */
public final class a implements Provider {

    /* renamed from: i, reason: collision with root package name */
    public static final Object f20756i = new Object();

    /* renamed from: d, reason: collision with root package name */
    public volatile b f20757d;

    /* renamed from: e, reason: collision with root package name */
    public volatile Object f20758e;

    public static Provider a(b bVar) {
        if (bVar instanceof a) {
            return bVar;
        }
        a aVar = new a();
        aVar.f20758e = f20756i;
        aVar.f20757d = bVar;
        return aVar;
    }

    @Override // javax.inject.Provider
    public final Object get() {
        Object obj;
        Object obj2 = this.f20758e;
        Object obj3 = f20756i;
        if (obj2 != obj3) {
            return obj2;
        }
        synchronized (this) {
            try {
                obj = this.f20758e;
                if (obj == obj3) {
                    obj = this.f20757d.get();
                    Object obj4 = this.f20758e;
                    if (obj4 != obj3 && obj4 != obj) {
                        throw new IllegalStateException("Scoped provider was invoked recursively returning different results: " + obj4 + " & " + obj + ". This is likely due to a circular dependency.");
                    }
                    this.f20758e = obj;
                    this.f20757d = null;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return obj;
    }
}
