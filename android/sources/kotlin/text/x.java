package kotlin.text;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class x extends StringsKt__StringNumberConversionsKt {
    public static String f(char[] cArr, int i5, int i6) {
        Intrinsics.checkNotNullParameter(cArr, "<this>");
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int length = cArr.length;
        cVar.getClass();
        kotlin.collections.c.a(i5, i6, length);
        return new String(cArr, i5, i6 - i5);
    }

    public static String g(byte[] bArr) {
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        return new String(bArr, Charsets.UTF_8);
    }

    public static boolean h(String str, String suffix, boolean z5) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(suffix, "suffix");
        return !z5 ? str.endsWith(suffix) : j(str, true, str.length() - suffix.length(), 0, suffix, suffix.length());
    }

    public static boolean i(String str, String str2, boolean z5) {
        return str == null ? str2 == null : !z5 ? str.equals(str2) : str.equalsIgnoreCase(str2);
    }

    public static boolean j(String str, boolean z5, int i5, int i6, String other, int i10) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(other, "other");
        return !z5 ? str.regionMatches(i5, other, i6, i10) : str.regionMatches(z5, i5, other, i6, i10);
    }

    public static String k(int i5, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (i5 < 0) {
            throw new IllegalArgumentException(("Count 'n' must be non-negative, but was " + i5 + '.').toString());
        }
        if (i5 == 0) {
            return "";
        }
        int i6 = 1;
        if (i5 == 1) {
            return str.toString();
        }
        int length = str.length();
        if (length == 0) {
            return "";
        }
        if (length == 1) {
            char charAt = str.charAt(0);
            char[] cArr = new char[i5];
            for (int i10 = 0; i10 < i5; i10++) {
                cArr[i10] = charAt;
            }
            return new String(cArr);
        }
        StringBuilder sb2 = new StringBuilder(str.length() * i5);
        if (1 <= i5) {
            while (true) {
                sb2.append((CharSequence) str);
                if (i6 == i5) {
                    break;
                }
                i6++;
            }
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNull(sb3);
        return sb3;
    }

    public static String l(String str, String oldValue, String newValue, boolean z5) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(oldValue, "oldValue");
        Intrinsics.checkNotNullParameter(newValue, "newValue");
        int i5 = 0;
        int q5 = StringsKt__StringsKt.q(0, str, oldValue, z5);
        if (q5 < 0) {
            return str;
        }
        int length = oldValue.length();
        int i6 = length >= 1 ? length : 1;
        int length2 = newValue.length() + (str.length() - length);
        if (length2 < 0) {
            throw new OutOfMemoryError();
        }
        StringBuilder sb2 = new StringBuilder(length2);
        do {
            sb2.append((CharSequence) str, i5, q5);
            sb2.append(newValue);
            i5 = q5 + length;
            if (q5 >= str.length()) {
                break;
            }
            q5 = StringsKt__StringsKt.q(q5 + i6, str, oldValue, z5);
        } while (q5 > 0);
        sb2.append((CharSequence) str, i5, str.length());
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public static String m(String str, char c6, char c8) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        String replace = str.replace(c6, c8);
        Intrinsics.checkNotNullExpressionValue(replace, "replace(...)");
        return replace;
    }

    public static boolean n(String str, int i5, String prefix, boolean z5) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        return !z5 ? str.startsWith(prefix, i5) : j(str, z5, i5, 0, prefix, prefix.length());
    }

    public static boolean o(String str, String prefix, boolean z5) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        return !z5 ? str.startsWith(prefix) : j(str, z5, 0, 0, prefix, prefix.length());
    }
}
