package u1;

import o1.l;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18780d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f18781e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ l f18782i;

    public /* synthetic */ b(d dVar, l lVar, int i5) {
        this.f18780d = i5;
        this.f18781e = dVar;
        this.f18782i = lVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f18780d) {
            case 0:
                this.f18781e.f().e(this.f18782i);
                break;
            case 1:
                this.f18781e.f().e(this.f18782i);
                break;
            default:
                this.f18781e.f().e(this.f18782i);
                break;
        }
    }
}
