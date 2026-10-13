package androidx.appcompat.widget;

import android.graphics.Typeface;
import android.os.Build;
import android.widget.TextView;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class u0 extends a1.b {

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ int f1120h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f1121i;
    public final /* synthetic */ WeakReference j;
    public final /* synthetic */ AppCompatTextHelper k;

    public u0(AppCompatTextHelper appCompatTextHelper, int i5, int i6, WeakReference weakReference) {
        this.k = appCompatTextHelper;
        this.f1120h = i5;
        this.f1121i = i6;
        this.j = weakReference;
    }

    @Override // a1.b
    public final void g(int i5) {
    }

    @Override // a1.b
    public final void h(Typeface typeface) {
        int i5;
        if (Build.VERSION.SDK_INT >= 28 && (i5 = this.f1120h) != -1) {
            typeface = y0.a(typeface, i5, (this.f1121i & 2) != 0);
        }
        AppCompatTextHelper appCompatTextHelper = this.k;
        if (appCompatTextHelper.f867m) {
            appCompatTextHelper.f866l = typeface;
            TextView textView = (TextView) this.j.get();
            if (textView != null) {
                if (textView.isAttachedToWindow()) {
                    textView.post(new v0(textView, typeface, appCompatTextHelper.j, 0));
                } else {
                    textView.setTypeface(typeface, appCompatTextHelper.j);
                }
            }
        }
    }
}
