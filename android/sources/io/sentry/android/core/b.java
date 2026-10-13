package io.sentry.android.core;

import android.app.Activity;
import androidx.appcompat.widget.b4;
import androidx.core.app.FrameMetricsAggregator;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11096d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b4 f11097e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Activity f11098i;

    public /* synthetic */ b(b4 b4Var, Activity activity, int i5) {
        this.f11096d = i5;
        this.f11097e = b4Var;
        this.f11098i = activity;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Activity activity;
        switch (this.f11096d) {
            case 0:
                ((FrameMetricsAggregator) ((io.sentry.util.e) this.f11097e.f927d).a()).a(this.f11098i);
                break;
            default:
                ke.u uVar = ((FrameMetricsAggregator) ((io.sentry.util.e) this.f11097e.f927d).a()).a;
                ArrayList arrayList = (ArrayList) uVar.f13354d;
                Iterator it = arrayList.iterator();
                while (true) {
                    boolean hasNext = it.hasNext();
                    activity = this.f11098i;
                    if (hasNext) {
                        WeakReference weakReference = (WeakReference) it.next();
                        if (weakReference.get() == activity) {
                            arrayList.remove(weakReference);
                        }
                    }
                }
                activity.getWindow().removeOnFrameMetricsAvailableListener((x0.i) uVar.f13355e);
                break;
        }
    }
}
