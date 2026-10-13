package kotlin.collections;

import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class u extends s {
    public static List b(Object[] objArr) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        List asList = Arrays.asList(objArr);
        Intrinsics.checkNotNullExpressionValue(asList, "asList(...)");
        return asList;
    }

    public static void c(int i5, int i6, int i10, byte[] bArr, byte[] destination) {
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        System.arraycopy(bArr, i6, destination, i5, i10 - i6);
    }

    public static void d(int i5, int i6, int i10, Object[] objArr, Object[] destination) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        System.arraycopy(objArr, i6, destination, i5, i10 - i6);
    }

    public static void e(int i5, int i6, int[] iArr, int[] destination, int i10) {
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        System.arraycopy(iArr, i6, destination, i5, i10 - i6);
    }

    public static void f(long[] jArr, long[] destination, int i5, int i6, int i10) {
        Intrinsics.checkNotNullParameter(jArr, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        System.arraycopy(jArr, i6, destination, i5, i10 - i6);
    }

    public static /* synthetic */ void g(int i5, int i6, int i10, Object[] objArr, Object[] objArr2) {
        if ((i10 & 4) != 0) {
            i5 = 0;
        }
        if ((i10 & 8) != 0) {
            i6 = objArr.length;
        }
        d(0, i5, i6, objArr, objArr2);
    }

    public static /* synthetic */ void h(int[] iArr, int[] iArr2, int i5, int i6) {
        if ((i6 & 8) != 0) {
            i5 = iArr.length;
        }
        e(0, 0, iArr, iArr2, i5);
    }

    public static byte[] i(byte[] bArr, int i5) {
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        r.a(i5, bArr.length);
        byte[] copyOfRange = Arrays.copyOfRange(bArr, 0, i5);
        Intrinsics.checkNotNullExpressionValue(copyOfRange, "copyOfRange(...)");
        return copyOfRange;
    }

    public static Object[] j(Object[] objArr, int i5, int i6) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        r.a(i6, objArr.length);
        Object[] copyOfRange = Arrays.copyOfRange(objArr, i5, i6);
        Intrinsics.checkNotNullExpressionValue(copyOfRange, "copyOfRange(...)");
        return copyOfRange;
    }

    public static void k(Object[] objArr, Object obj, int i5, int i6) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Arrays.fill(objArr, i5, i6, obj);
    }

    public static void l(long[] jArr, long j) {
        int length = jArr.length;
        Intrinsics.checkNotNullParameter(jArr, "<this>");
        Arrays.fill(jArr, 0, length, j);
    }

    public static void n(Object[] objArr, Comparator comparator) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        Intrinsics.checkNotNullParameter(comparator, "comparator");
        if (objArr.length > 1) {
            Arrays.sort(objArr, comparator);
        }
    }
}
