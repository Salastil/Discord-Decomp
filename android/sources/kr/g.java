package kr;

import java.util.Iterator;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class g implements Sequence {
    public final Sequence a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f13643b;

    /* renamed from: c, reason: collision with root package name */
    public final Function1 f13644c;

    public g(Sequence sequence, boolean z5, Function1 predicate) {
        Intrinsics.checkNotNullParameter(sequence, "sequence");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        this.a = sequence;
        this.f13643b = z5;
        this.f13644c = predicate;
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new d(this);
    }
}
