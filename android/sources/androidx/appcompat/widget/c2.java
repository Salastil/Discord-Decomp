package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class c2 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f937d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g2 f938e;

    public /* synthetic */ c2(g2 g2Var, int i5) {
        this.f937d = i5;
        this.f938e = g2Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f937d) {
            case 0:
                t1 t1Var = this.f938e.f993i;
                if (t1Var != null) {
                    t1Var.setListSelectionHidden(true);
                    t1Var.requestLayout();
                    break;
                }
                break;
            default:
                g2 g2Var = this.f938e;
                t1 t1Var2 = g2Var.f993i;
                if (t1Var2 != null && t1Var2.isAttachedToWindow() && g2Var.f993i.getCount() > g2Var.f993i.getChildCount() && g2Var.f993i.getChildCount() <= g2Var.J) {
                    g2Var.W.setInputMethodMode(2);
                    g2Var.show();
                    break;
                }
                break;
        }
    }
}
