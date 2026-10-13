package l4;

/* loaded from: classes.dex */
public final /* synthetic */ class p implements u {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ v f13772b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f13773c;

    public /* synthetic */ p(v vVar, int i5, int i6) {
        this.a = i6;
        this.f13772b = vVar;
        this.f13773c = i5;
    }

    @Override // l4.u
    public final void run() {
        switch (this.a) {
            case 0:
                this.f13772b.p(this.f13773c);
                break;
            case 1:
                this.f13772b.t(this.f13773c);
                break;
            default:
                this.f13772b.o(this.f13773c);
                break;
        }
    }
}
