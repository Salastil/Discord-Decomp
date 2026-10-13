package k4;

import androidx.core.view.s0;
import java.util.WeakHashMap;
import l4.v;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13166d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ l4.h f13167e;

    public /* synthetic */ d(l4.h hVar, int i5) {
        this.f13166d = i5;
        this.f13167e = hVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f13166d;
        l4.f fVar = l4.f.f13726x;
        l4.h hVar = this.f13167e;
        switch (i5) {
            case 0:
                WeakHashMap weakHashMap = s0.a;
                if (hVar.isAttachedToWindow()) {
                    hVar.F = false;
                    hVar.H.add(fVar);
                    v vVar = hVar.f13737w;
                    vVar.f13803x.clear();
                    vVar.f13789e.cancel();
                    if (!vVar.isVisible()) {
                        vVar.f13800o0 = 1;
                    }
                    hVar.setProgress(0.0f);
                    break;
                }
                break;
            case 1:
                WeakHashMap weakHashMap2 = s0.a;
                if (hVar.isAttachedToWindow()) {
                    hVar.H.add(fVar);
                    hVar.f13737w.n();
                    break;
                }
                break;
            default:
                WeakHashMap weakHashMap3 = s0.a;
                if (hVar.isAttachedToWindow()) {
                    hVar.F = false;
                    hVar.f13737w.k();
                    break;
                }
                break;
        }
    }
}
