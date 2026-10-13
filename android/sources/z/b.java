package z;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import s4.h;

/* loaded from: classes.dex */
public final class b implements f {
    public final f a;

    /* renamed from: b, reason: collision with root package name */
    public final f f21115b;

    public b(f outer, f inner) {
        Intrinsics.checkNotNullParameter(outer, "outer");
        Intrinsics.checkNotNullParameter(inner, "inner");
        this.a = outer;
        this.f21115b = inner;
    }

    @Override // z.f
    public final boolean all(Function1 predicate) {
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        return this.a.all(predicate) && this.f21115b.all(predicate);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return Intrinsics.areEqual(this.a, bVar.a) && Intrinsics.areEqual(this.f21115b, bVar.f21115b);
    }

    @Override // z.f
    public final Object foldIn(Object obj, Function2 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        return this.f21115b.foldIn(this.a.foldIn(obj, operation), operation);
    }

    public final int hashCode() {
        return (this.f21115b.hashCode() * 31) + this.a.hashCode();
    }

    public final String toString() {
        return h.h(new StringBuilder("["), (String) foldIn("", a.f21114d), ']');
    }
}
