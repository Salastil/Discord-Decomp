package wm;

import android.graphics.drawable.Drawable;
import android.view.View;

/* loaded from: classes3.dex */
public final class c implements View.OnLayoutChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19897d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f19898e;

    public /* synthetic */ c(d dVar, int i5) {
        this.f19897d = i5;
        this.f19898e = dVar;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        switch (this.f19897d) {
            case 0:
                view.removeOnLayoutChangeListener(this);
                d dVar = this.f19898e;
                dVar.f19902e = false;
                Drawable background = view.getBackground();
                lh.i iVar = background instanceof lh.i ? (lh.i) background : null;
                if (iVar != null) {
                    dVar.a(iVar);
                    break;
                }
                break;
            default:
                view.removeOnLayoutChangeListener(this);
                d dVar2 = this.f19898e;
                dVar2.f19901d = false;
                Drawable background2 = view.getBackground();
                lh.i iVar2 = background2 instanceof lh.i ? (lh.i) background2 : null;
                if (iVar2 != null) {
                    dVar2.b(iVar2);
                    break;
                }
                break;
        }
    }
}
