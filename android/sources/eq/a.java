package eq;

import com.discord.jank_stats.JankScreenContext;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.t;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a {
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final int f8186b;

    /* renamed from: c, reason: collision with root package name */
    public final int f8187c;

    /* renamed from: d, reason: collision with root package name */
    public final int f8188d;

    /* renamed from: e, reason: collision with root package name */
    public final List f8189e;

    public a(int... numbers) {
        List list;
        Intrinsics.checkNotNullParameter(numbers, "numbers");
        this.a = numbers;
        Integer u5 = x.u(0, numbers);
        this.f8186b = u5 != null ? u5.intValue() : -1;
        Integer u6 = x.u(1, numbers);
        this.f8187c = u6 != null ? u6.intValue() : -1;
        Integer u10 = x.u(2, numbers);
        this.f8188d = u10 != null ? u10.intValue() : -1;
        if (numbers.length <= 3) {
            list = m0.f13512d;
        } else {
            if (numbers.length > 1024) {
                throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.i(new StringBuilder("BinaryVersion with length more than 1024 are not supported. Provided length "), numbers.length, '.'));
            }
            Intrinsics.checkNotNullParameter(numbers, "<this>");
            list = CollectionsKt.i0(new kotlin.collections.e(new t(numbers), 3, numbers.length));
        }
        this.f8189e = list;
    }

    public final boolean a(int i5, int i6, int i10) {
        int i11 = this.f8186b;
        if (i11 > i5) {
            return true;
        }
        if (i11 < i5) {
            return false;
        }
        int i12 = this.f8187c;
        if (i12 > i6) {
            return true;
        }
        return i12 >= i6 && this.f8188d >= i10;
    }

    public final boolean equals(Object obj) {
        if (obj == null || !Intrinsics.areEqual(getClass(), obj.getClass())) {
            return false;
        }
        a aVar = (a) obj;
        return this.f8186b == aVar.f8186b && this.f8187c == aVar.f8187c && this.f8188d == aVar.f8188d && Intrinsics.areEqual(this.f8189e, aVar.f8189e);
    }

    public final int hashCode() {
        int i5 = this.f8186b;
        int i6 = (i5 * 31) + this.f8187c + i5;
        int i10 = (i6 * 31) + this.f8188d + i6;
        return this.f8189e.hashCode() + (i10 * 31) + i10;
    }

    public final String toString() {
        ArrayList arrayList = new ArrayList();
        for (int i5 : this.a) {
            if (i5 == -1) {
                break;
            }
            arrayList.add(Integer.valueOf(i5));
        }
        return arrayList.isEmpty() ? JankScreenContext.UNKNOWN_SCREEN : CollectionsKt.O(arrayList, ".", null, null, null, 62);
    }
}
