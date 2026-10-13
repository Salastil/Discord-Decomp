package kr;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public class o extends m {
    public static final h b(Sequence sequence, Function1 iterator) {
        if (!(sequence instanceof t)) {
            return new h(sequence, new n(1), iterator);
        }
        t tVar = (t) sequence;
        Intrinsics.checkNotNullParameter(iterator, "iterator");
        return new h(tVar.a, tVar.f13662b, iterator);
    }

    public static Sequence c(Function1 nextFunction, Object obj) {
        Intrinsics.checkNotNullParameter(nextFunction, "nextFunction");
        return obj == null ? f.a : new e(new h8.a(7, obj), nextFunction);
    }

    public static a d(Function0 nextFunction) {
        Intrinsics.checkNotNullParameter(nextFunction, "nextFunction");
        e eVar = new e(nextFunction, new com.facebook.react.defaults.a(5, nextFunction));
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return new a(eVar);
    }
}
