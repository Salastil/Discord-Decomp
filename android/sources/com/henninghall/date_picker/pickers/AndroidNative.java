package com.henninghall.date_picker.pickers;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Paint;
import android.os.Build;
import android.os.Handler;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import ha.l;
import hk.i;
import java.lang.reflect.Field;
import jk.a;
import jk.c;
import jk.d;
import jk.e;
import u4.b;

/* loaded from: classes3.dex */
public class AndroidNative extends i implements e {
    public static final /* synthetic */ int M0 = 0;
    public c G0;
    public int H0;
    public d I0;
    public boolean J0;
    public final Handler K0;
    public boolean L0;

    public AndroidNative(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.H0 = 0;
        this.K0 = new Handler();
    }

    @Override // jk.e
    public View getView() {
        return this;
    }

    @Override // hk.i, android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.K0.removeCallbacksAndMessages(null);
    }

    public final void s() {
        this.K0.postDelayed(new a(this, 1), 500L);
    }

    @Override // jk.e
    public void setDividerColor(String str) {
        super.setDividerTint(Color.parseColor(str));
    }

    @Override // jk.e
    public void setOnValueChangeListenerInScrolling(d dVar) {
        this.I0 = dVar;
    }

    @Override // jk.e
    public void setOnValueChangedListener(c cVar) {
        this.G0 = cVar;
        super.setOnValueChangedListener(new b(this, this));
        super.setOnScrollListener(new u4.c(this));
    }

    @Override // jk.e
    public void setTextAlign(Paint.Align align) {
    }

    @Override // jk.e
    public void setTextColor(String str) {
        int parseColor = Color.parseColor(str);
        if (Build.VERSION.SDK_INT >= 29) {
            super.setTextColor(parseColor);
            return;
        }
        try {
            Field declaredField = getClass().getSuperclass().getDeclaredField("mSelectorWheelPaint");
            declaredField.setAccessible(true);
            ((Paint) declaredField.get(this)).setColor(parseColor);
        } catch (IllegalAccessException e9) {
            Log.w("setSelectedTextColor", e9);
        } catch (IllegalArgumentException e10) {
            Log.w("setSelectedTextColor", e10);
        } catch (NoSuchFieldException e11) {
            Log.w("setSelectedTextColor", e11);
        }
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            if (childAt instanceof EditText) {
                ((EditText) childAt).setTextColor(parseColor);
            }
        }
        invalidate();
    }

    public final void t(int i5) {
        int i6;
        int value = getValue();
        if (i5 == value) {
            return;
        }
        int maxValue = getMaxValue();
        boolean wrapSelectorWheel = getWrapSelectorWheel();
        int i10 = maxValue + 1;
        int i11 = i5 - value;
        int i12 = i11 > 0 ? i11 - i10 : i10 + i11;
        if (!wrapSelectorWheel ? !((i6 = value + i11) <= maxValue && i6 >= 0) : Math.abs(i11) >= Math.abs(i12)) {
            i11 = i12;
        }
        int abs = Math.abs(i11);
        this.J0 = true;
        ((l) this.G0).W();
        Handler handler = this.K0;
        handler.postDelayed(new a(this, 0), abs * 100);
        int i13 = 0;
        while (i13 < abs) {
            handler.postDelayed(new jk.b(this, this, i11 > 0, i13 == abs + (-1)), i13 * 100);
            i13++;
        }
    }
}
