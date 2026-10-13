package m3;

import android.graphics.Matrix;
import android.os.Build;
import android.view.View;
import android.view.ViewGroup;

/* loaded from: classes.dex */
public class e0 extends com.facebook.imagepipeline.nativecode.c {

    /* renamed from: m, reason: collision with root package name */
    public static boolean f14345m = true;

    /* renamed from: n, reason: collision with root package name */
    public static boolean f14346n = true;

    /* renamed from: o, reason: collision with root package name */
    public static boolean f14347o = true;

    /* renamed from: p, reason: collision with root package name */
    public static boolean f14348p = true;

    @Override // com.facebook.imagepipeline.nativecode.c
    public void W(int i5, View view) {
        if (Build.VERSION.SDK_INT == 28) {
            super.W(i5, view);
        } else if (f14348p) {
            try {
                ah.d.n(i5, view);
            } catch (NoSuchMethodError unused) {
                f14348p = false;
            }
        }
    }

    public void a0(View view, int i5, int i6, int i10, int i11) {
        if (f14347o) {
            try {
                ah.d.l(view, i5, i6, i10, i11);
            } catch (NoSuchMethodError unused) {
                f14347o = false;
            }
        }
    }

    public void b0(View view, Matrix matrix) {
        if (f14345m) {
            try {
                ah.d.p(view, matrix);
            } catch (NoSuchMethodError unused) {
                f14345m = false;
            }
        }
    }

    public void c0(ViewGroup viewGroup, Matrix matrix) {
        if (f14346n) {
            try {
                ah.d.q(viewGroup, matrix);
            } catch (NoSuchMethodError unused) {
                f14346n = false;
            }
        }
    }
}
