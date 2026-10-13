package hh;

import android.R;
import android.content.res.ColorStateList;
import androidx.appcompat.widget.d0;
import com.facebook.imagepipeline.nativecode.c;

/* loaded from: classes3.dex */
public final class a extends d0 {

    /* renamed from: y, reason: collision with root package name */
    public static final int[][] f10028y = {new int[]{R.attr.state_enabled, R.attr.state_checked}, new int[]{R.attr.state_enabled, -16842912}, new int[]{-16842910, R.attr.state_checked}, new int[]{-16842910, -16842912}};

    /* renamed from: w, reason: collision with root package name */
    public ColorStateList f10029w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f10030x;

    private ColorStateList getMaterialThemeColorsTintList() {
        if (this.f10029w == null) {
            int w5 = c.w(com.discord.R.attr.colorControlActivated, this);
            int w6 = c.w(com.discord.R.attr.colorOnSurface, this);
            int w7 = c.w(com.discord.R.attr.colorSurface, this);
            this.f10029w = new ColorStateList(f10028y, new int[]{c.Q(w7, w5, 1.0f), c.Q(w7, w6, 0.54f), c.Q(w7, w6, 0.38f), c.Q(w7, w6, 0.38f)});
        }
        return this.f10029w;
    }

    @Override // android.widget.TextView, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f10030x && getButtonTintList() == null) {
            setUseMaterialThemeColors(true);
        }
    }

    public void setUseMaterialThemeColors(boolean z5) {
        this.f10030x = z5;
        if (z5) {
            setButtonTintList(getMaterialThemeColorsTintList());
        } else {
            setButtonTintList(null);
        }
    }
}
