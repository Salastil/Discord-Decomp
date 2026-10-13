package x0;

import android.util.SparseIntArray;
import android.view.FrameMetrics;
import android.view.Window;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public final class i implements Window.OnFrameMetricsAvailableListener {
    public final /* synthetic */ ke.u a;

    public i(ke.u uVar) {
        this.a = uVar;
    }

    @Override // android.view.Window.OnFrameMetricsAvailableListener
    public final void onFrameMetricsAvailable(Window window, FrameMetrics frameMetrics, int i5) {
        ke.u uVar = this.a;
        int i6 = uVar.f13352b;
        if ((i6 & 1) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[0], frameMetrics.getMetric(8));
        }
        if ((i6 & 2) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[1], frameMetrics.getMetric(1));
        }
        if ((i6 & 4) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[2], frameMetrics.getMetric(3));
        }
        if ((i6 & 8) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[3], frameMetrics.getMetric(4));
        }
        if ((i6 & 16) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[4], frameMetrics.getMetric(5));
        }
        if ((i6 & 64) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[6], frameMetrics.getMetric(7));
        }
        if ((i6 & 32) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[5], frameMetrics.getMetric(6));
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[7], frameMetrics.getMetric(0));
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            ke.u.b(((SparseIntArray[]) uVar.f13353c)[8], frameMetrics.getMetric(2));
        }
    }
}
