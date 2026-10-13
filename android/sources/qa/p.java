package qa;

import android.util.SparseIntArray;

/* loaded from: classes3.dex */
public abstract class p extends b {
    public final int[] G;

    public p(r8.b bVar, w wVar, x xVar) {
        super(bVar, wVar, xVar);
        SparseIntArray sparseIntArray = wVar.f16735c;
        sparseIntArray.getClass();
        this.G = new int[sparseIntArray.size()];
        int i5 = 0;
        while (true) {
            int[] iArr = this.G;
            if (i5 >= iArr.length) {
                this.f16690e.getClass();
                this.F.getClass();
                return;
            } else {
                iArr[i5] = sparseIntArray.keyAt(i5);
                i5++;
            }
        }
    }

    @Override // qa.b
    public final void c(Object obj) {
        o oVar = (o) obj;
        oVar.getClass();
        oVar.close();
    }

    @Override // qa.b
    public final int e(int i5) {
        if (i5 <= 0) {
            throw new ai.k(Integer.valueOf(i5));
        }
        for (int i6 : this.G) {
            if (i6 >= i5) {
                return i6;
            }
        }
        return i5;
    }

    @Override // qa.b
    public final int f(Object obj) {
        o oVar = (o) obj;
        oVar.getClass();
        return oVar.r();
    }

    @Override // qa.b
    public final boolean j(Object obj) {
        ((o) obj).getClass();
        return !r1.isClosed();
    }

    @Override // qa.b
    public final int g(int i5) {
        return i5;
    }
}
