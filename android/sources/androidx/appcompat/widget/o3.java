package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final /* synthetic */ class o3 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1059d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Toolbar f1060e;

    public /* synthetic */ o3(Toolbar toolbar, int i5) {
        this.f1059d = i5;
        this.f1060e = toolbar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1059d) {
            case 0:
                r3 r3Var = this.f1060e.f894m0;
                n.l lVar = r3Var == null ? null : r3Var.f1089e;
                if (lVar != null) {
                    lVar.collapseActionView();
                    break;
                }
                break;
            default:
                this.f1060e.m();
                break;
        }
    }
}
