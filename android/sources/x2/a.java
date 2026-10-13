package x2;

import android.view.FrameMetrics;
import android.view.View;
import android.view.ViewParent;
import android.view.Window;
import com.discord.R;
import com.google.firebase.messaging.r;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a implements Window.OnFrameMetricsAvailableListener {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f20249b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f20250c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f20251d;

    public a(ArrayList delegates) {
        Intrinsics.checkNotNullParameter(delegates, "delegates");
        this.a = delegates;
        this.f20250c = new ArrayList();
        this.f20251d = new ArrayList();
    }

    @Override // android.view.Window.OnFrameMetricsAvailableListener
    public final void onFrameMetricsAvailable(Window window, FrameMetrics frameMetrics, int i5) {
        View decorView;
        synchronized (this) {
            try {
                this.f20249b = true;
                Iterator it = this.a.iterator();
                while (it.hasNext()) {
                    ((Window.OnFrameMetricsAvailableListener) it.next()).onFrameMetricsAvailable(window, frameMetrics, i5);
                }
                if (!this.f20250c.isEmpty()) {
                    Iterator it2 = this.f20250c.iterator();
                    while (it2.hasNext()) {
                        this.a.add((Window.OnFrameMetricsAvailableListener) it2.next());
                    }
                    this.f20250c.clear();
                }
                if (!this.f20251d.isEmpty()) {
                    boolean isEmpty = this.a.isEmpty();
                    Iterator it3 = this.f20251d.iterator();
                    while (it3.hasNext()) {
                        this.a.remove((Window.OnFrameMetricsAvailableListener) it3.next());
                    }
                    this.f20251d.clear();
                    if (!isEmpty && this.a.isEmpty()) {
                        if (window != null) {
                            window.removeOnFrameMetricsAvailableListener(this);
                        }
                        if (window != null && (decorView = window.getDecorView()) != null) {
                            decorView.setTag(R.id.metricsDelegator, null);
                        }
                    }
                }
                this.f20249b = false;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (window != null) {
            View view = window.getDecorView();
            Intrinsics.checkNotNullExpressionValue(view, "window.decorView");
            Intrinsics.checkNotNullParameter(view, "view");
            Intrinsics.checkNotNullParameter(view, "view");
            ViewParent parent = view.getParent();
            while (parent instanceof View) {
                view = parent;
                parent = view.getParent();
            }
            Object tag = view.getTag(R.id.metricsStateHolder);
            if (tag == null) {
                tag = new h();
                view.setTag(R.id.metricsStateHolder, tag);
            }
            r rVar = ((h) tag).a;
            if (rVar != null) {
                synchronized (((ArrayList) rVar.f6260i)) {
                    int size = ((ArrayList) rVar.f6260i).size() - 1;
                    if (-1 < size) {
                        if (((ArrayList) rVar.f6260i).get(size) != null) {
                            throw new ClassCastException();
                        }
                        throw null;
                    }
                    Unit unit2 = Unit.a;
                }
            }
        }
    }
}
