package fh;

import a5.k0;
import android.R;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.RippleDrawable;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.util.StateSet;
import android.util.TypedValue;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.google.android.material.internal.BaselineLayout;

/* loaded from: classes3.dex */
public abstract class e extends FrameLayout implements h {
    public static final int[] G0 = {R.attr.state_checked};
    public static final lh.f H0;
    public static final d I0;
    public int A0;
    public boolean B0;
    public boolean C0;
    public boolean D0;
    public float E;
    public boolean E0;
    public float F;
    public Rect F0;
    public float G;
    public float H;
    public float I;
    public float J;
    public int K;
    public boolean L;
    public final LinearLayout M;
    public final LinearLayout N;
    public final View O;
    public final FrameLayout P;
    public final ImageView Q;
    public final BaselineLayout R;
    public final TextView S;
    public final TextView T;
    public final BaselineLayout U;
    public final TextView V;
    public final TextView W;
    public BaselineLayout a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f8548b0;

    /* renamed from: c0, reason: collision with root package name */
    public int f8549c0;

    /* renamed from: d, reason: collision with root package name */
    public boolean f8550d;

    /* renamed from: d0, reason: collision with root package name */
    public int f8551d0;

    /* renamed from: e, reason: collision with root package name */
    public ColorStateList f8552e;

    /* renamed from: e0, reason: collision with root package name */
    public int f8553e0;

    /* renamed from: f0, reason: collision with root package name */
    public int f8554f0;

    /* renamed from: g0, reason: collision with root package name */
    public ColorStateList f8555g0;
    public boolean h0;

    /* renamed from: i, reason: collision with root package name */
    public Drawable f8556i;

    /* renamed from: i0, reason: collision with root package name */
    public n.l f8557i0;

    /* renamed from: j0, reason: collision with root package name */
    public ColorStateList f8558j0;

    /* renamed from: k0, reason: collision with root package name */
    public Drawable f8559k0;

    /* renamed from: l0, reason: collision with root package name */
    public Drawable f8560l0;

    /* renamed from: m0, reason: collision with root package name */
    public ValueAnimator f8561m0;

    /* renamed from: n0, reason: collision with root package name */
    public lh.f f8562n0;

    /* renamed from: o0, reason: collision with root package name */
    public float f8563o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f8564p0;

    /* renamed from: q0, reason: collision with root package name */
    public int f8565q0;

    /* renamed from: r0, reason: collision with root package name */
    public int f8566r0;

    /* renamed from: s0, reason: collision with root package name */
    public int f8567s0;

    /* renamed from: t0, reason: collision with root package name */
    public int f8568t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f8569u0;

    /* renamed from: v, reason: collision with root package name */
    public int f8570v;

    /* renamed from: v0, reason: collision with root package name */
    public int f8571v0;

    /* renamed from: w, reason: collision with root package name */
    public int f8572w;

    /* renamed from: w0, reason: collision with root package name */
    public int f8573w0;

    /* renamed from: x, reason: collision with root package name */
    public int f8574x;

    /* renamed from: x0, reason: collision with root package name */
    public og.a f8575x0;

    /* renamed from: y, reason: collision with root package name */
    public int f8576y;

    /* renamed from: y0, reason: collision with root package name */
    public int f8577y0;

    /* renamed from: z0, reason: collision with root package name */
    public int f8578z0;

    static {
        int i5 = 6;
        H0 = new lh.f(i5);
        I0 = new d(i5);
    }

    public e(Context context) {
        super(context);
        this.f8550d = false;
        this.f8548b0 = -1;
        this.f8549c0 = 0;
        this.f8551d0 = 0;
        this.f8553e0 = 0;
        this.f8554f0 = 0;
        this.h0 = false;
        this.f8562n0 = H0;
        this.f8563o0 = 0.0f;
        this.f8564p0 = false;
        this.f8565q0 = 0;
        this.f8566r0 = 0;
        this.f8567s0 = -2;
        this.f8568t0 = 0;
        this.f8569u0 = false;
        this.f8571v0 = 0;
        this.f8573w0 = 0;
        this.f8578z0 = 0;
        this.A0 = 49;
        this.B0 = false;
        this.C0 = false;
        this.D0 = false;
        this.E0 = false;
        this.F0 = new Rect();
        LayoutInflater.from(context).inflate(getItemLayoutResId(), (ViewGroup) this, true);
        this.M = (LinearLayout) findViewById(com.discord.R.id.navigation_bar_item_content_container);
        LinearLayout linearLayout = (LinearLayout) findViewById(com.discord.R.id.navigation_bar_item_inner_content_container);
        this.N = linearLayout;
        this.O = findViewById(com.discord.R.id.navigation_bar_item_active_indicator_view);
        this.P = (FrameLayout) findViewById(com.discord.R.id.navigation_bar_item_icon_container);
        this.Q = (ImageView) findViewById(com.discord.R.id.navigation_bar_item_icon_view);
        BaselineLayout baselineLayout = (BaselineLayout) findViewById(com.discord.R.id.navigation_bar_item_labels_group);
        this.R = baselineLayout;
        TextView textView = (TextView) findViewById(com.discord.R.id.navigation_bar_item_small_label_view);
        this.S = textView;
        TextView textView2 = (TextView) findViewById(com.discord.R.id.navigation_bar_item_large_label_view);
        this.T = textView2;
        float dimension = getResources().getDimension(com.discord.R.dimen.default_navigation_text_size);
        float dimension2 = getResources().getDimension(com.discord.R.dimen.default_navigation_active_text_size);
        BaselineLayout baselineLayout2 = new BaselineLayout(getContext(), null, 0);
        baselineLayout2.f6072d = -1;
        this.U = baselineLayout2;
        baselineLayout2.setVisibility(8);
        this.U.setDuplicateParentStateEnabled(true);
        this.U.setMeasurePaddingFromBaseline(this.D0);
        TextView textView3 = new TextView(getContext());
        this.V = textView3;
        textView3.setMaxLines(1);
        TextView textView4 = this.V;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView4.setEllipsize(truncateAt);
        this.V.setDuplicateParentStateEnabled(true);
        this.V.setIncludeFontPadding(false);
        this.V.setGravity(16);
        this.V.setTextSize(dimension);
        TextView textView5 = new TextView(getContext());
        this.W = textView5;
        textView5.setMaxLines(1);
        this.W.setEllipsize(truncateAt);
        this.W.setDuplicateParentStateEnabled(true);
        this.W.setVisibility(4);
        this.W.setIncludeFontPadding(false);
        this.W.setGravity(16);
        this.W.setTextSize(dimension2);
        this.U.addView(this.V);
        this.U.addView(this.W);
        this.a0 = baselineLayout;
        setBackgroundResource(getItemBackgroundResId());
        this.f8570v = getResources().getDimensionPixelSize(getItemDefaultMarginResId());
        this.f8572w = baselineLayout.getPaddingBottom();
        this.f8574x = 0;
        this.f8576y = 0;
        textView.setImportantForAccessibility(2);
        textView2.setImportantForAccessibility(2);
        this.V.setImportantForAccessibility(2);
        this.W.setImportantForAccessibility(2);
        setFocusable(true);
        b();
        this.f8568t0 = getResources().getDimensionPixelSize(com.discord.R.dimen.m3_navigation_item_expanded_active_indicator_height_default);
        linearLayout.addOnLayoutChangeListener(new com.discord.channel_spine.a(4, (rg.a) this));
    }

    private int getItemVisiblePosition() {
        ViewGroup viewGroup = (ViewGroup) getParent();
        int indexOfChild = viewGroup.indexOfChild(this);
        int i5 = 0;
        for (int i6 = 0; i6 < indexOfChild; i6++) {
            View childAt = viewGroup.getChildAt(i6);
            if ((childAt instanceof e) && childAt.getVisibility() == 0) {
                i5++;
            }
        }
        return i5;
    }

    private int getSuggestedIconWidth() {
        og.a aVar = this.f8575x0;
        int minimumWidth = aVar == null ? 0 : aVar.getMinimumWidth() - this.f8575x0.f15865w.f15876b.T.intValue();
        LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) this.P.getLayoutParams();
        return Math.max(minimumWidth, layoutParams.rightMargin) + this.Q.getMeasuredWidth() + Math.max(minimumWidth, layoutParams.leftMargin);
    }

    public static void i(int i5, int i6, int i10, View view) {
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) view.getLayoutParams();
        layoutParams.topMargin = i5;
        layoutParams.bottomMargin = i6;
        layoutParams.gravity = i10;
        view.setLayoutParams(layoutParams);
    }

    private void setLabelPivots(TextView textView) {
        textView.setPivotX(textView.getWidth() / 2);
        textView.setPivotY(textView.getBaseline());
    }

    @Override // n.w
    public final void a(n.l lVar) {
        this.f8557i0 = lVar;
        setCheckable(lVar.isCheckable());
        setChecked(lVar.isChecked());
        setEnabled(lVar.isEnabled());
        setIcon(lVar.getIcon());
        setTitle(lVar.f14674e);
        setId(lVar.a);
        if (!TextUtils.isEmpty(lVar.f14684q)) {
            setContentDescription(lVar.f14684q);
        }
        nt.a.I(this, !TextUtils.isEmpty(lVar.f14685r) ? lVar.f14685r : lVar.f14674e);
        m();
        this.f8550d = true;
    }

    public final void b() {
        float textSize = this.S.getTextSize();
        float textSize2 = this.T.getTextSize();
        this.E = textSize - textSize2;
        this.F = (textSize2 * 1.0f) / textSize;
        this.G = (textSize * 1.0f) / textSize2;
        float textSize3 = this.V.getTextSize();
        float textSize4 = this.W.getTextSize();
        this.H = textSize3 - textSize4;
        this.I = (textSize4 * 1.0f) / textSize3;
        this.J = (textSize3 * 1.0f) / textSize4;
    }

    public final void c() {
        Drawable drawable = this.f8556i;
        RippleDrawable rippleDrawable = null;
        boolean z5 = true;
        if (this.f8552e != null) {
            Drawable activeIndicatorDrawable = getActiveIndicatorDrawable();
            if (this.f8564p0 && getActiveIndicatorDrawable() != null && activeIndicatorDrawable != null) {
                rippleDrawable = new RippleDrawable(jh.a.b(this.f8552e), null, activeIndicatorDrawable);
                z5 = false;
            } else if (drawable == null) {
                ColorStateList colorStateList = this.f8552e;
                int[] iArr = jh.a.f12774d;
                int a = jh.a.a(colorStateList, jh.a.f12773c);
                int[] iArr2 = jh.a.f12772b;
                drawable = new RippleDrawable(new ColorStateList(new int[][]{iArr, iArr2, StateSet.NOTHING}, new int[]{a, jh.a.a(colorStateList, iArr2), jh.a.a(colorStateList, jh.a.a)}), null, null);
            }
        }
        FrameLayout frameLayout = this.P;
        frameLayout.setPadding(0, 0, 0, 0);
        frameLayout.setForeground(rippleDrawable);
        setBackground(drawable);
        if (Build.VERSION.SDK_INT >= 26) {
            setDefaultFocusHighlightEnabled(z5);
        }
    }

    public final void d(float f2, float f10) {
        lh.f fVar = this.f8562n0;
        fVar.getClass();
        float a = mg.a.a(0.4f, 1.0f, f2);
        View view = this.O;
        view.setScaleX(a);
        view.setScaleY(fVar.d(f2));
        view.setAlpha(mg.a.b(0.0f, 1.0f, f10 == 0.0f ? 0.8f : 0.0f, f10 == 0.0f ? 1.0f : 0.2f, f2));
        this.f8563o0 = f2;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTouchEvent(MotionEvent motionEvent) {
        if (this.f8564p0) {
            this.P.dispatchTouchEvent(motionEvent);
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public final void e() {
        int i5 = this.Q.getLayoutParams().width > 0 ? this.f8576y : 0;
        LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) this.U.getLayoutParams();
        if (layoutParams != null) {
            layoutParams.rightMargin = getLayoutDirection() == 1 ? i5 : 0;
            layoutParams.leftMargin = getLayoutDirection() != 1 ? i5 : 0;
        }
    }

    public final void f(TextView textView, TextView textView2, float f2, float f10) {
        i(this.f8577y0 == 0 ? (int) (this.f8570v + f10) : 0, 0, this.A0, this.M);
        int i5 = this.f8577y0;
        i(i5 == 0 ? 0 : this.F0.top, i5 == 0 ? 0 : this.F0.bottom, i5 == 0 ? 17 : 8388627, this.N);
        int i6 = this.f8572w;
        BaselineLayout baselineLayout = this.R;
        baselineLayout.setPadding(baselineLayout.getPaddingLeft(), baselineLayout.getPaddingTop(), baselineLayout.getPaddingRight(), i6);
        this.a0.setVisibility(0);
        textView.setScaleX(1.0f);
        textView.setScaleY(1.0f);
        textView.setVisibility(0);
        textView2.setScaleX(f2);
        textView2.setScaleY(f2);
        textView2.setVisibility(4);
    }

    public final void g() {
        int i5 = this.f8570v;
        i(i5, i5, this.f8577y0 == 0 ? 17 : this.A0, this.M);
        i(0, 0, 17, this.N);
        BaselineLayout baselineLayout = this.R;
        baselineLayout.setPadding(baselineLayout.getPaddingLeft(), baselineLayout.getPaddingTop(), baselineLayout.getPaddingRight(), 0);
        this.a0.setVisibility(8);
    }

    public Drawable getActiveIndicatorDrawable() {
        return this.O.getBackground();
    }

    public og.a getBadge() {
        return this.f8575x0;
    }

    @NonNull
    public BaselineLayout getExpandedLabelGroup() {
        return this.U;
    }

    public int getItemBackgroundResId() {
        return com.discord.R.drawable.mtrl_navigation_bar_item_background;
    }

    @Override // n.w
    public n.l getItemData() {
        return this.f8557i0;
    }

    public int getItemDefaultMarginResId() {
        return com.discord.R.dimen.mtrl_navigation_bar_item_default_margin;
    }

    public abstract int getItemLayoutResId();

    public int getItemPosition() {
        return this.f8548b0;
    }

    @NonNull
    public BaselineLayout getLabelGroup() {
        return this.R;
    }

    @Override // android.view.View
    public int getSuggestedMinimumHeight() {
        LinearLayout linearLayout = this.M;
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) linearLayout.getLayoutParams();
        return linearLayout.getMeasuredHeight() + layoutParams.topMargin + layoutParams.bottomMargin;
    }

    @Override // android.view.View
    public int getSuggestedMinimumWidth() {
        if (this.f8577y0 == 1) {
            LinearLayout linearLayout = this.N;
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) linearLayout.getLayoutParams();
            return linearLayout.getMeasuredWidth() + layoutParams.leftMargin + layoutParams.rightMargin;
        }
        BaselineLayout baselineLayout = this.R;
        LinearLayout.LayoutParams layoutParams2 = (LinearLayout.LayoutParams) baselineLayout.getLayoutParams();
        return Math.max(getSuggestedIconWidth(), baselineLayout.getMeasuredWidth() + layoutParams2.leftMargin + layoutParams2.rightMargin);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0056  */
    /* JADX WARN: Removed duplicated region for block: B:16:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void h(int i5, TextView textView) {
        int i6;
        if (this.E0) {
            textView.setTextAppearance(i5);
            return;
        }
        textView.setTextAppearance(i5);
        Context context = textView.getContext();
        if (i5 != 0) {
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(i5, h.a.f9466x);
            TypedValue typedValue = new TypedValue();
            boolean value = obtainStyledAttributes.getValue(0, typedValue);
            obtainStyledAttributes.recycle();
            if (value) {
                i6 = typedValue.getComplexUnit() == 2 ? Math.round(TypedValue.complexToFloat(typedValue.data) * context.getResources().getDisplayMetrics().density) : TypedValue.complexToDimensionPixelSize(typedValue.data, context.getResources().getDisplayMetrics());
                if (i6 == 0) {
                    textView.setTextSize(0, i6);
                    return;
                }
                return;
            }
        }
        i6 = 0;
        if (i6 == 0) {
        }
    }

    public final void j(View view) {
        if (this.f8575x0 != null) {
            if (view != null) {
                setClipChildren(true);
                setClipToPadding(true);
                og.a aVar = this.f8575x0;
                if (aVar != null) {
                    if (aVar.d() != null) {
                        aVar.d().setForeground(null);
                    } else {
                        view.getOverlay().remove(aVar);
                    }
                }
            }
            this.f8575x0 = null;
        }
    }

    public final void k(int i5) {
        if (i5 > 0 || getVisibility() != 0) {
            int min = Math.min(this.f8565q0, i5 - (this.f8571v0 * 2));
            int i6 = this.f8566r0;
            if (this.f8577y0 == 1) {
                int i10 = i5 - (this.f8573w0 * 2);
                int i11 = this.f8567s0;
                if (i11 != -1) {
                    i10 = i11 == -2 ? this.M.getMeasuredWidth() : Math.min(i11, i10);
                }
                min = i10;
                i6 = Math.max(this.f8568t0, this.N.getMeasuredHeight());
            }
            View view = this.O;
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) view.getLayoutParams();
            if (this.f8569u0 && this.K == 2) {
                i6 = min;
            }
            layoutParams.height = i6;
            layoutParams.width = Math.max(0, min);
            view.setLayoutParams(layoutParams);
        }
    }

    public final void l(int i5, TextView textView) {
        if (textView == null) {
            return;
        }
        h(i5, textView);
        b();
        textView.setMinimumHeight(k0.y(textView.getContext(), i5));
        ColorStateList colorStateList = this.f8555g0;
        if (colorStateList != null) {
            textView.setTextColor(colorStateList);
        }
        TextView textView2 = this.T;
        textView2.setTypeface(textView2.getTypeface(), this.h0 ? 1 : 0);
        TextView textView3 = this.W;
        textView3.setTypeface(textView3.getTypeface(), this.h0 ? 1 : 0);
    }

    public final void m() {
        n.l lVar = this.f8557i0;
        if (lVar != null) {
            setVisibility((!lVar.isVisible() || (!this.B0 && this.C0)) ? 8 : 0);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 1);
        n.l lVar = this.f8557i0;
        if (lVar != null && lVar.isCheckable() && this.f8557i0.isChecked()) {
            View.mergeDrawableStates(onCreateDrawableState, G0);
        }
        return onCreateDrawableState;
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        Context context;
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        og.a aVar = this.f8575x0;
        if (aVar != null && aVar.isVisible()) {
            n.l lVar = this.f8557i0;
            CharSequence charSequence = lVar.f14674e;
            if (!TextUtils.isEmpty(lVar.f14684q)) {
                charSequence = this.f8557i0.f14684q;
            }
            StringBuilder sb2 = new StringBuilder();
            sb2.append((Object) charSequence);
            sb2.append(", ");
            og.a aVar2 = this.f8575x0;
            og.c cVar = aVar2.f15865w;
            Object obj = null;
            if (aVar2.isVisible()) {
                boolean a = cVar.a();
                og.b bVar = cVar.f15876b;
                if (a) {
                    obj = bVar.L;
                    if (obj == null) {
                        obj = aVar2.f15865w.f15876b.G;
                    }
                } else if (!aVar2.g()) {
                    obj = bVar.M;
                } else if (bVar.N != 0 && (context = (Context) aVar2.f15861d.get()) != null) {
                    if (aVar2.E != -2) {
                        int e9 = aVar2.e();
                        int i5 = aVar2.E;
                        if (e9 > i5) {
                            obj = context.getString(bVar.O, Integer.valueOf(i5));
                        }
                    }
                    obj = context.getResources().getQuantityString(bVar.N, aVar2.e(), Integer.valueOf(aVar2.e()));
                }
            }
            sb2.append(obj);
            accessibilityNodeInfo.setContentDescription(sb2.toString());
        }
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(accessibilityNodeInfo);
        accessibilityNodeInfoCompat.r(l1.d.a(0, 1, getItemVisiblePosition(), 1, isSelected()));
        if (isSelected()) {
            accessibilityNodeInfoCompat.p(false);
            accessibilityNodeInfo.removeAction((AccessibilityNodeInfo.AccessibilityAction) androidx.core.view.accessibility.a.f1555g.a);
        }
        accessibilityNodeInfoCompat.w(getResources().getString(com.discord.R.string.item_view_role_description));
    }

    @Override // android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        post(new af.p(i5, 3, this));
    }

    public void setActiveIndicatorDrawable(Drawable drawable) {
        this.O.setBackground(drawable);
        c();
    }

    public void setActiveIndicatorEnabled(boolean z5) {
        this.f8564p0 = z5;
        c();
        this.O.setVisibility(z5 ? 0 : 8);
        requestLayout();
    }

    public void setActiveIndicatorExpandedHeight(int i5) {
        this.f8568t0 = i5;
        k(getWidth());
    }

    public void setActiveIndicatorExpandedMarginHorizontal(int i5) {
        this.f8573w0 = i5;
        if (this.f8577y0 == 1) {
            setPadding(i5, 0, i5, 0);
        }
        k(getWidth());
    }

    public void setActiveIndicatorExpandedPadding(@NonNull Rect rect) {
        this.F0 = rect;
    }

    public void setActiveIndicatorExpandedWidth(int i5) {
        this.f8567s0 = i5;
        k(getWidth());
    }

    public void setActiveIndicatorHeight(int i5) {
        this.f8566r0 = i5;
        k(getWidth());
    }

    public void setActiveIndicatorLabelPadding(int i5) {
        if (this.f8574x != i5) {
            this.f8574x = i5;
            ((LinearLayout.LayoutParams) this.R.getLayoutParams()).topMargin = i5;
            if (this.U.getLayoutParams() != null) {
                LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) this.U.getLayoutParams();
                layoutParams.rightMargin = getLayoutDirection() == 1 ? i5 : 0;
                if (getLayoutDirection() == 1) {
                    i5 = 0;
                }
                layoutParams.leftMargin = i5;
                requestLayout();
            }
        }
    }

    public void setActiveIndicatorMarginHorizontal(int i5) {
        this.f8571v0 = i5;
        k(getWidth());
    }

    public void setActiveIndicatorResizeable(boolean z5) {
        this.f8569u0 = z5;
    }

    public void setActiveIndicatorWidth(int i5) {
        this.f8565q0 = i5;
        k(getWidth());
    }

    public void setBadge(@NonNull og.a aVar) {
        og.a aVar2 = this.f8575x0;
        if (aVar2 == aVar) {
            return;
        }
        ImageView imageView = this.Q;
        if (aVar2 != null && imageView != null) {
            Log.w("NavigationBar", "Multiple badges shouldn't be attached to one item.");
            j(imageView);
        }
        this.f8575x0 = aVar;
        int i5 = this.f8578z0;
        og.c cVar = aVar.f15865w;
        if (cVar.f15884l != i5) {
            cVar.f15884l = i5;
            aVar.l();
        }
        if (imageView == null || this.f8575x0 == null) {
            return;
        }
        setClipChildren(false);
        setClipToPadding(false);
        og.a aVar3 = this.f8575x0;
        Rect rect = new Rect();
        imageView.getDrawingRect(rect);
        aVar3.setBounds(rect);
        aVar3.k(imageView, null);
        if (aVar3.d() != null) {
            aVar3.d().setForeground(aVar3);
        } else {
            imageView.getOverlay().add(aVar3);
        }
    }

    public void setCheckable(boolean z5) {
        refreshDrawableState();
    }

    public void setChecked(boolean z5) {
        TextView textView = this.T;
        setLabelPivots(textView);
        TextView textView2 = this.S;
        setLabelPivots(textView2);
        TextView textView3 = this.W;
        setLabelPivots(textView3);
        TextView textView4 = this.V;
        setLabelPivots(textView4);
        float f2 = z5 ? 1.0f : 0.0f;
        if (this.f8564p0 && this.f8550d && isAttachedToWindow()) {
            ValueAnimator valueAnimator = this.f8561m0;
            if (valueAnimator != null) {
                valueAnimator.cancel();
                this.f8561m0 = null;
            }
            ValueAnimator ofFloat = ValueAnimator.ofFloat(this.f8563o0, f2);
            this.f8561m0 = ofFloat;
            ofFloat.addUpdateListener(new c(this, f2));
            this.f8561m0.setInterpolator(ta.a.H(getContext(), com.discord.R.attr.motionEasingEmphasizedInterpolator, mg.a.f14493b));
            this.f8561m0.setDuration(ta.a.G(getContext(), com.discord.R.attr.motionDurationLong2, getResources().getInteger(com.discord.R.integer.material_motion_duration_long_1)));
            this.f8561m0.start();
        } else {
            d(f2, f2);
        }
        float f10 = this.E;
        float f11 = this.F;
        float f12 = this.G;
        if (this.f8577y0 == 1) {
            f10 = this.H;
            f11 = this.I;
            f12 = this.J;
            textView = textView3;
            textView2 = textView4;
        }
        int i5 = this.K;
        if (i5 != -1) {
            if (i5 != 0) {
                if (i5 != 1) {
                    if (i5 == 2) {
                        g();
                    }
                } else if (z5) {
                    f(textView, textView2, f11, f10);
                } else {
                    f(textView2, textView, f12, 0.0f);
                }
            } else if (z5) {
                f(textView, textView2, f11, 0.0f);
            } else {
                g();
            }
        } else if (this.L) {
            if (z5) {
                f(textView, textView2, f11, 0.0f);
            } else {
                g();
            }
        } else if (z5) {
            f(textView, textView2, f11, f10);
        } else {
            f(textView2, textView, f12, 0.0f);
        }
        refreshDrawableState();
        setSelected(z5);
    }

    @Override // android.view.View
    public void setEnabled(boolean z5) {
        super.setEnabled(z5);
        this.S.setEnabled(z5);
        this.T.setEnabled(z5);
        this.V.setEnabled(z5);
        this.W.setEnabled(z5);
        this.Q.setEnabled(z5);
    }

    @Override // fh.h
    public void setExpanded(boolean z5) {
        this.B0 = z5;
        m();
    }

    public void setHorizontalTextAppearanceActive(int i5) {
        this.f8553e0 = i5;
        if (i5 == 0) {
            i5 = this.f8549c0;
        }
        l(i5, this.W);
    }

    public void setHorizontalTextAppearanceInactive(int i5) {
        this.f8554f0 = i5;
        if (i5 == 0) {
            i5 = this.f8551d0;
        }
        TextView textView = this.V;
        if (textView == null) {
            return;
        }
        h(i5, textView);
        b();
        textView.setMinimumHeight(k0.y(textView.getContext(), i5));
        ColorStateList colorStateList = this.f8555g0;
        if (colorStateList != null) {
            textView.setTextColor(colorStateList);
        }
    }

    public void setIcon(Drawable drawable) {
        if (drawable == this.f8559k0) {
            return;
        }
        this.f8559k0 = drawable;
        if (drawable != null) {
            Drawable.ConstantState constantState = drawable.getConstantState();
            if (constantState != null) {
                drawable = constantState.newDrawable();
            }
            drawable = drawable.mutate();
            this.f8560l0 = drawable;
            ColorStateList colorStateList = this.f8558j0;
            if (colorStateList != null) {
                drawable.setTintList(colorStateList);
            }
        }
        this.Q.setImageDrawable(drawable);
    }

    public void setIconLabelHorizontalSpacing(int i5) {
        if (this.f8576y != i5) {
            this.f8576y = i5;
            e();
            requestLayout();
        }
    }

    public void setIconSize(int i5) {
        ImageView imageView = this.Q;
        LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) imageView.getLayoutParams();
        layoutParams.width = i5;
        layoutParams.height = i5;
        imageView.setLayoutParams(layoutParams);
        e();
    }

    public void setIconTintList(ColorStateList colorStateList) {
        Drawable drawable;
        this.f8558j0 = colorStateList;
        if (this.f8557i0 == null || (drawable = this.f8560l0) == null) {
            return;
        }
        drawable.setTintList(colorStateList);
        this.f8560l0.invalidateSelf();
    }

    public void setItemBackground(int i5) {
        setItemBackground(i5 == 0 ? null : getContext().getDrawable(i5));
    }

    public void setItemGravity(int i5) {
        this.A0 = i5;
        requestLayout();
    }

    public void setItemIconGravity(int i5) {
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        if (this.f8577y0 != i5) {
            this.f8577y0 = i5;
            this.f8578z0 = 0;
            BaselineLayout baselineLayout = this.R;
            this.a0 = baselineLayout;
            LinearLayout linearLayout = this.N;
            int i15 = 8;
            if (i5 == 1) {
                if (this.U.getParent() == null) {
                    LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, -2);
                    layoutParams.gravity = 17;
                    linearLayout.addView(this.U, layoutParams);
                    e();
                }
                Rect rect = this.F0;
                int i16 = rect.left;
                int i17 = rect.right;
                int i18 = rect.top;
                i6 = rect.bottom;
                this.f8578z0 = 1;
                int i19 = this.f8573w0;
                this.a0 = this.U;
                i13 = i18;
                i12 = i17;
                i11 = i16;
                i10 = i19;
                i14 = 0;
            } else {
                i6 = 0;
                i10 = 0;
                i11 = 0;
                i12 = 0;
                i13 = 0;
                i14 = 8;
                i15 = 0;
            }
            baselineLayout.setVisibility(i15);
            this.U.setVisibility(i14);
            ((FrameLayout.LayoutParams) this.M.getLayoutParams()).gravity = this.A0;
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) linearLayout.getLayoutParams();
            layoutParams2.leftMargin = i11;
            layoutParams2.rightMargin = i12;
            layoutParams2.topMargin = i13;
            layoutParams2.bottomMargin = i6;
            setPadding(i10, 0, i10, 0);
            k(getWidth());
            c();
        }
    }

    public void setItemPaddingBottom(int i5) {
        if (this.f8572w != i5) {
            this.f8572w = i5;
            n.l lVar = this.f8557i0;
            if (lVar != null) {
                setChecked(lVar.isChecked());
            }
        }
    }

    public void setItemPaddingTop(int i5) {
        if (this.f8570v != i5) {
            this.f8570v = i5;
            n.l lVar = this.f8557i0;
            if (lVar != null) {
                setChecked(lVar.isChecked());
            }
        }
    }

    public void setItemPosition(int i5) {
        this.f8548b0 = i5;
    }

    public void setItemRippleColor(ColorStateList colorStateList) {
        this.f8552e = colorStateList;
        c();
    }

    public void setLabelFontScalingEnabled(boolean z5) {
        this.E0 = z5;
        setTextAppearanceActive(this.f8549c0);
        setTextAppearanceInactive(this.f8551d0);
        setHorizontalTextAppearanceActive(this.f8553e0);
        setHorizontalTextAppearanceInactive(this.f8554f0);
    }

    public void setLabelMaxLines(int i5) {
        TextView textView = this.S;
        textView.setMaxLines(i5);
        TextView textView2 = this.T;
        textView2.setMaxLines(i5);
        this.V.setMaxLines(i5);
        this.W.setMaxLines(i5);
        if (Build.VERSION.SDK_INT > 34) {
            textView.setGravity(17);
            textView2.setGravity(17);
        } else if (i5 > 1) {
            textView.setEllipsize(null);
            textView2.setEllipsize(null);
            textView.setGravity(17);
            textView2.setGravity(17);
        } else {
            textView.setGravity(16);
            textView2.setGravity(16);
        }
        requestLayout();
    }

    public void setLabelVisibilityMode(int i5) {
        if (this.K != i5) {
            this.K = i5;
            if (this.f8569u0 && i5 == 2) {
                this.f8562n0 = I0;
            } else {
                this.f8562n0 = H0;
            }
            k(getWidth());
            n.l lVar = this.f8557i0;
            if (lVar != null) {
                setChecked(lVar.isChecked());
            }
        }
    }

    public void setMeasureBottomPaddingFromLabelBaseline(boolean z5) {
        this.D0 = z5;
        this.R.setMeasurePaddingFromBaseline(z5);
        this.S.setIncludeFontPadding(z5);
        this.T.setIncludeFontPadding(z5);
        this.U.setMeasurePaddingFromBaseline(z5);
        this.V.setIncludeFontPadding(z5);
        this.W.setIncludeFontPadding(z5);
        requestLayout();
    }

    @Override // fh.h
    public void setOnlyShowWhenExpanded(boolean z5) {
        this.C0 = z5;
        m();
    }

    public void setShifting(boolean z5) {
        if (this.L != z5) {
            this.L = z5;
            n.l lVar = this.f8557i0;
            if (lVar != null) {
                setChecked(lVar.isChecked());
            }
        }
    }

    public void setTextAppearanceActive(int i5) {
        this.f8549c0 = i5;
        l(i5, this.T);
    }

    public void setTextAppearanceActiveBoldEnabled(boolean z5) {
        this.h0 = z5;
        setTextAppearanceActive(this.f8549c0);
        setHorizontalTextAppearanceActive(this.f8553e0);
        TextView textView = this.T;
        textView.setTypeface(textView.getTypeface(), this.h0 ? 1 : 0);
        TextView textView2 = this.W;
        textView2.setTypeface(textView2.getTypeface(), this.h0 ? 1 : 0);
    }

    public void setTextAppearanceInactive(int i5) {
        this.f8551d0 = i5;
        TextView textView = this.S;
        if (textView == null) {
            return;
        }
        h(i5, textView);
        b();
        textView.setMinimumHeight(k0.y(textView.getContext(), i5));
        ColorStateList colorStateList = this.f8555g0;
        if (colorStateList != null) {
            textView.setTextColor(colorStateList);
        }
    }

    public void setTextColor(ColorStateList colorStateList) {
        this.f8555g0 = colorStateList;
        if (colorStateList != null) {
            this.S.setTextColor(colorStateList);
            this.T.setTextColor(colorStateList);
            this.V.setTextColor(colorStateList);
            this.W.setTextColor(colorStateList);
        }
    }

    public void setTitle(CharSequence charSequence) {
        this.S.setText(charSequence);
        this.T.setText(charSequence);
        this.V.setText(charSequence);
        this.W.setText(charSequence);
        n.l lVar = this.f8557i0;
        if (lVar == null || TextUtils.isEmpty(lVar.f14684q)) {
            setContentDescription(charSequence);
        }
        n.l lVar2 = this.f8557i0;
        if (lVar2 != null && !TextUtils.isEmpty(lVar2.f14685r)) {
            charSequence = this.f8557i0.f14685r;
        }
        nt.a.I(this, charSequence);
    }

    public void setItemBackground(Drawable drawable) {
        if (drawable != null && drawable.getConstantState() != null) {
            drawable = drawable.getConstantState().newDrawable().mutate();
        }
        this.f8556i = drawable;
        c();
    }
}
