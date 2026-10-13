package fr;

import java.util.Arrays;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends a {

    /* renamed from: d, reason: collision with root package name */
    public Object[] f9007d;

    /* renamed from: e, reason: collision with root package name */
    public int f9008e;

    @Override // fr.a
    public final int a() {
        return this.f9008e;
    }

    @Override // fr.a
    public final void b(int i5, yq.j value) {
        Intrinsics.checkNotNullParameter(value, "value");
        Object[] objArr = this.f9007d;
        if (objArr.length <= i5) {
            int length = objArr.length;
            do {
                length *= 2;
            } while (length <= i5);
            Object[] copyOf = Arrays.copyOf(this.f9007d, length);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f9007d = copyOf;
        }
        Object[] objArr2 = this.f9007d;
        if (objArr2[i5] == null) {
            this.f9008e++;
        }
        objArr2[i5] = value;
    }

    @Override // fr.a
    public final Object get(int i5) {
        return kotlin.collections.x.v(i5, this.f9007d);
    }

    @Override // fr.a, java.lang.Iterable
    public final Iterator iterator() {
        return new b(this);
    }
}
