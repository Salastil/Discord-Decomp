package a3;

import androidx.fragment.app.Fragment;
import androidx.recyclerview.widget.RecyclerView;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract /* synthetic */ class e {
    public static void A(StringBuilder sb2, String str, String str2, String str3, String str4) {
        sb2.append(str);
        sb2.append(str2);
        sb2.append(str3);
        sb2.append(str4);
    }

    public static int a(int i5, int i6, float f2) {
        return (Float.hashCode(f2) + i5) * i6;
    }

    public static int b(int i5, int i6, int i10) {
        return androidx.datastore.preferences.protobuf.j.y(i5) + i6 + i10;
    }

    public static int c(int i5, int i6, int i10, int i11) {
        return androidx.datastore.preferences.protobuf.j.z(i5) + i6 + i10 + i11;
    }

    public static int d(int i5, int i6, String str) {
        return (str.hashCode() + i5) * i6;
    }

    public static int e(List list, int i5, int i6) {
        return (list.hashCode() + i5) * i6;
    }

    public static String f(int i5, int i6, String str, String str2) {
        return str + i5 + str2 + i6;
    }

    public static String g(long j, String str, String str2) {
        return str + j + str2;
    }

    public static String h(RecyclerView recyclerView, StringBuilder sb2) {
        sb2.append(recyclerView.exceptionLabel());
        return sb2.toString();
    }

    public static String i(Class cls, String str) {
        return str + cls;
    }

    public static String j(String str, Fragment fragment, String str2) {
        return str + fragment + str2;
    }

    public static String k(String str, String str2) {
        return str + str2;
    }

    public static String l(String str, String str2, String str3, String str4) {
        return str + str2 + str3 + str4;
    }

    public static String m(StringBuilder sb2, long j, String str) {
        sb2.append(j);
        sb2.append(str);
        return sb2.toString();
    }

    public static String n(StringBuilder sb2, String str, String str2, String str3) {
        sb2.append(str);
        sb2.append(str2);
        sb2.append(str3);
        return sb2.toString();
    }

    public static String o(Locale locale, String str, String str2, Locale locale2, String str3) {
        Intrinsics.checkNotNullExpressionValue(locale, str);
        String lowerCase = str2.toLowerCase(locale2);
        Intrinsics.checkNotNullExpressionValue(lowerCase, str3);
        return lowerCase;
    }

    public static String p(Object[] objArr, int i5, Locale locale, String str, String str2) {
        String format = String.format(locale, str, Arrays.copyOf(objArr, i5));
        Intrinsics.checkNotNullExpressionValue(format, str2);
        return format;
    }

    public static StringBuilder q(int i5, String str, int i6, String str2, String str3) {
        StringBuilder sb2 = new StringBuilder(str);
        sb2.append(i5);
        sb2.append(str2);
        sb2.append(i6);
        sb2.append(str3);
        return sb2;
    }

    public static StringBuilder r(int i5, String str, String str2) {
        StringBuilder sb2 = new StringBuilder(str);
        sb2.append(i5);
        sb2.append(str2);
        return sb2;
    }

    public static StringBuilder s(String str, String str2, String str3, int i5, String str4) {
        StringBuilder sb2 = new StringBuilder(str);
        sb2.append(str2);
        sb2.append(str3);
        sb2.append(i5);
        sb2.append(str4);
        return sb2;
    }

    public static StringBuilder t(String str, String str2, String str3, String str4, String str5) {
        StringBuilder sb2 = new StringBuilder(str);
        sb2.append(str2);
        sb2.append(str3);
        sb2.append(str4);
        sb2.append(str5);
        return sb2;
    }

    public static Map u(String str, String str2) {
        return u0.b(new Pair(str, str2));
    }

    public static void v(Class cls, StringBuilder sb2, String str) {
        sb2.append(cls.getName());
        sb2.append(str);
    }

    public static /* synthetic */ void w(Object obj) {
        if (obj != null) {
            throw new ClassCastException();
        }
    }

    public static void x(String str, String str2, String str3) {
        ke.b.N(str3, str + str2);
    }

    public static void y(StringBuilder sb2, int i5, String str, int i6, String str2) {
        sb2.append(i5);
        sb2.append(str);
        sb2.append(i6);
        sb2.append(str2);
    }

    public static void z(StringBuilder sb2, int i5, String str, String str2, String str3) {
        sb2.append(i5);
        sb2.append(str);
        sb2.append(str2);
        sb2.append(str3);
    }
}
