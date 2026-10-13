package bh;

import android.content.Context;
import android.graphics.Color;
import com.discord.R;
import com.facebook.imagepipeline.nativecode.c;
import m3.n;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: f, reason: collision with root package name */
    public static final int f3013f = (int) Math.round(5.1000000000000005d);
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final int f3014b;

    /* renamed from: c, reason: collision with root package name */
    public final int f3015c;

    /* renamed from: d, reason: collision with root package name */
    public final int f3016d;

    /* renamed from: e, reason: collision with root package name */
    public final float f3017e;

    public a(Context context) {
        boolean J0 = n.J0(context, R.attr.elevationOverlayEnabled, false);
        int x5 = c.x(context, R.attr.elevationOverlayColor, 0);
        int x10 = c.x(context, R.attr.elevationOverlayAccentColor, 0);
        int x11 = c.x(context, R.attr.colorSurface, 0);
        float f2 = context.getResources().getDisplayMetrics().density;
        this.a = J0;
        this.f3014b = x5;
        this.f3015c = x10;
        this.f3016d = x11;
        this.f3017e = f2;
    }

    public final int a(float f2, int i5) {
        int i6;
        if (!this.a || b1.c.e(i5, 255) != this.f3016d) {
            return i5;
        }
        float min = (this.f3017e <= 0.0f || f2 <= 0.0f) ? 0.0f : Math.min(((((float) Math.log1p(f2 / r1)) * 4.5f) + 2.0f) / 100.0f, 1.0f);
        int alpha = Color.alpha(i5);
        int Q = c.Q(b1.c.e(i5, 255), this.f3014b, min);
        if (min > 0.0f && (i6 = this.f3015c) != 0) {
            Q = b1.c.c(b1.c.e(i6, f3013f), Q);
        }
        return b1.c.e(Q, alpha);
    }
}
