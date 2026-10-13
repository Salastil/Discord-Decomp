package q;

import android.os.Bundle;

/* loaded from: classes.dex */
public final class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16621d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Bundle f16622e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ g f16623i;

    public /* synthetic */ d(g gVar, Bundle bundle, int i5) {
        this.f16621d = i5;
        this.f16623i = gVar;
        this.f16622e = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16621d) {
            case 0:
                this.f16623i.f16637g.onMessageChannelReady(this.f16622e);
                break;
            default:
                this.f16623i.f16637g.onMinimized(this.f16622e);
                break;
        }
    }
}
