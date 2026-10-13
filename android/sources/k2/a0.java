package k2;

import android.os.Build;
import android.text.Spannable;
import android.text.SpannableString;
import java.util.stream.IntStream;

/* loaded from: classes.dex */
public final class a0 implements Spannable {

    /* renamed from: d, reason: collision with root package name */
    public boolean f13119d = false;

    /* renamed from: e, reason: collision with root package name */
    public Spannable f13120e;

    public a0(Spannable spannable) {
        this.f13120e = spannable;
    }

    public final void a() {
        Spannable spannable = this.f13120e;
        if (!this.f13119d) {
            if ((Build.VERSION.SDK_INT < 28 ? new qa.s() : new z()).A(spannable)) {
                this.f13120e = new SpannableString(spannable);
            }
        }
        this.f13119d = true;
    }

    @Override // java.lang.CharSequence
    public final char charAt(int i5) {
        return this.f13120e.charAt(i5);
    }

    @Override // java.lang.CharSequence
    public final IntStream chars() {
        return this.f13120e.chars();
    }

    @Override // java.lang.CharSequence
    public final IntStream codePoints() {
        return this.f13120e.codePoints();
    }

    @Override // android.text.Spanned
    public final int getSpanEnd(Object obj) {
        return this.f13120e.getSpanEnd(obj);
    }

    @Override // android.text.Spanned
    public final int getSpanFlags(Object obj) {
        return this.f13120e.getSpanFlags(obj);
    }

    @Override // android.text.Spanned
    public final int getSpanStart(Object obj) {
        return this.f13120e.getSpanStart(obj);
    }

    @Override // android.text.Spanned
    public final Object[] getSpans(int i5, int i6, Class cls) {
        return this.f13120e.getSpans(i5, i6, cls);
    }

    @Override // java.lang.CharSequence
    public final int length() {
        return this.f13120e.length();
    }

    @Override // android.text.Spanned
    public final int nextSpanTransition(int i5, int i6, Class cls) {
        return this.f13120e.nextSpanTransition(i5, i6, cls);
    }

    @Override // android.text.Spannable
    public final void removeSpan(Object obj) {
        a();
        this.f13120e.removeSpan(obj);
    }

    @Override // android.text.Spannable
    public final void setSpan(Object obj, int i5, int i6, int i10) {
        a();
        this.f13120e.setSpan(obj, i5, i6, i10);
    }

    @Override // java.lang.CharSequence
    public final CharSequence subSequence(int i5, int i6) {
        return this.f13120e.subSequence(i5, i6);
    }

    @Override // java.lang.CharSequence
    public final String toString() {
        return this.f13120e.toString();
    }
}
