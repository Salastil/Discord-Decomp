package kotlin.text;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

@Metadata(d1 = {"kotlin/text/q", "kotlin/text/r", "kotlin/text/s", "kotlin/text/t", "kotlin/text/u", "kotlin/text/v", "kotlin/text/w", "kotlin/text/StringsKt__StringNumberConversionsKt", "kotlin/text/x", "kotlin/text/StringsKt__StringsKt", "kotlin/text/a0", "kotlin/text/b0"}, d2 = {}, k = 4, mv = {2, 1, 0}, xi = ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE)
/* loaded from: classes3.dex */
public final class StringsKt extends b0 {
    private StringsKt() {
    }

    public static boolean D(CharSequence charSequence, CharSequence other, boolean z5) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        Intrinsics.checkNotNullParameter(other, "other");
        if (other instanceof String) {
            if (J(charSequence, (String) other, 0, z5, 2) >= 0) {
                return true;
            }
        } else if (StringsKt__StringsKt.r(charSequence, other, 0, charSequence.length(), z5, false) >= 0) {
            return true;
        }
        return false;
    }

    public static boolean E(CharSequence charSequence, char c6) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        return I(charSequence, c6, 0, 2) >= 0;
    }

    public static boolean F(CharSequence charSequence, String suffix) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        Intrinsics.checkNotNullParameter(suffix, "suffix");
        return charSequence instanceof String ? x.h((String) charSequence, suffix, false) : StringsKt__StringsKt.t(charSequence, charSequence.length() - suffix.length(), suffix, 0, suffix.length(), false);
    }

    public static boolean G(String str, char c6) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        return str.length() > 0 && a.a(str.charAt(H(str)), c6, false);
    }

    public static int H(CharSequence charSequence) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        return charSequence.length() - 1;
    }

    public static int I(CharSequence charSequence, char c6, int i5, int i6) {
        if ((i6 & 2) != 0) {
            i5 = 0;
        }
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        return !(charSequence instanceof String) ? StringsKt__StringsKt.s(charSequence, new char[]{c6}, i5, false) : ((String) charSequence).indexOf(c6, i5);
    }

    public static /* synthetic */ int J(CharSequence charSequence, String str, int i5, boolean z5, int i6) {
        if ((i6 & 2) != 0) {
            i5 = 0;
        }
        if ((i6 & 4) != 0) {
            z5 = false;
        }
        return StringsKt__StringsKt.q(i5, charSequence, str, z5);
    }

    public static boolean K(CharSequence charSequence) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        for (int i5 = 0; i5 < charSequence.length(); i5++) {
            if (!CharsKt.b(charSequence.charAt(i5))) {
                return false;
            }
        }
        return true;
    }

    public static int L(char c6, int i5, int i6, String str) {
        if ((i6 & 2) != 0) {
            i5 = H(str);
        }
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (str != null) {
            return str.lastIndexOf(c6, i5);
        }
        char[] chars = {c6};
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(chars, "chars");
        if (str != null) {
            return str.lastIndexOf(kotlin.collections.x.C(chars), i5);
        }
        int H = H(str);
        if (i5 > H) {
            i5 = H;
        }
        while (-1 < i5) {
            if (a.a(chars[0], str.charAt(i5), false)) {
                return i5;
            }
            i5--;
        }
        return -1;
    }

    public static int M(int i5, int i6, String str, String string) {
        if ((i6 & 2) != 0) {
            i5 = H(str);
        }
        int i10 = i5;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(string, "string");
        return str == null ? StringsKt__StringsKt.r(str, string, i10, 0, false, true) : str.lastIndexOf(string, i10);
    }

    public static String N(String str, String prefix) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        if (!StringsKt__StringsKt.w(str, prefix)) {
            return str;
        }
        String substring = str.substring(prefix.length());
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String O(String str, String suffix) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(suffix, "suffix");
        if (!F(str, suffix)) {
            return str;
        }
        String substring = str.substring(0, str.length() - suffix.length());
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String P(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter("\"", "delimiter");
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter("\"", "prefix");
        Intrinsics.checkNotNullParameter("\"", "suffix");
        if (str.length() < 2 || !StringsKt__StringsKt.w(str, "\"") || !F(str, "\"")) {
            return str;
        }
        String substring = str.substring(1, str.length() - 1);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static StringBuilder Q(int i5, int i6, String str, String replacement) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(replacement, "replacement");
        if (i6 < i5) {
            throw new IndexOutOfBoundsException(s4.h.d(i6, "End index (", i5, ") is less than start index (", ")."));
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append((CharSequence) str, 0, i5);
        Intrinsics.checkNotNullExpressionValue(sb2, "append(...)");
        sb2.append((CharSequence) replacement);
        sb2.append((CharSequence) str, i6, str.length());
        Intrinsics.checkNotNullExpressionValue(sb2, "append(...)");
        return sb2;
    }

    public static List S(String str, final char[] delimiters) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(delimiters, "delimiters");
        if (delimiters.length == 1) {
            return StringsKt__StringsKt.v(0, str, String.valueOf(delimiters[0]), false);
        }
        StringsKt__StringsKt.u(0);
        c<IntRange> cVar = new c(str, 0, new Function2() { // from class: kotlin.text.y
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                CharSequence DelimitedRangesSequence = (CharSequence) obj;
                int intValue = ((Integer) obj2).intValue();
                Intrinsics.checkNotNullParameter(DelimitedRangesSequence, "$this$DelimitedRangesSequence");
                int s2 = StringsKt__StringsKt.s(DelimitedRangesSequence, delimiters, intValue, false);
                if (s2 < 0) {
                    return null;
                }
                return new Pair(Integer.valueOf(s2), 1);
            }
        });
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        ArrayList arrayList = new ArrayList(d0.l(new kotlin.collections.v(2, cVar), 10));
        for (IntRange range : cVar) {
            Intrinsics.checkNotNullParameter(str, "<this>");
            Intrinsics.checkNotNullParameter(range, "range");
            arrayList.add(str.subSequence(range.f13545d, range.f13546e + 1).toString());
        }
        return arrayList;
    }

    public static boolean T(String str, char c6) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        return str.length() > 0 && a.a(str.charAt(0), c6, false);
    }

    public static String U(char c6, String str, String missingDelimiterValue) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int I = I(str, c6, 0, 6);
        if (I == -1) {
            return missingDelimiterValue;
        }
        String substring = str.substring(I + 1, str.length());
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String V(String missingDelimiterValue, String delimiter) {
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "<this>");
        Intrinsics.checkNotNullParameter(delimiter, "delimiter");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int J = J(missingDelimiterValue, delimiter, 0, false, 6);
        if (J == -1) {
            return missingDelimiterValue;
        }
        String substring = missingDelimiterValue.substring(delimiter.length() + J, missingDelimiterValue.length());
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String W(char c6, String str, String missingDelimiterValue) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int L = L(c6, 0, 6, str);
        if (L == -1) {
            return missingDelimiterValue;
        }
        String substring = str.substring(L + 1, str.length());
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String X(String missingDelimiterValue, char c6) {
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "<this>");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int I = I(missingDelimiterValue, c6, 0, 6);
        if (I == -1) {
            return missingDelimiterValue;
        }
        String substring = missingDelimiterValue.substring(0, I);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String Y(String missingDelimiterValue, String delimiter) {
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "<this>");
        Intrinsics.checkNotNullParameter(delimiter, "delimiter");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int J = J(missingDelimiterValue, delimiter, 0, false, 6);
        if (J == -1) {
            return missingDelimiterValue;
        }
        String substring = missingDelimiterValue.substring(0, J);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static String Z(String str, String missingDelimiterValue) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(".", "delimiter");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int M = M(0, 6, str, ".");
        if (M == -1) {
            return missingDelimiterValue;
        }
        String substring = str.substring(0, M);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    public static Long a0(String str) {
        boolean z5;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        CharsKt__CharJVMKt.checkRadix(10);
        int length = str.length();
        if (length == 0) {
            return null;
        }
        int i5 = 0;
        char charAt = str.charAt(0);
        long j = -9223372036854775807L;
        if (Intrinsics.compare((int) charAt, 48) < 0) {
            z5 = true;
            if (length == 1) {
                return null;
            }
            if (charAt == '+') {
                z5 = false;
                i5 = 1;
            } else {
                if (charAt != '-') {
                    return null;
                }
                j = Long.MIN_VALUE;
                i5 = 1;
            }
        } else {
            z5 = false;
        }
        long j5 = 0;
        long j7 = -256204778801521550L;
        while (i5 < length) {
            int digit = Character.digit((int) str.charAt(i5), 10);
            if (digit < 0) {
                return null;
            }
            if (j5 < j7) {
                if (j7 != -256204778801521550L) {
                    return null;
                }
                j7 = j / 10;
                if (j5 < j7) {
                    return null;
                }
            }
            long j10 = j5 * 10;
            long j11 = digit;
            if (j10 < j + j11) {
                return null;
            }
            j5 = j10 - j11;
            i5++;
        }
        return z5 ? Long.valueOf(j5) : Long.valueOf(-j5);
    }

    public static CharSequence b0(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        int length = str.length() - 1;
        int i5 = 0;
        boolean z5 = false;
        while (i5 <= length) {
            boolean b10 = CharsKt.b(str.charAt(!z5 ? i5 : length));
            if (z5) {
                if (!b10) {
                    break;
                }
                length--;
            } else if (b10) {
                i5++;
            } else {
                z5 = true;
            }
        }
        return str.subSequence(i5, length + 1);
    }
}
