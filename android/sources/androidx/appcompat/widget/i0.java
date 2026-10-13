package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class i0 extends w1 {
    public final /* synthetic */ p0 G;
    public final /* synthetic */ s0 H;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i0(s0 s0Var, s0 s0Var2, p0 p0Var) {
        super(s0Var2);
        this.H = s0Var;
        this.G = p0Var;
    }

    @Override // androidx.appcompat.widget.w1
    public final n.z b() {
        return this.G;
    }

    @Override // androidx.appcompat.widget.w1
    public final boolean c() {
        s0 s0Var = this.H;
        if (s0Var.getInternalPopup().isShowing()) {
            return true;
        }
        s0Var.f1099x.k(s0Var.getTextDirection(), s0Var.getTextAlignment());
        return true;
    }
}
