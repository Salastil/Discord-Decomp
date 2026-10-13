package pt;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuffXfermode;
import android.view.View;
import com.facebook.react.views.view.ReactViewGroup;

/* loaded from: classes.dex */
public final class a extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public Bitmap f16609d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f16610e;

    /* renamed from: i, reason: collision with root package name */
    public Paint f16611i;

    /* renamed from: v, reason: collision with root package name */
    public PorterDuffXfermode f16612v;

    /* renamed from: w, reason: collision with root package name */
    public int f16613w;

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void dispatchDraw(Canvas canvas) {
        Bitmap bitmap;
        Paint paint = this.f16611i;
        super.dispatchDraw(canvas);
        if (this.f16610e) {
            View childAt = getChildAt(0);
            if (childAt != null) {
                childAt.setVisibility(0);
                Bitmap bitmap2 = this.f16609d;
                if (bitmap2 != null) {
                    bitmap2.recycle();
                }
                childAt.layout(0, 0, childAt.getMeasuredWidth(), childAt.getMeasuredHeight());
                if (childAt.getMeasuredWidth() <= 0 || childAt.getMeasuredHeight() <= 0) {
                    bitmap = null;
                } else {
                    bitmap = Bitmap.createBitmap(childAt.getMeasuredWidth(), childAt.getMeasuredHeight(), Bitmap.Config.ARGB_8888);
                    childAt.draw(new Canvas(bitmap));
                }
                this.f16609d = bitmap;
                childAt.setVisibility(4);
            }
            this.f16610e = false;
        }
        if (this.f16609d != null) {
            setLayerType(this.f16613w, paint);
            paint.setXfermode(this.f16612v);
            canvas.drawBitmap(this.f16609d, 0.0f, 0.0f, paint);
            paint.setXfermode(null);
        }
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.f16610e = true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onDescendantInvalidated(View view, View view2) {
        View childAt;
        super.onDescendantInvalidated(view, view2);
        if (!this.f16610e && (childAt = getChildAt(0)) != null && childAt.equals(view)) {
            this.f16610e = true;
        }
        invalidate();
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (z5) {
            this.f16610e = true;
        }
    }

    public void setRenderingMode(String str) {
        this.f16613w = str.equals("software") ? 1 : 2;
    }
}
