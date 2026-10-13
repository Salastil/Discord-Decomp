package com.yalantis.ucrop.view.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.text.TextUtils;
import android.util.AttributeSet;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.AppCompatTextView;
import com.discord.R;
import java.util.Locale;
import un.a;

/* loaded from: classes3.dex */
public class AspectRatioTextView extends AppCompatTextView {

    /* renamed from: d, reason: collision with root package name */
    public final Rect f6859d;

    /* renamed from: e, reason: collision with root package name */
    public final Paint f6860e;

    /* renamed from: i, reason: collision with root package name */
    public final int f6861i;

    /* renamed from: v, reason: collision with root package name */
    public float f6862v;

    /* renamed from: w, reason: collision with root package name */
    public String f6863w;

    /* renamed from: x, reason: collision with root package name */
    public float f6864x;

    /* renamed from: y, reason: collision with root package name */
    public float f6865y;

    public AspectRatioTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f6859d = new Rect();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, a.a);
        setGravity(1);
        this.f6863w = obtainStyledAttributes.getString(0);
        this.f6864x = obtainStyledAttributes.getFloat(1, 0.0f);
        float f2 = obtainStyledAttributes.getFloat(2, 0.0f);
        this.f6865y = f2;
        float f10 = this.f6864x;
        if (f10 == 0.0f || f2 == 0.0f) {
            this.f6862v = 0.0f;
        } else {
            this.f6862v = f10 / f2;
        }
        this.f6861i = getContext().getResources().getDimensionPixelSize(R.dimen.ucrop_size_dot_scale_text_view);
        Paint paint = new Paint(1);
        this.f6860e = paint;
        paint.setStyle(Paint.Style.FILL);
        e();
        d(getResources().getColor(R.color.ucrop_color_widget_active));
        obtainStyledAttributes.recycle();
    }

    public final void d(int i5) {
        Paint paint = this.f6860e;
        if (paint != null) {
            paint.setColor(i5);
        }
        setTextColor(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[]{0}}, new int[]{i5, getContext().getColor(R.color.ucrop_color_widget)}));
    }

    public final void e() {
        if (!TextUtils.isEmpty(this.f6863w)) {
            setText(this.f6863w);
            return;
        }
        Locale locale = Locale.US;
        setText(((int) this.f6864x) + ":" + ((int) this.f6865y));
    }

    @Override // android.widget.TextView, android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (isSelected()) {
            canvas.getClipBounds(this.f6859d);
            float f2 = (r0.right - r0.left) / 2.0f;
            float f10 = r0.bottom - (r0.top / 2.0f);
            int i5 = this.f6861i;
            canvas.drawCircle(f2, f10 - (i5 * 1.5f), i5 / 2.0f, this.f6860e);
        }
    }

    public void setActiveColor(int i5) {
        d(i5);
        invalidate();
    }

    public void setAspectRatio(@NonNull wn.a aVar) {
        this.f6863w = aVar.f19960d;
        float f2 = aVar.f19961e;
        this.f6864x = f2;
        float f10 = aVar.f19962i;
        this.f6865y = f10;
        if (f2 == 0.0f || f10 == 0.0f) {
            this.f6862v = 0.0f;
        } else {
            this.f6862v = f2 / f10;
        }
        e();
    }
}
