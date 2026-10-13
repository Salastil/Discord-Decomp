package y3;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20633d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g f20634e;

    public /* synthetic */ f(g gVar, int i5) {
        this.f20633d = i5;
        this.f20634e = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f20633d) {
            case 0:
                g.a(this.f20634e);
                break;
            default:
                g.c(this.f20634e);
                break;
        }
    }
}
