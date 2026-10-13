package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.RippleDrawable;
import android.net.Uri;
import android.util.AttributeSet;
import android.widget.ImageButton;
import android.widget.ImageView;

/* loaded from: classes.dex */
public class y extends ImageButton {

    /* renamed from: d, reason: collision with root package name */
    public final AppCompatBackgroundHelper f1172d;

    /* renamed from: e, reason: collision with root package name */
    public final AppCompatImageHelper f1173e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f1174i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public y(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        l3.a(context);
        this.f1174i = false;
        k3.a(this, getContext());
        AppCompatBackgroundHelper appCompatBackgroundHelper = new AppCompatBackgroundHelper(this);
        this.f1172d = appCompatBackgroundHelper;
        appCompatBackgroundHelper.d(attributeSet, i5);
        AppCompatImageHelper appCompatImageHelper = new AppCompatImageHelper(this);
        this.f1173e = appCompatImageHelper;
        appCompatImageHelper.b(attributeSet, i5);
    }

    @Override // android.widget.ImageView, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.a();
        }
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper != null) {
            appCompatImageHelper.a();
        }
    }

    public ColorStateList getSupportBackgroundTintList() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.b();
        }
        return null;
    }

    public PorterDuff.Mode getSupportBackgroundTintMode() {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            return appCompatBackgroundHelper.c();
        }
        return null;
    }

    public ColorStateList getSupportImageTintList() {
        m3 m3Var;
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper == null || (m3Var = appCompatImageHelper.f855b) == null) {
            return null;
        }
        return (ColorStateList) m3Var.f1037c;
    }

    public PorterDuff.Mode getSupportImageTintMode() {
        m3 m3Var;
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper == null || (m3Var = appCompatImageHelper.f855b) == null) {
            return null;
        }
        return (PorterDuff.Mode) m3Var.f1038d;
    }

    @Override // android.widget.ImageView, android.view.View
    public final boolean hasOverlappingRendering() {
        return !(this.f1173e.a.getBackground() instanceof RippleDrawable) && super.hasOverlappingRendering();
    }

    @Override // android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        super.setBackgroundDrawable(drawable);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.e();
        }
    }

    @Override // android.view.View
    public void setBackgroundResource(int i5) {
        super.setBackgroundResource(i5);
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.f(i5);
        }
    }

    @Override // android.widget.ImageView
    public void setImageBitmap(Bitmap bitmap) {
        super.setImageBitmap(bitmap);
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper != null) {
            appCompatImageHelper.a();
        }
    }

    @Override // android.widget.ImageView
    public void setImageDrawable(Drawable drawable) {
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper != null && drawable != null && !this.f1174i) {
            appCompatImageHelper.f856c = drawable.getLevel();
        }
        super.setImageDrawable(drawable);
        if (appCompatImageHelper != null) {
            appCompatImageHelper.a();
            if (this.f1174i) {
                return;
            }
            ImageView imageView = appCompatImageHelper.a;
            if (imageView.getDrawable() != null) {
                imageView.getDrawable().setLevel(appCompatImageHelper.f856c);
            }
        }
    }

    @Override // android.widget.ImageView
    public void setImageLevel(int i5) {
        super.setImageLevel(i5);
        this.f1174i = true;
    }

    @Override // android.widget.ImageView
    public void setImageResource(int i5) {
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        ImageView imageView = appCompatImageHelper.a;
        if (i5 != 0) {
            Drawable J = ys.d.J(imageView.getContext(), i5);
            if (J != null) {
                n1.a(J);
            }
            imageView.setImageDrawable(J);
        } else {
            imageView.setImageDrawable(null);
        }
        appCompatImageHelper.a();
    }

    @Override // android.widget.ImageView
    public void setImageURI(Uri uri) {
        super.setImageURI(uri);
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper != null) {
            appCompatImageHelper.a();
        }
    }

    public void setSupportBackgroundTintList(ColorStateList colorStateList) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.h(colorStateList);
        }
    }

    public void setSupportBackgroundTintMode(PorterDuff.Mode mode) {
        AppCompatBackgroundHelper appCompatBackgroundHelper = this.f1172d;
        if (appCompatBackgroundHelper != null) {
            appCompatBackgroundHelper.i(mode);
        }
    }

    public void setSupportImageTintList(ColorStateList colorStateList) {
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper != null) {
            if (appCompatImageHelper.f855b == null) {
                appCompatImageHelper.f855b = new m3();
            }
            m3 m3Var = appCompatImageHelper.f855b;
            m3Var.f1037c = colorStateList;
            m3Var.f1036b = true;
            appCompatImageHelper.a();
        }
    }

    public void setSupportImageTintMode(PorterDuff.Mode mode) {
        AppCompatImageHelper appCompatImageHelper = this.f1173e;
        if (appCompatImageHelper != null) {
            if (appCompatImageHelper.f855b == null) {
                appCompatImageHelper.f855b = new m3();
            }
            m3 m3Var = appCompatImageHelper.f855b;
            m3Var.f1038d = mode;
            m3Var.a = true;
            appCompatImageHelper.a();
        }
    }
}
