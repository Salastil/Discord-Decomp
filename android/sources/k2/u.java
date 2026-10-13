package k2;

import android.util.SparseArray;

/* loaded from: classes.dex */
public final class u {
    public final SparseArray a;

    /* renamed from: b, reason: collision with root package name */
    public x f13153b;

    public u(int i5) {
        this.a = new SparseArray(i5);
    }

    public final void a(x xVar, int i5, int i6) {
        int a = xVar.a(i5);
        SparseArray sparseArray = this.a;
        u uVar = sparseArray == null ? null : (u) sparseArray.get(a);
        if (uVar == null) {
            uVar = new u(1);
            sparseArray.put(xVar.a(i5), uVar);
        }
        if (i6 > i5) {
            uVar.a(xVar, i5 + 1, i6);
        } else {
            uVar.f13153b = xVar;
        }
    }
}
