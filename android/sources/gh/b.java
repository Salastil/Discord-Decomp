package gh;

import android.os.SystemClock;

/* loaded from: classes3.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9243d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f9244e;

    public /* synthetic */ b(d dVar, int i5) {
        this.f9243d = i5;
        this.f9244e = dVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f9243d) {
            case 0:
                d dVar = this.f9244e;
                if (dVar.f9251w > 0) {
                    SystemClock.uptimeMillis();
                }
                dVar.setVisibility(0);
                break;
            default:
                d dVar2 = this.f9244e;
                ((o) dVar2.getCurrentDrawable()).d(false, false, true);
                if ((dVar2.getProgressDrawable() == null || !dVar2.getProgressDrawable().isVisible()) && (dVar2.getIndeterminateDrawable() == null || !dVar2.getIndeterminateDrawable().isVisible())) {
                    dVar2.setVisibility(4);
                }
                dVar2.getClass();
                break;
        }
    }
}
