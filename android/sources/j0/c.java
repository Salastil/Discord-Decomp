package j0;

import android.view.Choreographer;
import java.util.ArrayList;
import kotlin.Unit;

/* loaded from: classes.dex */
public final class c implements Choreographer.FrameCallback, Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ d f12361d;

    public c(d dVar) {
        this.f12361d = dVar;
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        this.f12361d.f12363v.removeCallbacks(this);
        d.p0(this.f12361d);
        d dVar = this.f12361d;
        synchronized (dVar.f12364w) {
            if (dVar.G) {
                dVar.G = false;
                ArrayList arrayList = dVar.f12366y;
                dVar.f12366y = dVar.E;
                dVar.E = arrayList;
                int size = arrayList.size();
                for (int i5 = 0; i5 < size; i5++) {
                    ((Choreographer.FrameCallback) arrayList.get(i5)).doFrame(j);
                }
                arrayList.clear();
            }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        d.p0(this.f12361d);
        d dVar = this.f12361d;
        synchronized (dVar.f12364w) {
            try {
                if (dVar.f12366y.isEmpty()) {
                    dVar.f12362i.removeFrameCallback(this);
                    dVar.G = false;
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
