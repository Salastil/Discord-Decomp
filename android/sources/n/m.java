package n;

import android.view.ActionProvider;

/* loaded from: classes.dex */
public final class m implements ActionProvider.VisibilityListener {
    public ve.i a;

    /* renamed from: b, reason: collision with root package name */
    public final ActionProvider f14694b;

    public m(q qVar, ActionProvider actionProvider) {
        this.f14694b = actionProvider;
    }

    @Override // android.view.ActionProvider.VisibilityListener
    public final void onActionProviderVisibilityChanged(boolean z5) {
        ve.i iVar = this.a;
        if (iVar != null) {
            j jVar = ((l) iVar.f19405d).f14681n;
            jVar.f14653h = true;
            jVar.p(true);
        }
    }
}
