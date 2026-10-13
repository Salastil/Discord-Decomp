package hk;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.icu.text.DecimalFormatSymbols;
import android.os.Build;
import android.text.Editable;
import android.text.InputFilter;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.SparseArray;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.view.accessibility.AccessibilityNodeProvider;
import android.view.animation.DecelerateInterpolator;
import android.view.inputmethod.InputMethodManager;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.Scroller;
import androidx.appcompat.widget.t2;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.image.ReactImageView;
import com.henninghall.date_picker.pickers.AndroidNative;
import e4.p;
import gk.o;
import ha.l;
import java.util.Formatter;
import java.util.Locale;

/* loaded from: classes3.dex */
public abstract class i extends LinearLayout {
    public static final h E0 = new h();
    public static final char[] F0 = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 3302, 3303, 3304, 3305, 3306, 3307, 3308, 3309, 3310, 3311};
    public final f A0;
    public int B0;
    public final boolean C0;
    public long D0;
    public final boolean E;
    public final int F;
    public int G;
    public String[] H;
    public int I;
    public int J;
    public int K;
    public e L;
    public d M;
    public b N;
    public long O;
    public final SparseArray P;
    public final int[] Q;
    public final Paint R;
    public final Drawable S;
    public int T;
    public int U;
    public int V;
    public final Scroller W;
    public final Scroller a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f10047b0;

    /* renamed from: c0, reason: collision with root package name */
    public g f10048c0;

    /* renamed from: d, reason: collision with root package name */
    public boolean f10049d;

    /* renamed from: d0, reason: collision with root package name */
    public he.b f10050d0;

    /* renamed from: e, reason: collision with root package name */
    public final EditText f10051e;

    /* renamed from: e0, reason: collision with root package name */
    public a3.h f10052e0;

    /* renamed from: f0, reason: collision with root package name */
    public float f10053f0;

    /* renamed from: g0, reason: collision with root package name */
    public long f10054g0;
    public float h0;

    /* renamed from: i, reason: collision with root package name */
    public final int f10055i;

    /* renamed from: i0, reason: collision with root package name */
    public VelocityTracker f10056i0;

    /* renamed from: j0, reason: collision with root package name */
    public final int f10057j0;

    /* renamed from: k0, reason: collision with root package name */
    public final int f10058k0;

    /* renamed from: l0, reason: collision with root package name */
    public final int f10059l0;

    /* renamed from: m0, reason: collision with root package name */
    public boolean f10060m0;

    /* renamed from: n0, reason: collision with root package name */
    public final int f10061n0;

    /* renamed from: o0, reason: collision with root package name */
    public final boolean f10062o0;

    /* renamed from: p0, reason: collision with root package name */
    public final Drawable f10063p0;

    /* renamed from: q0, reason: collision with root package name */
    public int f10064q0;

    /* renamed from: r0, reason: collision with root package name */
    public int f10065r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f10066s0;

    /* renamed from: t0, reason: collision with root package name */
    public boolean f10067t0;

    /* renamed from: u0, reason: collision with root package name */
    public int f10068u0;

    /* renamed from: v, reason: collision with root package name */
    public final int f10069v;

    /* renamed from: v0, reason: collision with root package name */
    public int f10070v0;

    /* renamed from: w, reason: collision with root package name */
    public final int f10071w;

    /* renamed from: w0, reason: collision with root package name */
    public int f10072w0;

    /* renamed from: x, reason: collision with root package name */
    public final int f10073x;

    /* renamed from: x0, reason: collision with root package name */
    public boolean f10074x0;

    /* renamed from: y, reason: collision with root package name */
    public int f10075y;

    /* renamed from: y0, reason: collision with root package name */
    public boolean f10076y0;

    /* renamed from: z0, reason: collision with root package name */
    public a f10077z0;

    public i(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.numberPickerStyle, 0);
        i iVar;
        Context context2;
        int i5 = 1;
        this.f10049d = true;
        this.O = 300L;
        this.P = new SparseArray();
        this.Q = new int[3];
        this.U = Integer.MIN_VALUE;
        this.f10065r0 = 0;
        this.B0 = -1;
        this.D0 = 0L;
        int[] iArr = o.a;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr, R.attr.numberPickerStyle, 0);
        int i6 = Build.VERSION.SDK_INT;
        if (i6 >= 29) {
            iVar = this;
            context2 = context;
            iVar.saveAttributeDataForStyleable(context2, iArr, attributeSet, obtainStyledAttributes, R.attr.numberPickerStyle, 0);
        } else {
            iVar = this;
            context2 = context;
        }
        iVar.f10062o0 = true;
        iVar.C0 = obtainStyledAttributes.getBoolean(0, false);
        iVar.f10061n0 = obtainStyledAttributes.getColor(9, 0);
        Drawable drawable = getResources().getDrawable(com.discord.R.drawable.number_picker_divider_material);
        if (drawable != null) {
            drawable.setCallback(this);
            drawable.setLayoutDirection(getLayoutDirection());
            if (drawable.isStateful()) {
                drawable.setState(getDrawableState());
            }
        }
        iVar.f10063p0 = drawable;
        iVar.f10064q0 = obtainStyledAttributes.getDimensionPixelSize(7, (int) TypedValue.applyDimension(1, 2.0f, getResources().getDisplayMetrics()));
        iVar.f10055i = obtainStyledAttributes.getDimensionPixelSize(8, (int) TypedValue.applyDimension(1, 48.0f, getResources().getDisplayMetrics()));
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(4, -1);
        iVar.f10069v = dimensionPixelSize;
        int dimensionPixelSize2 = obtainStyledAttributes.getDimensionPixelSize(2, -1);
        iVar.f10071w = dimensionPixelSize2;
        if (dimensionPixelSize != -1 && dimensionPixelSize2 != -1 && dimensionPixelSize > dimensionPixelSize2) {
            throw new IllegalArgumentException("minHeight > maxHeight");
        }
        int dimensionPixelSize3 = obtainStyledAttributes.getDimensionPixelSize(5, -1);
        iVar.f10073x = dimensionPixelSize3;
        int dimensionPixelSize4 = obtainStyledAttributes.getDimensionPixelSize(3, -1);
        iVar.f10075y = dimensionPixelSize4;
        if (dimensionPixelSize3 != -1 && dimensionPixelSize4 != -1 && dimensionPixelSize3 > dimensionPixelSize4) {
            throw new IllegalArgumentException("minWidth > maxWidth");
        }
        iVar.E = dimensionPixelSize4 == -1;
        iVar.S = obtainStyledAttributes.getDrawable(10);
        obtainStyledAttributes.recycle();
        AndroidNative androidNative = (AndroidNative) iVar;
        iVar.A0 = new f(androidNative);
        setWillNotDraw(false);
        ((LayoutInflater) getContext().getSystemService("layout_inflater")).inflate(com.discord.R.layout.number_picker_material, (ViewGroup) this, true);
        EditText editText = (EditText) findViewById(com.discord.R.id.numberpicker_input);
        iVar.f10051e = editText;
        editText.setOnFocusChangeListener(new t2(androidNative, i5));
        editText.setFilters(new InputFilter[]{new c(androidNative)});
        editText.setRawInputType(2);
        editText.setImeOptions(6);
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context2);
        iVar.f10057j0 = viewConfiguration.getScaledTouchSlop();
        iVar.f10058k0 = viewConfiguration.getScaledMinimumFlingVelocity();
        iVar.f10059l0 = viewConfiguration.getScaledMaximumFlingVelocity();
        int textSize = (int) editText.getTextSize();
        iVar.F = textSize;
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setTextSize(textSize);
        paint.setTypeface(editText.getTypeface());
        paint.setColor(editText.getTextColors().getColorForState(LinearLayout.ENABLED_STATE_SET, -1));
        iVar.R = paint;
        iVar.W = new Scroller(getContext(), null, true);
        iVar.a0 = new Scroller(getContext(), new DecelerateInterpolator(2.5f));
        q();
        if (getImportantForAccessibility() == 0) {
            setImportantForAccessibility(1);
        }
        if (i6 < 26 || getFocusable() != 16) {
            return;
        }
        setFocusable(1);
        setFocusableInTouchMode(true);
    }

    public static final b getTwoDigitFormatter() {
        return E0;
    }

    public static int i(int i5, int i6) {
        if (i6 != -1) {
            int size = View.MeasureSpec.getSize(i5);
            int mode = View.MeasureSpec.getMode(i5);
            if (mode == Integer.MIN_VALUE) {
                return View.MeasureSpec.makeMeasureSpec(Math.min(size, i6), 1073741824);
            }
            if (mode == 0) {
                return View.MeasureSpec.makeMeasureSpec(i6, 1073741824);
            }
            if (mode != 1073741824) {
                throw new IllegalArgumentException(k0.d.i(mode, "Unknown measure mode: "));
            }
        }
        return i5;
    }

    public final void a(boolean z5) {
        if (!this.f10062o0) {
            if (z5) {
                n(this.K + 1, true);
                return;
            } else {
                n(this.K - 1, true);
                return;
            }
        }
        g();
        Scroller scroller = this.W;
        if (!j(scroller)) {
            j(this.a0);
        }
        this.f10047b0 = 0;
        if (z5) {
            scroller.startScroll(0, 0, 0, -this.T, ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS);
        } else {
            scroller.startScroll(0, 0, 0, this.T, ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS);
        }
        invalidate();
    }

    public final void b(int i5) {
        String str;
        SparseArray sparseArray = this.P;
        if (((String) sparseArray.get(i5)) != null) {
            return;
        }
        int i6 = this.I;
        if (i5 < i6 || i5 > this.J) {
            str = "";
        } else {
            String[] strArr = this.H;
            str = strArr != null ? strArr[i5 - i6] : d(i5);
        }
        sparseArray.put(i5, str);
    }

    public final void c() {
        int i5 = this.U - this.V;
        if (i5 != 0) {
            this.f10047b0 = 0;
            int abs = Math.abs(i5);
            int i6 = this.T;
            if (abs > i6 / 2) {
                if (i5 > 0) {
                    i6 = -i6;
                }
                i5 += i6;
            }
            this.a0.startScroll(0, 0, 0, i5, 800);
            invalidate();
        }
    }

    @Override // android.view.View
    public final void computeScroll() {
        Scroller scroller = this.W;
        if (scroller.isFinished()) {
            scroller = this.a0;
            if (scroller.isFinished()) {
                return;
            }
        }
        scroller.computeScrollOffset();
        int currY = scroller.getCurrY();
        if (this.f10047b0 == 0) {
            this.f10047b0 = scroller.getStartY();
        }
        scrollBy(0, currY - this.f10047b0);
        this.f10047b0 = currY;
        if (scroller.isFinished()) {
            l(scroller);
        } else {
            invalidate();
        }
    }

    @Override // android.view.View
    public final int computeVerticalScrollExtent() {
        return getHeight();
    }

    @Override // android.view.View
    public final int computeVerticalScrollOffset() {
        return this.V;
    }

    @Override // android.view.View
    public final int computeVerticalScrollRange() {
        return ((this.J - this.I) + 1) * this.T;
    }

    public final String d(int i5) {
        b bVar = this.N;
        if (bVar == null) {
            return String.format(Locale.getDefault(), "%d", Integer.valueOf(i5));
        }
        h hVar = (h) bVar;
        StringBuilder sb2 = hVar.a;
        Object[] objArr = hVar.f10046d;
        Locale locale = Locale.getDefault();
        if (hVar.f10044b != DecimalFormatSymbols.getInstance(locale).getZeroDigit()) {
            hVar.f10045c = new Formatter(sb2, locale);
            hVar.f10044b = DecimalFormatSymbols.getInstance(locale).getZeroDigit();
        }
        objArr[0] = Integer.valueOf(i5);
        sb2.delete(0, sb2.length());
        hVar.f10045c.format("%02d", objArr);
        return hVar.f10045c.toString();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchHoverEvent(MotionEvent motionEvent) {
        if (!this.f10062o0) {
            return super.dispatchHoverEvent(motionEvent);
        }
        if (!((AccessibilityManager) getContext().getSystemService("accessibility")).isEnabled()) {
            return false;
        }
        int y5 = (int) motionEvent.getY();
        int i5 = y5 < this.f10068u0 ? 3 : y5 > this.f10070v0 ? 1 : 2;
        int actionMasked = motionEvent.getActionMasked();
        a aVar = (a) getAccessibilityNodeProvider();
        if (actionMasked == 7) {
            int i6 = this.f10072w0;
            if (i6 == i5 || i6 == -1) {
                return false;
            }
            aVar.f(i6, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
            aVar.f(i5, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            this.f10072w0 = i5;
            aVar.performAction(i5, 64, null);
            return false;
        }
        if (actionMasked == 9) {
            aVar.f(i5, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            this.f10072w0 = i5;
            aVar.performAction(i5, 64, null);
            return false;
        }
        if (actionMasked != 10) {
            return false;
        }
        aVar.f(i5, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
        this.f10072w0 = -1;
        return false;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        int keyCode = keyEvent.getKeyCode();
        if (keyCode == 19 || keyCode == 20) {
            if (this.f10062o0) {
                int action = keyEvent.getAction();
                if (action == 0) {
                    if (!this.f10060m0) {
                        if (keyCode == 20) {
                        }
                    }
                    requestFocus();
                    this.B0 = keyCode;
                    m();
                    if (this.W.isFinished()) {
                        a(keyCode == 20);
                    }
                    return true;
                }
                if (action == 1 && this.B0 == keyCode) {
                    this.B0 = -1;
                    return true;
                }
            }
        } else if (keyCode == 23 || keyCode == 66 || keyCode == 160) {
            m();
        }
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTouchEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 1 || actionMasked == 3) {
            m();
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTrackballEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 1 || actionMasked == 3) {
            m();
        }
        return super.dispatchTrackballEvent(motionEvent);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable drawable = this.f10063p0;
        if (drawable != null && drawable.isStateful() && drawable.setState(getDrawableState())) {
            invalidateDrawable(drawable);
        }
    }

    public final int e(String str) {
        try {
            if (this.H == null) {
                return Integer.parseInt(str);
            }
            for (int i5 = 0; i5 < this.H.length; i5++) {
                str = str.toLowerCase();
                if (this.H[i5].toLowerCase().startsWith(str)) {
                    return this.I + i5;
                }
            }
            return Integer.parseInt(str);
        } catch (NumberFormatException unused) {
            return this.I;
        }
    }

    public final int f(int i5) {
        int i6 = this.J;
        if (i5 > i6) {
            int i10 = this.I;
            return (((i5 - i6) % (i6 - i10)) + i10) - 1;
        }
        int i11 = this.I;
        return i5 < i11 ? (i6 - ((i11 - i5) % (i6 - i11))) + 1 : i5;
    }

    public final void g() {
        InputMethodManager inputMethodManager = (InputMethodManager) getContext().getSystemService(InputMethodManager.class);
        EditText editText = this.f10051e;
        if (inputMethodManager != null && inputMethodManager.isActive(editText)) {
            inputMethodManager.hideSoftInputFromWindow(getWindowToken(), 0);
        }
        if (this.f10062o0) {
            editText.setVisibility(4);
        }
    }

    @Override // android.view.View
    public AccessibilityNodeProvider getAccessibilityNodeProvider() {
        if (!this.f10062o0) {
            return super.getAccessibilityNodeProvider();
        }
        if (this.f10077z0 == null) {
            this.f10077z0 = new a(this);
        }
        return this.f10077z0;
    }

    @Override // android.view.View
    public float getBottomFadingEdgeStrength() {
        return 0.9f;
    }

    public CharSequence getDisplayedValueForCurrentSelection() {
        return (CharSequence) this.P.get(getValue());
    }

    public String[] getDisplayedValues() {
        return this.H;
    }

    public int getMaxValue() {
        return this.J;
    }

    public int getMinValue() {
        return this.I;
    }

    public int getSelectionDividerHeight() {
        return this.f10064q0;
    }

    @Override // android.view.View
    public int getSolidColor() {
        return this.f10061n0;
    }

    public int getTextColor() {
        return this.R.getColor();
    }

    public float getTextSize() {
        return this.R.getTextSize();
    }

    @Override // android.view.View
    public float getTopFadingEdgeStrength() {
        return 0.9f;
    }

    public int getValue() {
        return this.K;
    }

    public boolean getWrapSelectorWheel() {
        return this.f10060m0;
    }

    public final void h() {
        this.P.clear();
        int value = getValue();
        int i5 = 0;
        while (true) {
            int[] iArr = this.Q;
            if (i5 >= iArr.length) {
                return;
            }
            int i6 = (i5 - 1) + value;
            if (this.f10060m0) {
                i6 = f(i6);
            }
            iArr[i5] = i6;
            b(i6);
            i5++;
        }
    }

    public final boolean j(Scroller scroller) {
        scroller.forceFinished(true);
        int finalY = scroller.getFinalY() - scroller.getCurrY();
        int i5 = this.U - ((this.V + finalY) % this.T);
        if (i5 == 0) {
            return false;
        }
        int abs = Math.abs(i5);
        int i6 = this.T;
        if (abs > i6 / 2) {
            i5 = i5 > 0 ? i5 - i6 : i5 + i6;
        }
        scrollBy(0, finalY + i5);
        return true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable drawable = this.f10063p0;
        if (drawable != null) {
            drawable.jumpToCurrentState();
        }
    }

    public final void k(int i5) {
        if (this.f10065r0 == i5) {
            return;
        }
        this.f10065r0 = i5;
        d dVar = this.M;
        if (dVar != null) {
            AndroidNative androidNative = (AndroidNative) ((u4.c) dVar).f18811d;
            if (androidNative.H0 != 0 && i5 == 0) {
                androidNative.s();
            }
            androidNative.H0 = i5;
            if (i5 != 0) {
                androidNative.L0 = true;
                ((l) androidNative.G0).W();
            }
        }
    }

    public final void l(Scroller scroller) {
        if (scroller == this.W) {
            c();
            q();
            k(0);
        } else if (this.f10065r0 != 1) {
            q();
        }
    }

    public final void m() {
        he.b bVar = this.f10050d0;
        if (bVar != null) {
            removeCallbacks(bVar);
        }
        g gVar = this.f10048c0;
        if (gVar != null && gVar.f10043v) {
            gVar.f10040d.removeCallbacks(gVar);
            gVar.f10043v = false;
        }
        a3.h hVar = this.f10052e0;
        if (hVar != null) {
            removeCallbacks(hVar);
        }
        this.A0.a();
    }

    public final void n(int i5, boolean z5) {
        e eVar;
        if (this.K == i5) {
            return;
        }
        int f2 = this.f10060m0 ? f(i5) : Math.min(Math.max(i5, this.I), this.J);
        int i6 = this.K;
        this.K = f2;
        if (this.f10065r0 != 2) {
            q();
        }
        if (z5 && (eVar = this.L) != null) {
            int i10 = this.K;
            AndroidNative androidNative = (AndroidNative) ((u4.b) eVar).f18810e;
            jk.d dVar = androidNative.I0;
            if (dVar != null) {
                lk.b bVar = (lk.b) ((gj.c) dVar).f9329e;
                p pVar = bVar.a;
                nk.d dVar2 = bVar.f14070b;
                if (((gj.c) pVar.f7997n).V()) {
                    String str = (String) dVar2.f15537c.get(i6);
                    String str2 = (String) dVar2.f15537c.get(i10);
                    if ((str.equals("12") && str2.equals("11")) || (str.equals("11") && str2.equals("12"))) {
                        jk.e eVar2 = bVar.f14073e.f15538d;
                        ((AndroidNative) eVar2).t((eVar2.getValue() + 1) % 2);
                    }
                }
            }
            if (androidNative.H0 == 0) {
                androidNative.s();
            }
        }
        h();
        invalidate();
    }

    public final void o() {
        InputMethodManager inputMethodManager = (InputMethodManager) getContext().getSystemService(InputMethodManager.class);
        if (inputMethodManager != null) {
            boolean z5 = this.f10062o0;
            EditText editText = this.f10051e;
            if (z5) {
                editText.setVisibility(0);
            }
            editText.requestFocus();
            inputMethodManager.showSoftInput(editText, 0);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        m();
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onDraw(Canvas canvas) {
        Drawable drawable;
        Drawable drawable2;
        if (!this.f10062o0) {
            super.onDraw(canvas);
            return;
        }
        boolean hasFocus = this.C0 ? hasFocus() : true;
        float right = (getRight() - getLeft()) / 2;
        float f2 = this.V;
        if (hasFocus && (drawable2 = this.S) != null && this.f10065r0 == 0) {
            boolean z5 = this.f10076y0;
            int[] iArr = LinearLayout.PRESSED_STATE_SET;
            if (z5) {
                drawable2.setState(iArr);
                drawable2.setBounds(0, 0, getRight(), this.f10068u0);
                drawable2.draw(canvas);
            }
            if (this.f10074x0) {
                drawable2.setState(iArr);
                drawable2.setBounds(0, this.f10070v0, getRight(), getBottom());
                drawable2.draw(canvas);
            }
        }
        int i5 = 0;
        while (true) {
            int[] iArr2 = this.Q;
            if (i5 >= iArr2.length) {
                break;
            }
            String str = (String) this.P.get(iArr2[i5]);
            if ((hasFocus && i5 != 1) || (i5 == 1 && this.f10051e.getVisibility() != 0)) {
                canvas.drawText(str, right, f2, this.R);
            }
            f2 += this.T;
            i5++;
        }
        if (!hasFocus || (drawable = this.f10063p0) == null) {
            return;
        }
        int i6 = this.f10068u0;
        drawable.setBounds(0, i6, getRight(), this.f10064q0 + i6);
        drawable.draw(canvas);
        int i10 = this.f10070v0;
        drawable.setBounds(0, i10 - this.f10064q0, getRight(), i10);
        drawable.draw(canvas);
    }

    @Override // android.view.View
    public final boolean onGenericMotionEvent(MotionEvent motionEvent) {
        if (!this.f10062o0 || !isEnabled()) {
            return super.onGenericMotionEvent(motionEvent);
        }
        if (motionEvent.getActionMasked() == 8) {
            float axisValue = motionEvent.getAxisValue(9);
            if (axisValue != 0.0f) {
                long currentTimeMillis = System.currentTimeMillis();
                if (currentTimeMillis - this.D0 >= 150) {
                    this.D0 = currentTimeMillis;
                    if (axisValue < 0.0f) {
                        if (this.f10060m0 || getValue() < getMaxValue()) {
                            a(true);
                            return true;
                        }
                    } else if (this.f10060m0 || getValue() > getMinValue()) {
                        a(false);
                        return true;
                    }
                }
                return true;
            }
        }
        return super.onGenericMotionEvent(motionEvent);
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (!this.f10062o0 || !isEnabled() || motionEvent.getActionMasked() != 0) {
            return false;
        }
        m();
        g();
        float y5 = motionEvent.getY();
        this.f10053f0 = y5;
        this.h0 = y5;
        this.f10054g0 = motionEvent.getEventTime();
        this.f10066s0 = false;
        this.f10067t0 = false;
        float f2 = this.f10053f0;
        float f10 = this.f10068u0;
        f fVar = this.A0;
        if (f2 < f10) {
            if (this.f10065r0 == 0) {
                fVar.a();
                fVar.f10038e = 1;
                fVar.f10037d = 2;
                fVar.f10039i.postDelayed(fVar, ViewConfiguration.getTapTimeout());
            }
        } else if (f2 > this.f10070v0 && this.f10065r0 == 0) {
            fVar.a();
            fVar.f10038e = 1;
            fVar.f10037d = 1;
            fVar.f10039i.postDelayed(fVar, ViewConfiguration.getTapTimeout());
        }
        getParent().requestDisallowInterceptTouchEvent(true);
        Scroller scroller = this.W;
        boolean isFinished = scroller.isFinished();
        Scroller scroller2 = this.a0;
        if (!isFinished) {
            scroller.forceFinished(true);
            scroller2.forceFinished(true);
            l(scroller);
            k(0);
            return true;
        }
        if (!scroller2.isFinished()) {
            scroller.forceFinished(true);
            scroller2.forceFinished(true);
            l(scroller2);
            return true;
        }
        float f11 = this.f10053f0;
        if (f11 < this.f10068u0) {
            long longPressTimeout = ViewConfiguration.getLongPressTimeout();
            Runnable runnable = this.f10050d0;
            if (runnable == null) {
                this.f10050d0 = new he.b(this, 1);
            } else {
                removeCallbacks(runnable);
            }
            he.b bVar = this.f10050d0;
            bVar.f9960e = false;
            postDelayed(bVar, longPressTimeout);
            return true;
        }
        if (f11 <= this.f10070v0) {
            this.f10067t0 = true;
            Runnable runnable2 = this.f10052e0;
            if (runnable2 == null) {
                this.f10052e0 = new a3.h(16, this);
            } else {
                removeCallbacks(runnable2);
            }
            postDelayed(this.f10052e0, ViewConfiguration.getLongPressTimeout());
            return true;
        }
        long longPressTimeout2 = ViewConfiguration.getLongPressTimeout();
        Runnable runnable3 = this.f10050d0;
        if (runnable3 == null) {
            this.f10050d0 = new he.b(this, 1);
        } else {
            removeCallbacks(runnable3);
        }
        he.b bVar2 = this.f10050d0;
        bVar2.f9960e = true;
        postDelayed(bVar2, longPressTimeout2);
        return true;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        if (!this.f10062o0) {
            super.onLayout(z5, i5, i6, i10, i11);
            return;
        }
        int measuredWidth = getMeasuredWidth();
        int measuredHeight = getMeasuredHeight();
        EditText editText = this.f10051e;
        int measuredWidth2 = editText.getMeasuredWidth();
        int measuredHeight2 = editText.getMeasuredHeight();
        int i12 = (measuredWidth - measuredWidth2) / 2;
        int i13 = (measuredHeight - measuredHeight2) / 2;
        editText.layout(i12, i13, measuredWidth2 + i12, measuredHeight2 + i13);
        if (z5) {
            h();
            int length = this.Q.length;
            int i14 = this.F;
            int bottom = (int) ((((getBottom() - getTop()) - (length * i14)) / r4.length) + 0.5f);
            this.G = bottom;
            this.T = bottom + i14;
            int top = (editText.getTop() + editText.getBaseline()) - this.T;
            this.U = top;
            this.V = top;
            q();
            setVerticalFadingEdgeEnabled(true);
            setFadingEdgeLength(((getBottom() - getTop()) - i14) / 2);
            int height = getHeight();
            int i15 = this.f10055i;
            int i16 = this.f10064q0;
            int i17 = ((height - i15) / 2) - i16;
            this.f10068u0 = i17;
            this.f10070v0 = (i16 * 2) + i17 + i15;
        }
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        if (!this.f10062o0) {
            super.onMeasure(i5, i6);
            return;
        }
        super.onMeasure(i(i5, this.f10075y), i(i6, this.f10071w));
        int measuredWidth = getMeasuredWidth();
        int i10 = this.f10073x;
        if (i10 != -1) {
            measuredWidth = View.resolveSizeAndState(Math.max(i10, measuredWidth), i5, 0);
        }
        int measuredHeight = getMeasuredHeight();
        int i11 = this.f10069v;
        if (i11 != -1) {
            measuredHeight = View.resolveSizeAndState(Math.max(i11, measuredHeight), i6, 0);
        }
        setMeasuredDimension(measuredWidth, measuredHeight);
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (!isEnabled() || !this.f10062o0) {
            return false;
        }
        if (this.f10056i0 == null) {
            this.f10056i0 = VelocityTracker.obtain();
        }
        this.f10056i0.addMovement(motionEvent);
        int actionMasked = motionEvent.getActionMasked();
        int i5 = this.f10057j0;
        if (actionMasked != 1) {
            if (actionMasked != 2 || this.f10066s0) {
                return true;
            }
            float y5 = motionEvent.getY();
            if (this.f10065r0 == 1) {
                scrollBy(0, (int) (y5 - this.h0));
                invalidate();
            } else if (((int) Math.abs(y5 - this.f10053f0)) > i5) {
                m();
                k(1);
            }
            this.h0 = y5;
            return true;
        }
        a3.h hVar = this.f10052e0;
        if (hVar != null) {
            removeCallbacks(hVar);
        }
        he.b bVar = this.f10050d0;
        if (bVar != null) {
            removeCallbacks(bVar);
        }
        f fVar = this.A0;
        fVar.a();
        AndroidNative androidNative = fVar.f10039i;
        VelocityTracker velocityTracker = this.f10056i0;
        velocityTracker.computeCurrentVelocity(1000, this.f10059l0);
        int yVelocity = (int) velocityTracker.getYVelocity();
        if (Math.abs(yVelocity) > this.f10058k0) {
            this.f10047b0 = 0;
            Scroller scroller = this.W;
            if (yVelocity > 0) {
                scroller.fling(0, 0, 0, yVelocity, 0, 0, 0, Integer.MAX_VALUE);
            } else {
                scroller.fling(0, Integer.MAX_VALUE, 0, yVelocity, 0, 0, 0, Integer.MAX_VALUE);
            }
            invalidate();
            k(2);
        } else {
            int y6 = (int) motionEvent.getY();
            int abs = (int) Math.abs(y6 - this.f10053f0);
            long eventTime = motionEvent.getEventTime() - this.f10054g0;
            if (abs > i5 || eventTime >= ViewConfiguration.getTapTimeout()) {
                c();
            } else if (this.f10067t0) {
                this.f10067t0 = false;
                performClick();
            } else {
                int i6 = (y6 / this.T) - 1;
                if (i6 > 0) {
                    a(true);
                    fVar.a();
                    fVar.f10038e = 2;
                    fVar.f10037d = 1;
                    androidNative.post(fVar);
                } else if (i6 < 0) {
                    a(false);
                    fVar.a();
                    fVar.f10038e = 2;
                    fVar.f10037d = 2;
                    androidNative.post(fVar);
                }
            }
            k(0);
        }
        this.f10056i0.recycle();
        this.f10056i0 = null;
        return true;
    }

    public final void p() {
        int i5;
        if (this.E) {
            String[] strArr = this.H;
            Paint paint = this.R;
            int i6 = 0;
            if (strArr == null) {
                float f2 = 0.0f;
                for (int i10 = 0; i10 <= 9; i10++) {
                    float measureText = paint.measureText(String.format(Locale.getDefault(), "%d", Integer.valueOf(i10)));
                    if (measureText > f2) {
                        f2 = measureText;
                    }
                }
                for (int i11 = this.J; i11 > 0; i11 /= 10) {
                    i6++;
                }
                i5 = (int) (i6 * f2);
            } else {
                int length = strArr.length;
                int i12 = 0;
                while (i6 < length) {
                    float measureText2 = paint.measureText(this.H[i6]);
                    if (measureText2 > i12) {
                        i12 = (int) measureText2;
                    }
                    i6++;
                }
                i5 = i12;
            }
            EditText editText = this.f10051e;
            int paddingRight = editText.getPaddingRight() + editText.getPaddingLeft() + i5;
            if (this.f10075y != paddingRight) {
                int i13 = this.f10073x;
                if (paddingRight > i13) {
                    this.f10075y = paddingRight;
                } else {
                    this.f10075y = i13;
                }
                invalidate();
            }
        }
    }

    @Override // android.view.View
    public final boolean performClick() {
        if (!this.f10062o0) {
            return super.performClick();
        }
        if (super.performClick()) {
            return true;
        }
        o();
        return true;
    }

    @Override // android.view.View
    public final boolean performLongClick() {
        if (!this.f10062o0) {
            return super.performLongClick();
        }
        if (!super.performLongClick()) {
            o();
            this.f10066s0 = true;
        }
        return true;
    }

    public final void q() {
        String[] strArr = this.H;
        String d6 = strArr == null ? d(this.K) : strArr[this.K - this.I];
        if (TextUtils.isEmpty(d6)) {
            return;
        }
        EditText editText = this.f10051e;
        Editable text = editText.getText();
        if (d6.equals(text.toString())) {
            return;
        }
        editText.setText(d6);
        if (((AccessibilityManager) getContext().getSystemService("accessibility")).isEnabled()) {
            AccessibilityEvent obtain = AccessibilityEvent.obtain(16);
            editText.onInitializeAccessibilityEvent(obtain);
            editText.onPopulateAccessibilityEvent(obtain);
            obtain.setFromIndex(0);
            obtain.setRemovedCount(text.length());
            obtain.setAddedCount(d6.length());
            obtain.setBeforeText(text);
            obtain.setSource(this, 2);
            requestSendAccessibilityEvent(this, obtain);
        }
    }

    public final void r() {
        this.f10060m0 = this.J - this.I >= this.Q.length && this.f10049d;
    }

    @Override // android.view.View
    public final void scrollBy(int i5, int i6) {
        int i10;
        int i11 = this.V;
        boolean z5 = this.f10060m0;
        int[] iArr = this.Q;
        if (!z5 && i6 > 0 && iArr[1] <= this.I) {
            this.V = this.U;
            return;
        }
        if (!z5 && i6 < 0 && iArr[1] >= this.J) {
            this.V = this.U;
            return;
        }
        this.V = i6 + i11;
        while (true) {
            int i12 = this.V;
            if (i12 - this.U <= this.G) {
                break;
            }
            this.V = i12 - this.T;
            for (int length = iArr.length - 1; length > 0; length--) {
                iArr[length] = iArr[length - 1];
            }
            int i13 = iArr[1] - 1;
            if (this.f10060m0 && i13 < this.I) {
                i13 = this.J;
            }
            iArr[0] = i13;
            b(i13);
            n(iArr[1], true);
            if (!this.f10060m0 && iArr[1] <= this.I) {
                this.V = this.U;
            }
        }
        while (true) {
            i10 = this.V;
            if (i10 - this.U >= (-this.G)) {
                break;
            }
            this.V = i10 + this.T;
            int i14 = 0;
            while (i14 < iArr.length - 1) {
                int i15 = i14 + 1;
                iArr[i14] = iArr[i15];
                i14 = i15;
            }
            int i16 = iArr[iArr.length - 2] + 1;
            if (this.f10060m0 && i16 > this.J) {
                i16 = this.I;
            }
            iArr[iArr.length - 1] = i16;
            b(i16);
            n(iArr[1], true);
            if (!this.f10060m0 && iArr[1] >= this.J) {
                this.V = this.U;
            }
        }
        if (i11 != i10) {
            onScrollChanged(0, i10, 0, i11);
        }
    }

    public void setDisplayedValues(String[] strArr) {
        if (this.H == strArr) {
            return;
        }
        this.H = strArr;
        EditText editText = this.f10051e;
        if (strArr != null) {
            editText.setRawInputType(524289);
        } else {
            editText.setRawInputType(2);
        }
        q();
        h();
        p();
    }

    public void setDividerTint(int i5) {
        this.f10063p0.setTint(i5);
    }

    @Override // android.view.View
    public void setEnabled(boolean z5) {
        super.setEnabled(z5);
        boolean z6 = this.f10062o0;
        if (!z6) {
            throw null;
        }
        if (!z6) {
            throw null;
        }
        this.f10051e.setEnabled(z5);
    }

    public void setFormatter(b bVar) {
        if (bVar == this.N) {
            return;
        }
        this.N = bVar;
        h();
        q();
    }

    public void setMaxValue(int i5) {
        if (this.J == i5) {
            return;
        }
        if (i5 < 0) {
            throw new IllegalArgumentException("maxValue must be >= 0");
        }
        this.J = i5;
        if (i5 < this.K) {
            this.K = i5;
        }
        r();
        h();
        q();
        p();
        invalidate();
    }

    public void setMinValue(int i5) {
        if (this.I == i5) {
            return;
        }
        if (i5 < 0) {
            throw new IllegalArgumentException("minValue must be >= 0");
        }
        this.I = i5;
        if (i5 > this.K) {
            this.K = i5;
        }
        r();
        h();
        q();
        p();
        invalidate();
    }

    public void setOnLongPressUpdateInterval(long j) {
        this.O = j;
    }

    public void setOnScrollListener(d dVar) {
        this.M = dVar;
    }

    public void setOnValueChangedListener(e eVar) {
        this.L = eVar;
    }

    public void setSelectionDividerHeight(int i5) {
        this.f10064q0 = i5;
        invalidate();
    }

    public void setTextColor(int i5) {
        this.R.setColor(i5);
        this.f10051e.setTextColor(i5);
        invalidate();
    }

    public void setTextSize(float f2) {
        this.R.setTextSize(f2);
        this.f10051e.setTextSize(0, f2);
        invalidate();
    }

    public void setValue(int i5) {
        n(i5, false);
    }

    public void setWrapSelectorWheel(boolean z5) {
        this.f10049d = z5;
        r();
    }
}
