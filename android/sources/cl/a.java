package cl;

import android.graphics.Paint;
import android.text.style.LineHeightSpan;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a implements LineHeightSpan {

    /* renamed from: d, reason: collision with root package name */
    public final int f3573d;

    public a(float f2) {
        this.f3573d = (int) Math.ceil(f2);
    }

    @Override // android.text.style.LineHeightSpan
    public final void chooseHeight(CharSequence text, int i5, int i6, int i10, int i11, Paint.FontMetricsInt fm2) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(fm2, "fm");
        double d6 = (this.f3573d - ((-r8) + fm2.descent)) / 2.0f;
        fm2.ascent = fm2.ascent - ((int) Math.ceil(d6));
        fm2.descent += (int) Math.floor(d6);
        if (i5 == 0) {
            fm2.top = fm2.ascent;
        }
        if (i6 == text.length()) {
            fm2.bottom = fm2.descent;
        }
    }
}
