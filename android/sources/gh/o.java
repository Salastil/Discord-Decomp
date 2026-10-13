package gh;

import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.ContentResolver;
import android.content.Context;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.os.SystemClock;
import android.provider.Settings;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public abstract class o extends Drawable implements Animatable {
    public static final g J = new g(Float.class, "growFraction", 4);
    public boolean E;
    public float F;
    public int H;

    /* renamed from: d, reason: collision with root package name */
    public final Context f9305d;

    /* renamed from: e, reason: collision with root package name */
    public final k f9306e;

    /* renamed from: v, reason: collision with root package name */
    public ObjectAnimator f9308v;

    /* renamed from: w, reason: collision with root package name */
    public ObjectAnimator f9309w;

    /* renamed from: y, reason: collision with root package name */
    public ArrayList f9311y;

    /* renamed from: x, reason: collision with root package name */
    public final float f9310x = -1.0f;
    public final Paint G = new Paint();
    public final Rect I = new Rect();

    /* renamed from: i, reason: collision with root package name */
    public a f9307i = new a();

    public o(Context context, k kVar) {
        this.f9305d = context;
        this.f9306e = kVar;
        setAlpha(255);
    }

    public final float b() {
        k kVar = this.f9306e;
        if (kVar.f9293g == 0 && kVar.f9294h == 0) {
            return 1.0f;
        }
        return this.F;
    }

    public final float c() {
        float f2 = this.f9310x;
        if (f2 > 0.0f) {
            return f2;
        }
        boolean z5 = this instanceof m;
        k kVar = this.f9306e;
        if (kVar.a(z5) && kVar.f9297m != 0) {
            a aVar = this.f9307i;
            ContentResolver contentResolver = this.f9305d.getContentResolver();
            aVar.getClass();
            float f10 = Settings.Global.getFloat(contentResolver, "animator_duration_scale", 1.0f);
            if (f10 > 0.0f) {
                float uptimeMillis = (SystemClock.uptimeMillis() % r0) / ((int) ((((z5 ? kVar.j : kVar.k) * 1000.0f) / kVar.f9297m) * f10));
                return uptimeMillis < 0.0f ? (uptimeMillis % 1.0f) + 1.0f : uptimeMillis;
            }
        }
        return 0.0f;
    }

    public final boolean d(boolean z5, boolean z6, boolean z7) {
        a aVar = this.f9307i;
        ContentResolver contentResolver = this.f9305d.getContentResolver();
        aVar.getClass();
        return e(z5, z6, z7 && Settings.Global.getFloat(contentResolver, "animator_duration_scale", 1.0f) > 0.0f);
    }

    public boolean e(boolean z5, boolean z6, boolean z7) {
        ObjectAnimator objectAnimator = this.f9308v;
        int i5 = 0;
        g gVar = J;
        if (objectAnimator == null) {
            ObjectAnimator ofFloat = ObjectAnimator.ofFloat(this, gVar, 0.0f, 1.0f);
            this.f9308v = ofFloat;
            ofFloat.setDuration(500L);
            this.f9308v.setInterpolator(mg.a.f14493b);
            ObjectAnimator objectAnimator2 = this.f9308v;
            if (objectAnimator2 != null && objectAnimator2.isRunning()) {
                throw new IllegalArgumentException("Cannot set showAnimator while the current showAnimator is running.");
            }
            this.f9308v = objectAnimator2;
            objectAnimator2.addListener(new n(this, i5));
        }
        int i6 = 1;
        if (this.f9309w == null) {
            ObjectAnimator ofFloat2 = ObjectAnimator.ofFloat(this, gVar, 1.0f, 0.0f);
            this.f9309w = ofFloat2;
            ofFloat2.setDuration(500L);
            this.f9309w.setInterpolator(mg.a.f14493b);
            ObjectAnimator objectAnimator3 = this.f9309w;
            if (objectAnimator3 != null && objectAnimator3.isRunning()) {
                throw new IllegalArgumentException("Cannot set hideAnimator while the current hideAnimator is running.");
            }
            this.f9309w = objectAnimator3;
            objectAnimator3.addListener(new n(this, i6));
        }
        if (isVisible() || z5) {
            ObjectAnimator objectAnimator4 = z5 ? this.f9308v : this.f9309w;
            ObjectAnimator objectAnimator5 = z5 ? this.f9309w : this.f9308v;
            if (!z7) {
                if (objectAnimator5.isRunning()) {
                    boolean z8 = this.E;
                    this.E = true;
                    new ValueAnimator[]{objectAnimator5}[0].cancel();
                    this.E = z8;
                }
                if (objectAnimator4.isRunning()) {
                    objectAnimator4.end();
                } else {
                    boolean z10 = this.E;
                    this.E = true;
                    new ValueAnimator[]{objectAnimator4}[0].end();
                    this.E = z10;
                }
                return super.setVisible(z5, false);
            }
            if (!objectAnimator4.isRunning()) {
                boolean z11 = !z5 || super.setVisible(z5, false);
                k kVar = this.f9306e;
                if (!z5 ? kVar.f9294h != 0 : kVar.f9293g != 0) {
                    boolean z12 = this.E;
                    this.E = true;
                    new ValueAnimator[]{objectAnimator4}[0].end();
                    this.E = z12;
                    return z11;
                }
                if (z6 || !objectAnimator4.isPaused()) {
                    objectAnimator4.start();
                    return z11;
                }
                objectAnimator4.resume();
                return z11;
            }
        }
        return false;
    }

    public final void f(c cVar) {
        ArrayList arrayList = this.f9311y;
        if (arrayList == null || !arrayList.contains(cVar)) {
            return;
        }
        this.f9311y.remove(cVar);
        if (this.f9311y.isEmpty()) {
            this.f9311y = null;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.H;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Animatable
    public final boolean isRunning() {
        ObjectAnimator objectAnimator = this.f9308v;
        if (objectAnimator != null && objectAnimator.isRunning()) {
            return true;
        }
        ObjectAnimator objectAnimator2 = this.f9309w;
        return objectAnimator2 != null && objectAnimator2.isRunning();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        this.H = i5;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.G.setColorFilter(colorFilter);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean setVisible(boolean z5, boolean z6) {
        return d(z5, z6, true);
    }

    @Override // android.graphics.drawable.Animatable
    public final void start() {
        e(true, true, false);
    }

    @Override // android.graphics.drawable.Animatable
    public final void stop() {
        e(false, true, false);
    }
}
