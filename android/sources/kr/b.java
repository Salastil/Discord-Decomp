package kr;

import java.util.Iterator;
import kotlin.collections.q0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class b implements Sequence, c {
    public final Sequence a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13635b;

    public b(Sequence sequence, int i5) {
        Intrinsics.checkNotNullParameter(sequence, "sequence");
        this.a = sequence;
        this.f13635b = i5;
        if (i5 >= 0) {
            return;
        }
        throw new IllegalArgumentException(("count must be non-negative, but was " + i5 + '.').toString());
    }

    @Override // kr.c
    public final Sequence a(int i5) {
        int i6 = this.f13635b + i5;
        return i6 < 0 ? new b(this, i5) : new b(this.a, i6);
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new q0(this);
    }
}
