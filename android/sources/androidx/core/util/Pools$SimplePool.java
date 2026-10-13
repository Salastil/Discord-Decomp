package androidx.core.util;

import k1.b;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class Pools$SimplePool implements b {
    public final Object[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f1531b;

    public Pools$SimplePool(int i5) {
        if (i5 <= 0) {
            throw new IllegalArgumentException("The max pool size must be > 0");
        }
        this.a = new Object[i5];
    }

    @Override // k1.b
    public Object acquire() {
        int i5 = this.f1531b;
        if (i5 <= 0) {
            return null;
        }
        int i6 = i5 - 1;
        Object[] objArr = this.a;
        Object obj = objArr[i6];
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type T of androidx.core.util.Pools.SimplePool");
        objArr[i6] = null;
        this.f1531b--;
        return obj;
    }

    @Override // k1.b
    public boolean release(Object instance) {
        Object[] objArr;
        boolean z5;
        Intrinsics.checkNotNullParameter(instance, "instance");
        int i5 = this.f1531b;
        int i6 = 0;
        while (true) {
            objArr = this.a;
            if (i6 >= i5) {
                z5 = false;
                break;
            }
            if (objArr[i6] == instance) {
                z5 = true;
                break;
            }
            i6++;
        }
        if (z5) {
            throw new IllegalStateException("Already in the pool!");
        }
        int i10 = this.f1531b;
        if (i10 >= objArr.length) {
            return false;
        }
        objArr[i10] = instance;
        this.f1531b = i10 + 1;
        return true;
    }
}
