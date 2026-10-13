package k1;

import android.util.SparseBooleanArray;
import kotlin.collections.r0;

/* loaded from: classes.dex */
public final class c extends r0 {

    /* renamed from: d, reason: collision with root package name */
    public int f13116d;

    /* renamed from: e, reason: collision with root package name */
    final /* synthetic */ SparseBooleanArray f13117e;

    public c(SparseBooleanArray sparseBooleanArray) {
        this.f13117e = sparseBooleanArray;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f13116d < this.f13117e.size();
    }

    @Override // kotlin.collections.r0
    public final int nextInt() {
        SparseBooleanArray sparseBooleanArray = this.f13117e;
        int i5 = this.f13116d;
        this.f13116d = i5 + 1;
        return sparseBooleanArray.keyAt(i5);
    }
}
