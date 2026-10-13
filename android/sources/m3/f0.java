package m3;

import android.graphics.Matrix;
import android.view.View;
import android.view.ViewGroup;

/* loaded from: classes.dex */
public final class f0 extends e0 {
    @Override // com.facebook.imagepipeline.nativecode.c
    public final float H(View view) {
        return view.getTransitionAlpha();
    }

    @Override // com.facebook.imagepipeline.nativecode.c
    public final void V(View view, float f2) {
        view.setTransitionAlpha(f2);
    }

    @Override // m3.e0, com.facebook.imagepipeline.nativecode.c
    public final void W(int i5, View view) {
        view.setTransitionVisibility(i5);
    }

    @Override // m3.e0
    public final void a0(View view, int i5, int i6, int i10, int i11) {
        view.setLeftTopRightBottom(i5, i6, i10, i11);
    }

    @Override // m3.e0
    public final void b0(View view, Matrix matrix) {
        view.transformMatrixToGlobal(matrix);
    }

    @Override // m3.e0
    public final void c0(ViewGroup viewGroup, Matrix matrix) {
        viewGroup.transformMatrixToLocal(matrix);
    }
}
