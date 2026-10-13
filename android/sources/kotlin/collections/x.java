package kotlin.collections;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Set;
import kotlin.Pair;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public class x extends u {
    public static String A(Object[] objArr, String str, String str2, String str3, Function1 function1, int i5) {
        if ((i5 & 1) != 0) {
            str = ", ";
        }
        String separator = str;
        String prefix = (i5 & 2) != 0 ? "" : str2;
        String postfix = (i5 & 4) != 0 ? "" : str3;
        if ((i5 & 32) != 0) {
            function1 = null;
        }
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(separator, "separator");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        Intrinsics.checkNotNullParameter(postfix, "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder sb2 = new StringBuilder();
        x(objArr, sb2, separator, prefix, postfix, function1);
        return sb2.toString();
    }

    public static Object B(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        if (objArr.length == 0) {
            throw new NoSuchElementException("Array is empty.");
        }
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        return objArr[objArr.length - 1];
    }

    public static char C(char[] cArr) {
        Intrinsics.checkNotNullParameter(cArr, "<this>");
        int length = cArr.length;
        if (length == 0) {
            throw new NoSuchElementException("Array is empty.");
        }
        if (length == 1) {
            return cArr[0];
        }
        throw new IllegalArgumentException("Array has more than one element.");
    }

    public static Object D(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        int length = objArr.length;
        if (length == 0) {
            throw new NoSuchElementException("Array is empty.");
        }
        if (length == 1) {
            return objArr[0];
        }
        throw new IllegalArgumentException("Array has more than one element.");
    }

    public static List E(Object[] objArr, Comparator comparator) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(comparator, "comparator");
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(comparator, "comparator");
        if (objArr.length != 0) {
            objArr = Arrays.copyOf(objArr, objArr.length);
            Intrinsics.checkNotNullExpressionValue(objArr, "copyOf(...)");
            u.n(objArr, comparator);
        }
        return u.b(objArr);
    }

    public static final void F(Object[] objArr, HashSet destination) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        for (Object obj : objArr) {
            destination.add(obj);
        }
    }

    public static List G(int[] iArr) {
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        int length = iArr.length;
        if (length == 0) {
            return m0.f13512d;
        }
        if (length == 1) {
            return b0.c(Integer.valueOf(iArr[0]));
        }
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        ArrayList arrayList = new ArrayList(iArr.length);
        for (int i5 : iArr) {
            arrayList.add(Integer.valueOf(i5));
        }
        return arrayList;
    }

    public static List H(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        int length = objArr.length;
        return length != 0 ? length != 1 ? I(objArr) : b0.c(objArr[0]) : m0.f13512d;
    }

    public static ArrayList I(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        return new ArrayList(new p(objArr, false));
    }

    public static Set J(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        int length = objArr.length;
        if (length == 0) {
            return o0.f13515d;
        }
        if (length == 1) {
            return c1.b(objArr[0]);
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet(u0.a(objArr.length));
        F(objArr, linkedHashSet);
        return linkedHashSet;
    }

    public static ArrayList K(Object[] objArr, Object[] other) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(other, "other");
        int min = Math.min(objArr.length, other.length);
        ArrayList arrayList = new ArrayList(min);
        for (int i5 = 0; i5 < min; i5++) {
            arrayList.add(new Pair(objArr[i5], other[i5]));
        }
        return arrayList;
    }

    public static Sequence o(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        return objArr.length == 0 ? kr.f.a : new w(0, objArr);
    }

    public static boolean p(Object obj, Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        return w(obj, objArr) >= 0;
    }

    public static boolean q(long[] jArr, long j) {
        Intrinsics.checkNotNullParameter(jArr, "<this>");
        Intrinsics.checkNotNullParameter(jArr, "<this>");
        int length = jArr.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                i5 = -1;
                break;
            }
            if (j == jArr[i5]) {
                break;
            }
            i5++;
        }
        return i5 >= 0;
    }

    public static ArrayList r(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        ArrayList destination = new ArrayList();
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        for (Object obj : objArr) {
            if (obj != null) {
                destination.add(obj);
            }
        }
        return destination;
    }

    public static Object s(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        if (objArr.length != 0) {
            return objArr[0];
        }
        throw new NoSuchElementException("Array is empty.");
    }

    public static Object t(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        if (objArr.length == 0) {
            return null;
        }
        return objArr[0];
    }

    public static Integer u(int i5, int[] iArr) {
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        if (i5 < 0 || i5 >= iArr.length) {
            return null;
        }
        return Integer.valueOf(iArr[i5]);
    }

    public static Object v(int i5, Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        if (i5 < 0 || i5 >= objArr.length) {
            return null;
        }
        return objArr[i5];
    }

    public static int w(Object obj, Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        int i5 = 0;
        if (obj == null) {
            int length = objArr.length;
            while (i5 < length) {
                if (objArr[i5] == null) {
                    return i5;
                }
                i5++;
            }
            return -1;
        }
        int length2 = objArr.length;
        while (i5 < length2) {
            if (Intrinsics.areEqual(obj, objArr[i5])) {
                return i5;
            }
            i5++;
        }
        return -1;
    }

    public static final void x(Object[] objArr, StringBuilder buffer, CharSequence separator, CharSequence prefix, CharSequence postfix, Function1 function1) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(separator, "separator");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        Intrinsics.checkNotNullParameter(postfix, "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        buffer.append(prefix);
        int i5 = 0;
        for (Object obj : objArr) {
            i5++;
            if (i5 > 1) {
                buffer.append(separator);
            }
            kotlin.text.q.a(buffer, obj, function1);
        }
        buffer.append(postfix);
    }

    public static String y(int i5, int[] iArr) {
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        Intrinsics.checkNotNullParameter(", ", "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder buffer = new StringBuilder();
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(", ", "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        buffer.append((CharSequence) "");
        int i6 = 0;
        for (int i10 : iArr) {
            i6++;
            if (i6 > 1) {
                buffer.append((CharSequence) ", ");
            }
            buffer.append((CharSequence) String.valueOf(i10));
        }
        buffer.append((CharSequence) "");
        return buffer.toString();
    }

    public static String z(byte[] bArr, Function1 function1) {
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        Intrinsics.checkNotNullParameter("", "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder buffer = new StringBuilder();
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter("", "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        buffer.append((CharSequence) "");
        int i5 = 0;
        for (byte b10 : bArr) {
            i5++;
            if (i5 > 1) {
                buffer.append((CharSequence) "");
            }
            buffer.append((CharSequence) function1.invoke(Byte.valueOf(b10)));
        }
        buffer.append((CharSequence) "");
        return buffer.toString();
    }
}
