package io.sentry.android.core;

/* loaded from: classes3.dex */
public final class k implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11257d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b0 f11258e;

    public /* synthetic */ k(b0 b0Var, int i5) {
        this.f11257d = i5;
        this.f11258e = b0Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11257d) {
            case 0:
                ((l) this.f11258e).b(5000L);
                break;
            default:
                ((n) this.f11258e).b(5000L);
                break;
        }
    }
}
