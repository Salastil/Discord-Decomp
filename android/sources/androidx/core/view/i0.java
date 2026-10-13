package androidx.core.view;

import android.os.Build;
import android.view.View;
import android.view.WindowInsets;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class i0 implements View.OnApplyWindowInsetsListener {
    public WindowInsetsCompat a = null;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ View f1601b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ r f1602c;

    public i0(View view, r rVar) {
        this.f1601b = view;
        this.f1602c = rVar;
    }

    @Override // android.view.View.OnApplyWindowInsetsListener
    public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
        WindowInsetsCompat g6 = WindowInsetsCompat.g(view, windowInsets);
        int i5 = Build.VERSION.SDK_INT;
        r rVar = this.f1602c;
        if (i5 < 30) {
            j0.a(windowInsets, this.f1601b);
            if (g6.equals(this.a)) {
                return rVar.a(view, g6).f();
            }
        }
        this.a = g6;
        WindowInsetsCompat a = rVar.a(view, g6);
        if (i5 >= 30) {
            return a.f();
        }
        WeakHashMap weakHashMap = s0.a;
        h0.c(view);
        return a.f();
    }
}
