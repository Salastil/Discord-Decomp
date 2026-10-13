package kr;

import java.util.Iterator;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class h implements Sequence {
    public final Sequence a;

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f13645b;

    /* renamed from: c, reason: collision with root package name */
    public final Function1 f13646c;

    public h(Sequence sequence, Function1 transformer, Function1 iterator) {
        Intrinsics.checkNotNullParameter(sequence, "sequence");
        Intrinsics.checkNotNullParameter(transformer, "transformer");
        Intrinsics.checkNotNullParameter(iterator, "iterator");
        this.a = sequence;
        this.f13645b = transformer;
        this.f13646c = iterator;
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new d(this);
    }
}
