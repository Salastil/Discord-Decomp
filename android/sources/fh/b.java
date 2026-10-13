package fh;

import android.graphics.drawable.Drawable;
import android.widget.FrameLayout;

/* loaded from: classes3.dex */
public final class b extends FrameLayout implements h {

    /* renamed from: d, reason: collision with root package name */
    public boolean f8544d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f8545e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f8546i;

    @Override // n.w
    public final void a(n.l lVar) {
        b();
    }

    public final void b() {
        setVisibility((!this.f8546i || (!this.f8544d && this.f8545e)) ? 8 : 0);
    }

    @Override // n.w
    public n.l getItemData() {
        return null;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
    }

    @Override // android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
    }

    public void setDividersEnabled(boolean z5) {
        this.f8546i = z5;
        b();
    }

    @Override // fh.h
    public void setExpanded(boolean z5) {
        this.f8544d = z5;
        b();
    }

    @Override // fh.h
    public void setOnlyShowWhenExpanded(boolean z5) {
        this.f8545e = z5;
        b();
    }

    public void setCheckable(boolean z5) {
    }

    public void setChecked(boolean z5) {
    }

    @Override // android.view.View
    public void setEnabled(boolean z5) {
    }

    public void setIcon(Drawable drawable) {
    }

    public void setTitle(CharSequence charSequence) {
    }
}
