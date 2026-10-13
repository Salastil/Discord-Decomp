package ug;

import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.InsetDrawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.RippleDrawable;
import android.os.Build;
import android.util.AttributeSet;
import android.view.View;
import com.discord.R;
import com.facebook.react.views.image.ReactImageView;
import com.google.android.material.card.MaterialCardView;
import lh.e;
import lh.i;
import lh.k;
import lh.l;
import lh.m;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: y, reason: collision with root package name */
    public static final double f18880y = Math.cos(Math.toRadians(45.0d));

    /* renamed from: z, reason: collision with root package name */
    public static final ColorDrawable f18881z;
    public final MaterialCardView a;

    /* renamed from: c, reason: collision with root package name */
    public final i f18883c;

    /* renamed from: d, reason: collision with root package name */
    public final i f18884d;

    /* renamed from: e, reason: collision with root package name */
    public int f18885e;

    /* renamed from: f, reason: collision with root package name */
    public int f18886f;

    /* renamed from: g, reason: collision with root package name */
    public int f18887g;

    /* renamed from: h, reason: collision with root package name */
    public int f18888h;

    /* renamed from: i, reason: collision with root package name */
    public Drawable f18889i;
    public Drawable j;
    public ColorStateList k;

    /* renamed from: l, reason: collision with root package name */
    public ColorStateList f18890l;

    /* renamed from: m, reason: collision with root package name */
    public m f18891m;

    /* renamed from: n, reason: collision with root package name */
    public ColorStateList f18892n;

    /* renamed from: o, reason: collision with root package name */
    public RippleDrawable f18893o;

    /* renamed from: p, reason: collision with root package name */
    public LayerDrawable f18894p;

    /* renamed from: q, reason: collision with root package name */
    public i f18895q;

    /* renamed from: s, reason: collision with root package name */
    public boolean f18897s;

    /* renamed from: t, reason: collision with root package name */
    public ValueAnimator f18898t;

    /* renamed from: u, reason: collision with root package name */
    public final TimeInterpolator f18899u;

    /* renamed from: v, reason: collision with root package name */
    public final int f18900v;

    /* renamed from: w, reason: collision with root package name */
    public final int f18901w;

    /* renamed from: b, reason: collision with root package name */
    public final Rect f18882b = new Rect();

    /* renamed from: r, reason: collision with root package name */
    public boolean f18896r = false;

    /* renamed from: x, reason: collision with root package name */
    public float f18902x = 0.0f;

    static {
        f18881z = Build.VERSION.SDK_INT <= 28 ? new ColorDrawable() : null;
    }

    public c(MaterialCardView materialCardView, AttributeSet attributeSet) {
        this.a = materialCardView;
        i iVar = new i(materialCardView.getContext(), attributeSet, R.attr.materialCardViewStyle, R.style.Widget_MaterialComponents_CardView);
        this.f18883c = iVar;
        iVar.m(materialCardView.getContext());
        iVar.s();
        l g6 = iVar.f14001e.a.g();
        TypedArray obtainStyledAttributes = materialCardView.getContext().obtainStyledAttributes(attributeSet, r.a.a, R.attr.materialCardViewStyle, R.style.CardView);
        if (obtainStyledAttributes.hasValue(3)) {
            g6.b(obtainStyledAttributes.getDimension(3, 0.0f));
        }
        this.f18884d = new i();
        h(g6.a());
        this.f18899u = ta.a.H(materialCardView.getContext(), R.attr.motionEasingLinearInterpolator, mg.a.a);
        this.f18900v = ta.a.G(materialCardView.getContext(), R.attr.motionDurationShort2, ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS);
        this.f18901w = ta.a.G(materialCardView.getContext(), R.attr.motionDurationShort1, ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS);
        obtainStyledAttributes.recycle();
    }

    public static float b(io.sentry.config.a aVar, float f2) {
        if (aVar instanceof k) {
            return (float) ((1.0d - f18880y) * f2);
        }
        if (aVar instanceof e) {
            return f2 / 2.0f;
        }
        return 0.0f;
    }

    public final float a() {
        io.sentry.config.a aVar = this.f18891m.a;
        i iVar = this.f18883c;
        float b10 = b(aVar, iVar.k());
        io.sentry.config.a aVar2 = this.f18891m.f14016b;
        float[] fArr = iVar.Z;
        float max = Math.max(b10, b(aVar2, fArr != null ? fArr[0] : iVar.f14001e.a.f14020f.a(iVar.h())));
        io.sentry.config.a aVar3 = this.f18891m.f14017c;
        float[] fArr2 = iVar.Z;
        float b11 = b(aVar3, fArr2 != null ? fArr2[1] : iVar.f14001e.a.f14021g.a(iVar.h()));
        io.sentry.config.a aVar4 = this.f18891m.f14018d;
        float[] fArr3 = iVar.Z;
        return Math.max(max, Math.max(b11, b(aVar4, fArr3 != null ? fArr3[2] : iVar.f14001e.a.f14022h.a(iVar.h()))));
    }

    public final LayerDrawable c() {
        if (this.f18893o == null) {
            this.f18895q = new i(this.f18891m);
            this.f18893o = new RippleDrawable(this.k, null, this.f18895q);
        }
        if (this.f18894p == null) {
            LayerDrawable layerDrawable = new LayerDrawable(new Drawable[]{this.f18893o, this.f18884d, this.j});
            this.f18894p = layerDrawable;
            layerDrawable.setId(2, R.id.mtrl_card_checked_layer_id);
        }
        return this.f18894p;
    }

    public final b d(Drawable drawable) {
        int i5;
        int i6;
        if (this.a.getUseCompatPadding()) {
            int ceil = (int) Math.ceil((r0.getMaxCardElevation() * 1.5f) + (i() ? a() : 0.0f));
            i5 = (int) Math.ceil(r0.getMaxCardElevation() + (i() ? a() : 0.0f));
            i6 = ceil;
        } else {
            i5 = 0;
            i6 = 0;
        }
        return new b(drawable, i5, i6, i5, i6);
    }

    public final void e(int i5, int i6) {
        int i10;
        int i11;
        int i12;
        int i13;
        if (this.f18894p != null) {
            MaterialCardView materialCardView = this.a;
            if (materialCardView.getUseCompatPadding()) {
                i10 = (int) Math.ceil(((materialCardView.getMaxCardElevation() * 1.5f) + (i() ? a() : 0.0f)) * 2.0f);
                i11 = (int) Math.ceil((materialCardView.getMaxCardElevation() + (i() ? a() : 0.0f)) * 2.0f);
            } else {
                i10 = 0;
                i11 = 0;
            }
            int i14 = this.f18887g;
            int i15 = (i14 & 8388613) == 8388613 ? ((i5 - this.f18885e) - this.f18886f) - i11 : this.f18885e;
            int i16 = (i14 & 80) == 80 ? this.f18885e : ((i6 - this.f18885e) - this.f18886f) - i10;
            int i17 = (i14 & 8388613) == 8388613 ? this.f18885e : ((i5 - this.f18885e) - this.f18886f) - i11;
            int i18 = (i14 & 80) == 80 ? ((i6 - this.f18885e) - this.f18886f) - i10 : this.f18885e;
            if (materialCardView.getLayoutDirection() == 1) {
                i13 = i17;
                i12 = i15;
            } else {
                i12 = i17;
                i13 = i15;
            }
            this.f18894p.setLayerInset(2, i13, i18, i12, i16);
        }
    }

    public final void f(boolean z5, boolean z6) {
        Drawable drawable = this.j;
        if (drawable != null) {
            if (!z6) {
                drawable.setAlpha(z5 ? 255 : 0);
                this.f18902x = z5 ? 1.0f : 0.0f;
                return;
            }
            float f2 = z5 ? 1.0f : 0.0f;
            float f10 = z5 ? 1.0f - this.f18902x : this.f18902x;
            ValueAnimator valueAnimator = this.f18898t;
            if (valueAnimator != null) {
                valueAnimator.cancel();
                this.f18898t = null;
            }
            ValueAnimator ofFloat = ValueAnimator.ofFloat(this.f18902x, f2);
            this.f18898t = ofFloat;
            ofFloat.addUpdateListener(new am.c(9, this));
            this.f18898t.setInterpolator(this.f18899u);
            this.f18898t.setDuration((long) ((z5 ? this.f18900v : this.f18901w) * f10));
            this.f18898t.start();
        }
    }

    public final void g(Drawable drawable) {
        if (drawable != null) {
            Drawable mutate = drawable.mutate();
            this.j = mutate;
            mutate.setTintList(this.f18890l);
            f(this.a.f5998i, false);
        } else {
            this.j = f18881z;
        }
        LayerDrawable layerDrawable = this.f18894p;
        if (layerDrawable != null) {
            layerDrawable.setDrawableByLayerId(R.id.mtrl_card_checked_layer_id, this.j);
        }
    }

    public final void h(m mVar) {
        this.f18891m = mVar;
        i iVar = this.f18883c;
        iVar.setShapeAppearanceModel(mVar);
        iVar.U = !iVar.n();
        i iVar2 = this.f18884d;
        if (iVar2 != null) {
            iVar2.setShapeAppearanceModel(mVar);
        }
        i iVar3 = this.f18895q;
        if (iVar3 != null) {
            iVar3.setShapeAppearanceModel(mVar);
        }
    }

    public final boolean i() {
        MaterialCardView materialCardView = this.a;
        return materialCardView.getPreventCornerOverlap() && this.f18883c.n() && materialCardView.getUseCompatPadding();
    }

    public final boolean j() {
        View view = this.a;
        if (view.isClickable()) {
            return true;
        }
        while (view.isDuplicateParentStateEnabled() && (view.getParent() instanceof View)) {
            view = (View) view.getParent();
        }
        return view.isClickable();
    }

    public final void k() {
        Drawable drawable = this.f18889i;
        Drawable c6 = j() ? c() : this.f18884d;
        this.f18889i = c6;
        if (drawable != c6) {
            MaterialCardView materialCardView = this.a;
            if (materialCardView.getForeground() instanceof InsetDrawable) {
                ((InsetDrawable) materialCardView.getForeground()).setDrawable(c6);
            } else {
                materialCardView.setForeground(d(c6));
            }
        }
    }

    public final void l() {
        MaterialCardView materialCardView = this.a;
        float f2 = 0.0f;
        float a = ((!materialCardView.getPreventCornerOverlap() || this.f18883c.n()) && !i()) ? 0.0f : a();
        if (materialCardView.getPreventCornerOverlap() && materialCardView.getUseCompatPadding()) {
            f2 = (float) ((1.0d - f18880y) * materialCardView.getCardViewRadius());
        }
        int i5 = (int) (a - f2);
        Rect rect = this.f18882b;
        materialCardView.b(rect.left + i5, rect.top + i5, rect.right + i5, rect.bottom + i5);
    }

    public final void m() {
        boolean z5 = this.f18896r;
        MaterialCardView materialCardView = this.a;
        if (!z5) {
            materialCardView.setBackgroundInternal(d(this.f18883c));
        }
        materialCardView.setForeground(d(this.f18889i));
    }
}
