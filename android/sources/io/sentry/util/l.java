package io.sentry.util;

import java.nio.charset.Charset;
import java.util.Locale;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public abstract class l {
    public static final Charset a = Charset.forName("UTF-8");

    /* renamed from: b, reason: collision with root package name */
    public static final Pattern f12045b = Pattern.compile("[\\W_]+");

    public static String a(String str) {
        if (str == null || str.isEmpty()) {
            return str;
        }
        StringBuilder sb2 = new StringBuilder();
        String substring = str.substring(0, 1);
        Locale locale = Locale.ROOT;
        sb2.append(substring.toUpperCase(locale));
        sb2.append(str.substring(1).toLowerCase(locale));
        return sb2.toString();
    }

    public static String b(String str) {
        return (str != null && str.startsWith("\"") && str.endsWith("\"")) ? str.substring(1, str.length() - 1) : str;
    }
}
