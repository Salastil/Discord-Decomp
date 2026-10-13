package kotlin.collections;

import java.util.RandomAccess;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class t extends f implements RandomAccess {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int[] f13521e;

    public t(int[] iArr) {
        this.f13521e = iArr;
    }

    @Override // kotlin.collections.a
    public final int a() {
        return this.f13521e.length;
    }

    @Override // kotlin.collections.a, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        if (!(obj instanceof Integer)) {
            return false;
        }
        int intValue = ((Number) obj).intValue();
        int[] iArr = this.f13521e;
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        int length = iArr.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                i5 = -1;
                break;
            }
            if (intValue == iArr[i5]) {
                break;
            }
            i5++;
        }
        return i5 >= 0;
    }

    @Override // kotlin.collections.f, java.util.List
    public final Object get(int i5) {
        return Integer.valueOf(this.f13521e[i5]);
    }

    @Override // kotlin.collections.f, java.util.List
    public final int indexOf(Object obj) {
        if (!(obj instanceof Integer)) {
            return -1;
        }
        int intValue = ((Number) obj).intValue();
        int[] iArr = this.f13521e;
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        int length = iArr.length;
        for (int i5 = 0; i5 < length; i5++) {
            if (intValue == iArr[i5]) {
                return i5;
            }
        }
        return -1;
    }

    @Override // kotlin.collections.a, java.util.Collection
    public final boolean isEmpty() {
        return this.f13521e.length == 0;
    }

    @Override // kotlin.collections.f, java.util.List
    public final int lastIndexOf(Object obj) {
        if (!(obj instanceof Integer)) {
            return -1;
        }
        int intValue = ((Number) obj).intValue();
        int[] iArr = this.f13521e;
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        int length = iArr.length - 1;
        if (length >= 0) {
            while (true) {
                int i5 = length - 1;
                if (intValue == iArr[length]) {
                    return length;
                }
                if (i5 < 0) {
                    break;
                }
                length = i5;
            }
        }
        return -1;
    }
}
