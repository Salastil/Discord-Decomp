package io.sentry.android.core.performance;

import android.os.Handler;
import android.os.Looper;
import io.sentry.android.core.u;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11287d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ f f11288e;

    public /* synthetic */ d(f fVar, int i5) {
        this.f11287d = i5;
        this.f11288e = fVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11287d) {
            case 0:
                new Handler(Looper.getMainLooper()).post(new d(this.f11288e, 3));
                break;
            case 1:
                this.f11288e.c();
                break;
            case 2:
                this.f11288e.c();
                break;
            default:
                f fVar = this.f11288e;
                if (fVar.J.get() == 0) {
                    fVar.f11290e = false;
                    u uVar = fVar.E;
                    if (uVar != null && uVar.F.get()) {
                        fVar.E.close();
                        fVar.E = null;
                    }
                    io.sentry.android.core.g gVar = fVar.F;
                    if (gVar != null && gVar.F) {
                        gVar.a(true);
                        fVar.F = null;
                        break;
                    }
                }
                break;
        }
    }
}
