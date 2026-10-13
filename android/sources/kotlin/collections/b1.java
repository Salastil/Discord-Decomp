package kotlin.collections;

import java.util.Arrays;
import java.util.Iterator;
import java.util.RandomAccess;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b1 extends f implements RandomAccess {

    /* renamed from: e, reason: collision with root package name */
    public final Object[] f13489e;

    /* renamed from: i, reason: collision with root package name */
    public final int f13490i;

    /* renamed from: v, reason: collision with root package name */
    public int f13491v;

    /* renamed from: w, reason: collision with root package name */
    public int f13492w;

    public b1(int i5, Object[] buffer) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        this.f13489e = buffer;
        if (i5 < 0) {
            throw new IllegalArgumentException(k0.d.i(i5, "ring buffer filled size should not be negative but it is ").toString());
        }
        if (i5 <= buffer.length) {
            this.f13490i = buffer.length;
            this.f13492w = i5;
        } else {
            StringBuilder r5 = a3.e.r(i5, "ring buffer filled size: ", " cannot be larger than the buffer size: ");
            r5.append(buffer.length);
            throw new IllegalArgumentException(r5.toString().toString());
        }
    }

    @Override // kotlin.collections.a
    public final int a() {
        return this.f13492w;
    }

    public final void b() {
        if (2 > this.f13492w) {
            throw new IllegalArgumentException(("n shouldn't be greater than the buffer size: n = 2, size = " + this.f13492w).toString());
        }
        int i5 = this.f13491v;
        int i6 = this.f13490i;
        int i10 = (i5 + 2) % i6;
        Object[] objArr = this.f13489e;
        if (i5 > i10) {
            u.k(objArr, null, i5, i6);
            Intrinsics.checkNotNullParameter(objArr, "<this>");
            Arrays.fill(objArr, 0, i10, (Object) null);
        } else {
            u.k(objArr, null, i5, i10);
        }
        this.f13491v = i10;
        this.f13492w -= 2;
    }

    @Override // kotlin.collections.f, java.util.List
    public final Object get(int i5) {
        c cVar = f.f13497d;
        int i6 = this.f13492w;
        cVar.getClass();
        c.b(i5, i6);
        return this.f13489e[(this.f13491v + i5) % this.f13490i];
    }

    @Override // kotlin.collections.f, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        return new a1(this);
    }

    @Override // kotlin.collections.a, java.util.Collection
    public final Object[] toArray() {
        return toArray(new Object[a()]);
    }

    @Override // kotlin.collections.a, java.util.Collection
    public final Object[] toArray(Object[] array) {
        Object[] objArr;
        Intrinsics.checkNotNullParameter(array, "array");
        int length = array.length;
        int i5 = this.f13492w;
        if (length < i5) {
            array = Arrays.copyOf(array, i5);
            Intrinsics.checkNotNullExpressionValue(array, "copyOf(...)");
        }
        int i6 = this.f13492w;
        int i10 = this.f13491v;
        int i11 = 0;
        int i12 = 0;
        while (true) {
            objArr = this.f13489e;
            if (i12 >= i6 || i10 >= this.f13490i) {
                break;
            }
            array[i12] = objArr[i10];
            i12++;
            i10++;
        }
        while (i12 < i6) {
            array[i12] = objArr[i11];
            i12++;
            i11++;
        }
        b0.d(i6, array);
        return array;
    }
}
