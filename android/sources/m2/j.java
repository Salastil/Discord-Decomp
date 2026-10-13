package m2;

import android.graphics.Rect;
import android.text.method.TransformationMethod;
import android.view.View;

/* loaded from: classes.dex */
public final class j implements TransformationMethod {

    /* renamed from: d, reason: collision with root package name */
    public final TransformationMethod f14326d;

    public j(TransformationMethod transformationMethod) {
        this.f14326d = transformationMethod;
    }

    @Override // android.text.method.TransformationMethod
    public final CharSequence getTransformation(CharSequence charSequence, View view) {
        if (view.isInEditMode()) {
            return charSequence;
        }
        TransformationMethod transformationMethod = this.f14326d;
        if (transformationMethod != null) {
            charSequence = transformationMethod.getTransformation(charSequence, view);
        }
        if (charSequence == null || k2.j.a().b() != 1) {
            return charSequence;
        }
        k2.j a = k2.j.a();
        a.getClass();
        return a.e(charSequence, 0, charSequence.length());
    }

    @Override // android.text.method.TransformationMethod
    public final void onFocusChanged(View view, CharSequence charSequence, boolean z5, int i5, Rect rect) {
        TransformationMethod transformationMethod = this.f14326d;
        if (transformationMethod != null) {
            transformationMethod.onFocusChanged(view, charSequence, z5, i5, rect);
        }
    }
}
