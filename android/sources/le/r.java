package le;

import android.hardware.display.DisplayManager;
import android.os.Handler;
import ke.d0;

/* loaded from: classes3.dex */
public final class r implements q, DisplayManager.DisplayListener {

    /* renamed from: d, reason: collision with root package name */
    public final DisplayManager f13921d;

    /* renamed from: e, reason: collision with root package name */
    public hc.m f13922e;

    public r(DisplayManager displayManager) {
        this.f13921d = displayManager;
    }

    @Override // le.q
    public final void d(hc.m mVar) {
        this.f13922e = mVar;
        Handler m5 = d0.m(null);
        DisplayManager displayManager = this.f13921d;
        displayManager.registerDisplayListener(this, m5);
        mVar.e(displayManager.getDisplay(0));
    }

    @Override // android.hardware.display.DisplayManager.DisplayListener
    public final void onDisplayChanged(int i5) {
        hc.m mVar = this.f13922e;
        if (mVar == null || i5 != 0) {
            return;
        }
        mVar.e(this.f13921d.getDisplay(0));
    }

    @Override // le.q
    public final void r() {
        this.f13921d.unregisterDisplayListener(this);
        this.f13922e = null;
    }

    @Override // android.hardware.display.DisplayManager.DisplayListener
    public final void onDisplayAdded(int i5) {
    }

    @Override // android.hardware.display.DisplayManager.DisplayListener
    public final void onDisplayRemoved(int i5) {
    }
}
