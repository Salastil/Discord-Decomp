package sr;

import java.util.Arrays;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import kotlin.jvm.internal.Intrinsics;
import nr.n0;
import nr.o0;

/* loaded from: classes3.dex */
public class z {

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f18132b = AtomicIntegerFieldUpdater.newUpdater(z.class, "_size$volatile");
    private volatile /* synthetic */ int _size$volatile;
    public n0[] a;

    public final void a(n0 n0Var) {
        n0Var.c((o0) this);
        n0[] n0VarArr = this.a;
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = f18132b;
        if (n0VarArr == null) {
            n0VarArr = new n0[4];
            this.a = n0VarArr;
        } else if (atomicIntegerFieldUpdater.get(this) >= n0VarArr.length) {
            Object[] copyOf = Arrays.copyOf(n0VarArr, atomicIntegerFieldUpdater.get(this) * 2);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            n0VarArr = (n0[]) copyOf;
            this.a = n0VarArr;
        }
        int i5 = atomicIntegerFieldUpdater.get(this);
        atomicIntegerFieldUpdater.set(this, i5 + 1);
        n0VarArr[i5] = n0Var;
        n0Var.f15640e = i5;
        c(i5);
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0060, code lost:
    
        if (r6.compareTo(r7) < 0) goto L18;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final n0 b(int i5) {
        Object[] objArr = this.a;
        Intrinsics.checkNotNull(objArr);
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = f18132b;
        atomicIntegerFieldUpdater.set(this, atomicIntegerFieldUpdater.get(this) - 1);
        if (i5 < atomicIntegerFieldUpdater.get(this)) {
            d(i5, atomicIntegerFieldUpdater.get(this));
            int i6 = (i5 - 1) / 2;
            if (i5 > 0) {
                n0 n0Var = objArr[i5];
                Intrinsics.checkNotNull(n0Var);
                Object obj = objArr[i6];
                Intrinsics.checkNotNull(obj);
                if (n0Var.compareTo(obj) < 0) {
                    d(i5, i6);
                    c(i6);
                }
            }
            while (true) {
                int i10 = i5 * 2;
                int i11 = i10 + 1;
                if (i11 >= atomicIntegerFieldUpdater.get(this)) {
                    break;
                }
                Object[] objArr2 = this.a;
                Intrinsics.checkNotNull(objArr2);
                int i12 = i10 + 2;
                if (i12 < atomicIntegerFieldUpdater.get(this)) {
                    Comparable comparable = objArr2[i12];
                    Intrinsics.checkNotNull(comparable);
                    Object obj2 = objArr2[i11];
                    Intrinsics.checkNotNull(obj2);
                }
                i12 = i11;
                Comparable comparable2 = objArr2[i5];
                Intrinsics.checkNotNull(comparable2);
                Comparable comparable3 = objArr2[i12];
                Intrinsics.checkNotNull(comparable3);
                if (comparable2.compareTo(comparable3) <= 0) {
                    break;
                }
                d(i5, i12);
                i5 = i12;
            }
        }
        n0 n0Var2 = objArr[atomicIntegerFieldUpdater.get(this)];
        Intrinsics.checkNotNull(n0Var2);
        n0Var2.c(null);
        n0Var2.f15640e = -1;
        objArr[atomicIntegerFieldUpdater.get(this)] = null;
        return n0Var2;
    }

    public final void c(int i5) {
        while (i5 > 0) {
            n0[] n0VarArr = this.a;
            Intrinsics.checkNotNull(n0VarArr);
            int i6 = (i5 - 1) / 2;
            n0 n0Var = n0VarArr[i6];
            Intrinsics.checkNotNull(n0Var);
            n0 n0Var2 = n0VarArr[i5];
            Intrinsics.checkNotNull(n0Var2);
            if (n0Var.compareTo(n0Var2) <= 0) {
                return;
            }
            d(i5, i6);
            i5 = i6;
        }
    }

    public final void d(int i5, int i6) {
        n0[] n0VarArr = this.a;
        Intrinsics.checkNotNull(n0VarArr);
        n0 n0Var = n0VarArr[i6];
        Intrinsics.checkNotNull(n0Var);
        n0 n0Var2 = n0VarArr[i5];
        Intrinsics.checkNotNull(n0Var2);
        n0VarArr[i5] = n0Var;
        n0VarArr[i6] = n0Var2;
        n0Var.f15640e = i5;
        n0Var2.f15640e = i6;
    }
}
