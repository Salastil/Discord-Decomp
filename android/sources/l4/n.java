package l4;

/* loaded from: classes.dex */
public final /* synthetic */ class n implements u {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ v f13768b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ String f13769c;

    public /* synthetic */ n(v vVar, String str, int i5) {
        this.a = i5;
        this.f13768b = vVar;
        this.f13769c = str;
    }

    @Override // l4.u
    public final void run() {
        switch (this.a) {
            case 0:
                this.f13768b.s(this.f13769c);
                break;
            case 1:
                this.f13768b.q(this.f13769c);
                break;
            default:
                this.f13768b.u(this.f13769c);
                break;
        }
    }
}
