package kr;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final /* synthetic */ class q extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final q f13655d = new q();

    public q() {
        super(1, Sequence.class, "iterator", "iterator()Ljava/util/Iterator;", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Sequence p02 = (Sequence) obj;
        Intrinsics.checkNotNullParameter(p02, "p0");
        return p02.iterator();
    }
}
