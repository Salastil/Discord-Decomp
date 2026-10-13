package gh;

import a5.k0;
import android.animation.ValueAnimator;
import android.content.ContentResolver;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.os.SystemClock;
import android.provider.Settings;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.View;
import android.widget.ProgressBar;
import androidx.annotation.NonNull;
import com.discord.R;
import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class d extends ProgressBar {
    public int E;
    public boolean F;
    public final b G;
    public final b H;
    public final c I;
    public final c J;

    /* renamed from: d, reason: collision with root package name */
    public final k f9247d;

    /* renamed from: e, reason: collision with root package name */
    public int f9248e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f9249i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9250v;

    /* renamed from: w, reason: collision with root package name */
    public final int f9251w;

    /* renamed from: x, reason: collision with root package name */
    public a f9252x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f9253y;

    public d(Context context, AttributeSet attributeSet) {
        super(ph.a.a(context, attributeSet, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_ProgressIndicator), attributeSet, R.attr.circularProgressIndicatorStyle);
        this.f9253y = false;
        this.E = 4;
        this.G = new b(this, 0);
        this.H = new b(this, 1);
        this.I = new c(0, this);
        this.J = new c(1, this);
        Context context2 = getContext();
        k kVar = new k();
        kVar.f9291e = new int[0];
        int dimensionPixelSize = context2.getResources().getDimensionPixelSize(R.dimen.mtrl_progress_track_thickness);
        ch.q.a(context2, attributeSet, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator);
        int[] iArr = lg.a.f13955d;
        ch.q.b(context2, attributeSet, iArr, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator, new int[0]);
        TypedArray obtainStyledAttributes = context2.obtainStyledAttributes(attributeSet, iArr, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator);
        kVar.a = k0.w(context2, obtainStyledAttributes, 10, dimensionPixelSize);
        TypedValue peekValue = obtainStyledAttributes.peekValue(9);
        if (peekValue != null) {
            int i5 = peekValue.type;
            if (i5 == 5) {
                kVar.f9288b = Math.min(TypedValue.complexToDimensionPixelSize(peekValue.data, obtainStyledAttributes.getResources().getDisplayMetrics()), kVar.a / 2);
                kVar.f9290d = false;
            } else if (i5 == 6) {
                kVar.f9289c = Math.min(peekValue.getFraction(1.0f, 1.0f), 0.5f);
                kVar.f9290d = true;
            }
        }
        kVar.f9293g = obtainStyledAttributes.getInt(6, 0);
        kVar.f9294h = obtainStyledAttributes.getInt(1, 0);
        kVar.f9295i = obtainStyledAttributes.getDimensionPixelSize(4, 0);
        int abs = Math.abs(obtainStyledAttributes.getDimensionPixelSize(13, 0));
        kVar.j = Math.abs(obtainStyledAttributes.getDimensionPixelSize(14, abs));
        kVar.k = Math.abs(obtainStyledAttributes.getDimensionPixelSize(15, abs));
        kVar.f9296l = Math.abs(obtainStyledAttributes.getDimensionPixelSize(11, 0));
        kVar.f9297m = obtainStyledAttributes.getDimensionPixelSize(12, 0);
        kVar.f9298n = obtainStyledAttributes.getFloat(2, 1.0f);
        if (!obtainStyledAttributes.hasValue(3)) {
            kVar.f9291e = new int[]{com.facebook.imagepipeline.nativecode.c.x(context2, R.attr.colorPrimary, -1)};
        } else if (obtainStyledAttributes.peekValue(3).type != 1) {
            kVar.f9291e = new int[]{obtainStyledAttributes.getColor(3, -1)};
        } else {
            int[] intArray = context2.getResources().getIntArray(obtainStyledAttributes.getResourceId(3, -1));
            kVar.f9291e = intArray;
            if (intArray.length == 0) {
                throw new IllegalArgumentException("indicatorColors cannot be empty when indicatorColor is not used.");
            }
        }
        if (obtainStyledAttributes.hasValue(8)) {
            kVar.f9292f = obtainStyledAttributes.getColor(8, -1);
        } else {
            kVar.f9292f = kVar.f9291e[0];
            TypedArray obtainStyledAttributes2 = context2.getTheme().obtainStyledAttributes(new int[]{android.R.attr.disabledAlpha});
            float f2 = obtainStyledAttributes2.getFloat(0, 0.2f);
            obtainStyledAttributes2.recycle();
            kVar.f9292f = com.facebook.imagepipeline.nativecode.c.k(kVar.f9292f, (int) (f2 * 255.0f));
        }
        obtainStyledAttributes.recycle();
        int dimensionPixelSize2 = context2.getResources().getDimensionPixelSize(R.dimen.mtrl_progress_circular_size_medium);
        int dimensionPixelSize3 = context2.getResources().getDimensionPixelSize(R.dimen.mtrl_progress_circular_inset_medium);
        ch.q.a(context2, attributeSet, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator);
        int[] iArr2 = lg.a.f13960i;
        ch.q.b(context2, attributeSet, iArr2, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator, new int[0]);
        TypedArray obtainStyledAttributes3 = context2.obtainStyledAttributes(attributeSet, iArr2, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator);
        kVar.f9299o = obtainStyledAttributes3.getInt(0, 0);
        kVar.f9300p = Math.max(k0.w(context2, obtainStyledAttributes3, 4, dimensionPixelSize2), kVar.a * 2);
        kVar.f9301q = k0.w(context2, obtainStyledAttributes3, 3, dimensionPixelSize3);
        kVar.f9302r = obtainStyledAttributes3.getInt(2, 0);
        kVar.f9303s = obtainStyledAttributes3.getBoolean(1, true);
        obtainStyledAttributes3.recycle();
        kVar.b();
        this.f9247d = kVar;
        ch.q.a(context2, attributeSet, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator);
        ch.q.b(context2, attributeSet, iArr, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator, new int[0]);
        TypedArray obtainStyledAttributes4 = context2.obtainStyledAttributes(attributeSet, iArr, R.attr.circularProgressIndicatorStyle, R.style.Widget_MaterialComponents_CircularProgressIndicator);
        obtainStyledAttributes4.getInt(7, -1);
        this.f9251w = Math.min(obtainStyledAttributes4.getInt(5, -1), 1000);
        obtainStyledAttributes4.recycle();
        this.f9252x = new a();
        this.f9250v = true;
    }

    private r getCurrentDrawingDelegate() {
        if (isIndeterminate()) {
            if (getIndeterminateDrawable() == null) {
                return null;
            }
            return getIndeterminateDrawable().K;
        }
        if (getProgressDrawable() == null) {
            return null;
        }
        return getProgressDrawable().K;
    }

    public final void a(int i5, boolean z5) {
        if (!isIndeterminate()) {
            super.setProgress(i5);
            if (getProgressDrawable() == null || z5) {
                return;
            }
            getProgressDrawable().jumpToCurrentState();
            return;
        }
        if (getProgressDrawable() != null) {
            this.f9248e = i5;
            this.f9249i = z5;
            this.f9253y = true;
            if (getIndeterminateDrawable().isVisible()) {
                a aVar = this.f9252x;
                ContentResolver contentResolver = getContext().getContentResolver();
                aVar.getClass();
                if (Settings.Global.getFloat(contentResolver, "animator_duration_scale", 1.0f) != 0.0f) {
                    getIndeterminateDrawable().L.m();
                    return;
                }
            }
            this.I.a(getIndeterminateDrawable());
        }
    }

    public final boolean b() {
        if (!isAttachedToWindow() || getWindowVisibility() != 0) {
            return false;
        }
        View view = this;
        while (view.getVisibility() == 0) {
            Object parent = view.getParent();
            if (parent == null) {
                return getWindowVisibility() == 0;
            }
            if (!(parent instanceof View)) {
                return true;
            }
            view = (View) parent;
        }
        return false;
    }

    @Override // android.widget.ProgressBar
    public Drawable getCurrentDrawable() {
        return isIndeterminate() ? getIndeterminateDrawable() : getProgressDrawable();
    }

    public int getHideAnimationBehavior() {
        return this.f9247d.f9294h;
    }

    @NonNull
    public int[] getIndicatorColor() {
        return this.f9247d.f9291e;
    }

    public int getIndicatorTrackGapSize() {
        return this.f9247d.f9295i;
    }

    public int getShowAnimationBehavior() {
        return this.f9247d.f9293g;
    }

    public int getTrackColor() {
        return this.f9247d.f9292f;
    }

    public int getTrackCornerRadius() {
        return this.f9247d.f9288b;
    }

    public float getTrackCornerRadiusFraction() {
        return this.f9247d.f9289c;
    }

    public int getTrackThickness() {
        return this.f9247d.a;
    }

    public int getWaveAmplitude() {
        return this.f9247d.f9296l;
    }

    public int getWaveSpeed() {
        return this.f9247d.f9297m;
    }

    public int getWavelengthDeterminate() {
        return this.f9247d.j;
    }

    public int getWavelengthIndeterminate() {
        return this.f9247d.k;
    }

    @Override // android.view.View
    public final void invalidate() {
        super.invalidate();
        if (getCurrentDrawable() != null) {
            getCurrentDrawable().invalidateSelf();
        }
    }

    @Override // android.widget.ProgressBar, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (getProgressDrawable() != null && getIndeterminateDrawable() != null) {
            getIndeterminateDrawable().L.l(this.I);
        }
        m progressDrawable = getProgressDrawable();
        c cVar = this.J;
        if (progressDrawable != null) {
            m progressDrawable2 = getProgressDrawable();
            if (progressDrawable2.f9311y == null) {
                progressDrawable2.f9311y = new ArrayList();
            }
            if (!progressDrawable2.f9311y.contains(cVar)) {
                progressDrawable2.f9311y.add(cVar);
            }
        }
        if (getIndeterminateDrawable() != null) {
            t indeterminateDrawable = getIndeterminateDrawable();
            if (indeterminateDrawable.f9311y == null) {
                indeterminateDrawable.f9311y = new ArrayList();
            }
            if (!indeterminateDrawable.f9311y.contains(cVar)) {
                indeterminateDrawable.f9311y.add(cVar);
            }
        }
        if (b()) {
            if (this.f9251w > 0) {
                SystemClock.uptimeMillis();
            }
            setVisibility(0);
        }
    }

    @Override // android.widget.ProgressBar, android.view.View
    public final void onDetachedFromWindow() {
        removeCallbacks(this.H);
        removeCallbacks(this.G);
        ((o) getCurrentDrawable()).d(false, false, false);
        t indeterminateDrawable = getIndeterminateDrawable();
        c cVar = this.J;
        if (indeterminateDrawable != null) {
            getIndeterminateDrawable().f(cVar);
            getIndeterminateDrawable().L.p();
        }
        if (getProgressDrawable() != null) {
            getProgressDrawable().f(cVar);
        }
        super.onDetachedFromWindow();
    }

    @Override // android.widget.ProgressBar, android.view.View
    public final synchronized void onDraw(Canvas canvas) {
        try {
            int save = canvas.save();
            if (getPaddingLeft() == 0) {
                if (getPaddingTop() != 0) {
                }
                if (getPaddingRight() == 0 || getPaddingBottom() != 0) {
                    canvas.clipRect(0, 0, getWidth() - (getPaddingLeft() + getPaddingRight()), getHeight() - (getPaddingTop() + getPaddingBottom()));
                }
                getCurrentDrawable().draw(canvas);
                canvas.restoreToCount(save);
            }
            canvas.translate(getPaddingLeft(), getPaddingTop());
            if (getPaddingRight() == 0) {
            }
            canvas.clipRect(0, 0, getWidth() - (getPaddingLeft() + getPaddingRight()), getHeight() - (getPaddingTop() + getPaddingBottom()));
            getCurrentDrawable().draw(canvas);
            canvas.restoreToCount(save);
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        getCurrentDrawingDelegate().a();
    }

    @Override // android.widget.ProgressBar, android.view.View
    public final synchronized void onMeasure(int i5, int i6) {
        try {
            r currentDrawingDelegate = getCurrentDrawingDelegate();
            if (currentDrawingDelegate == null) {
                return;
            }
            setMeasuredDimension(((e) currentDrawingDelegate).g() < 0 ? View.getDefaultSize(getSuggestedMinimumWidth(), i5) : ((e) currentDrawingDelegate).g() + getPaddingLeft() + getPaddingRight(), ((e) currentDrawingDelegate).g() < 0 ? View.getDefaultSize(getSuggestedMinimumHeight(), i6) : ((e) currentDrawingDelegate).g() + getPaddingTop() + getPaddingBottom());
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // android.view.View
    public final void onVisibilityChanged(View view, int i5) {
        super.onVisibilityChanged(view, i5);
        boolean z5 = i5 == 0;
        if (this.f9250v) {
            ((o) getCurrentDrawable()).d(b(), false, z5);
        }
    }

    @Override // android.view.View
    public final void onWindowVisibilityChanged(int i5) {
        super.onWindowVisibilityChanged(i5);
        if (this.f9250v) {
            ((o) getCurrentDrawable()).d(b(), false, false);
        }
    }

    public void setAnimatorDurationScaleProvider(@NonNull a aVar) {
        this.f9252x = aVar;
        if (getProgressDrawable() != null) {
            getProgressDrawable().f9307i = aVar;
        }
        if (getIndeterminateDrawable() != null) {
            getIndeterminateDrawable().f9307i = aVar;
        }
    }

    public void setHideAnimationBehavior(int i5) {
        this.f9247d.f9294h = i5;
        invalidate();
    }

    @Override // android.widget.ProgressBar
    public synchronized void setIndeterminate(boolean z5) {
        try {
            if (z5 == isIndeterminate()) {
                return;
            }
            o oVar = (o) getCurrentDrawable();
            if (oVar != null) {
                oVar.d(false, false, false);
            }
            super.setIndeterminate(z5);
            o oVar2 = (o) getCurrentDrawable();
            if (oVar2 != null) {
                oVar2.d(b(), false, false);
            }
            if ((oVar2 instanceof t) && b()) {
                ((t) oVar2).L.o();
            }
            this.f9253y = false;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public void setIndeterminateAnimatorDurationScale(float f2) {
        k kVar = this.f9247d;
        if (kVar.f9298n != f2) {
            kVar.f9298n = f2;
            getIndeterminateDrawable().L.i();
        }
    }

    @Override // android.widget.ProgressBar
    public void setIndeterminateDrawable(Drawable drawable) {
        if (drawable instanceof t) {
            ((o) drawable).d(false, false, false);
            super.setIndeterminateDrawable(drawable);
        } else {
            if (this.F) {
                throw new IllegalArgumentException("Cannot set framework drawable as indeterminate drawable.");
            }
            super.setIndeterminateDrawable(drawable);
        }
    }

    public void setIndicatorColor(int... iArr) {
        if (iArr.length == 0) {
            iArr = new int[]{com.facebook.imagepipeline.nativecode.c.x(getContext(), R.attr.colorPrimary, -1)};
        }
        if (Arrays.equals(getIndicatorColor(), iArr)) {
            return;
        }
        this.f9247d.f9291e = iArr;
        getIndeterminateDrawable().L.i();
        invalidate();
    }

    public void setIndicatorTrackGapSize(int i5) {
        k kVar = this.f9247d;
        if (kVar.f9295i != i5) {
            kVar.f9295i = i5;
            kVar.b();
            invalidate();
        }
    }

    @Override // android.widget.ProgressBar
    public synchronized void setProgress(int i5) {
        if (isIndeterminate()) {
            return;
        }
        a(i5, false);
    }

    @Override // android.widget.ProgressBar
    public void setProgressDrawable(Drawable drawable) {
        if (!(drawable instanceof m)) {
            if (this.F) {
                throw new IllegalArgumentException("Cannot set framework drawable as progress drawable.");
            }
            super.setProgressDrawable(drawable);
        } else {
            m mVar = (m) drawable;
            mVar.d(false, false, false);
            super.setProgressDrawable(mVar);
            mVar.setLevel((int) ((getProgress() / getMax()) * 10000.0f));
        }
    }

    public void setShowAnimationBehavior(int i5) {
        this.f9247d.f9293g = i5;
        invalidate();
    }

    public void setTrackColor(int i5) {
        k kVar = this.f9247d;
        if (kVar.f9292f != i5) {
            kVar.f9292f = i5;
            invalidate();
        }
    }

    public void setTrackCornerRadius(int i5) {
        k kVar = this.f9247d;
        if (kVar.f9288b != i5) {
            kVar.f9288b = Math.min(i5, kVar.a / 2);
            kVar.f9290d = false;
            invalidate();
        }
    }

    public void setTrackCornerRadiusFraction(float f2) {
        k kVar = this.f9247d;
        if (kVar.f9289c != f2) {
            kVar.f9289c = Math.min(f2, 0.5f);
            kVar.f9290d = true;
            invalidate();
        }
    }

    public void setTrackThickness(int i5) {
        k kVar = this.f9247d;
        if (kVar.a != i5) {
            kVar.a = i5;
            requestLayout();
        }
    }

    public void setVisibilityAfterHide(int i5) {
        if (i5 != 0 && i5 != 4 && i5 != 8) {
            throw new IllegalArgumentException("The component's visibility must be one of VISIBLE, INVISIBLE, and GONE defined in View.");
        }
        this.E = i5;
    }

    public void setWaveAmplitude(int i5) {
        k kVar = this.f9247d;
        if (kVar.f9296l != i5) {
            kVar.f9296l = Math.abs(i5);
            requestLayout();
        }
    }

    public void setWaveSpeed(int i5) {
        k kVar = this.f9247d;
        kVar.f9297m = i5;
        m progressDrawable = getProgressDrawable();
        boolean z5 = kVar.f9297m != 0;
        ValueAnimator valueAnimator = progressDrawable.Q;
        if (z5 && !valueAnimator.isRunning()) {
            valueAnimator.start();
        } else {
            if (z5 || !valueAnimator.isRunning()) {
                return;
            }
            valueAnimator.cancel();
        }
    }

    public void setWavelength(int i5) {
        setWavelengthDeterminate(i5);
        setWavelengthIndeterminate(i5);
    }

    public void setWavelengthDeterminate(int i5) {
        k kVar = this.f9247d;
        if (kVar.j != i5) {
            kVar.j = Math.abs(i5);
            if (isIndeterminate()) {
                return;
            }
            requestLayout();
        }
    }

    public void setWavelengthIndeterminate(int i5) {
        k kVar = this.f9247d;
        if (kVar.k != i5) {
            kVar.k = Math.abs(i5);
            if (isIndeterminate()) {
                requestLayout();
            }
        }
    }

    @Override // android.widget.ProgressBar
    public t getIndeterminateDrawable() {
        return (t) super.getIndeterminateDrawable();
    }

    @Override // android.widget.ProgressBar
    public m getProgressDrawable() {
        return (m) super.getProgressDrawable();
    }
}
