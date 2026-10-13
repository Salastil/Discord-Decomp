package x2;

import android.app.Activity;
import android.content.Context;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.Choreographer;
import android.view.FrameMetrics;
import android.view.View;
import android.view.Window;
import androidx.metrics.performance.JankStats;
import com.discord.R;
import com.google.firebase.messaging.r;
import io.sentry.android.core.internal.util.m;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.util.ArrayList;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class e extends vd.d {

    /* renamed from: l, reason: collision with root package name */
    public static Handler f20256l;

    /* renamed from: f, reason: collision with root package name */
    public final Window f20257f;

    /* renamed from: g, reason: collision with root package name */
    public long f20258g;

    /* renamed from: h, reason: collision with root package name */
    public long f20259h;

    /* renamed from: i, reason: collision with root package name */
    public long f20260i;
    public final c j;
    public final m k;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(JankStats jankStats, View view, Window window) {
        super(jankStats, view);
        Intrinsics.checkNotNullParameter(jankStats, "jankStats");
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(window, "window");
        Intrinsics.checkNotNullParameter(jankStats, "jankStats");
        Intrinsics.checkNotNullParameter(view, "view");
        this.f20257f = window;
        this.j = new c((ArrayList) this.f19360d);
        this.k = new m(1, this, jankStats);
    }

    public static a p(Window window) {
        a aVar = (a) window.getDecorView().getTag(R.id.metricsDelegator);
        if (aVar != null) {
            return aVar;
        }
        a aVar2 = new a(new ArrayList());
        if (f20256l == null) {
            HandlerThread handlerThread = new HandlerThread("FrameMetricsAggregator");
            handlerThread.start();
            f20256l = new Handler(handlerThread.getLooper());
        }
        window.addOnFrameMetricsAvailableListener(aVar2, f20256l);
        window.getDecorView().setTag(R.id.metricsDelegator, aVar2);
        return aVar2;
    }

    public static void q(Window window, m delegate) {
        a aVar = (a) window.getDecorView().getTag(R.id.metricsDelegator);
        if (aVar != null) {
            Intrinsics.checkNotNullParameter(delegate, "delegate");
            Intrinsics.checkNotNullParameter(window, "window");
            synchronized (aVar) {
                try {
                    if (aVar.f20249b) {
                        aVar.f20251d.add(delegate);
                    } else {
                        boolean isEmpty = aVar.a.isEmpty();
                        aVar.a.remove(delegate);
                        if (!isEmpty && aVar.a.isEmpty()) {
                            window.removeOnFrameMetricsAvailableListener(aVar);
                            window.getDecorView().setTag(R.id.metricsDelegator, null);
                        }
                        Unit unit = Unit.a;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    public long m(FrameMetrics metrics) {
        Intrinsics.checkNotNullParameter(metrics, "metrics");
        View view = (View) ((WeakReference) this.a).get();
        Field field = b.f20252d;
        if (vd.d.f19357e < 0) {
            Window window = null;
            if ((view != null ? view.getContext() : null) instanceof Activity) {
                Context context = view.getContext();
                Intrinsics.checkNotNull(context, "null cannot be cast to non-null type android.app.Activity");
                window = ((Activity) context).getWindow();
            }
            float f2 = 60.0f;
            float refreshRate = window != null ? window.getWindowManager().getDefaultDisplay().getRefreshRate() : 60.0f;
            if (refreshRate >= 30.0f && refreshRate <= 200.0f) {
                f2 = refreshRate;
            }
            vd.d.f19357e = (long) ((1000 / f2) * 1000000);
        }
        return vd.d.f19357e;
    }

    public c n(long j, long j5, FrameMetrics frameMetrics) {
        Intrinsics.checkNotNullParameter(frameMetrics, "frameMetrics");
        long metric = frameMetrics.getMetric(5) + frameMetrics.getMetric(4) + frameMetrics.getMetric(3) + frameMetrics.getMetric(2) + frameMetrics.getMetric(1) + frameMetrics.getMetric(0);
        this.f20260i = j + metric;
        r rVar = ((h) this.f19359c).a;
        if (rVar != null) {
            rVar.f((ArrayList) this.f19360d);
        }
        boolean z5 = metric > j5;
        long metric2 = frameMetrics.getMetric(8);
        c cVar = this.j;
        cVar.f2246b = j;
        cVar.f2247c = metric;
        cVar.f2248d = z5;
        cVar.f20253e = metric2;
        return cVar;
    }

    public long o(FrameMetrics frameMetrics) {
        Intrinsics.checkNotNullParameter(frameMetrics, "frameMetrics");
        Object obj = b.f20252d.get((Choreographer) this.f19358b);
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Long");
        return ((Long) obj).longValue();
    }

    public final void r(boolean z5) {
        synchronized (this.f20257f) {
            try {
                if (!z5) {
                    q(this.f20257f, this.k);
                    this.f20259h = 0L;
                } else if (this.f20259h == 0) {
                    a p3 = p(this.f20257f);
                    m delegate = this.k;
                    Intrinsics.checkNotNullParameter(delegate, "delegate");
                    synchronized (p3) {
                        try {
                            if (p3.f20249b) {
                                p3.f20250c.add(delegate);
                            } else {
                                p3.a.add(delegate);
                            }
                        } finally {
                        }
                    }
                    this.f20259h = System.nanoTime();
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
