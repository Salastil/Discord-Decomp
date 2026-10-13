package kotlin.collections;

import java.io.BufferedReader;
import java.util.Iterator;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class w implements Sequence {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f13524b;

    public /* synthetic */ w(int i5, Object obj) {
        this.a = i5;
        this.f13524b = obj;
    }

    /* JADX WARN: Type inference failed for: r0v9, types: [kotlin.jvm.functions.Function2, lo.g] */
    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        switch (this.a) {
            case 0:
                return ArrayIteratorKt.iterator((Object[]) this.f13524b);
            case 1:
                return ((Iterable) this.f13524b).iterator();
            case 2:
                return new kotlin.text.k((CharSequence) this.f13524b);
            case 3:
                return kr.l.a((lo.g) this.f13524b);
            case 4:
                return (Iterator) this.f13524b;
            default:
                return new qo.o(this);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public w(Function2 function2) {
        this.a = 3;
        this.f13524b = (lo.g) function2;
    }

    public w(BufferedReader reader) {
        this.a = 5;
        Intrinsics.checkNotNullParameter(reader, "reader");
        this.f13524b = reader;
    }
}
