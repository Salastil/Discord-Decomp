package hn;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10117d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ f f10118e;

    public /* synthetic */ c(f fVar, int i5) {
        this.f10117d = i5;
        this.f10118e = fVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f10117d) {
            case 0:
                this.f10118e.f();
                break;
            default:
                this.f10118e.requestLayout();
                break;
        }
    }
}
