package kotlin.text;

import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class b0 extends a0 {
    public static char A(CharSequence charSequence) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        int length = charSequence.length();
        if (length == 0) {
            throw new NoSuchElementException("Char sequence is empty.");
        }
        if (length == 1) {
            return charSequence.charAt(0);
        }
        throw new IllegalArgumentException("Char sequence has more than one element.");
    }

    public static String B(int i5, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (i5 < 0) {
            throw new IllegalArgumentException(s4.h.e(i5, "Requested character count ", " is less than zero.").toString());
        }
        int length = str.length();
        if (i5 > length) {
            i5 = length;
        }
        String substring = str.substring(0, i5);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String C(int i5, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (i5 < 0) {
            throw new IllegalArgumentException(s4.h.e(i5, "Requested character count ", " is less than zero.").toString());
        }
        int length = str.length();
        if (i5 > length) {
            i5 = length;
        }
        String substring = str.substring(length - i5);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String x(int i5, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (i5 < 0) {
            throw new IllegalArgumentException(s4.h.e(i5, "Requested character count ", " is less than zero.").toString());
        }
        int length = str.length();
        if (i5 > length) {
            i5 = length;
        }
        String substring = str.substring(i5);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String y(int i5, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (i5 < 0) {
            throw new IllegalArgumentException(s4.h.e(i5, "Requested character count ", " is less than zero.").toString());
        }
        int length = str.length() - i5;
        if (length < 0) {
            length = 0;
        }
        return B(length, str);
    }

    public static char z(CharSequence charSequence) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        if (charSequence.length() != 0) {
            return charSequence.charAt(StringsKt.H(charSequence));
        }
        throw new NoSuchElementException("Char sequence is empty.");
    }
}
