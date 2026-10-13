package ch;

import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextDirectionHeuristics;
import android.text.TextPaint;
import android.text.TextUtils;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public final class i {
    public CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public final TextPaint f3542b;

    /* renamed from: c, reason: collision with root package name */
    public final int f3543c;

    /* renamed from: d, reason: collision with root package name */
    public int f3544d;
    public boolean k;

    /* renamed from: m, reason: collision with root package name */
    public j f3551m;

    /* renamed from: e, reason: collision with root package name */
    public Layout.Alignment f3545e = Layout.Alignment.ALIGN_NORMAL;

    /* renamed from: f, reason: collision with root package name */
    public int f3546f = Integer.MAX_VALUE;

    /* renamed from: g, reason: collision with root package name */
    public float f3547g = 0.0f;

    /* renamed from: h, reason: collision with root package name */
    public float f3548h = 1.0f;

    /* renamed from: i, reason: collision with root package name */
    public int f3549i = 1;
    public boolean j = true;

    /* renamed from: l, reason: collision with root package name */
    public TextUtils.TruncateAt f3550l = null;

    public i(CharSequence charSequence, TextPaint textPaint, int i5) {
        this.a = charSequence;
        this.f3542b = textPaint;
        this.f3543c = i5;
        this.f3544d = charSequence.length();
    }

    public final StaticLayout a() {
        if (this.a == null) {
            this.a = "";
        }
        int max = Math.max(0, this.f3543c);
        CharSequence charSequence = this.a;
        int i5 = this.f3546f;
        TextPaint textPaint = this.f3542b;
        if (i5 == 1) {
            charSequence = TextUtils.ellipsize(charSequence, textPaint, max, this.f3550l);
        }
        int min = Math.min(charSequence.length(), this.f3544d);
        this.f3544d = min;
        if (this.k && this.f3546f == 1) {
            this.f3545e = Layout.Alignment.ALIGN_OPPOSITE;
        }
        StaticLayout.Builder obtain = StaticLayout.Builder.obtain(charSequence, 0, min, textPaint, max);
        obtain.setAlignment(this.f3545e);
        obtain.setIncludePad(this.j);
        obtain.setTextDirection(this.k ? TextDirectionHeuristics.RTL : TextDirectionHeuristics.LTR);
        TextUtils.TruncateAt truncateAt = this.f3550l;
        if (truncateAt != null) {
            obtain.setEllipsize(truncateAt);
        }
        obtain.setMaxLines(this.f3546f);
        float f2 = this.f3547g;
        if (f2 != 0.0f || this.f3548h != 1.0f) {
            obtain.setLineSpacing(f2, this.f3548h);
        }
        if (this.f3546f > 1) {
            obtain.setHyphenationFrequency(this.f3549i);
        }
        j jVar = this.f3551m;
        if (jVar != null) {
            obtain.setBreakStrategy(((TextInputLayout) ((ni.a) jVar).f15479e).R.getBreakStrategy());
        }
        return obtain.build();
    }
}
