package n3;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;

/* loaded from: classes.dex */
public final class n extends Drawable.ConstantState {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public m f14823b;

    /* renamed from: c, reason: collision with root package name */
    public ColorStateList f14824c;

    /* renamed from: d, reason: collision with root package name */
    public PorterDuff.Mode f14825d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f14826e;

    /* renamed from: f, reason: collision with root package name */
    public Bitmap f14827f;

    /* renamed from: g, reason: collision with root package name */
    public ColorStateList f14828g;

    /* renamed from: h, reason: collision with root package name */
    public PorterDuff.Mode f14829h;

    /* renamed from: i, reason: collision with root package name */
    public int f14830i;
    public boolean j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public Paint f14831l;

    @Override // android.graphics.drawable.Drawable.ConstantState
    public int getChangingConfigurations() {
        return this.a;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable() {
        return new p(this);
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable(Resources resources) {
        return new p(this);
    }
}
