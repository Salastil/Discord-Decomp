package hk;

import android.icu.text.DecimalFormatSymbols;
import java.util.Formatter;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class h implements b {
    public final StringBuilder a;

    /* renamed from: b, reason: collision with root package name */
    public char f10044b;

    /* renamed from: c, reason: collision with root package name */
    public Formatter f10045c;

    /* renamed from: d, reason: collision with root package name */
    public final Object[] f10046d;

    public h() {
        StringBuilder sb2 = new StringBuilder();
        this.a = sb2;
        this.f10046d = new Object[1];
        Locale locale = Locale.getDefault();
        this.f10045c = new Formatter(sb2, locale);
        this.f10044b = DecimalFormatSymbols.getInstance(locale).getZeroDigit();
    }
}
