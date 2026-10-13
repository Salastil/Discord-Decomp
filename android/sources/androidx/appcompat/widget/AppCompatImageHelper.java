package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.widget.ImageView;

/* loaded from: classes.dex */
public final class AppCompatImageHelper {
    public final ImageView a;

    /* renamed from: b, reason: collision with root package name */
    public m3 f855b;

    /* renamed from: c, reason: collision with root package name */
    public int f856c = 0;

    public AppCompatImageHelper(ImageView imageView) {
        this.a = imageView;
    }

    public final void a() {
        m3 m3Var;
        ImageView imageView = this.a;
        Drawable drawable = imageView.getDrawable();
        if (drawable != null) {
            n1.a(drawable);
        }
        if (drawable == null || (m3Var = this.f855b) == null) {
            return;
        }
        x.e(drawable, m3Var, imageView.getDrawableState());
    }

    public final void b(AttributeSet attributeSet, int i5) {
        int resourceId;
        ImageView imageView = this.a;
        Context context = imageView.getContext();
        int[] iArr = h.a.f9450f;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, i5);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        androidx.core.view.s0.o(imageView, imageView.getContext(), iArr, attributeSet, (TypedArray) b02.f7964i, i5, 0);
        try {
            Drawable drawable = imageView.getDrawable();
            if (drawable == null && (resourceId = typedArray.getResourceId(1, -1)) != -1 && (drawable = ys.d.J(imageView.getContext(), resourceId)) != null) {
                imageView.setImageDrawable(drawable);
            }
            if (drawable != null) {
                n1.a(drawable);
            }
            if (typedArray.hasValue(2)) {
                imageView.setImageTintList(b02.T(2));
            }
            if (typedArray.hasValue(3)) {
                imageView.setImageTintMode(n1.c(typedArray.getInt(3, -1), null));
            }
            b02.e0();
        } catch (Throwable th2) {
            b02.e0();
            throw th2;
        }
    }
}
