package m3;

import android.graphics.Rect;
import android.os.Build;
import android.view.View;

/* loaded from: classes.dex */
public abstract class d0 {
    public static final e0 a;

    /* renamed from: b, reason: collision with root package name */
    public static final gh.g f14343b;

    static {
        if (Build.VERSION.SDK_INT >= 29) {
            a = new f0();
        } else {
            a = new e0();
        }
        f14343b = new gh.g(Float.class, "translationAlpha", 10);
        new gh.g(Rect.class, "clipBounds", 11);
    }

    public static void a(View view, int i5, int i6, int i10, int i11) {
        a.a0(view, i5, i6, i10, i11);
    }

    public static void b(int i5, View view) {
        a.W(i5, view);
    }
}
