package io.sentry;

/* loaded from: classes3.dex */
public final class r implements b1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11924d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f11925e;

    public /* synthetic */ r(int i5, Object obj) {
        this.f11924d = i5;
        this.f11925e = obj;
    }

    @Override // java.lang.AutoCloseable
    public final void close() {
        switch (this.f11924d) {
            case 0:
                s.a.set((x0) this.f11925e);
                break;
            default:
                ((io.sentry.util.a) this.f11925e).unlock();
                break;
        }
    }
}
