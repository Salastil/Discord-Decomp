package sr;

import java.util.concurrent.atomic.AtomicReferenceArray;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class s {

    @NotNull
    private volatile AtomicReferenceArray<Object> array;

    public s(int i5) {
        this.array = new AtomicReferenceArray<>(i5);
    }

    public final int a() {
        return this.array.length();
    }

    public final Object b(int i5) {
        AtomicReferenceArray<Object> atomicReferenceArray = this.array;
        if (i5 < atomicReferenceArray.length()) {
            return atomicReferenceArray.get(i5);
        }
        return null;
    }

    public final void c(int i5, ur.a aVar) {
        AtomicReferenceArray<Object> atomicReferenceArray = this.array;
        int length = atomicReferenceArray.length();
        if (i5 < length) {
            atomicReferenceArray.set(i5, aVar);
            return;
        }
        int i6 = i5 + 1;
        int i10 = length * 2;
        if (i6 < i10) {
            i6 = i10;
        }
        AtomicReferenceArray<Object> atomicReferenceArray2 = new AtomicReferenceArray<>(i6);
        for (int i11 = 0; i11 < length; i11++) {
            atomicReferenceArray2.set(i11, atomicReferenceArray.get(i11));
        }
        atomicReferenceArray2.set(i5, aVar);
        this.array = atomicReferenceArray2;
    }
}
