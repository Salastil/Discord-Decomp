package l4;

/* loaded from: classes.dex */
public final /* synthetic */ class t implements u {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ v f13781b;

    public /* synthetic */ t(v vVar, int i5) {
        this.a = i5;
        this.f13781b = vVar;
    }

    @Override // l4.u
    public final void run() {
        switch (this.a) {
            case 0:
                this.f13781b.n();
                break;
            default:
                this.f13781b.l();
                break;
        }
    }
}
