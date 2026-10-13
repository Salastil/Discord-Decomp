package androidx.core.os;

import android.os.LocaleList;
import f1.c;
import f1.d;
import java.util.Locale;

/* loaded from: classes.dex */
public final class LocaleListCompat {

    /* renamed from: b, reason: collision with root package name */
    public static final LocaleListCompat f1523b = new LocaleListCompat(new d(new LocaleList(new Locale[0])));
    public final d a;

    public LocaleListCompat(d dVar) {
        this.a = dVar;
    }

    public static LocaleListCompat a(String str) {
        if (str == null || str.isEmpty()) {
            return f1523b;
        }
        String[] split = str.split(",", -1);
        int length = split.length;
        Locale[] localeArr = new Locale[length];
        for (int i5 = 0; i5 < length; i5++) {
            String str2 = split[i5];
            int i6 = c.a;
            localeArr[i5] = Locale.forLanguageTag(str2);
        }
        return new LocaleListCompat(new d(new LocaleList(localeArr)));
    }

    public final boolean equals(Object obj) {
        if (obj instanceof LocaleListCompat) {
            return this.a.equals(((LocaleListCompat) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.a.hashCode();
    }

    public final String toString() {
        return this.a.a.toString();
    }
}
