package q;

import android.os.Bundle;

/* loaded from: classes.dex */
public final class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16617d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f16618e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Bundle f16619i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ g f16620v;

    public /* synthetic */ c(g gVar, String str, Bundle bundle, int i5) {
        this.f16617d = i5;
        this.f16620v = gVar;
        this.f16618e = str;
        this.f16619i = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16617d) {
            case 0:
                this.f16620v.f16637g.extraCallback(this.f16618e, this.f16619i);
                break;
            default:
                this.f16620v.f16637g.onPostMessage(this.f16618e, this.f16619i);
                break;
        }
    }
}
