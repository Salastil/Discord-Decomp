package com.google.android.material.timepicker;

import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.RadialGradient;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.constraintlayout.widget.ConstraintSet;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.s0;
import com.discord.R;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
class ClockFaceView extends h implements f {
    public final SparseArray E;
    public final c F;
    public final int[] G;
    public final float[] H;
    public final int I;
    public final int J;
    public final int K;
    public final int L;
    public final String[] M;
    public float N;
    public final ColorStateList O;

    /* renamed from: v, reason: collision with root package name */
    public final ClockHandView f6148v;

    /* renamed from: w, reason: collision with root package name */
    public final Rect f6149w;

    /* renamed from: x, reason: collision with root package name */
    public final RectF f6150x;

    /* renamed from: y, reason: collision with root package name */
    public final Rect f6151y;

    public ClockFaceView(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f6149w = new Rect();
        this.f6150x = new RectF();
        this.f6151y = new Rect();
        SparseArray sparseArray = new SparseArray();
        this.E = sparseArray;
        this.H = new float[]{0.0f, 0.9f, 1.0f};
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.j, R.attr.materialClockStyle, R.style.Widget_MaterialComponents_TimePicker_Clock);
        Resources resources = getResources();
        ColorStateList u5 = k0.u(context, obtainStyledAttributes, 1);
        this.O = u5;
        LayoutInflater.from(context).inflate(R.layout.material_clockface_view, (ViewGroup) this, true);
        ClockHandView clockHandView = (ClockHandView) findViewById(R.id.material_clock_hand);
        this.f6148v = clockHandView;
        this.I = resources.getDimensionPixelSize(R.dimen.material_clock_hand_padding);
        int colorForState = u5.getColorForState(new int[]{android.R.attr.state_selected}, u5.getDefaultColor());
        this.G = new int[]{colorForState, colorForState, u5.getDefaultColor()};
        clockHandView.f6154i.add(this);
        int defaultColor = y0.b.c(context, R.color.material_timepicker_clockface).getDefaultColor();
        ColorStateList u6 = k0.u(context, obtainStyledAttributes, 0);
        setBackgroundColor(u6 != null ? u6.getDefaultColor() : defaultColor);
        getViewTreeObserver().addOnPreDrawListener(new b(this));
        setFocusable(false);
        obtainStyledAttributes.recycle();
        this.F = new c(this);
        String[] strArr = new String[12];
        Arrays.fill(strArr, "");
        this.M = strArr;
        LayoutInflater from = LayoutInflater.from(getContext());
        int size = sparseArray.size();
        boolean z5 = false;
        for (int i5 = 0; i5 < Math.max(this.M.length, size); i5++) {
            TextView textView = (TextView) sparseArray.get(i5);
            if (i5 >= this.M.length) {
                removeView(textView);
                sparseArray.remove(i5);
            } else {
                if (textView == null) {
                    textView = (TextView) from.inflate(R.layout.material_clockface_textview, (ViewGroup) this, false);
                    sparseArray.put(i5, textView);
                    addView(textView);
                }
                textView.setText(this.M[i5]);
                textView.setTag(R.id.material_value_index, Integer.valueOf(i5));
                int i6 = (i5 / 12) + 1;
                textView.setTag(R.id.material_clock_level, Integer.valueOf(i6));
                z5 = i6 > 1 ? true : z5;
                s0.p(textView, this.F);
                textView.setTextColor(this.O);
            }
        }
        ClockHandView clockHandView2 = this.f6148v;
        if (clockHandView2.f6153e && !z5) {
            clockHandView2.J = 1;
        }
        clockHandView2.f6153e = z5;
        clockHandView2.invalidate();
        this.J = resources.getDimensionPixelSize(R.dimen.material_time_picker_minimum_screen_height);
        this.K = resources.getDimensionPixelSize(R.dimen.material_time_picker_minimum_screen_width);
        this.L = resources.getDimensionPixelSize(R.dimen.material_clock_size);
    }

    @Override // com.google.android.material.timepicker.h
    public final void c() {
        ConstraintSet constraintSet = new ConstraintSet();
        constraintSet.c(this);
        HashMap hashMap = new HashMap();
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt.getId() != R.id.circle_center && !"skip".equals(childAt.getTag())) {
                int i6 = (Integer) childAt.getTag(R.id.material_clock_level);
                if (i6 == null) {
                    i6 = 1;
                }
                if (!hashMap.containsKey(i6)) {
                    hashMap.put(i6, new ArrayList());
                }
                ((List) hashMap.get(i6)).add(childAt);
            }
        }
        for (Map.Entry entry : hashMap.entrySet()) {
            List list = (List) entry.getValue();
            int round = ((Integer) entry.getKey()).intValue() == 2 ? Math.round(this.f6165e * 0.66f) : this.f6165e;
            Iterator it = list.iterator();
            float f2 = 0.0f;
            while (it.hasNext()) {
                int id2 = ((View) it.next()).getId();
                Integer valueOf = Integer.valueOf(id2);
                HashMap hashMap2 = constraintSet.f1319c;
                if (!hashMap2.containsKey(valueOf)) {
                    hashMap2.put(Integer.valueOf(id2), new androidx.constraintlayout.widget.g());
                }
                androidx.constraintlayout.widget.h hVar = ((androidx.constraintlayout.widget.g) hashMap2.get(Integer.valueOf(id2))).f1352d;
                hVar.f1389y = R.id.circle_center;
                hVar.f1390z = round;
                hVar.A = f2;
                f2 += 360.0f / list.size();
            }
        }
        constraintSet.a(this);
        int i10 = 0;
        while (true) {
            SparseArray sparseArray = this.E;
            if (i10 >= sparseArray.size()) {
                return;
            }
            ((TextView) sparseArray.get(i10)).setVisibility(0);
            i10++;
        }
    }

    public final void d() {
        SparseArray sparseArray;
        Rect rect;
        RectF rectF;
        RectF rectF2 = this.f6148v.f6158y;
        float f2 = Float.MAX_VALUE;
        TextView textView = null;
        int i5 = 0;
        while (true) {
            sparseArray = this.E;
            int size = sparseArray.size();
            rect = this.f6149w;
            rectF = this.f6150x;
            if (i5 >= size) {
                break;
            }
            TextView textView2 = (TextView) sparseArray.get(i5);
            if (textView2 != null) {
                textView2.getHitRect(rect);
                rectF.set(rect);
                rectF.union(rectF2);
                float height = rectF.height() * rectF.width();
                if (height < f2) {
                    textView = textView2;
                    f2 = height;
                }
            }
            i5++;
        }
        for (int i6 = 0; i6 < sparseArray.size(); i6++) {
            TextView textView3 = (TextView) sparseArray.get(i6);
            if (textView3 != null) {
                textView3.setSelected(textView3 == textView);
                textView3.getHitRect(rect);
                rectF.set(rect);
                textView3.getLineBounds(0, this.f6151y);
                rectF.inset(r8.left, r8.top);
                textView3.getPaint().setShader(!RectF.intersects(rectF2, rectF) ? null : new RadialGradient(rectF2.centerX() - rectF.left, rectF2.centerY() - rectF.top, 0.5f * rectF2.width(), this.G, this.H, Shader.TileMode.CLAMP));
                textView3.invalidate();
            }
        }
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(accessibilityNodeInfo);
        accessibilityNodeInfoCompat.a.setCollectionInfo(AccessibilityNodeInfo.CollectionInfo.obtain(1, this.M.length, false, 1));
    }

    @Override // androidx.constraintlayout.widget.ConstraintLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        d();
    }

    @Override // androidx.constraintlayout.widget.ConstraintLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        DisplayMetrics displayMetrics = getResources().getDisplayMetrics();
        int max = (int) (this.L / Math.max(Math.max(this.J / displayMetrics.heightPixels, this.K / displayMetrics.widthPixels), 1.0f));
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(max, 1073741824);
        setMeasuredDimension(max, max);
        super.onMeasure(makeMeasureSpec, makeMeasureSpec);
    }
}
