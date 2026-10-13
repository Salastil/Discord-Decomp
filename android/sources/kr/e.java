package kr;

import java.util.Iterator;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class e implements Sequence {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f13641b;

    /* renamed from: c, reason: collision with root package name */
    public final Function1 f13642c;

    public e(Sequence sequence, Function1 predicate, int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(sequence, "sequence");
                Intrinsics.checkNotNullParameter(predicate, "predicate");
                this.f13641b = sequence;
                this.f13642c = predicate;
                break;
            default:
                Intrinsics.checkNotNullParameter(sequence, "sequence");
                Intrinsics.checkNotNullParameter(predicate, "predicate");
                this.f13641b = sequence;
                this.f13642c = predicate;
                break;
        }
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        switch (this.a) {
            case 0:
                return new d(this);
            case 1:
                return new d(this, (byte) 0);
            default:
                return new i(this);
        }
    }

    public e(Function0 getInitialValue, Function1 getNextValue) {
        this.a = 2;
        Intrinsics.checkNotNullParameter(getInitialValue, "getInitialValue");
        Intrinsics.checkNotNullParameter(getNextValue, "getNextValue");
        this.f13641b = getInitialValue;
        this.f13642c = getNextValue;
    }
}
