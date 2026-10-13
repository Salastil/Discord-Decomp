package okhttp3;

import af.h0;
import java.text.DateFormat;
import java.util.Date;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class Cookie {
    public static final Pattern j = Pattern.compile("(\\d{2,4})[^\\d]*");
    public static final Pattern k = Pattern.compile("(?i)(jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec).*");

    /* renamed from: l, reason: collision with root package name */
    public static final Pattern f16015l = Pattern.compile("(\\d{1,2})[^\\d]*");

    /* renamed from: m, reason: collision with root package name */
    public static final Pattern f16016m = Pattern.compile("(\\d{1,2}):(\\d{1,2}):(\\d{1,2})[^\\d]*");
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16017b;

    /* renamed from: c, reason: collision with root package name */
    public final long f16018c;

    /* renamed from: d, reason: collision with root package name */
    public final String f16019d;

    /* renamed from: e, reason: collision with root package name */
    public final String f16020e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f16021f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f16022g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f16023h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f16024i;

    public Cookie(String str, String str2, long j5, String str3, String str4, boolean z5, boolean z6, boolean z7, boolean z8) {
        this.a = str;
        this.f16017b = str2;
        this.f16018c = j5;
        this.f16019d = str3;
        this.f16020e = str4;
        this.f16021f = z5;
        this.f16022g = z6;
        this.f16023h = z7;
        this.f16024i = z8;
    }

    public final String a(boolean z5) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.a);
        sb2.append('=');
        sb2.append(this.f16017b);
        if (this.f16023h) {
            long j5 = this.f16018c;
            if (j5 == Long.MIN_VALUE) {
                sb2.append("; max-age=0");
            } else {
                sb2.append("; expires=");
                Date date = new Date(j5);
                h0 h0Var = us.c.a;
                Intrinsics.checkNotNullParameter(date, "<this>");
                String format = ((DateFormat) us.c.a.get()).format(date);
                Intrinsics.checkNotNullExpressionValue(format, "STANDARD_DATE_FORMAT.get().format(this)");
                sb2.append(format);
            }
        }
        if (!this.f16024i) {
            sb2.append("; domain=");
            if (z5) {
                sb2.append(".");
            }
            sb2.append(this.f16019d);
        }
        sb2.append("; path=");
        sb2.append(this.f16020e);
        if (this.f16021f) {
            sb2.append("; secure");
        }
        if (this.f16022g) {
            sb2.append("; httponly");
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString()");
        return sb3;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof Cookie)) {
            return false;
        }
        Cookie cookie = (Cookie) obj;
        return Intrinsics.areEqual(cookie.a, this.a) && Intrinsics.areEqual(cookie.f16017b, this.f16017b) && cookie.f16018c == this.f16018c && Intrinsics.areEqual(cookie.f16019d, this.f16019d) && Intrinsics.areEqual(cookie.f16020e, this.f16020e) && cookie.f16021f == this.f16021f && cookie.f16022g == this.f16022g && cookie.f16023h == this.f16023h && cookie.f16024i == this.f16024i;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f16024i) + k0.d.d(k0.d.d(k0.d.d(a3.e.d(a3.e.d(com.discord.chat.bridge.botuikit.a.g(this.f16018c, a3.e.d(a3.e.d(527, 31, this.a), 31, this.f16017b), 31), 31, this.f16019d), 31, this.f16020e), 31, this.f16021f), 31, this.f16022g), 31, this.f16023h);
    }

    public final String toString() {
        return a(false);
    }
}
