package androidx.appcompat.widget;

import android.view.View;
import androidx.appcompat.view.menu.ActionMenuItemView;

/* loaded from: classes.dex */
public final class k extends w1 {
    public final /* synthetic */ int G = 1;
    public final /* synthetic */ View H;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(ActionMenuItemView actionMenuItemView) {
        super(actionMenuItemView);
        this.H = actionMenuItemView;
    }

    @Override // androidx.appcompat.widget.w1
    public final n.z b() {
        h hVar;
        switch (this.G) {
            case 0:
                h hVar2 = ((l) this.H).f1023d.Q;
                if (hVar2 == null) {
                    return null;
                }
                return hVar2.a();
            default:
                n.b bVar = ((ActionMenuItemView) this.H).f811x;
                if (bVar == null || (hVar = ((i) bVar).a.R) == null) {
                    return null;
                }
                return hVar.a();
        }
    }

    @Override // androidx.appcompat.widget.w1
    public final boolean c() {
        n.z b10;
        switch (this.G) {
            case 0:
                ((l) this.H).f1023d.n();
                return true;
            default:
                ActionMenuItemView actionMenuItemView = (ActionMenuItemView) this.H;
                n.i iVar = actionMenuItemView.f809v;
                return iVar != null && iVar.c(actionMenuItemView.f806d) && (b10 = b()) != null && b10.isShowing();
        }
    }

    @Override // androidx.appcompat.widget.w1
    public boolean d() {
        switch (this.G) {
            case 0:
                n nVar = ((l) this.H).f1023d;
                if (nVar.S != null) {
                    return false;
                }
                nVar.l();
                return true;
            default:
                return super.d();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(l lVar, l lVar2) {
        super(lVar2);
        this.H = lVar;
    }
}
