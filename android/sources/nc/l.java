package nc;

/* loaded from: classes3.dex */
public final /* synthetic */ class l implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15042d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ n f15043e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f15044i;

    public /* synthetic */ l(n nVar, o oVar, int i5) {
        this.f15042d = i5;
        this.f15043e = nVar;
        this.f15044i = oVar;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, nc.o] */
    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Object, nc.o] */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.lang.Object, nc.o] */
    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f15042d) {
            case 0:
                n nVar = this.f15043e;
                this.f15044i.s(nVar.a, nVar.f15046b);
                break;
            case 1:
                n nVar2 = this.f15043e;
                this.f15044i.r(nVar2.a, nVar2.f15046b);
                break;
            default:
                n nVar3 = this.f15043e;
                this.f15044i.C(nVar3.a, nVar3.f15046b);
                break;
        }
    }
}
