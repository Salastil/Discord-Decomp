package com.budiyev.android.codescanner;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.hardware.Camera;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.SurfaceView;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import androidx.annotation.NonNull;
import e4.f;
import h5.a;
import h5.h;
import h5.i;
import h5.j;
import h5.o;
import h5.q;
import h5.r;
import h5.s;
import h5.t;
import java.util.List;
import java.util.Objects;

/* loaded from: classes.dex */
public final class CodeScannerView extends ViewGroup {
    public Drawable E;
    public Drawable F;
    public final ImageView G;
    public a H;
    public int I;
    public int J;
    public int K;
    public Drawable L;
    public Drawable M;
    public q N;
    public j O;
    public CodeScanner P;
    public final int Q;

    /* renamed from: d, reason: collision with root package name */
    public final SurfaceView f3718d;

    /* renamed from: e, reason: collision with root package name */
    public final t f3719e;

    /* renamed from: i, reason: collision with root package name */
    public final ImageView f3720i;

    /* renamed from: v, reason: collision with root package name */
    public a f3721v;

    /* renamed from: w, reason: collision with root package name */
    public int f3722w;

    /* renamed from: x, reason: collision with root package name */
    public int f3723x;

    /* renamed from: y, reason: collision with root package name */
    public int f3724y;

    public CodeScannerView(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3718d = new SurfaceView(context);
        this.f3719e = new t(context);
        float f2 = context.getResources().getDisplayMetrics().density;
        int round = Math.round(16.0f * f2);
        this.Q = Math.round(20.0f * f2);
        ImageView imageView = new ImageView(context);
        this.f3720i = imageView;
        ImageView.ScaleType scaleType = ImageView.ScaleType.CENTER;
        imageView.setScaleType(scaleType);
        this.f3720i.setOnClickListener(new h(this, 0));
        ImageView imageView2 = new ImageView(context);
        this.G = imageView2;
        imageView2.setScaleType(scaleType);
        this.G.setOnClickListener(new h(this, 1));
        a aVar = a.f9520e;
        a aVar2 = a.f9519d;
        if (attributeSet == null) {
            b(1.0f, 1.0f);
            setMaskColor(1996488704);
            setMaskVisible(true);
            setFrameColor(-1);
            setFrameVisible(true);
            setFrameThickness(Math.round(2.0f * f2));
            setFrameCornersSize(Math.round(f2 * 50.0f));
            setFrameCornersRadius(Math.round(f2 * 0.0f));
            setFrameCornersCapRounded(false);
            setFrameSize(0.75f);
            setFrameVerticalBias(0.5f);
            setAutoFocusButtonColor(-1);
            setFlashButtonColor(-1);
            setAutoFocusButtonVisible(true);
            setAutoFocusButtonPosition(aVar2);
            setFlashButtonVisible(true);
            setFlashButtonPosition(aVar);
            setAutoFocusButtonPaddingHorizontal(round);
            setAutoFocusButtonPaddingVertical(round);
            setFlashButtonPaddingHorizontal(round);
            setFlashButtonPaddingVertical(round);
            setAutoFocusButtonOnIcon(context.getDrawable(2131231453));
            setAutoFocusButtonOffIcon(context.getDrawable(2131231452));
            setFlashButtonOnIcon(context.getDrawable(2131231455));
            setFlashButtonOffIcon(context.getDrawable(2131231454));
        } else {
            TypedArray typedArray = null;
            try {
                TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(attributeSet, r.a, 0, 0);
                try {
                    setMaskColor(obtainStyledAttributes.getColor(24, 1996488704));
                    setMaskVisible(obtainStyledAttributes.getBoolean(25, true));
                    setFrameColor(obtainStyledAttributes.getColor(16, -1));
                    setFrameVisible(obtainStyledAttributes.getBoolean(23, true));
                    setFrameThickness(obtainStyledAttributes.getDimensionPixelOffset(21, Math.round(2.0f * f2)));
                    setFrameCornersSize(obtainStyledAttributes.getDimensionPixelOffset(19, Math.round(f2 * 50.0f)));
                    setFrameCornersRadius(obtainStyledAttributes.getDimensionPixelOffset(18, Math.round(f2 * 0.0f)));
                    setFrameCornersCapRounded(obtainStyledAttributes.getBoolean(17, false));
                    b(obtainStyledAttributes.getFloat(15, 1.0f), obtainStyledAttributes.getFloat(14, 1.0f));
                    setFrameSize(obtainStyledAttributes.getFloat(20, 0.75f));
                    setFrameVerticalBias(obtainStyledAttributes.getFloat(22, 0.5f));
                    setAutoFocusButtonVisible(obtainStyledAttributes.getBoolean(6, true));
                    setAutoFocusButtonColor(obtainStyledAttributes.getColor(0, -1));
                    int i5 = obtainStyledAttributes.getInt(5, 0);
                    a aVar3 = a.f9521i;
                    a aVar4 = a.f9522v;
                    setAutoFocusButtonPosition(i5 != 1 ? i5 != 2 ? i5 != 3 ? aVar2 : aVar4 : aVar3 : aVar);
                    setAutoFocusButtonPaddingHorizontal(obtainStyledAttributes.getDimensionPixelOffset(3, round));
                    setAutoFocusButtonPaddingVertical(obtainStyledAttributes.getDimensionPixelOffset(4, round));
                    Drawable drawable = obtainStyledAttributes.getDrawable(2);
                    if (drawable == null) {
                        drawable = context.getDrawable(2131231453);
                    }
                    setAutoFocusButtonOnIcon(drawable);
                    Drawable drawable2 = obtainStyledAttributes.getDrawable(1);
                    if (drawable2 == null) {
                        drawable2 = context.getDrawable(2131231452);
                    }
                    setAutoFocusButtonOffIcon(drawable2);
                    setFlashButtonVisible(obtainStyledAttributes.getBoolean(13, true));
                    setFlashButtonColor(obtainStyledAttributes.getColor(7, -1));
                    int i6 = obtainStyledAttributes.getInt(12, 1);
                    setFlashButtonPosition(i6 != 1 ? i6 != 2 ? i6 != 3 ? aVar2 : aVar4 : aVar3 : aVar);
                    setFlashButtonPaddingHorizontal(obtainStyledAttributes.getDimensionPixelOffset(10, round));
                    setFlashButtonPaddingVertical(obtainStyledAttributes.getDimensionPixelOffset(11, round));
                    Drawable drawable3 = obtainStyledAttributes.getDrawable(9);
                    if (drawable3 == null) {
                        drawable3 = context.getDrawable(2131231455);
                    }
                    setFlashButtonOnIcon(drawable3);
                    Drawable drawable4 = obtainStyledAttributes.getDrawable(8);
                    if (drawable4 == null) {
                        drawable4 = context.getDrawable(2131231454);
                    }
                    setFlashButtonOffIcon(drawable4);
                    obtainStyledAttributes.recycle();
                } catch (Throwable th2) {
                    th = th2;
                    typedArray = obtainStyledAttributes;
                    if (typedArray != null) {
                        typedArray.recycle();
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        }
        if (isInEditMode()) {
            setAutoFocusEnabled(true);
            setFlashEnabled(true);
        }
        addView(this.f3718d, new i(-1, -1));
        addView(this.f3719e, new i(-1, -1));
        addView(this.f3720i, new i(-2, -2));
        addView(this.G, new i(-2, -2));
    }

    public final void a(ImageView imageView, a aVar, int i5, int i6) {
        int measuredWidth = imageView.getMeasuredWidth();
        int measuredHeight = imageView.getMeasuredHeight();
        int layoutDirection = getLayoutDirection();
        int ordinal = aVar.ordinal();
        if (ordinal == 0) {
            if (layoutDirection == 1) {
                imageView.layout(i5 - measuredWidth, 0, i5, measuredHeight);
                return;
            } else {
                imageView.layout(0, 0, measuredWidth, measuredHeight);
                return;
            }
        }
        if (ordinal == 1) {
            if (layoutDirection == 1) {
                imageView.layout(0, 0, measuredWidth, measuredHeight);
                return;
            } else {
                imageView.layout(i5 - measuredWidth, 0, i5, measuredHeight);
                return;
            }
        }
        if (ordinal == 2) {
            if (layoutDirection == 1) {
                imageView.layout(i5 - measuredWidth, i6 - measuredHeight, i5, i6);
                return;
            } else {
                imageView.layout(0, i6 - measuredHeight, measuredWidth, i6);
                return;
            }
        }
        if (ordinal != 3) {
            return;
        }
        if (layoutDirection == 1) {
            imageView.layout(0, i6 - measuredHeight, measuredWidth, i6);
        } else {
            imageView.layout(i5 - measuredWidth, i6 - measuredHeight, i5, i6);
        }
    }

    public final void b(float f2, float f10) {
        if (f2 <= 0.0f || f10 <= 0.0f) {
            throw new IllegalArgumentException("Frame aspect ratio values should be greater than zero");
        }
        t tVar = this.f3719e;
        tVar.f9567y = f2;
        tVar.E = f10;
        tVar.a(tVar.getWidth(), tVar.getHeight());
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    @Override // android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof i;
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new i(-2, -2);
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new i(getContext(), attributeSet);
    }

    public int getAutoFocusButtonColor() {
        return this.f3724y;
    }

    @NonNull
    public Drawable getAutoFocusButtonOffIcon() {
        return this.F;
    }

    @NonNull
    public Drawable getAutoFocusButtonOnIcon() {
        return this.E;
    }

    public int getAutoFocusButtonPaddingHorizontal() {
        return this.f3722w;
    }

    public int getAutoFocusButtonPaddingVertical() {
        return this.f3723x;
    }

    @NonNull
    public a getAutoFocusButtonPosition() {
        return this.f3721v;
    }

    public int getFlashButtonColor() {
        return this.K;
    }

    @NonNull
    public Drawable getFlashButtonOffIcon() {
        return this.M;
    }

    @NonNull
    public Drawable getFlashButtonOnIcon() {
        return this.L;
    }

    public int getFlashButtonPaddingHorizontal() {
        return this.I;
    }

    public int getFlashButtonPaddingVertical() {
        return this.J;
    }

    @NonNull
    public a getFlashButtonPosition() {
        return this.H;
    }

    public float getFrameAspectRatioHeight() {
        return this.f3719e.E;
    }

    public float getFrameAspectRatioWidth() {
        return this.f3719e.f9567y;
    }

    public int getFrameColor() {
        return this.f3719e.f9562e.getColor();
    }

    public int getFrameCornersRadius() {
        return this.f3719e.f9566x;
    }

    public int getFrameCornersSize() {
        return this.f3719e.f9565w;
    }

    public s getFrameRect() {
        return this.f3719e.f9564v;
    }

    public float getFrameSize() {
        return this.f3719e.F;
    }

    public int getFrameThickness() {
        return (int) this.f3719e.f9562e.getStrokeWidth();
    }

    public float getFrameVerticalBias() {
        return this.f3719e.G;
    }

    public int getMaskColor() {
        return this.f3719e.f9561d.getColor();
    }

    @NonNull
    public SurfaceView getPreviewView() {
        return this.f3718d;
    }

    @NonNull
    public t getViewFinderView() {
        return this.f3719e;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        int i14;
        int i15;
        int childCount = getChildCount();
        if (childCount > 5) {
            throw new IllegalStateException("CodeScannerView can have zero or one child");
        }
        int i16 = i10 - i5;
        int i17 = i11 - i6;
        q qVar = this.N;
        if (qVar == null) {
            this.f3718d.layout(0, 0, i16, i17);
        } else {
            int i18 = qVar.a;
            if (i18 > i16) {
                int i19 = (i18 - i16) / 2;
                i12 = 0 - i19;
                i13 = i19 + i16;
            } else {
                i12 = 0;
                i13 = i16;
            }
            int i20 = qVar.f9557b;
            if (i20 > i17) {
                int i21 = (i20 - i17) / 2;
                i14 = 0 - i21;
                i15 = i21 + i17;
            } else {
                i14 = 0;
                i15 = i17;
            }
            this.f3718d.layout(i12, i14, i13, i15);
        }
        this.f3719e.layout(0, 0, i16, i17);
        a(this.f3720i, this.f3721v, i16, i17);
        a(this.G, this.H, i16, i17);
        if (childCount == 5) {
            s sVar = this.f3719e.f9564v;
            int i22 = sVar != null ? sVar.f9560d : 0;
            View childAt = getChildAt(4);
            int paddingLeft = getPaddingLeft();
            int paddingTop = getPaddingTop();
            if (childAt.getVisibility() != 8) {
                i iVar = (i) childAt.getLayoutParams();
                int i23 = paddingLeft + ((ViewGroup.MarginLayoutParams) iVar).leftMargin;
                int i24 = paddingTop + ((ViewGroup.MarginLayoutParams) iVar).topMargin + i22;
                childAt.layout(i23, i24, childAt.getMeasuredWidth() + i23, childAt.getMeasuredHeight() + i24);
            }
        }
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        int childCount = getChildCount();
        if (childCount > 5) {
            throw new IllegalStateException("CodeScannerView can have zero or one child");
        }
        measureChildWithMargins(this.f3718d, i5, 0, i6, 0);
        measureChildWithMargins(this.f3719e, i5, 0, i6, 0);
        measureChildWithMargins(this.f3720i, i5, 0, i6, 0);
        measureChildWithMargins(this.G, i5, 0, i6, 0);
        if (childCount == 5) {
            s sVar = this.f3719e.f9564v;
            measureChildWithMargins(getChildAt(4), i5, 0, i6, sVar != null ? sVar.f9560d : 0);
        }
        setMeasuredDimension(View.getDefaultSize(getSuggestedMinimumWidth(), i5), View.getDefaultSize(getSuggestedMinimumHeight(), i6));
    }

    @Override // android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        j jVar = this.O;
        if (jVar != null) {
            ve.i iVar = (ve.i) jVar;
            synchronized (((CodeScanner) iVar.f19405d).a) {
                try {
                    CodeScanner codeScanner = (CodeScanner) iVar.f19405d;
                    if (i5 == codeScanner.D) {
                        if (i6 != codeScanner.E) {
                        }
                    }
                    boolean z5 = codeScanner.f3716y;
                    if (codeScanner.f3710s) {
                        ((CodeScanner) iVar.f19405d).b();
                    }
                    if (z5 || ((CodeScanner) iVar.f19405d).B) {
                        ((CodeScanner) iVar.f19405d).a(i5, i6);
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        o oVar;
        int i5;
        int i6;
        int i10;
        int i11;
        List<String> supportedFocusModes;
        CodeScanner codeScanner = this.P;
        s frameRect = getFrameRect();
        int x5 = (int) motionEvent.getX();
        int y5 = (int) motionEvent.getY();
        if (codeScanner != null && frameRect != null && (((oVar = codeScanner.f3708q) == null || oVar.f9555h) && motionEvent.getAction() == 0 && (i5 = frameRect.a) < x5 && (i6 = frameRect.f9558b) < y5 && (i10 = frameRect.f9559c) > x5 && (i11 = frameRect.f9560d) > y5)) {
            int i12 = this.Q;
            int i13 = x5 - i12;
            int i14 = y5 - i12;
            int i15 = x5 + i12;
            int i16 = y5 + i12;
            s sVar = new s(i13, i14, i15, i16);
            int i17 = i15 - i13;
            int i18 = i16 - i14;
            int i19 = i10 - i5;
            int i20 = i11 - i6;
            if (i13 < i5 || i14 < i6 || i15 > i10 || i16 > i11) {
                int min = Math.min(i17, i19);
                int min2 = Math.min(i18, i20);
                if (i13 < i5) {
                    i10 = i5 + min;
                } else if (i15 > i10) {
                    i5 = i10 - min;
                } else {
                    i10 = i15;
                    i5 = i13;
                }
                if (i14 < i6) {
                    i11 = i6 + min2;
                } else if (i16 > i11) {
                    i6 = i11 - min2;
                } else {
                    i11 = i16;
                    i6 = i14;
                }
                sVar = new s(i5, i6, i10, i11);
            }
            synchronized (codeScanner.a) {
                if (codeScanner.f3710s && codeScanner.f3716y && !codeScanner.f3715x) {
                    try {
                        codeScanner.e(false);
                        o oVar2 = codeScanner.f3708q;
                        if (codeScanner.f3716y && oVar2 != null && oVar2.f9555h) {
                            q qVar = oVar2.f9550c;
                            int i21 = qVar.a;
                            int i22 = qVar.f9557b;
                            int i23 = oVar2.f9553f;
                            if (i23 == 90 || i23 == 270) {
                                i21 = i22;
                                i22 = i21;
                            }
                            s t5 = f.t(i21, i22, sVar, oVar2.f9551d, oVar2.f9552e);
                            Camera camera = oVar2.a;
                            camera.cancelAutoFocus();
                            Camera.Parameters parameters = camera.getParameters();
                            f.n(parameters, t5, i21, i22, i23);
                            if (!"auto".equals(parameters.getFocusMode()) && (supportedFocusModes = parameters.getSupportedFocusModes()) != null && supportedFocusModes.contains("auto")) {
                                parameters.setFocusMode("auto");
                            }
                            camera.setParameters(parameters);
                            camera.autoFocus(codeScanner.f3701h);
                            codeScanner.f3715x = true;
                        }
                    } catch (Exception unused) {
                    }
                }
            }
        }
        return super.onTouchEvent(motionEvent);
    }

    public void setAutoFocusButtonColor(int i5) {
        this.f3724y = i5;
        this.f3720i.setColorFilter(i5);
    }

    public void setAutoFocusButtonOffIcon(@NonNull Drawable drawable) {
        Objects.requireNonNull(drawable);
        boolean z5 = drawable != this.F;
        this.F = drawable;
        CodeScanner codeScanner = this.P;
        if (!z5 || codeScanner == null) {
            return;
        }
        setAutoFocusEnabled(codeScanner.f3712u);
    }

    public void setAutoFocusButtonOnIcon(@NonNull Drawable drawable) {
        Objects.requireNonNull(drawable);
        boolean z5 = drawable != this.E;
        this.E = drawable;
        CodeScanner codeScanner = this.P;
        if (!z5 || codeScanner == null) {
            return;
        }
        setAutoFocusEnabled(codeScanner.f3712u);
    }

    public void setAutoFocusButtonPaddingHorizontal(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Padding should be equal to or grater then zero");
        }
        boolean z5 = i5 != this.f3722w;
        this.f3722w = i5;
        if (z5) {
            int i6 = this.f3723x;
            this.f3720i.setPadding(i5, i6, i5, i6);
        }
    }

    public void setAutoFocusButtonPaddingVertical(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Padding should be equal to or grater then zero");
        }
        boolean z5 = i5 != this.f3723x;
        this.f3723x = i5;
        if (z5) {
            int i6 = this.f3722w;
            this.f3720i.setPadding(i6, i5, i6, i5);
        }
    }

    public void setAutoFocusButtonPosition(@NonNull a aVar) {
        Objects.requireNonNull(aVar);
        boolean z5 = aVar != this.f3721v;
        this.f3721v = aVar;
        if (z5 && isLaidOut()) {
            requestLayout();
        }
    }

    public void setAutoFocusButtonVisible(boolean z5) {
        this.f3720i.setVisibility(z5 ? 0 : 4);
    }

    public void setAutoFocusEnabled(boolean z5) {
        this.f3720i.setImageDrawable(z5 ? this.E : this.F);
    }

    public void setCodeScanner(@NonNull CodeScanner codeScanner) {
        if (this.P != null) {
            throw new IllegalStateException("Code scanner has already been set");
        }
        this.P = codeScanner;
        setAutoFocusEnabled(codeScanner.f3712u);
        setFlashEnabled(codeScanner.f3713v);
    }

    public void setFlashButtonColor(int i5) {
        this.K = i5;
        this.G.setColorFilter(i5);
    }

    public void setFlashButtonOffIcon(@NonNull Drawable drawable) {
        Objects.requireNonNull(drawable);
        boolean z5 = drawable != this.M;
        this.M = drawable;
        CodeScanner codeScanner = this.P;
        if (!z5 || codeScanner == null) {
            return;
        }
        setFlashEnabled(codeScanner.f3713v);
    }

    public void setFlashButtonOnIcon(@NonNull Drawable drawable) {
        Objects.requireNonNull(drawable);
        boolean z5 = drawable != this.L;
        this.L = drawable;
        CodeScanner codeScanner = this.P;
        if (!z5 || codeScanner == null) {
            return;
        }
        setFlashEnabled(codeScanner.f3713v);
    }

    public void setFlashButtonPaddingHorizontal(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Padding should be equal to or grater then zero");
        }
        boolean z5 = i5 != this.I;
        this.I = i5;
        if (z5) {
            int i6 = this.J;
            this.G.setPadding(i5, i6, i5, i6);
        }
    }

    public void setFlashButtonPaddingVertical(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Padding should be equal to or grater then zero");
        }
        boolean z5 = i5 != this.J;
        this.J = i5;
        if (z5) {
            int i6 = this.I;
            this.G.setPadding(i6, i5, i6, i5);
        }
    }

    public void setFlashButtonPosition(@NonNull a aVar) {
        Objects.requireNonNull(aVar);
        boolean z5 = aVar != this.H;
        this.H = aVar;
        if (z5) {
            requestLayout();
        }
    }

    public void setFlashButtonVisible(boolean z5) {
        this.G.setVisibility(z5 ? 0 : 4);
    }

    public void setFlashEnabled(boolean z5) {
        this.G.setImageDrawable(z5 ? this.L : this.M);
    }

    public void setFrameAspectRatioHeight(float f2) {
        if (f2 <= 0.0f) {
            throw new IllegalArgumentException("Frame aspect ratio values should be greater than zero");
        }
        t tVar = this.f3719e;
        tVar.E = f2;
        tVar.a(tVar.getWidth(), tVar.getHeight());
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameAspectRatioWidth(float f2) {
        if (f2 <= 0.0f) {
            throw new IllegalArgumentException("Frame aspect ratio values should be greater than zero");
        }
        t tVar = this.f3719e;
        tVar.f9567y = f2;
        tVar.a(tVar.getWidth(), tVar.getHeight());
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameColor(int i5) {
        t tVar = this.f3719e;
        tVar.f9562e.setColor(i5);
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameCornersCapRounded(boolean z5) {
        t tVar = this.f3719e;
        tVar.f9562e.setStrokeCap(z5 ? Paint.Cap.ROUND : Paint.Cap.BUTT);
        tVar.invalidate();
    }

    public void setFrameCornersRadius(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Frame corners radius can't be negative");
        }
        t tVar = this.f3719e;
        tVar.f9566x = i5;
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameCornersSize(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Frame corners size can't be negative");
        }
        t tVar = this.f3719e;
        tVar.f9565w = i5;
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameSize(float f2) {
        if (f2 < 0.1d || f2 > 1.0f) {
            throw new IllegalArgumentException("Max frame size value should be between 0.1 and 1, inclusive");
        }
        t tVar = this.f3719e;
        tVar.F = f2;
        tVar.a(tVar.getWidth(), tVar.getHeight());
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameThickness(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("Frame thickness can't be negative");
        }
        t tVar = this.f3719e;
        tVar.f9562e.setStrokeWidth(i5);
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameVerticalBias(float f2) {
        if (f2 < 0.0f || f2 > 1.0f) {
            throw new IllegalArgumentException("Max frame size value should be between 0 and 1, inclusive");
        }
        t tVar = this.f3719e;
        tVar.G = f2;
        tVar.a(tVar.getWidth(), tVar.getHeight());
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setFrameVisible(boolean z5) {
        this.f3719e.I = z5;
    }

    public void setMaskColor(int i5) {
        t tVar = this.f3719e;
        tVar.f9561d.setColor(i5);
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setMaskVisible(boolean z5) {
        t tVar = this.f3719e;
        tVar.H = z5;
        if (tVar.isLaidOut()) {
            tVar.invalidate();
        }
    }

    public void setPreviewSize(q qVar) {
        this.N = qVar;
        requestLayout();
    }

    public void setSizeListener(j jVar) {
        this.O = jVar;
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            return new i((ViewGroup.MarginLayoutParams) layoutParams);
        }
        return new i(layoutParams);
    }
}
