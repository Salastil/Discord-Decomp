package ke;

import android.util.SparseBooleanArray;

/* loaded from: classes3.dex */
public final class g {
    public final SparseBooleanArray a;

    public g(SparseBooleanArray sparseBooleanArray) {
        this.a = sparseBooleanArray;
    }

    public final int a(int i5) {
        SparseBooleanArray sparseBooleanArray = this.a;
        b.j(i5, sparseBooleanArray.size());
        return sparseBooleanArray.keyAt(i5);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        SparseBooleanArray sparseBooleanArray = gVar.a;
        int i5 = d0.a;
        SparseBooleanArray sparseBooleanArray2 = this.a;
        if (i5 >= 24) {
            return sparseBooleanArray2.equals(sparseBooleanArray);
        }
        if (sparseBooleanArray2.size() != sparseBooleanArray.size()) {
            return false;
        }
        for (int i6 = 0; i6 < sparseBooleanArray2.size(); i6++) {
            if (a(i6) != gVar.a(i6)) {
                return false;
            }
        }
        return true;
    }

    public final int hashCode() {
        int i5 = d0.a;
        SparseBooleanArray sparseBooleanArray = this.a;
        if (i5 >= 24) {
            return sparseBooleanArray.hashCode();
        }
        int size = sparseBooleanArray.size();
        for (int i6 = 0; i6 < sparseBooleanArray.size(); i6++) {
            size = (size * 31) + a(i6);
        }
        return size;
    }
}
