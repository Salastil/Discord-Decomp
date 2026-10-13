package le;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import hc.w;
import io.sentry.Breadcrumb;
import io.sentry.SentryLevel;
import io.sentry.android.core.AppComponentsBreadcrumbsIntegration;
import ke.d0;

/* loaded from: classes3.dex */
public final /* synthetic */ class u implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13942d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f13943e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ long f13944i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f13945v;

    public /* synthetic */ u(e4.l lVar, int i5, long j) {
        this.f13942d = 0;
        this.f13943e = lVar;
        this.f13945v = i5;
        this.f13944i = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f13942d;
        int i6 = this.f13945v;
        long j = this.f13944i;
        Object obj = this.f13943e;
        switch (i5) {
            case 0:
                w wVar = (w) ((e4.l) obj).f7960i;
                int i10 = d0.a;
                ic.u uVar = (ic.u) wVar.f9929d.f5368q;
                AnalyticsListener$EventTime g6 = uVar.g((nd.s) uVar.f10546v.f1145w);
                uVar.k(g6, 1018, new ic.q(g6, i6, j));
                break;
            case 1:
                w wVar2 = (w) ((e4.l) obj).f7960i;
                int i11 = d0.a;
                ic.u uVar2 = (ic.u) wVar2.f9929d.f5368q;
                AnalyticsListener$EventTime g10 = uVar2.g((nd.s) uVar2.f10546v.f1145w);
                uVar2.k(g10, 1021, new ic.q(g10, j, i6));
                break;
            default:
                AppComponentsBreadcrumbsIntegration appComponentsBreadcrumbsIntegration = (AppComponentsBreadcrumbsIntegration) obj;
                if (appComponentsBreadcrumbsIntegration.f11038e != null) {
                    Breadcrumb breadcrumb = new Breadcrumb(j);
                    breadcrumb.f10976w = "system";
                    breadcrumb.f10978y = "device.event";
                    breadcrumb.f10975v = "Low memory";
                    breadcrumb.c("LOW_MEMORY", "action");
                    breadcrumb.c(Integer.valueOf(i6), "level");
                    breadcrumb.F = SentryLevel.WARNING;
                    appComponentsBreadcrumbsIntegration.f11038e.g(breadcrumb, AppComponentsBreadcrumbsIntegration.f11036w);
                    break;
                }
                break;
        }
    }

    public /* synthetic */ u(Object obj, long j, int i5, int i6) {
        this.f13942d = i6;
        this.f13943e = obj;
        this.f13944i = j;
        this.f13945v = i5;
    }
}
