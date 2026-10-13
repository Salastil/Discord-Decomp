package androidx.core.view;

import android.animation.ValueAnimator;
import android.os.Build;
import android.view.View;
import android.view.animation.PathInterpolator;
import androidx.core.graphics.Insets;
import java.util.Collections;

/* loaded from: classes.dex */
public final class e1 implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ m1 a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ WindowInsetsCompat f1576b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ WindowInsetsCompat f1577c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1578d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ View f1579e;

    public e1(m1 m1Var, WindowInsetsCompat windowInsetsCompat, WindowInsetsCompat windowInsetsCompat2, int i5, View view) {
        this.a = m1Var;
        this.f1576b = windowInsetsCompat;
        this.f1577c = windowInsetsCompat2;
        this.f1578d = i5;
        this.f1579e = view;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        float animatedFraction = valueAnimator.getAnimatedFraction();
        m1 m1Var = this.a;
        l1 l1Var = m1Var.a;
        l1Var.d(animatedFraction);
        WindowInsetsCompat windowInsetsCompat = this.f1576b;
        c2 c2Var = windowInsetsCompat.a;
        float b10 = l1Var.b();
        PathInterpolator pathInterpolator = h1.f1596e;
        int i5 = Build.VERSION.SDK_INT;
        u1 t1Var = i5 >= 34 ? new t1(windowInsetsCompat) : i5 >= 31 ? new s1(windowInsetsCompat) : i5 >= 30 ? new r1(windowInsetsCompat) : i5 >= 29 ? new q1(windowInsetsCompat) : new o1(windowInsetsCompat);
        for (int i6 = 1; i6 <= 512; i6 <<= 1) {
            if ((this.f1578d & i6) == 0) {
                t1Var.c(i6, c2Var.f(i6));
            } else {
                Insets f2 = c2Var.f(i6);
                Insets f10 = this.f1577c.a.f(i6);
                float f11 = 1.0f - b10;
                t1Var.c(i6, WindowInsetsCompat.e(f2, (int) (((f2.a - f10.a) * f11) + 0.5d), (int) (((f2.f1512b - f10.f1512b) * f11) + 0.5d), (int) (((f2.f1513c - f10.f1513c) * f11) + 0.5d), (int) (((f2.f1514d - f10.f1514d) * f11) + 0.5d)));
            }
        }
        h1.g(this.f1579e, t1Var.b(), Collections.singletonList(m1Var));
    }
}
