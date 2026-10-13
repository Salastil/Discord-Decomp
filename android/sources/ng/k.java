package ng;

import a5.k0;
import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.Typeface;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.animation.AnimationUtils;
import android.view.animation.DecelerateInterpolator;
import android.widget.FrameLayout;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.Toolbar;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.j0;
import androidx.core.view.s0;
import ch.q;
import com.discord.R;
import java.util.ArrayList;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class k extends FrameLayout {
    public int E;
    public int F;
    public int G;
    public final Rect H;
    public final ch.c I;
    public final ch.c J;
    public final bh.a K;
    public boolean L;
    public boolean M;
    public final int N;
    public Drawable O;
    public Drawable P;
    public int Q;
    public boolean R;
    public ValueAnimator S;
    public long T;
    public final TimeInterpolator U;
    public final TimeInterpolator V;
    public int W;
    public i a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f15448b0;

    /* renamed from: c0, reason: collision with root package name */
    public int f15449c0;

    /* renamed from: d, reason: collision with root package name */
    public boolean f15450d;

    /* renamed from: d0, reason: collision with root package name */
    public int f15451d0;

    /* renamed from: e, reason: collision with root package name */
    public final int f15452e;

    /* renamed from: e0, reason: collision with root package name */
    public WindowInsetsCompat f15453e0;

    /* renamed from: f0, reason: collision with root package name */
    public int f15454f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f15455g0;
    public int h0;

    /* renamed from: i, reason: collision with root package name */
    public ViewGroup f15456i;

    /* renamed from: i0, reason: collision with root package name */
    public int f15457i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f15458j0;

    /* renamed from: k0, reason: collision with root package name */
    public int f15459k0;

    /* renamed from: v, reason: collision with root package name */
    public View f15460v;

    /* renamed from: w, reason: collision with root package name */
    public View f15461w;

    /* renamed from: x, reason: collision with root package name */
    public int f15462x;

    /* renamed from: y, reason: collision with root package name */
    public int f15463y;

    public k(Context context, int i5) {
        super(ph.a.b(context, null, i5, R.style.Widget_Design_CollapsingToolbar, new int[0]), null, i5);
        ColorStateList u5;
        ColorStateList u6;
        this.f15450d = true;
        this.H = new Rect();
        this.W = -1;
        this.f15454f0 = 0;
        this.h0 = 0;
        this.f15457i0 = 0;
        this.f15459k0 = 0;
        Context context2 = getContext();
        this.f15449c0 = getResources().getConfiguration().orientation;
        ch.c cVar = new ch.c(this);
        this.I = cVar;
        DecelerateInterpolator decelerateInterpolator = mg.a.f14496e;
        cVar.X = decelerateInterpolator;
        cVar.l(false);
        cVar.K = false;
        this.K = new bh.a(context2);
        q.a(context2, null, i5, R.style.Widget_Design_CollapsingToolbar);
        int[] iArr = lg.a.f13961l;
        q.b(context2, null, iArr, i5, R.style.Widget_Design_CollapsingToolbar, new int[0]);
        TypedArray obtainStyledAttributes = context2.obtainStyledAttributes(null, iArr, i5, R.style.Widget_Design_CollapsingToolbar);
        int i6 = obtainStyledAttributes.getInt(9, 8388691);
        int i10 = 2;
        int i11 = obtainStyledAttributes.getInt(2, 8388627);
        this.N = obtainStyledAttributes.getInt(3, 1);
        cVar.x(i6);
        cVar.s(i11);
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(10, 0);
        this.F = dimensionPixelSize;
        this.E = dimensionPixelSize;
        this.f15463y = dimensionPixelSize;
        this.f15462x = dimensionPixelSize;
        if (obtainStyledAttributes.hasValue(13)) {
            this.f15462x = obtainStyledAttributes.getDimensionPixelSize(13, 0);
        }
        if (obtainStyledAttributes.hasValue(12)) {
            this.E = obtainStyledAttributes.getDimensionPixelSize(12, 0);
        }
        if (obtainStyledAttributes.hasValue(14)) {
            this.f15463y = obtainStyledAttributes.getDimensionPixelSize(14, 0);
        }
        if (obtainStyledAttributes.hasValue(11)) {
            this.F = obtainStyledAttributes.getDimensionPixelSize(11, 0);
        }
        if (obtainStyledAttributes.hasValue(15)) {
            this.G = obtainStyledAttributes.getDimensionPixelSize(15, 0);
        }
        this.L = obtainStyledAttributes.getBoolean(28, true);
        setTitle(obtainStyledAttributes.getText(26));
        cVar.w(R.style.TextAppearance_Design_CollapsingToolbar_Expanded);
        cVar.q(R.style.TextAppearance_AppCompat_Widget_ActionBar_Title);
        if (obtainStyledAttributes.hasValue(16)) {
            cVar.w(obtainStyledAttributes.getResourceId(16, 0));
        }
        if (obtainStyledAttributes.hasValue(4)) {
            cVar.q(obtainStyledAttributes.getResourceId(4, 0));
        }
        if (obtainStyledAttributes.hasValue(31)) {
            int i12 = obtainStyledAttributes.getInt(31, -1);
            setTitleEllipsize(i12 != 0 ? i12 != 1 ? i12 != 3 ? TextUtils.TruncateAt.END : TextUtils.TruncateAt.MARQUEE : TextUtils.TruncateAt.MIDDLE : TextUtils.TruncateAt.START);
        }
        if (obtainStyledAttributes.hasValue(17) && cVar.f3521o != (u6 = k0.u(context2, obtainStyledAttributes, 17))) {
            cVar.f3521o = u6;
            cVar.l(false);
        }
        if (obtainStyledAttributes.hasValue(5)) {
            cVar.r(k0.u(context2, obtainStyledAttributes, 5));
        }
        this.W = obtainStyledAttributes.getDimensionPixelSize(22, -1);
        if (obtainStyledAttributes.hasValue(29)) {
            cVar.v(obtainStyledAttributes.getInt(29, 1));
        } else if (obtainStyledAttributes.hasValue(20)) {
            cVar.v(obtainStyledAttributes.getInt(20, 1));
        }
        if (obtainStyledAttributes.hasValue(30)) {
            cVar.W = AnimationUtils.loadInterpolator(context2, obtainStyledAttributes.getResourceId(30, 0));
            cVar.l(false);
        }
        ch.c cVar2 = new ch.c(this);
        this.J = cVar2;
        cVar2.X = decelerateInterpolator;
        cVar2.l(false);
        cVar2.K = false;
        if (obtainStyledAttributes.hasValue(24)) {
            setSubtitle(obtainStyledAttributes.getText(24));
        }
        cVar2.x(i6);
        cVar2.s(i11);
        cVar2.w(R.style.TextAppearance_AppCompat_Headline);
        cVar2.q(R.style.TextAppearance_AppCompat_Widget_ActionBar_Subtitle);
        if (obtainStyledAttributes.hasValue(7)) {
            cVar2.w(obtainStyledAttributes.getResourceId(7, 0));
        }
        if (obtainStyledAttributes.hasValue(0)) {
            cVar2.q(obtainStyledAttributes.getResourceId(0, 0));
        }
        if (obtainStyledAttributes.hasValue(8) && cVar2.f3521o != (u5 = k0.u(context2, obtainStyledAttributes, 8))) {
            cVar2.f3521o = u5;
            cVar2.l(false);
        }
        if (obtainStyledAttributes.hasValue(1)) {
            cVar2.r(k0.u(context2, obtainStyledAttributes, 1));
        }
        if (obtainStyledAttributes.hasValue(25)) {
            cVar2.v(obtainStyledAttributes.getInt(25, 1));
        }
        if (obtainStyledAttributes.hasValue(30)) {
            cVar2.W = AnimationUtils.loadInterpolator(context2, obtainStyledAttributes.getResourceId(30, 0));
            cVar2.l(false);
        }
        this.T = obtainStyledAttributes.getInt(21, 600);
        this.U = ta.a.H(context2, R.attr.motionEasingStandardInterpolator, mg.a.f14494c);
        this.V = ta.a.H(context2, R.attr.motionEasingStandardInterpolator, mg.a.f14495d);
        setContentScrim(obtainStyledAttributes.getDrawable(6));
        setStatusBarScrim(obtainStyledAttributes.getDrawable(23));
        setTitleCollapseMode(obtainStyledAttributes.getInt(27, 0));
        this.f15452e = obtainStyledAttributes.getResourceId(32, -1);
        this.f15455g0 = obtainStyledAttributes.getBoolean(19, false);
        this.f15458j0 = obtainStyledAttributes.getBoolean(18, false);
        obtainStyledAttributes.recycle();
        setWillNotDraw(false);
        i.m mVar = new i.m(i10, this);
        WeakHashMap weakHashMap = s0.a;
        j0.m(this, mVar);
    }

    public static m b(View view) {
        m mVar = (m) view.getTag(R.id.view_offset_helper);
        if (mVar != null) {
            return mVar;
        }
        m mVar2 = new m(view);
        view.setTag(R.id.view_offset_helper, mVar2);
        return mVar2;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0028  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private int getDefaultContentScrimColorForTitleCollapseFadeMode() {
        ColorStateList colorStateList;
        Context context = getContext();
        TypedValue I0 = m3.n.I0(context, R.attr.colorSurfaceContainer);
        if (I0 != null) {
            int i5 = I0.resourceId;
            if (i5 != 0) {
                colorStateList = y0.b.c(context, i5);
            } else {
                int i6 = I0.data;
                if (i6 != 0) {
                    colorStateList = ColorStateList.valueOf(i6);
                }
            }
            if (colorStateList == null) {
                return colorStateList.getDefaultColor();
            }
            float dimension = getResources().getDimension(R.dimen.design_appbar_elevation);
            bh.a aVar = this.K;
            return aVar.a(dimension, aVar.f3016d);
        }
        colorStateList = null;
        if (colorStateList == null) {
        }
    }

    public final void a() {
        if (this.f15450d) {
            ViewGroup viewGroup = null;
            this.f15456i = null;
            this.f15460v = null;
            int i5 = this.f15452e;
            if (i5 != -1) {
                ViewGroup viewGroup2 = (ViewGroup) findViewById(i5);
                this.f15456i = viewGroup2;
                if (viewGroup2 != null) {
                    ViewParent parent = viewGroup2.getParent();
                    View view = viewGroup2;
                    while (parent != this && parent != null) {
                        if (parent instanceof View) {
                            view = (View) parent;
                        }
                        parent = parent.getParent();
                        view = view;
                    }
                    this.f15460v = view;
                }
            }
            if (this.f15456i == null) {
                int childCount = getChildCount();
                for (int i6 = 0; i6 < childCount; i6++) {
                    View childAt = getChildAt(i6);
                    if ((childAt instanceof Toolbar) || (childAt instanceof android.widget.Toolbar)) {
                        viewGroup = (ViewGroup) childAt;
                        break;
                    }
                }
                this.f15456i = viewGroup;
            }
            c();
            this.f15450d = false;
        }
    }

    public final void c() {
        View view;
        if (!this.L && (view = this.f15461w) != null) {
            ViewParent parent = view.getParent();
            if (parent instanceof ViewGroup) {
                ((ViewGroup) parent).removeView(this.f15461w);
            }
        }
        if (!this.L || this.f15456i == null) {
            return;
        }
        if (this.f15461w == null) {
            this.f15461w = new View(getContext());
        }
        if (this.f15461w.getParent() == null) {
            this.f15456i.addView(this.f15461w, -1, -1);
        }
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof h;
    }

    public final void d() {
        if (this.O == null && this.P == null) {
            return;
        }
        setScrimsShown(getHeight() + this.f15448b0 < getScrimVisibleHeightTrigger());
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
        Drawable drawable;
        super.draw(canvas);
        a();
        if (this.f15456i == null && (drawable = this.O) != null && this.Q > 0) {
            drawable.mutate().setAlpha(this.Q);
            this.O.draw(canvas);
        }
        if (this.L && this.M) {
            ViewGroup viewGroup = this.f15456i;
            ch.c cVar = this.J;
            ch.c cVar2 = this.I;
            if (viewGroup == null || this.O == null || this.Q <= 0 || this.f15451d0 != 1 || cVar2.f3498b >= cVar2.f3504e) {
                cVar2.f(canvas);
                cVar.f(canvas);
            } else {
                int save = canvas.save();
                canvas.clipRect(this.O.getBounds(), Region.Op.DIFFERENCE);
                cVar2.f(canvas);
                cVar.f(canvas);
                canvas.restoreToCount(save);
            }
        }
        if (this.P == null || this.Q <= 0) {
            return;
        }
        WindowInsetsCompat windowInsetsCompat = this.f15453e0;
        int d6 = windowInsetsCompat != null ? windowInsetsCompat.d() : 0;
        if (d6 > 0) {
            this.P.setBounds(0, -this.f15448b0, getWidth(), d6 - this.f15448b0);
            this.P.mutate().setAlpha(this.Q);
            this.P.draw(canvas);
        }
    }

    @Override // android.view.ViewGroup
    public final boolean drawChild(Canvas canvas, View view, long j) {
        boolean z5;
        View view2;
        Drawable drawable = this.O;
        if (drawable == null || this.Q <= 0 || ((view2 = this.f15460v) == null || view2 == this ? view != this.f15456i : view != view2)) {
            z5 = false;
        } else {
            int width = getWidth();
            int height = getHeight();
            if (this.f15451d0 == 1 && view != null && this.L) {
                height = view.getBottom();
            }
            drawable.setBounds(0, 0, width, height);
            this.O.mutate().setAlpha(this.Q);
            this.O.draw(canvas);
            z5 = true;
        }
        return super.drawChild(canvas, view, j) || z5;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        ColorStateList colorStateList;
        super.drawableStateChanged();
        int[] drawableState = getDrawableState();
        Drawable drawable = this.P;
        boolean z5 = false;
        boolean state = (drawable == null || !drawable.isStateful()) ? false : drawable.setState(drawableState);
        Drawable drawable2 = this.O;
        if (drawable2 != null && drawable2.isStateful()) {
            state |= drawable2.setState(drawableState);
        }
        ch.c cVar = this.I;
        if (cVar != null) {
            cVar.S = drawableState;
            ColorStateList colorStateList2 = cVar.f3523p;
            if ((colorStateList2 != null && colorStateList2.isStateful()) || ((colorStateList = cVar.f3521o) != null && colorStateList.isStateful())) {
                cVar.l(false);
                z5 = true;
            }
            state |= z5;
        }
        if (state) {
            invalidate();
        }
    }

    public final void e(int i5, int i6, int i10, int i11, boolean z5) {
        View view;
        int i12;
        int i13;
        int i14;
        if (!this.L || (view = this.f15461w) == null) {
            return;
        }
        int i15 = 0;
        boolean z6 = view.isAttachedToWindow() && this.f15461w.getVisibility() == 0;
        this.M = z6;
        if (z6 || z5) {
            boolean z7 = getLayoutDirection() == 1;
            View view2 = this.f15460v;
            if (view2 == null) {
                view2 = this.f15456i;
            }
            int height = ((getHeight() - b(view2).f15465b) - view2.getHeight()) - ((FrameLayout.LayoutParams) ((h) view2.getLayoutParams())).bottomMargin;
            View view3 = this.f15461w;
            Rect rect = this.H;
            ch.d.a(this, view3, rect);
            ViewGroup viewGroup = this.f15456i;
            if (viewGroup instanceof Toolbar) {
                Toolbar toolbar = (Toolbar) viewGroup;
                i15 = toolbar.getTitleMarginStart();
                i13 = toolbar.getTitleMarginEnd();
                i14 = toolbar.getTitleMarginTop();
                i12 = toolbar.getTitleMarginBottom();
            } else if (viewGroup instanceof android.widget.Toolbar) {
                android.widget.Toolbar toolbar2 = (android.widget.Toolbar) viewGroup;
                i15 = toolbar2.getTitleMarginStart();
                i13 = toolbar2.getTitleMarginEnd();
                i14 = toolbar2.getTitleMarginTop();
                i12 = toolbar2.getTitleMarginBottom();
            } else {
                i12 = 0;
                i13 = 0;
                i14 = 0;
            }
            int i16 = rect.left + (z7 ? i13 : i15);
            int i17 = rect.right - (z7 ? i15 : i13);
            int i18 = rect.top + height + i14;
            int i19 = (rect.bottom + height) - i12;
            ch.c cVar = this.J;
            TextPaint textPaint = cVar.V;
            textPaint.setTextSize(cVar.f3519n);
            textPaint.setTypeface(cVar.f3538x);
            textPaint.setLetterSpacing(cVar.f3509g0);
            int descent = (int) (i19 - (textPaint.descent() + (-textPaint.ascent())));
            ch.c cVar2 = this.I;
            TextPaint textPaint2 = cVar2.V;
            textPaint2.setTextSize(cVar2.f3519n);
            textPaint2.setTypeface(cVar2.f3538x);
            textPaint2.setLetterSpacing(cVar2.f3509g0);
            int descent2 = (int) (textPaint2.descent() + (-textPaint2.ascent()) + i18);
            if (TextUtils.isEmpty(cVar.H)) {
                cVar2.o(i16, i18, i17, i19);
            } else {
                cVar2.o(i16, i18, i17, descent);
                cVar.o(i16, descent2, i17, i19);
            }
            if (this.N == 0) {
                ch.d.a(this, this, rect);
                int i20 = rect.left + (z7 ? i13 : i15);
                int i21 = rect.right;
                if (!z7) {
                    i15 = i13;
                }
                int i22 = i21 - i15;
                if (TextUtils.isEmpty(cVar.H)) {
                    cVar2.p(i20, i18, i22, i19);
                } else {
                    cVar2.p(i20, i18, i22, descent);
                    cVar.p(i20, descent2, i22, i19);
                }
            }
            int i23 = z7 ? this.E : this.f15462x;
            int i24 = rect.top + this.f15463y;
            int i25 = (i10 - i5) - (z7 ? this.f15462x : this.E);
            int i26 = (i11 - i6) - this.F;
            if (TextUtils.isEmpty(cVar.H)) {
                this.I.u(i23, i24, i25, i26, true);
                cVar2.l(z5);
            } else {
                this.I.u(i23, i24, i25, (int) ((i26 - (cVar.i() + this.f15457i0)) - this.G), false);
                this.J.u(i23, (int) (cVar2.i() + this.h0 + i24 + this.G), i25, i26, false);
                cVar2.l(z5);
                cVar.l(z5);
            }
        }
    }

    public final void f() {
        ViewGroup viewGroup = this.f15456i;
        if (viewGroup == null || !this.L) {
            return;
        }
        CharSequence charSequence = null;
        CharSequence title = viewGroup instanceof Toolbar ? ((Toolbar) viewGroup).getTitle() : viewGroup instanceof android.widget.Toolbar ? ((android.widget.Toolbar) viewGroup).getTitle() : null;
        if (TextUtils.isEmpty(this.I.H) && !TextUtils.isEmpty(title)) {
            setTitle(title);
        }
        ViewGroup viewGroup2 = this.f15456i;
        if (viewGroup2 instanceof Toolbar) {
            charSequence = ((Toolbar) viewGroup2).getSubtitle();
        } else if (viewGroup2 instanceof android.widget.Toolbar) {
            charSequence = ((android.widget.Toolbar) viewGroup2).getSubtitle();
        }
        if (!TextUtils.isEmpty(this.J.H) || TextUtils.isEmpty(charSequence)) {
            return;
        }
        setSubtitle(charSequence);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new h(-1);
    }

    public float getCollapsedSubtitleTextSize() {
        return this.J.f3519n;
    }

    @NonNull
    public Typeface getCollapsedSubtitleTypeface() {
        Typeface typeface = this.J.f3538x;
        return typeface != null ? typeface : Typeface.DEFAULT;
    }

    public int getCollapsedTitleGravity() {
        return this.I.f3515l;
    }

    public float getCollapsedTitleTextSize() {
        return this.I.f3519n;
    }

    @NonNull
    public Typeface getCollapsedTitleTypeface() {
        Typeface typeface = this.I.f3538x;
        return typeface != null ? typeface : Typeface.DEFAULT;
    }

    public Drawable getContentScrim() {
        return this.O;
    }

    public float getExpandedSubtitleTextSize() {
        return this.J.f3517m;
    }

    @NonNull
    public Typeface getExpandedSubtitleTypeface() {
        Typeface typeface = this.J.A;
        return typeface != null ? typeface : Typeface.DEFAULT;
    }

    public int getExpandedTitleGravity() {
        return this.I.k;
    }

    public int getExpandedTitleMarginBottom() {
        return this.F;
    }

    public int getExpandedTitleMarginEnd() {
        return this.E;
    }

    public int getExpandedTitleMarginStart() {
        return this.f15462x;
    }

    public int getExpandedTitleMarginTop() {
        return this.f15463y;
    }

    public int getExpandedTitleSpacing() {
        return this.G;
    }

    public float getExpandedTitleTextSize() {
        return this.I.f3517m;
    }

    @NonNull
    public Typeface getExpandedTitleTypeface() {
        Typeface typeface = this.I.A;
        return typeface != null ? typeface : Typeface.DEFAULT;
    }

    public int getHyphenationFrequency() {
        return this.I.f3530s0;
    }

    public int getLineCount() {
        StaticLayout staticLayout = this.I.f3513j0;
        if (staticLayout != null) {
            return staticLayout.getLineCount();
        }
        return 0;
    }

    public float getLineSpacingAdd() {
        return this.I.f3513j0.getSpacingAdd();
    }

    public float getLineSpacingMultiplier() {
        return this.I.f3513j0.getSpacingMultiplier();
    }

    public int getMaxLines() {
        return this.I.f3522o0;
    }

    public int getScrimAlpha() {
        return this.Q;
    }

    public long getScrimAnimationDuration() {
        return this.T;
    }

    public int getScrimVisibleHeightTrigger() {
        int i5 = this.W;
        if (i5 >= 0) {
            return i5 + this.f15454f0 + this.h0 + this.f15457i0 + this.f15459k0;
        }
        WindowInsetsCompat windowInsetsCompat = this.f15453e0;
        int d6 = windowInsetsCompat != null ? windowInsetsCompat.d() : 0;
        int minimumHeight = getMinimumHeight();
        return minimumHeight > 0 ? Math.min((minimumHeight * 2) + d6, getHeight()) : getHeight() / 3;
    }

    public Drawable getStatusBarScrim() {
        return this.P;
    }

    public CharSequence getSubtitle() {
        if (this.L) {
            return this.J.H;
        }
        return null;
    }

    public CharSequence getTitle() {
        if (this.L) {
            return this.I.H;
        }
        return null;
    }

    public int getTitleCollapseMode() {
        return this.f15451d0;
    }

    public TimeInterpolator getTitlePositionInterpolator() {
        return this.I.W;
    }

    @NonNull
    public TextUtils.TruncateAt getTitleTextEllipsize() {
        return this.I.G;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        ViewParent parent = getParent();
        if (parent instanceof g) {
            g gVar = (g) parent;
            if (this.f15451d0 == 1) {
                gVar.setLiftOnScroll(false);
            }
            setFitsSystemWindows(gVar.getFitsSystemWindows());
            if (this.a0 == null) {
                this.a0 = new i(this);
            }
            gVar.a(this.a0);
            requestApplyInsets();
        }
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        ch.c cVar = this.I;
        cVar.k(configuration);
        if (this.f15449c0 != configuration.orientation && this.f15458j0 && cVar.f3498b == 1.0f) {
            ViewParent parent = getParent();
            if (parent instanceof g) {
                g gVar = (g) parent;
                if (gVar.getPendingAction() == 0) {
                    gVar.setPendingAction(2);
                }
            }
        }
        this.f15449c0 = configuration.orientation;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        ArrayList arrayList;
        ViewParent parent = getParent();
        i iVar = this.a0;
        if (iVar != null && (parent instanceof g) && (arrayList = ((g) parent).E) != null) {
            arrayList.remove(iVar);
        }
        super.onDetachedFromWindow();
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        WindowInsetsCompat windowInsetsCompat = this.f15453e0;
        if (windowInsetsCompat != null) {
            int d6 = windowInsetsCompat.d();
            int childCount = getChildCount();
            for (int i12 = 0; i12 < childCount; i12++) {
                View childAt = getChildAt(i12);
                if (!childAt.getFitsSystemWindows() && childAt.getTop() < d6) {
                    WeakHashMap weakHashMap = s0.a;
                    childAt.offsetTopAndBottom(d6);
                }
            }
        }
        int childCount2 = getChildCount();
        for (int i13 = 0; i13 < childCount2; i13++) {
            m b10 = b(getChildAt(i13));
            View view = b10.a;
            b10.f15465b = view.getTop();
            b10.f15466c = view.getLeft();
        }
        e(i5, i6, i10, i11, false);
        f();
        d();
        int childCount3 = getChildCount();
        for (int i14 = 0; i14 < childCount3; i14++) {
            b(getChildAt(i14)).a();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:53:? A[RETURN, SYNTHETIC] */
    @Override // android.widget.FrameLayout, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onMeasure(int i5, int i6) {
        k kVar;
        ViewGroup viewGroup;
        int measuredHeight;
        int measuredHeight2;
        a();
        super.onMeasure(i5, i6);
        int mode = View.MeasureSpec.getMode(i6);
        WindowInsetsCompat windowInsetsCompat = this.f15453e0;
        int d6 = windowInsetsCompat != null ? windowInsetsCompat.d() : 0;
        if ((mode == 0 || this.f15455g0) && d6 > 0) {
            this.f15454f0 = d6;
            super.onMeasure(i5, View.MeasureSpec.makeMeasureSpec(getMeasuredHeight() + d6, 1073741824));
        }
        f();
        if (this.L) {
            ch.c cVar = this.I;
            if (!TextUtils.isEmpty(cVar.H)) {
                int measuredHeight3 = getMeasuredHeight();
                kVar = this;
                kVar.e(0, 0, getMeasuredWidth(), measuredHeight3, true);
                float i10 = cVar.i() + kVar.f15454f0 + kVar.f15463y;
                ch.c cVar2 = kVar.J;
                int i11 = (int) (i10 + (TextUtils.isEmpty(cVar2.H) ? 0.0f : kVar.G + cVar2.i()) + kVar.F);
                if (i11 > measuredHeight3) {
                    kVar.f15459k0 = i11 - measuredHeight3;
                } else {
                    kVar.f15459k0 = 0;
                }
                if (kVar.f15458j0) {
                    if (cVar.f3522o0 > 1) {
                        int i12 = cVar.f3525q;
                        if (i12 > 1) {
                            kVar.h0 = (i12 - 1) * Math.round(cVar.i());
                        } else {
                            kVar.h0 = 0;
                        }
                    }
                    if (cVar2.f3522o0 > 1) {
                        int i13 = cVar2.f3525q;
                        if (i13 > 1) {
                            kVar.f15457i0 = (i13 - 1) * Math.round(cVar2.i());
                        } else {
                            kVar.f15457i0 = 0;
                        }
                    }
                }
                int i14 = kVar.f15459k0;
                int i15 = kVar.h0;
                int i16 = kVar.f15457i0;
                if (i14 + i15 + i16 > 0) {
                    super.onMeasure(i5, View.MeasureSpec.makeMeasureSpec(measuredHeight3 + i14 + i15 + i16, 1073741824));
                }
                viewGroup = kVar.f15456i;
                if (viewGroup == null) {
                    View view = kVar.f15460v;
                    if (view == null || view == kVar) {
                        ViewGroup.LayoutParams layoutParams = viewGroup.getLayoutParams();
                        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
                            ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams;
                            measuredHeight = viewGroup.getMeasuredHeight() + marginLayoutParams.topMargin + marginLayoutParams.bottomMargin;
                        } else {
                            measuredHeight = viewGroup.getMeasuredHeight();
                        }
                        setMinimumHeight(measuredHeight);
                        return;
                    }
                    ViewGroup.LayoutParams layoutParams2 = view.getLayoutParams();
                    if (layoutParams2 instanceof ViewGroup.MarginLayoutParams) {
                        ViewGroup.MarginLayoutParams marginLayoutParams2 = (ViewGroup.MarginLayoutParams) layoutParams2;
                        measuredHeight2 = view.getMeasuredHeight() + marginLayoutParams2.topMargin + marginLayoutParams2.bottomMargin;
                    } else {
                        measuredHeight2 = view.getMeasuredHeight();
                    }
                    setMinimumHeight(measuredHeight2);
                    return;
                }
                return;
            }
        }
        kVar = this;
        viewGroup = kVar.f15456i;
        if (viewGroup == null) {
        }
    }

    @Override // android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        Drawable drawable = this.O;
        if (drawable != null) {
            ViewGroup viewGroup = this.f15456i;
            if (this.f15451d0 == 1 && viewGroup != null && this.L) {
                i6 = viewGroup.getBottom();
            }
            drawable.setBounds(0, 0, i5, i6);
        }
    }

    public void setCollapsedSubtitleTextAppearance(int i5) {
        this.J.q(i5);
    }

    public void setCollapsedSubtitleTextColor(int i5) {
        setCollapsedSubtitleTextColor(ColorStateList.valueOf(i5));
    }

    public void setCollapsedSubtitleTextSize(float f2) {
        ch.c cVar = this.J;
        if (cVar.f3519n != f2) {
            cVar.f3519n = f2;
            cVar.l(false);
        }
    }

    public void setCollapsedSubtitleTypeface(Typeface typeface) {
        ch.c cVar = this.J;
        if (cVar.t(typeface)) {
            cVar.l(false);
        }
    }

    public void setCollapsedTitleGravity(int i5) {
        this.I.s(i5);
        this.J.s(i5);
    }

    public void setCollapsedTitleTextAppearance(int i5) {
        this.I.q(i5);
    }

    public void setCollapsedTitleTextColor(int i5) {
        setCollapsedTitleTextColor(ColorStateList.valueOf(i5));
    }

    public void setCollapsedTitleTextSize(float f2) {
        ch.c cVar = this.I;
        if (cVar.f3519n != f2) {
            cVar.f3519n = f2;
            cVar.l(false);
        }
    }

    public void setCollapsedTitleTypeface(Typeface typeface) {
        ch.c cVar = this.I;
        if (cVar.t(typeface)) {
            cVar.l(false);
        }
    }

    public void setContentScrim(Drawable drawable) {
        Drawable drawable2 = this.O;
        if (drawable2 != drawable) {
            if (drawable2 != null) {
                drawable2.setCallback(null);
            }
            Drawable mutate = drawable != null ? drawable.mutate() : null;
            this.O = mutate;
            if (mutate != null) {
                int width = getWidth();
                int height = getHeight();
                ViewGroup viewGroup = this.f15456i;
                if (this.f15451d0 == 1 && viewGroup != null && this.L) {
                    height = viewGroup.getBottom();
                }
                mutate.setBounds(0, 0, width, height);
                this.O.setCallback(this);
                this.O.setAlpha(this.Q);
            }
            postInvalidateOnAnimation();
        }
    }

    public void setContentScrimColor(int i5) {
        setContentScrim(new ColorDrawable(i5));
    }

    public void setContentScrimResource(int i5) {
        setContentScrim(getContext().getDrawable(i5));
    }

    public void setExpandedSubtitleColor(int i5) {
        setExpandedSubtitleTextColor(ColorStateList.valueOf(i5));
    }

    public void setExpandedSubtitleTextAppearance(int i5) {
        this.J.w(i5);
    }

    public void setExpandedSubtitleTextColor(@NonNull ColorStateList colorStateList) {
        ch.c cVar = this.J;
        if (cVar.f3521o != colorStateList) {
            cVar.f3521o = colorStateList;
            cVar.l(false);
        }
    }

    public void setExpandedSubtitleTextSize(float f2) {
        this.J.y(f2);
    }

    public void setExpandedSubtitleTypeface(Typeface typeface) {
        ch.c cVar = this.J;
        if (cVar.z(typeface)) {
            cVar.l(false);
        }
    }

    public void setExpandedTitleColor(int i5) {
        setExpandedTitleTextColor(ColorStateList.valueOf(i5));
    }

    public void setExpandedTitleGravity(int i5) {
        this.I.x(i5);
        this.J.x(i5);
    }

    public void setExpandedTitleMarginBottom(int i5) {
        this.F = i5;
        requestLayout();
    }

    public void setExpandedTitleMarginEnd(int i5) {
        this.E = i5;
        requestLayout();
    }

    public void setExpandedTitleMarginStart(int i5) {
        this.f15462x = i5;
        requestLayout();
    }

    public void setExpandedTitleMarginTop(int i5) {
        this.f15463y = i5;
        requestLayout();
    }

    public void setExpandedTitleSpacing(int i5) {
        this.G = i5;
        requestLayout();
    }

    public void setExpandedTitleTextAppearance(int i5) {
        this.I.w(i5);
    }

    public void setExpandedTitleTextColor(@NonNull ColorStateList colorStateList) {
        ch.c cVar = this.I;
        if (cVar.f3521o != colorStateList) {
            cVar.f3521o = colorStateList;
            cVar.l(false);
        }
    }

    public void setExpandedTitleTextSize(float f2) {
        this.I.y(f2);
    }

    public void setExpandedTitleTypeface(Typeface typeface) {
        ch.c cVar = this.I;
        if (cVar.z(typeface)) {
            cVar.l(false);
        }
    }

    public void setExtraMultilineHeightEnabled(boolean z5) {
        this.f15458j0 = z5;
    }

    public void setForceApplySystemWindowInsetTop(boolean z5) {
        this.f15455g0 = z5;
    }

    public void setHyphenationFrequency(int i5) {
        this.I.f3530s0 = i5;
    }

    public void setLineSpacingAdd(float f2) {
        this.I.f3526q0 = f2;
    }

    public void setLineSpacingMultiplier(float f2) {
        this.I.f3528r0 = f2;
    }

    public void setMaxLines(int i5) {
        this.I.v(i5);
        this.J.v(i5);
    }

    public void setRtlTextDirectionHeuristicsEnabled(boolean z5) {
        this.I.K = z5;
    }

    public void setScrimAlpha(int i5) {
        ViewGroup viewGroup;
        if (i5 != this.Q) {
            if (this.O != null && (viewGroup = this.f15456i) != null) {
                viewGroup.postInvalidateOnAnimation();
            }
            this.Q = i5;
            postInvalidateOnAnimation();
        }
    }

    public void setScrimAnimationDuration(long j) {
        this.T = j;
    }

    public void setScrimVisibleHeightTrigger(int i5) {
        if (this.W != i5) {
            this.W = i5;
            d();
        }
    }

    public void setScrimsShown(boolean z5) {
        boolean z6 = isLaidOut() && !isInEditMode();
        if (this.R != z5) {
            if (z6) {
                int i5 = z5 ? 255 : 0;
                a();
                ValueAnimator valueAnimator = this.S;
                if (valueAnimator == null) {
                    ValueAnimator valueAnimator2 = new ValueAnimator();
                    this.S = valueAnimator2;
                    valueAnimator2.setInterpolator(i5 > this.Q ? this.U : this.V);
                    this.S.addUpdateListener(new ch.n(1, this));
                } else if (valueAnimator.isRunning()) {
                    this.S.cancel();
                }
                this.S.setDuration(this.T);
                this.S.setIntValues(this.Q, i5);
                this.S.start();
            } else {
                setScrimAlpha(z5 ? 255 : 0);
            }
            this.R = z5;
        }
    }

    public void setStaticLayoutBuilderConfigurer(j jVar) {
        ch.c cVar = this.I;
        cVar.getClass();
        if (jVar != null) {
            cVar.l(true);
        }
    }

    public void setStatusBarScrim(Drawable drawable) {
        Drawable drawable2 = this.P;
        if (drawable2 != drawable) {
            if (drawable2 != null) {
                drawable2.setCallback(null);
            }
            Drawable mutate = drawable != null ? drawable.mutate() : null;
            this.P = mutate;
            if (mutate != null) {
                if (mutate.isStateful()) {
                    this.P.setState(getDrawableState());
                }
                this.P.setLayoutDirection(getLayoutDirection());
                this.P.setVisible(getVisibility() == 0, false);
                this.P.setCallback(this);
                this.P.setAlpha(this.Q);
            }
            postInvalidateOnAnimation();
        }
    }

    public void setStatusBarScrimColor(int i5) {
        setStatusBarScrim(new ColorDrawable(i5));
    }

    public void setStatusBarScrimResource(int i5) {
        setStatusBarScrim(getContext().getDrawable(i5));
    }

    public void setSubtitle(CharSequence charSequence) {
        this.J.B(charSequence);
    }

    public void setTitle(CharSequence charSequence) {
        this.I.B(charSequence);
        setContentDescription(getTitle());
    }

    public void setTitleCollapseMode(int i5) {
        this.f15451d0 = i5;
        boolean z5 = i5 == 1;
        this.I.f3500c = z5;
        this.J.f3500c = z5;
        ViewParent parent = getParent();
        if (parent instanceof g) {
            g gVar = (g) parent;
            if (this.f15451d0 == 1) {
                gVar.setLiftOnScroll(false);
            }
        }
        if (z5 && this.O == null) {
            setContentScrimColor(getDefaultContentScrimColorForTitleCollapseFadeMode());
        }
    }

    public void setTitleEllipsize(@NonNull TextUtils.TruncateAt truncateAt) {
        ch.c cVar = this.I;
        cVar.G = truncateAt;
        cVar.l(false);
    }

    public void setTitleEnabled(boolean z5) {
        if (z5 != this.L) {
            this.L = z5;
            setContentDescription(getTitle());
            c();
            requestLayout();
        }
    }

    public void setTitlePositionInterpolator(TimeInterpolator timeInterpolator) {
        ch.c cVar = this.I;
        cVar.W = timeInterpolator;
        cVar.l(false);
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        super.setVisibility(i5);
        boolean z5 = i5 == 0;
        Drawable drawable = this.P;
        if (drawable != null && drawable.isVisible() != z5) {
            this.P.setVisible(z5, false);
        }
        Drawable drawable2 = this.O;
        if (drawable2 == null || drawable2.isVisible() == z5) {
            return;
        }
        this.O.setVisible(z5, false);
    }

    @Override // android.view.View
    public final boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.O || drawable == this.P;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public final FrameLayout.LayoutParams generateDefaultLayoutParams() {
        return new h(-1);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public final FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        Context context = getContext();
        h hVar = new h(context, attributeSet);
        hVar.a = 0;
        hVar.f15447b = 0.5f;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.f13962m);
        hVar.a = obtainStyledAttributes.getInt(0, 0);
        hVar.f15447b = obtainStyledAttributes.getFloat(1, 0.5f);
        obtainStyledAttributes.recycle();
        return hVar;
    }

    public void setCollapsedSubtitleTextColor(@NonNull ColorStateList colorStateList) {
        this.J.r(colorStateList);
    }

    public void setCollapsedTitleTextColor(@NonNull ColorStateList colorStateList) {
        this.I.r(colorStateList);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        h hVar = new h(layoutParams);
        hVar.a = 0;
        hVar.f15447b = 0.5f;
        return hVar;
    }
}
