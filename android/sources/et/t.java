package et;

import java.util.concurrent.atomic.AtomicReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class t {
    public static final s a = new s(new byte[0], 0, 0, false, false);

    /* renamed from: b, reason: collision with root package name */
    public static final int f8281b;

    /* renamed from: c, reason: collision with root package name */
    public static final AtomicReference[] f8282c;

    static {
        int highestOneBit = Integer.highestOneBit((Runtime.getRuntime().availableProcessors() * 2) - 1);
        f8281b = highestOneBit;
        AtomicReference[] atomicReferenceArr = new AtomicReference[highestOneBit];
        for (int i5 = 0; i5 < highestOneBit; i5++) {
            atomicReferenceArr[i5] = new AtomicReference();
        }
        f8282c = atomicReferenceArr;
    }

    public static final void a(s segment) {
        Intrinsics.checkNotNullParameter(segment, "segment");
        if (segment.f8279f != null || segment.f8280g != null) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (segment.f8277d) {
            return;
        }
        AtomicReference atomicReference = f8282c[(int) (Thread.currentThread().getId() & (f8281b - 1))];
        s sVar = (s) atomicReference.get();
        if (sVar == a) {
            return;
        }
        int i5 = sVar != null ? sVar.f8276c : 0;
        if (i5 >= 65536) {
            return;
        }
        segment.f8279f = sVar;
        segment.f8275b = 0;
        segment.f8276c = i5 + 8192;
        while (!atomicReference.compareAndSet(sVar, segment)) {
            if (atomicReference.get() != sVar) {
                segment.f8279f = null;
                return;
            }
        }
    }

    public static final s b() {
        AtomicReference atomicReference = f8282c[(int) (Thread.currentThread().getId() & (f8281b - 1))];
        s sVar = a;
        s sVar2 = (s) atomicReference.getAndSet(sVar);
        if (sVar2 == sVar) {
            return new s();
        }
        if (sVar2 == null) {
            atomicReference.set(null);
            return new s();
        }
        atomicReference.set(sVar2.f8279f);
        sVar2.f8279f = null;
        sVar2.f8276c = 0;
        return sVar2;
    }
}
