package gh;

import android.animation.ObjectAnimator;
import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.content.ContentResolver;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.provider.Settings;
import androidx.core.view.y0;
import androidx.dynamicanimation.animation.SpringAnimation;

/* loaded from: classes3.dex */
public final class m extends o {
    public static final l V = new l(0);
    public final e K;
    public final j2.i L;
    public final SpringAnimation M;
    public final p N;
    public float O;
    public boolean P;
    public final ValueAnimator Q;
    public ValueAnimator R;
    public TimeInterpolator S;
    public TimeInterpolator T;
    public TimeInterpolator U;

    public m(Context context, k kVar, e eVar) {
        super(context, kVar);
        this.P = false;
        this.K = eVar;
        p pVar = new p();
        this.N = pVar;
        pVar.f9317g = true;
        j2.i iVar = new j2.i();
        this.L = iVar;
        iVar.a(1.0f);
        iVar.b(50.0f);
        SpringAnimation springAnimation = new SpringAnimation(this, V);
        this.M = springAnimation;
        springAnimation.f1884m = iVar;
        ValueAnimator valueAnimator = new ValueAnimator();
        this.Q = valueAnimator;
        valueAnimator.setDuration(1000L);
        valueAnimator.setFloatValues(0.0f, 1.0f);
        valueAnimator.setRepeatCount(-1);
        valueAnimator.addUpdateListener(new y0(2, this, kVar));
        if (kVar.a(true) && kVar.f9297m != 0) {
            valueAnimator.start();
        }
        if (this.F != 1.0f) {
            this.F = 1.0f;
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        if (!getBounds().isEmpty() && isVisible() && canvas.getClipBounds(this.I)) {
            canvas.save();
            Rect bounds = getBounds();
            float b10 = b();
            ObjectAnimator objectAnimator = this.f9308v;
            boolean z5 = objectAnimator != null && objectAnimator.isRunning();
            ObjectAnimator objectAnimator2 = this.f9309w;
            this.K.b(canvas, bounds, b10, z5, objectAnimator2 != null && objectAnimator2.isRunning());
            float c6 = c();
            p pVar = this.N;
            pVar.f9315e = c6;
            Paint.Style style = Paint.Style.FILL;
            Paint paint = this.G;
            paint.setStyle(style);
            paint.setAntiAlias(true);
            k kVar = this.f9306e;
            pVar.f9313c = kVar.f9291e[0];
            int i5 = kVar.f9295i;
            if (i5 > 0) {
                this.K.f(canvas, paint, pVar.f9312b, 1.0f, kVar.f9292f, this.H, (int) ((jb.a.c(pVar.f9312b, 0.0f, 0.01f) * i5) / 0.01f));
            } else {
                this.K.f(canvas, paint, 0.0f, 1.0f, kVar.f9292f, this.H, 0);
            }
            this.K.e(canvas, paint, pVar, this.H);
            int i6 = kVar.f9291e[0];
            this.K.getClass();
            canvas.restore();
        }
    }

    @Override // gh.o
    public final boolean e(boolean z5, boolean z6, boolean z7) {
        boolean e9 = super.e(z5, z6, z7);
        a aVar = this.f9307i;
        ContentResolver contentResolver = this.f9305d.getContentResolver();
        aVar.getClass();
        float f2 = Settings.Global.getFloat(contentResolver, "animator_duration_scale", 1.0f);
        if (f2 == 0.0f) {
            this.P = true;
            return e9;
        }
        this.P = false;
        this.L.b(50.0f / f2);
        return e9;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.K.g();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.K.g();
    }

    @Override // android.graphics.drawable.Drawable
    public final void jumpToCurrentState() {
        this.M.f();
        this.N.f9312b = getLevel() / 10000.0f;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onLevelChange(int i5) {
        float f2 = i5;
        float f10 = (f2 < 1000.0f || f2 > 9000.0f) ? 0.0f : 1.0f;
        boolean z5 = this.P;
        p pVar = this.N;
        SpringAnimation springAnimation = this.M;
        if (z5) {
            springAnimation.f();
            pVar.f9312b = f2 / 10000.0f;
            invalidateSelf();
            pVar.f9314d = f10;
            invalidateSelf();
        } else {
            springAnimation.f1875b = pVar.f9312b * 10000.0f;
            springAnimation.f1876c = true;
            springAnimation.a(f2);
        }
        return true;
    }
}
