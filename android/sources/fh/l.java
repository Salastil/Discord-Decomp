package fh;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.discord.R;

/* loaded from: classes3.dex */
public final class l extends FrameLayout implements h {

    /* renamed from: d, reason: collision with root package name */
    public final TextView f8618d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f8619e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f8620i;

    /* renamed from: v, reason: collision with root package name */
    public n.l f8621v;

    /* renamed from: w, reason: collision with root package name */
    public ColorStateList f8622w;

    public l(Context context) {
        super(context);
        LayoutInflater.from(context).inflate(R.layout.m3_navigation_menu_subheader, (ViewGroup) this, true);
        this.f8618d = (TextView) findViewById(R.id.navigation_menu_subheader_label);
    }

    @Override // n.w
    public final void a(n.l lVar) {
        this.f8621v = lVar;
        lVar.setCheckable(false);
        this.f8618d.setText(lVar.f14674e);
        b();
    }

    public final void b() {
        n.l lVar = this.f8621v;
        if (lVar != null) {
            setVisibility((!lVar.isVisible() || (!this.f8619e && this.f8620i)) ? 8 : 0);
        }
    }

    @Override // n.w
    public n.l getItemData() {
        return this.f8621v;
    }

    @Override // fh.h
    public void setExpanded(boolean z5) {
        this.f8619e = z5;
        b();
    }

    @Override // fh.h
    public void setOnlyShowWhenExpanded(boolean z5) {
        this.f8620i = z5;
        b();
    }

    public void setTextAppearance(int i5) {
        TextView textView = this.f8618d;
        textView.setTextAppearance(i5);
        ColorStateList colorStateList = this.f8622w;
        if (colorStateList != null) {
            textView.setTextColor(colorStateList);
        }
    }

    public void setTextColor(ColorStateList colorStateList) {
        this.f8622w = colorStateList;
        if (colorStateList != null) {
            this.f8618d.setTextColor(colorStateList);
        }
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
