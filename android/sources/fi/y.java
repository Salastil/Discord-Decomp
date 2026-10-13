package fi;

import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;

/* loaded from: classes3.dex */
public abstract class y {
    public Object[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f8741b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f8742c;

    public y() {
        p.c(4, "initialCapacity");
        this.a = new Object[4];
        this.f8741b = 0;
    }

    public static int d(int i5, int i6) {
        if (i6 < 0) {
            throw new AssertionError("cannot store more than MAX_VALUE elements");
        }
        int i10 = i5 + (i5 >> 1) + 1;
        if (i10 < i6) {
            i10 = Integer.highestOneBit(i6 - 1) << 1;
        }
        if (i10 < 0) {
            return Integer.MAX_VALUE;
        }
        return i10;
    }

    public final void a(Object obj) {
        obj.getClass();
        e(this.f8741b + 1);
        Object[] objArr = this.a;
        int i5 = this.f8741b;
        this.f8741b = i5 + 1;
        objArr[i5] = obj;
    }

    public abstract y b(Object obj);

    public final void c(Iterable iterable) {
        if (iterable instanceof Collection) {
            Collection collection = (Collection) iterable;
            e(collection.size() + this.f8741b);
            if (collection instanceof z) {
                this.f8741b = ((z) collection).b(this.f8741b, this.a);
                return;
            }
        }
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            b(it.next());
        }
    }

    public final void e(int i5) {
        Object[] objArr = this.a;
        if (objArr.length < i5) {
            this.a = Arrays.copyOf(objArr, d(objArr.length, i5));
            this.f8742c = false;
        } else if (this.f8742c) {
            this.a = (Object[]) objArr.clone();
            this.f8742c = false;
        }
    }
}
