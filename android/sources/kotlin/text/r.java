package kotlin.text;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class r extends q {
    public static String b(String str) {
        int i5;
        Comparable comparable;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter("", "newIndent");
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        List q5 = kr.s.q(new kotlin.collections.w(2, str));
        ArrayList arrayList = new ArrayList();
        for (Object obj : q5) {
            if (!StringsKt.K((String) obj)) {
                arrayList.add(obj);
            }
        }
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (true) {
            i5 = 0;
            if (!it.hasNext()) {
                break;
            }
            String str2 = (String) it.next();
            int length = str2.length();
            while (true) {
                if (i5 >= length) {
                    i5 = -1;
                    break;
                }
                if (!CharsKt.b(str2.charAt(i5))) {
                    break;
                }
                i5++;
            }
            if (i5 == -1) {
                i5 = str2.length();
            }
            arrayList2.add(Integer.valueOf(i5));
        }
        Intrinsics.checkNotNullParameter(arrayList2, "<this>");
        Iterator it2 = arrayList2.iterator();
        if (it2.hasNext()) {
            comparable = (Comparable) it2.next();
            while (it2.hasNext()) {
                Comparable comparable2 = (Comparable) it2.next();
                if (comparable.compareTo(comparable2) > 0) {
                    comparable = comparable2;
                }
            }
        } else {
            comparable = null;
        }
        Integer num = (Integer) comparable;
        int intValue = num != null ? num.intValue() : 0;
        int length2 = str.length();
        q5.size();
        int f2 = kotlin.collections.c0.f(q5);
        ArrayList arrayList3 = new ArrayList();
        for (Object obj2 : q5) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            String str3 = (String) obj2;
            if ((i5 == 0 || i5 == f2) && StringsKt.K(str3)) {
                str3 = null;
            } else {
                String line = b0.x(intValue, str3);
                if (line != null) {
                    Intrinsics.checkNotNullParameter(line, "line");
                    str3 = line;
                }
            }
            if (str3 != null) {
                arrayList3.add(str3);
            }
            i5 = i6;
        }
        StringBuilder sb2 = new StringBuilder(length2);
        CollectionsKt.N(arrayList3, sb2, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, null, 124);
        return sb2.toString();
    }

    public static String c(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter("|", "marginPrefix");
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter("", "newIndent");
        Intrinsics.checkNotNullParameter("|", "marginPrefix");
        if (StringsKt.K("|")) {
            throw new IllegalArgumentException("marginPrefix must be non-blank string.");
        }
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        List q5 = kr.s.q(new kotlin.collections.w(2, str));
        int length = str.length();
        q5.size();
        int f2 = kotlin.collections.c0.f(q5);
        ArrayList arrayList = new ArrayList();
        int i5 = 0;
        for (Object obj : q5) {
            int i6 = i5 + 1;
            String line = null;
            if (i5 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            String str2 = (String) obj;
            if ((i5 != 0 && i5 != f2) || !StringsKt.K(str2)) {
                int length2 = str2.length();
                int i10 = 0;
                while (true) {
                    if (i10 >= length2) {
                        i10 = -1;
                        break;
                    }
                    if (!CharsKt.b(str2.charAt(i10))) {
                        break;
                    }
                    i10++;
                }
                if (i10 != -1 && x.n(str2, i10, "|", false)) {
                    int length3 = "|".length() + i10;
                    Intrinsics.checkNotNull(str2, "null cannot be cast to non-null type java.lang.String");
                    line = str2.substring(length3);
                    Intrinsics.checkNotNullExpressionValue(line, "substring(...)");
                }
                if (line != null) {
                    Intrinsics.checkNotNullParameter(line, "line");
                } else {
                    line = str2;
                }
            }
            if (line != null) {
                arrayList.add(line);
            }
            i5 = i6;
        }
        StringBuilder sb2 = new StringBuilder(length);
        CollectionsKt.N(arrayList, sb2, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, null, 124);
        return sb2.toString();
    }
}
