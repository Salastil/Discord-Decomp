package io.sentry;

import java.util.Iterator;
import java.util.TimerTask;

/* loaded from: classes3.dex */
public final class n extends TimerTask {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11680d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f11681e;

    public /* synthetic */ n(int i5, Object obj) {
        this.f11680d = i5;
        this.f11681e = obj;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public final void run() {
        switch (this.f11680d) {
            case 0:
                Iterator it = ((q) this.f11681e).f11913d.iterator();
                while (it.hasNext()) {
                    ((u0) it.next()).c();
                }
                break;
            case 1:
                io.sentry.android.core.w0 w0Var = (io.sentry.android.core.w0) this.f11681e;
                v3 v3Var = w0Var.f11352x;
                if (w0Var.f11353y) {
                    v3Var.o();
                }
                v3Var.l().getReplayController().stop();
                v3Var.l().getContinuousProfiler().a(false);
                break;
            default:
                io.sentry.transport.p pVar = (io.sentry.transport.p) this.f11681e;
                Iterator it2 = pVar.f12015v.iterator();
                while (it2.hasNext()) {
                    ((io.sentry.transport.o) it2.next()).onRateLimitChanged(pVar);
                }
                break;
        }
    }
}
