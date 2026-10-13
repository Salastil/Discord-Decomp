package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class w3 extends w3.q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1154d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f1155e;

    /* renamed from: f, reason: collision with root package name */
    public int f1156f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ Object f1157g;

    public w3(x3 x3Var, int i5) {
        this.f1154d = 0;
        this.f1157g = x3Var;
        this.f1156f = i5;
        this.f1155e = false;
    }

    @Override // w3.q, androidx.core.view.b1
    public void a() {
        switch (this.f1154d) {
            case 0:
                this.f1155e = true;
                break;
        }
    }

    @Override // w3.q, androidx.core.view.b1
    public final void b() {
        switch (this.f1154d) {
            case 0:
                ((x3) this.f1157g).a.setVisibility(0);
                break;
            default:
                if (!this.f1155e) {
                    this.f1155e = true;
                    androidx.core.view.b1 b1Var = ((m.f) this.f1157g).f14305d;
                    if (b1Var != null) {
                        b1Var.b();
                        break;
                    }
                }
                break;
        }
    }

    @Override // androidx.core.view.b1
    public final void onAnimationEnd() {
        switch (this.f1154d) {
            case 0:
                if (!this.f1155e) {
                    ((x3) this.f1157g).a.setVisibility(this.f1156f);
                    break;
                }
                break;
            default:
                int i5 = this.f1156f + 1;
                this.f1156f = i5;
                m.f fVar = (m.f) this.f1157g;
                if (i5 == fVar.a.size()) {
                    androidx.core.view.b1 b1Var = fVar.f14305d;
                    if (b1Var != null) {
                        b1Var.onAnimationEnd();
                    }
                    this.f1156f = 0;
                    this.f1155e = false;
                    fVar.f14306e = false;
                    break;
                }
                break;
        }
    }

    public w3(m.f fVar) {
        this.f1154d = 1;
        this.f1157g = fVar;
        this.f1155e = false;
        this.f1156f = 0;
    }
}
