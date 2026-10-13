package androidx.cardview.widget;

import android.graphics.Rect;
import android.graphics.drawable.Drawable;

/* loaded from: classes.dex */
public final class a implements CardViewDelegate {
    public Drawable a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CardView f1191b;

    public a(CardView cardView) {
        this.f1191b = cardView;
    }

    @Override // androidx.cardview.widget.CardViewDelegate
    public final boolean a() {
        return this.f1191b.getPreventCornerOverlap();
    }

    @Override // androidx.cardview.widget.CardViewDelegate
    public final boolean b() {
        return this.f1191b.getUseCompatPadding();
    }

    @Override // androidx.cardview.widget.CardViewDelegate
    public final Drawable c() {
        return this.a;
    }

    @Override // androidx.cardview.widget.CardViewDelegate
    public final CardView d() {
        return this.f1191b;
    }

    @Override // androidx.cardview.widget.CardViewDelegate
    public final void e(int i5, int i6, int i10, int i11) {
        CardView cardView = this.f1191b;
        cardView.mShadowBounds.set(i5, i6, i10, i11);
        Rect rect = cardView.mContentPadding;
        super/*android.view.View*/.setPadding(i5 + rect.left, i6 + rect.top, i10 + rect.right, i11 + rect.bottom);
    }
}
