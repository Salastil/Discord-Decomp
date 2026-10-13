package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class s2 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1101d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ com.swmansion.rnscreens.b f1102e;

    public /* synthetic */ s2(com.swmansion.rnscreens.b bVar, int i5) {
        this.f1101d = i5;
        this.f1102e = bVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1101d) {
            case 0:
                this.f1102e.t();
                break;
            default:
                b2.b bVar = this.f1102e.f968q0;
                if (bVar instanceof h3) {
                    bVar.b(null);
                    break;
                }
                break;
        }
    }
}
