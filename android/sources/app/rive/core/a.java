package app.rive.core;

import android.content.res.Configuration;
import cc.j;
import com.discord.external_pip.ExternalPipTransitionView;
import com.facebook.react.uimanager.ViewProps;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.d;
import e4.l;
import hc.w;
import ic.u;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.SentryLevel;
import io.sentry.android.core.AppComponentsBreadcrumbsIntegration;
import io.sentry.android.replay.capture.BufferCaptureStrategy;
import io.sentry.protocol.e;
import java.util.Locale;
import ke.d0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2601d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f2602e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2603i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f2604v;

    public /* synthetic */ a(Object obj, long j, Object obj2, int i5) {
        this.f2601d = i5;
        this.f2603i = obj;
        this.f2602e = j;
        this.f2604v = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f2601d;
        long j = this.f2602e;
        Object obj = this.f2604v;
        Object obj2 = this.f2603i;
        switch (i5) {
            case 0:
                CommandQueue.dispose$lambda$0((CommandQueue) obj2, j, (String) obj);
                break;
            case 1:
                ExternalPipTransitionView.fadeOut$lambda$0((ExternalPipTransitionView) obj2, j, (Function0) obj);
                break;
            case 2:
                AppComponentsBreadcrumbsIntegration appComponentsBreadcrumbsIntegration = (AppComponentsBreadcrumbsIntegration) obj2;
                Configuration configuration = (Configuration) obj;
                if (appComponentsBreadcrumbsIntegration.f11038e != null) {
                    int i6 = appComponentsBreadcrumbsIntegration.f11037d.getResources().getConfiguration().orientation;
                    e eVar = i6 != 1 ? i6 != 2 ? null : e.LANDSCAPE : e.PORTRAIT;
                    String lowerCase = eVar != null ? eVar.name().toLowerCase(Locale.ROOT) : "undefined";
                    Breadcrumb breadcrumb = new Breadcrumb(j);
                    breadcrumb.f10976w = "navigation";
                    breadcrumb.f10978y = "device.orientation";
                    breadcrumb.c(lowerCase, ViewProps.POSITION);
                    breadcrumb.F = SentryLevel.INFO;
                    Hint hint = new Hint();
                    hint.d(configuration, "android:configuration");
                    appComponentsBreadcrumbsIntegration.f11038e.g(breadcrumb, hint);
                    break;
                }
                break;
            case 3:
                BufferCaptureStrategy.onScreenshotRecorded$lambda$2((BufferCaptureStrategy) obj2, (Function2) obj, j);
                break;
            default:
                w wVar = (w) ((l) obj2).f7960i;
                int i10 = d0.a;
                d dVar = wVar.f9929d;
                u uVar = (u) dVar.f5368q;
                AnalyticsListener$EventTime j5 = uVar.j();
                uVar.k(j5, 26, new j(j, j5, obj));
                if (dVar.P == obj) {
                    dVar.f5363l.e(26, new hb.a(7));
                    break;
                }
                break;
        }
    }

    public /* synthetic */ a(Object obj, Object obj2, long j, int i5) {
        this.f2601d = i5;
        this.f2603i = obj;
        this.f2604v = obj2;
        this.f2602e = j;
    }
}
