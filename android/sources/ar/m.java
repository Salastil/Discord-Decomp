package ar;

import java.util.Collection;
import java.util.Set;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends g {
    @Override // ar.g, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        throw new IllegalStateException(this.f2667b + ", required name: " + name);
    }

    @Override // ar.g, rq.o
    public final Set b() {
        throw new IllegalStateException();
    }

    @Override // ar.g, rq.o
    public final /* bridge */ /* synthetic */ Collection c(hq.e eVar, qp.c cVar) {
        c(eVar, cVar);
        throw null;
    }

    @Override // ar.g, rq.o
    public final Set d() {
        throw new IllegalStateException();
    }

    @Override // ar.g, rq.q
    public final Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        throw new IllegalStateException(this.f2667b);
    }

    @Override // ar.g, rq.o
    public final /* bridge */ /* synthetic */ Collection f(hq.e eVar, qp.a aVar) {
        f(eVar, (qp.c) aVar);
        throw null;
    }

    @Override // ar.g, rq.o
    public final Set g() {
        throw new IllegalStateException();
    }

    @Override // ar.g
    /* renamed from: h */
    public final Set f(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        throw new IllegalStateException(this.f2667b + ", required name: " + name);
    }

    @Override // ar.g
    /* renamed from: i */
    public final Set c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        throw new IllegalStateException(this.f2667b + ", required name: " + name);
    }

    @Override // ar.g
    public final String toString() {
        return s4.h.h(new StringBuilder("ThrowingScope{"), this.f2667b, '}');
    }
}
