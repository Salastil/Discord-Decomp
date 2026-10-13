package androidx.core.app;

import android.app.Activity;
import android.os.Handler;
import android.os.HandlerThread;
import android.util.SparseIntArray;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import ke.u;
import x0.i;

/* loaded from: classes.dex */
public class FrameMetricsAggregator {
    public final u a;

    public FrameMetricsAggregator() {
        this(1);
    }

    public final void a(Activity activity) {
        u uVar = this.a;
        uVar.getClass();
        if (u.f13350g == null) {
            HandlerThread handlerThread = new HandlerThread("FrameMetricsAggregator");
            u.f13350g = handlerThread;
            handlerThread.start();
            u.f13351h = new Handler(u.f13350g.getLooper());
        }
        for (int i5 = 0; i5 <= 8; i5++) {
            SparseIntArray[] sparseIntArrayArr = (SparseIntArray[]) uVar.f13353c;
            if (sparseIntArrayArr[i5] == null && (uVar.f13352b & (1 << i5)) != 0) {
                sparseIntArrayArr[i5] = new SparseIntArray();
            }
        }
        activity.getWindow().addOnFrameMetricsAvailableListener((i) uVar.f13355e, u.f13351h);
        ((ArrayList) uVar.f13354d).add(new WeakReference(activity));
    }

    public final void b() {
        u uVar = this.a;
        ArrayList arrayList = (ArrayList) uVar.f13354d;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            WeakReference weakReference = (WeakReference) arrayList.get(size);
            Activity activity = (Activity) weakReference.get();
            if (weakReference.get() != null) {
                activity.getWindow().removeOnFrameMetricsAvailableListener((i) uVar.f13355e);
                arrayList.remove(size);
            }
        }
    }

    public FrameMetricsAggregator(int i5) {
        this.a = new u(i5);
    }
}
