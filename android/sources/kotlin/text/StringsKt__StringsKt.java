package kotlin.text;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;

/* JADX INFO: Access modifiers changed from: package-private */
@Metadata(d1 = {"\u0000\u0002\n\u0000¨\u0006\u0000"}, d2 = {"kotlin-stdlib"}, k = 5, mv = {2, 1, 0}, xi = ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE, xs = "kotlin/text/StringsKt")
@SourceDebugExtension({"SMAP\nStrings.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Strings.kt\nkotlin/text/StringsKt__StringsKt\n+ 2 _Strings.kt\nkotlin/text/StringsKt___StringsKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 5 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1579:1\n80#1,22:1580\n114#1,5:1602\n131#1,5:1607\n80#1,22:1612\n108#1:1634\n80#1,22:1635\n114#1,5:1657\n125#1:1662\n114#1,5:1663\n131#1,5:1668\n142#1:1673\n131#1,5:1674\n80#1,22:1679\n114#1,5:1701\n131#1,5:1706\n1069#2,2:1711\n12717#3,2:1713\n12717#3,2:1715\n295#4,2:1717\n295#4,2:1719\n1563#4:1722\n1634#4,3:1723\n1563#4:1726\n1634#4,3:1727\n1#5:1721\n*S KotlinDebug\n*F\n+ 1 Strings.kt\nkotlin/text/StringsKt__StringsKt\n*L\n108#1:1580,22\n125#1:1602,5\n142#1:1607,5\n147#1:1612,22\n152#1:1634\n152#1:1635,22\n157#1:1657,5\n162#1:1662\n162#1:1663,5\n167#1:1668,5\n172#1:1673\n172#1:1674,5\n177#1:1679,22\n188#1:1701,5\n199#1:1706,5\n312#1:1711,2\n971#1:1713,2\n995#1:1715,2\n1034#1:1717,2\n1040#1:1719,2\n1401#1:1722\n1401#1:1723,3\n1426#1:1726\n1426#1:1727,3\n*E\n"})
/* loaded from: classes3.dex */
public class StringsKt__StringsKt extends x {
    public static final int q(int i5, CharSequence charSequence, String string, boolean z5) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        Intrinsics.checkNotNullParameter(string, "string");
        return (z5 || !(charSequence instanceof String)) ? r(charSequence, string, i5, charSequence.length(), z5, false) : ((String) charSequence).indexOf(string, i5);
    }

    public static final int r(CharSequence charSequence, CharSequence charSequence2, int i5, int i6, boolean z5, boolean z6) {
        kotlin.ranges.a aVar;
        CharSequence charSequence3 = charSequence2;
        int i10 = i5;
        int i11 = i6;
        if (z6) {
            int H = StringsKt.H(charSequence);
            if (i10 > H) {
                i10 = H;
            }
            if (i11 < 0) {
                i11 = 0;
            }
            kotlin.ranges.a.f13544v.getClass();
            aVar = new kotlin.ranges.a(i10, i11, -1);
        } else {
            if (i10 < 0) {
                i10 = 0;
            }
            int length = charSequence.length();
            if (i11 > length) {
                i11 = length;
            }
            aVar = new IntRange(i10, i11, 1);
        }
        boolean z7 = charSequence instanceof String;
        int i12 = aVar.f13547i;
        int i13 = aVar.f13546e;
        int i14 = aVar.f13545d;
        if (z7 && (charSequence3 instanceof String)) {
            if ((i12 > 0 && i14 <= i13) || (i12 < 0 && i13 <= i14)) {
                int i15 = i14;
                while (true) {
                    String str = (String) charSequence3;
                    if (!x.j(str, z5, 0, i15, (String) charSequence, str.length())) {
                        if (i15 == i13) {
                            break;
                        }
                        i15 += i12;
                    } else {
                        return i15;
                    }
                }
            }
        } else if ((i12 > 0 && i14 <= i13) || (i12 < 0 && i13 <= i14)) {
            int i16 = i14;
            while (!t(charSequence3, 0, charSequence, i16, charSequence3.length(), z5)) {
                if (i16 != i13) {
                    i16 += i12;
                    charSequence3 = charSequence2;
                }
            }
            return i16;
        }
        return -1;
    }

    public static final int s(CharSequence charSequence, char[] chars, int i5, boolean z5) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        Intrinsics.checkNotNullParameter(chars, "chars");
        if (!z5 && chars.length == 1 && (charSequence instanceof String)) {
            return ((String) charSequence).indexOf(kotlin.collections.x.C(chars), i5);
        }
        if (i5 < 0) {
            i5 = 0;
        }
        int H = StringsKt.H(charSequence);
        if (i5 > H) {
            return -1;
        }
        while (true) {
            char charAt = charSequence.charAt(i5);
            for (char c6 : chars) {
                if (a.a(c6, charAt, z5)) {
                    return i5;
                }
            }
            if (i5 == H) {
                return -1;
            }
            i5++;
        }
    }

    public static List split$default(CharSequence charSequence, String[] delimiters, final boolean z5, int i5, int i6, Object obj) {
        if ((i6 & 2) != 0) {
            z5 = false;
        }
        if ((i6 & 4) != 0) {
            i5 = 0;
        }
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        Intrinsics.checkNotNullParameter(delimiters, "delimiters");
        if (delimiters.length == 1) {
            String str = delimiters[0];
            if (str.length() != 0) {
                return v(i5, charSequence, str, z5);
            }
        }
        u(i5);
        final List b10 = kotlin.collections.u.b(delimiters);
        c<IntRange> cVar = new c(charSequence, i5, new Function2() { // from class: kotlin.text.z
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj2, Object obj3) {
                Object obj4;
                Pair pair;
                Object obj5;
                CharSequence DelimitedRangesSequence = (CharSequence) obj2;
                int intValue = ((Integer) obj3).intValue();
                Intrinsics.checkNotNullParameter(DelimitedRangesSequence, "$this$DelimitedRangesSequence");
                List list = b10;
                boolean z6 = z5;
                if (z6 || list.size() != 1) {
                    if (intValue < 0) {
                        intValue = 0;
                    }
                    IntRange intRange = new IntRange(intValue, DelimitedRangesSequence.length(), 1);
                    boolean z7 = DelimitedRangesSequence instanceof String;
                    int i10 = intRange.f13547i;
                    int i11 = intRange.f13546e;
                    if (z7) {
                        if ((i10 > 0 && intValue <= i11) || (i10 < 0 && i11 <= intValue)) {
                            int i12 = intValue;
                            while (true) {
                                Iterator it = list.iterator();
                                while (true) {
                                    if (!it.hasNext()) {
                                        obj5 = null;
                                        break;
                                    }
                                    obj5 = it.next();
                                    String str2 = (String) obj5;
                                    if (x.j(str2, z6, 0, i12, (String) DelimitedRangesSequence, str2.length())) {
                                        break;
                                    }
                                }
                                String str3 = (String) obj5;
                                if (str3 == null) {
                                    if (i12 == i11) {
                                        break;
                                    }
                                    i12 += i10;
                                } else {
                                    pair = new Pair(Integer.valueOf(i12), str3);
                                    break;
                                }
                            }
                        }
                        pair = null;
                    } else {
                        if ((i10 > 0 && intValue <= i11) || (i10 < 0 && i11 <= intValue)) {
                            int i13 = intValue;
                            while (true) {
                                Iterator it2 = list.iterator();
                                while (true) {
                                    if (!it2.hasNext()) {
                                        obj4 = null;
                                        break;
                                    }
                                    obj4 = it2.next();
                                    String str4 = (String) obj4;
                                    boolean z8 = z6;
                                    z6 = z8;
                                    if (StringsKt__StringsKt.t(str4, 0, DelimitedRangesSequence, i13, str4.length(), z8)) {
                                        break;
                                    }
                                }
                                String str5 = (String) obj4;
                                if (str5 == null) {
                                    if (i13 == i11) {
                                        break;
                                    }
                                    i13 += i10;
                                } else {
                                    pair = new Pair(Integer.valueOf(i13), str5);
                                    break;
                                }
                            }
                        }
                        pair = null;
                    }
                } else {
                    String str6 = (String) CollectionsKt.Y(list);
                    int J = StringsKt.J(DelimitedRangesSequence, str6, intValue, false, 4);
                    if (J >= 0) {
                        pair = new Pair(Integer.valueOf(J), str6);
                    }
                    pair = null;
                }
                if (pair != null) {
                    return new Pair(pair.f13474d, Integer.valueOf(((String) pair.f13475e).length()));
                }
                return null;
            }
        });
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        ArrayList arrayList = new ArrayList(d0.l(new kotlin.collections.v(2, cVar), 10));
        for (IntRange range : cVar) {
            Intrinsics.checkNotNullParameter(charSequence, "<this>");
            Intrinsics.checkNotNullParameter(range, "range");
            arrayList.add(charSequence.subSequence(range.f13545d, range.f13546e + 1).toString());
        }
        return arrayList;
    }

    public static final boolean t(CharSequence charSequence, int i5, CharSequence other, int i6, int i10, boolean z5) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        Intrinsics.checkNotNullParameter(other, "other");
        if (i6 < 0 || i5 < 0 || i5 > charSequence.length() - i10 || i6 > other.length() - i10) {
            return false;
        }
        for (int i11 = 0; i11 < i10; i11++) {
            if (!a.a(charSequence.charAt(i5 + i11), other.charAt(i6 + i11), z5)) {
                return false;
            }
        }
        return true;
    }

    public static final void u(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException(k0.d.i(i5, "Limit must be non-negative, but was ").toString());
        }
    }

    public static final List v(int i5, CharSequence charSequence, String str, boolean z5) {
        u(i5);
        int i6 = 0;
        int q5 = q(0, charSequence, str, z5);
        if (q5 == -1 || i5 == 1) {
            return kotlin.collections.b0.c(charSequence.toString());
        }
        boolean z6 = i5 > 0;
        int i10 = 10;
        if (z6 && i5 <= 10) {
            i10 = i5;
        }
        ArrayList arrayList = new ArrayList(i10);
        do {
            arrayList.add(charSequence.subSequence(i6, q5).toString());
            i6 = str.length() + q5;
            if (z6 && arrayList.size() == i5 - 1) {
                break;
            }
            q5 = q(i6, charSequence, str, z5);
        } while (q5 != -1);
        arrayList.add(charSequence.subSequence(i6, charSequence.length()).toString());
        return arrayList;
    }

    public static boolean w(String str, String prefix) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        return str != null ? x.o(str, prefix, false) : t(str, 0, prefix, 0, prefix.length(), false);
    }
}
