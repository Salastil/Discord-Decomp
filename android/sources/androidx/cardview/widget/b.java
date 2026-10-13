package androidx.cardview.widget;

import android.content.Context;
import android.content.res.ColorStateList;

/* loaded from: classes.dex */
public final class b implements CardViewImpl {
    @Override // androidx.cardview.widget.CardViewImpl
    public final void a(CardViewDelegate cardViewDelegate, float f2) {
        c cVar = (c) cardViewDelegate.c();
        if (f2 == cVar.a) {
            return;
        }
        cVar.a = f2;
        cVar.b(null);
        cVar.invalidateSelf();
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final float b(CardViewDelegate cardViewDelegate) {
        return cardViewDelegate.d().getElevation();
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final float c(CardViewDelegate cardViewDelegate) {
        return ((c) cardViewDelegate.c()).a;
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void d(CardViewDelegate cardViewDelegate) {
        n(cardViewDelegate, f(cardViewDelegate));
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void e(CardViewDelegate cardViewDelegate, float f2) {
        cardViewDelegate.d().setElevation(f2);
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final float f(CardViewDelegate cardViewDelegate) {
        return ((c) cardViewDelegate.c()).f1195e;
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final ColorStateList g(CardViewDelegate cardViewDelegate) {
        return ((c) cardViewDelegate.c()).f1198h;
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void h(CardViewDelegate cardViewDelegate) {
        if (!cardViewDelegate.b()) {
            cardViewDelegate.e(0, 0, 0, 0);
            return;
        }
        float f2 = ((c) cardViewDelegate.c()).f1195e;
        float f10 = ((c) cardViewDelegate.c()).a;
        int ceil = (int) Math.ceil(d.a(f2, f10, cardViewDelegate.a()));
        int ceil2 = (int) Math.ceil(d.b(f2, f10, cardViewDelegate.a()));
        cardViewDelegate.e(ceil, ceil2, ceil, ceil2);
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final float i(CardViewDelegate cardViewDelegate) {
        return c(cardViewDelegate) * 2.0f;
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final float j(CardViewDelegate cardViewDelegate) {
        return c(cardViewDelegate) * 2.0f;
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void k(a aVar, Context context, ColorStateList colorStateList, float f2, float f10, float f11) {
        c cVar = new c(colorStateList, f2);
        aVar.a = cVar;
        aVar.f1191b.setBackgroundDrawable(cVar);
        CardView cardView = aVar.f1191b;
        cardView.setClipToOutline(true);
        cardView.setElevation(f10);
        n(aVar, f11);
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void l(CardViewDelegate cardViewDelegate) {
        n(cardViewDelegate, f(cardViewDelegate));
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void m(CardViewDelegate cardViewDelegate, ColorStateList colorStateList) {
        c cVar = (c) cardViewDelegate.c();
        if (colorStateList == null) {
            cVar.getClass();
            colorStateList = ColorStateList.valueOf(0);
        }
        cVar.f1198h = colorStateList;
        cVar.f1192b.setColor(colorStateList.getColorForState(cVar.getState(), cVar.f1198h.getDefaultColor()));
        cVar.invalidateSelf();
    }

    @Override // androidx.cardview.widget.CardViewImpl
    public final void n(CardViewDelegate cardViewDelegate, float f2) {
        c cVar = (c) cardViewDelegate.c();
        boolean b10 = cardViewDelegate.b();
        boolean a = cardViewDelegate.a();
        if (f2 != cVar.f1195e || cVar.f1196f != b10 || cVar.f1197g != a) {
            cVar.f1195e = f2;
            cVar.f1196f = b10;
            cVar.f1197g = a;
            cVar.b(null);
            cVar.invalidateSelf();
        }
        h(cardViewDelegate);
    }
}
