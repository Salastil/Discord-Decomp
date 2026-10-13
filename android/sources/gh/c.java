package gh;

import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.view.View;

/* loaded from: classes3.dex */
public final class c {
    public n3.b a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f9245b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ View f9246c;

    public /* synthetic */ c(int i5, View view) {
        this.f9245b = i5;
        this.f9246c = view;
    }

    public final void a(Drawable drawable) {
        switch (this.f9245b) {
            case 0:
                d dVar = (d) this.f9246c;
                dVar.setIndeterminate(false);
                dVar.a(dVar.f9248e, dVar.f9249i);
                break;
            case 1:
                d dVar2 = (d) this.f9246c;
                if (!dVar2.f9253y) {
                    dVar2.setVisibility(dVar2.E);
                    break;
                }
                break;
            default:
                ColorStateList colorStateList = ((wg.b) this.f9246c).L;
                if (colorStateList != null) {
                    drawable.setTintList(colorStateList);
                    break;
                }
                break;
        }
    }

    public void b(Drawable drawable) {
        switch (this.f9245b) {
            case 2:
                wg.b bVar = (wg.b) this.f9246c;
                ColorStateList colorStateList = bVar.L;
                if (colorStateList != null) {
                    drawable.setTint(colorStateList.getColorForState(bVar.P, colorStateList.getDefaultColor()));
                    break;
                }
                break;
        }
    }

    public final void c(Drawable drawable) {
    }
}
