package eightbitlab.com.blurview;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;

/* loaded from: classes3.dex */
public final class c implements BlurController {
    public boolean I;
    public Drawable J;

    /* renamed from: e, reason: collision with root package name */
    public final BlurAlgorithm f8115e;

    /* renamed from: i, reason: collision with root package name */
    public a f8116i;

    /* renamed from: v, reason: collision with root package name */
    public Bitmap f8117v;

    /* renamed from: w, reason: collision with root package name */
    public final BlurView f8118w;

    /* renamed from: x, reason: collision with root package name */
    public int f8119x;

    /* renamed from: y, reason: collision with root package name */
    public final ViewGroup f8120y;

    /* renamed from: d, reason: collision with root package name */
    public float f8114d = 16.0f;
    public final int[] E = new int[2];
    public final int[] F = new int[2];
    public final b G = new b(0, this);
    public boolean H = true;

    public c(BlurView blurView, ViewGroup viewGroup, int i5, BlurAlgorithm blurAlgorithm) {
        this.f8120y = viewGroup;
        this.f8118w = blurView;
        this.f8119x = i5;
        this.f8115e = blurAlgorithm;
        if (blurAlgorithm instanceof e) {
            ((e) blurAlgorithm).f8125f = blurView.getContext();
        }
        b(blurView.getMeasuredWidth(), blurView.getMeasuredHeight());
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public final BlurViewFacade a(boolean z5) {
        ViewGroup viewGroup = this.f8120y;
        ViewTreeObserver viewTreeObserver = viewGroup.getViewTreeObserver();
        b bVar = this.G;
        viewTreeObserver.removeOnPreDrawListener(bVar);
        if (z5) {
            viewGroup.getViewTreeObserver().addOnPreDrawListener(bVar);
        }
        return this;
    }

    public final void b(int i5, int i6) {
        a(true);
        BlurAlgorithm blurAlgorithm = this.f8115e;
        blurAlgorithm.getClass();
        float f2 = i6;
        int ceil = (int) Math.ceil(f2 / 6.0f);
        BlurView blurView = this.f8118w;
        if (ceil != 0) {
            double d6 = i5 / 6.0f;
            if (((int) Math.ceil(d6)) != 0) {
                blurView.setWillNotDraw(false);
                int ceil2 = (int) Math.ceil(d6);
                int i10 = ceil2 % 64;
                if (i10 != 0) {
                    ceil2 = (ceil2 - i10) + 64;
                }
                int ceil3 = (int) Math.ceil(f2 / (r8 / ceil2));
                blurAlgorithm.a();
                this.f8117v = Bitmap.createBitmap(ceil2, ceil3, Bitmap.Config.ARGB_8888);
                this.f8116i = new a(this.f8117v);
                this.I = true;
                d();
                return;
            }
        }
        blurView.setWillNotDraw(true);
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public final BlurViewFacade c(int i5) {
        if (this.f8119x != i5) {
            this.f8119x = i5;
            this.f8118w.invalidate();
        }
        return this;
    }

    public final void d() {
        if (this.H && this.I) {
            Drawable drawable = this.J;
            if (drawable == null) {
                this.f8117v.eraseColor(0);
            } else {
                drawable.draw(this.f8116i);
            }
            this.f8116i.save();
            ViewGroup viewGroup = this.f8120y;
            int[] iArr = this.E;
            viewGroup.getLocationOnScreen(iArr);
            BlurView blurView = this.f8118w;
            int[] iArr2 = this.F;
            blurView.getLocationOnScreen(iArr2);
            int i5 = iArr2[0] - iArr[0];
            int i6 = iArr2[1] - iArr[1];
            float height = blurView.getHeight() / this.f8117v.getHeight();
            float width = blurView.getWidth() / this.f8117v.getWidth();
            this.f8116i.translate((-i5) / width, (-i6) / height);
            this.f8116i.scale(1.0f / width, 1.0f / height);
            viewGroup.draw(this.f8116i);
            this.f8116i.restore();
            this.f8117v = this.f8115e.c(this.f8117v, this.f8114d);
        }
    }

    @Override // eightbitlab.com.blurview.BlurController
    public final void destroy() {
        a(false);
        this.f8115e.destroy();
        this.I = false;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public final BlurViewFacade g(Drawable drawable) {
        this.J = drawable;
        return this;
    }

    @Override // eightbitlab.com.blurview.BlurController
    public final void h() {
        BlurView blurView = this.f8118w;
        b(blurView.getMeasuredWidth(), blurView.getMeasuredHeight());
    }

    @Override // eightbitlab.com.blurview.BlurController
    public final boolean k(Canvas canvas) {
        if (this.H && this.I) {
            if (canvas instanceof a) {
                return false;
            }
            BlurView blurView = this.f8118w;
            float height = blurView.getHeight() / this.f8117v.getHeight();
            canvas.save();
            canvas.scale(blurView.getWidth() / this.f8117v.getWidth(), height);
            this.f8115e.b(canvas, this.f8117v);
            canvas.restore();
            int i5 = this.f8119x;
            if (i5 != 0) {
                canvas.drawColor(i5);
            }
        }
        return true;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public final BlurViewFacade l(boolean z5) {
        this.H = z5;
        a(z5);
        this.f8118w.invalidate();
        return this;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public final BlurViewFacade m(float f2) {
        this.f8114d = f2;
        return this;
    }
}
