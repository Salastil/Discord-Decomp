package q;

import android.os.Bundle;

/* loaded from: classes.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16614d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Bundle f16615e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ g f16616i;

    public /* synthetic */ b(g gVar, Bundle bundle, int i5) {
        this.f16614d = i5;
        this.f16616i = gVar;
        this.f16615e = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16614d) {
            case 0:
                this.f16616i.f16637g.onUnminimized(this.f16615e);
                break;
            default:
                this.f16616i.f16637g.onWarmupCompleted(this.f16615e);
                break;
        }
    }
}
