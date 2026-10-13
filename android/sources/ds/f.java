package ds;

import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class f {
    public final ArrayDeque a;

    /* renamed from: b, reason: collision with root package name */
    public int f7720b;

    public f(int i5) {
        switch (i5) {
            case 1:
                this.a = new ArrayDeque();
                break;
            default:
                this.a = new ArrayDeque();
                break;
        }
    }

    public void a(char[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        synchronized (this) {
            try {
                int i5 = this.f7720b;
                if (array.length + i5 < d.a) {
                    this.f7720b = i5 + array.length;
                    this.a.addLast(array);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public char[] b(int i5) {
        char[] cArr;
        synchronized (this) {
            ArrayDeque arrayDeque = this.a;
            cArr = null;
            char[] cArr2 = (char[]) (arrayDeque.isEmpty() ? null : arrayDeque.removeLast());
            if (cArr2 != null) {
                this.f7720b -= cArr2.length;
                cArr = cArr2;
            }
        }
        return cArr == null ? new char[i5] : cArr;
    }
}
