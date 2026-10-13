package androidx.appcompat.widget;

import android.content.Context;
import android.view.View;
import com.discord.R;

/* loaded from: classes.dex */
public final class h extends n.t {

    /* renamed from: l, reason: collision with root package name */
    public final /* synthetic */ int f1002l = 0;

    /* renamed from: m, reason: collision with root package name */
    public final /* synthetic */ n f1003m;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(n nVar, Context context, n.j jVar, View view) {
        super(context, jVar, view, true, R.attr.actionOverflowMenuStyle, 0);
        this.f1003m = nVar;
        this.f14706f = 8388613;
        ve.i iVar = nVar.U;
        this.f14708h = iVar;
        n.r rVar = this.f14709i;
        if (rVar != null) {
            rVar.j(iVar);
        }
    }

    @Override // n.t
    public final void c() {
        switch (this.f1002l) {
            case 0:
                n nVar = this.f1003m;
                nVar.R = null;
                nVar.V = 0;
                super.c();
                break;
            default:
                n nVar2 = this.f1003m;
                n.j jVar = nVar2.f1041i;
                if (jVar != null) {
                    jVar.c(true);
                }
                nVar2.Q = null;
                super.c();
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(n nVar, Context context, n.b0 b0Var, View view) {
        super(context, b0Var, view, false, R.attr.actionOverflowMenuStyle, 0);
        this.f1003m = nVar;
        if ((b0Var.A.f14691x & 32) != 32) {
            View view2 = nVar.G;
            this.f14705e = view2 == null ? (View) nVar.E : view2;
        }
        ve.i iVar = nVar.U;
        this.f14708h = iVar;
        n.r rVar = this.f14709i;
        if (rVar != null) {
            rVar.j(iVar);
        }
    }
}
