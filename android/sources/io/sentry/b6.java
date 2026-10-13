package io.sentry;

import java.util.TimerTask;

/* loaded from: classes3.dex */
public final class b6 extends TimerTask {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11403d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d6 f11404e;

    public /* synthetic */ b6(d6 d6Var, int i5) {
        this.f11403d = i5;
        this.f11404e = d6Var;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public final void run() {
        switch (this.f11403d) {
            case 0:
                d6 d6Var = this.f11404e;
                l6 a = d6Var.a();
                if (a == null) {
                    a = l6.OK;
                }
                d6Var.q(a, null);
                d6Var.f11518l.set(false);
                break;
            default:
                d6 d6Var2 = this.f11404e;
                l6 a10 = d6Var2.a();
                if (a10 == null) {
                    a10 = l6.DEADLINE_EXCEEDED;
                }
                d6Var2.d(a10, d6Var2.f11524r.f11921g != null, null);
                d6Var2.f11519m.set(false);
                break;
        }
    }
}
