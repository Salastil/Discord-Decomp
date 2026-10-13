package nd;

/* loaded from: classes3.dex */
public final /* synthetic */ class d0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15083d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h0 f15084e;

    public /* synthetic */ d0(h0 h0Var, int i5) {
        this.f15083d = i5;
        this.f15084e = h0Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f15083d) {
            case 0:
                this.f15084e.t();
                break;
            case 1:
                h0 h0Var = this.f15084e;
                if (!h0Var.f15109i0) {
                    p pVar = h0Var.N;
                    pVar.getClass();
                    pVar.c(h0Var);
                    break;
                }
                break;
            default:
                this.f15084e.f15101c0 = true;
                break;
        }
    }
}
