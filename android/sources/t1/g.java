package t1;

import n1.h;
import o1.l;
import o1.o;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18165d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f18166e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ l f18167i;

    public /* synthetic */ g(h hVar, l lVar, int i5) {
        this.f18165d = i5;
        this.f18166e = hVar;
        this.f18167i = lVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f18165d) {
            case 0:
                this.f18166e.e(this.f18167i);
                break;
            case 1:
                Object obj = this.f18167i;
                if (obj == null) {
                    obj = new o("No provider data returned");
                }
                this.f18166e.e(obj);
                break;
            default:
                this.f18166e.e(this.f18167i);
                break;
        }
    }
}
