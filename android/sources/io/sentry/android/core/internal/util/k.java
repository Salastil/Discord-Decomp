package io.sentry.android.core.internal.util;

import android.os.Handler;
import android.view.Window;
import io.sentry.SentryLevel;
import java.util.concurrent.CopyOnWriteArraySet;

/* loaded from: classes3.dex */
public final /* synthetic */ class k implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11240d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ o f11241e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Window f11242i;

    public /* synthetic */ k(o oVar, Window window, int i5) {
        this.f11240d = i5;
        this.f11241e = oVar;
        this.f11242i = window;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11240d) {
            case 0:
                o oVar = this.f11241e;
                CopyOnWriteArraySet copyOnWriteArraySet = oVar.f11247e;
                Window window = this.f11242i;
                if (copyOnWriteArraySet.add(window)) {
                    try {
                        d dVar = oVar.E;
                        m mVar = oVar.F;
                        Handler handler = oVar.f11249v;
                        dVar.getClass();
                        if (mVar != null) {
                            window.addOnFrameMetricsAvailableListener(mVar, handler);
                            break;
                        } else {
                            break;
                        }
                    } catch (Throwable th2) {
                        oVar.f11248i.k(SentryLevel.ERROR, "Failed to add frameMetricsAvailableListener", th2);
                        return;
                    }
                }
                break;
            default:
                o oVar2 = this.f11241e;
                Window window2 = this.f11242i;
                try {
                    if (oVar2.f11247e.remove(window2)) {
                        d dVar2 = oVar2.E;
                        m mVar2 = oVar2.F;
                        dVar2.getClass();
                        if (mVar2 != null) {
                            window2.removeOnFrameMetricsAvailableListener(mVar2);
                            break;
                        } else {
                            break;
                        }
                    }
                } catch (Throwable th3) {
                    oVar2.f11248i.k(SentryLevel.ERROR, "Failed to remove frameMetricsAvailableListener", th3);
                }
                break;
        }
    }
}
