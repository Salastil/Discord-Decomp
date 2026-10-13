package w;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes.dex */
public final class d implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final f[] f19589d;

    /* renamed from: e, reason: collision with root package name */
    public int f19590e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f19591i;

    public d(f[] fVarArr) {
        e eVar = e.f19592b;
        this.f19589d = fVarArr;
        this.f19591i = true;
        f fVar = fVarArr[0];
        Object[] objArr = eVar.a;
        int bitCount = Integer.bitCount(0) * 2;
        fVar.f19593d = objArr;
        fVar.f19594e = bitCount;
        fVar.f19595i = 0;
        this.f19590e = 0;
        a();
    }

    public final void a() {
        int i5 = this.f19590e;
        f[] fVarArr = this.f19589d;
        f fVar = fVarArr[i5];
        if (fVar.f19595i < fVar.f19594e) {
            return;
        }
        while (-1 < i5) {
            int b10 = b(i5);
            if (b10 == -1) {
                f fVar2 = fVarArr[i5];
                int i6 = fVar2.f19595i;
                Object[] objArr = fVar2.f19593d;
                if (i6 < objArr.length) {
                    int length = objArr.length;
                    fVar2.f19595i = i6 + 1;
                    b10 = b(i5);
                }
            }
            if (b10 != -1) {
                this.f19590e = b10;
                return;
            }
            if (i5 > 0) {
                f fVar3 = fVarArr[i5 - 1];
                int i10 = fVar3.f19595i;
                int length2 = fVar3.f19593d.length;
                fVar3.f19595i = i10 + 1;
            }
            f fVar4 = fVarArr[i5];
            fVar4.f19593d = e.f19592b.a;
            fVar4.f19594e = 0;
            fVar4.f19595i = 0;
            i5--;
        }
        this.f19591i = false;
    }

    public final int b(int i5) {
        f[] fVarArr = this.f19589d;
        f fVar = fVarArr[i5];
        int i6 = fVar.f19595i;
        if (i6 < fVar.f19594e) {
            return i5;
        }
        Object[] objArr = fVar.f19593d;
        if (i6 >= objArr.length) {
            return -1;
        }
        int length = objArr.length;
        Object obj = objArr[i6];
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type androidx.compose.runtime.external.kotlinx.collections.immutable.implementations.immutableMap.TrieNode<K of androidx.compose.runtime.external.kotlinx.collections.immutable.implementations.immutableMap.TrieNodeBaseIterator, V of androidx.compose.runtime.external.kotlinx.collections.immutable.implementations.immutableMap.TrieNodeBaseIterator>");
        e eVar = (e) obj;
        if (i5 == 6) {
            f fVar2 = fVarArr[i5 + 1];
            Object[] objArr2 = eVar.a;
            int length2 = objArr2.length;
            fVar2.f19593d = objArr2;
            fVar2.f19594e = length2;
            fVar2.f19595i = 0;
        } else {
            f fVar3 = fVarArr[i5 + 1];
            Object[] objArr3 = eVar.a;
            int bitCount = Integer.bitCount(0) * 2;
            fVar3.f19593d = objArr3;
            fVar3.f19594e = bitCount;
            fVar3.f19595i = 0;
        }
        return b(i5 + 1);
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f19591i;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!this.f19591i) {
            throw new NoSuchElementException();
        }
        Object next = this.f19589d[this.f19590e].next();
        a();
        return next;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
