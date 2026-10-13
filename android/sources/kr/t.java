package kr;

import androidx.core.view.a0;
import java.util.Iterator;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class t implements Sequence {
    public final Sequence a;

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f13662b;

    public t(Sequence sequence, Function1 transformer) {
        Intrinsics.checkNotNullParameter(sequence, "sequence");
        Intrinsics.checkNotNullParameter(transformer, "transformer");
        this.a = sequence;
        this.f13662b = transformer;
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new a0(this);
    }
}
