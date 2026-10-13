package s;

import androidx.collection.SparseArrayCompat;
import java.util.ConcurrentModificationException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class l {
    public static final Object a = new Object();

    /* renamed from: b, reason: collision with root package name */
    public static final Object f17686b = new Object();

    public static final void a(SparseArrayCompat sparseArrayCompat) {
        int i5 = sparseArrayCompat.f1212v;
        int[] iArr = sparseArrayCompat.f1210e;
        Object[] objArr = sparseArrayCompat.f1211i;
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            Object obj = objArr[i10];
            if (obj != f17686b) {
                if (i10 != i6) {
                    iArr[i6] = iArr[i10];
                    objArr[i6] = obj;
                    objArr[i10] = null;
                }
                i6++;
            }
        }
        sparseArrayCompat.f1209d = false;
        sparseArrayCompat.f1212v = i6;
    }

    public static final void b(f fVar, int i5) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        int[] iArr = new int[i5];
        Intrinsics.checkNotNullParameter(iArr, "<set-?>");
        fVar.f17674d = iArr;
        Object[] objArr = new Object[i5];
        Intrinsics.checkNotNullParameter(objArr, "<set-?>");
        fVar.f17675e = objArr;
    }

    public static final int c(f fVar, Object obj, int i5) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        int i6 = fVar.f17676i;
        if (i6 == 0) {
            return -1;
        }
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        try {
            int a10 = t.a.a(fVar.f17676i, i5, fVar.f17674d);
            if (a10 < 0 || Intrinsics.areEqual(obj, fVar.f17675e[a10])) {
                return a10;
            }
            int i10 = a10 + 1;
            while (i10 < i6 && fVar.f17674d[i10] == i5) {
                if (Intrinsics.areEqual(obj, fVar.f17675e[i10])) {
                    return i10;
                }
                i10++;
            }
            for (int i11 = a10 - 1; i11 >= 0 && fVar.f17674d[i11] == i5; i11--) {
                if (Intrinsics.areEqual(obj, fVar.f17675e[i11])) {
                    return i11;
                }
            }
            return ~i10;
        } catch (IndexOutOfBoundsException unused) {
            throw new ConcurrentModificationException();
        }
    }
}
