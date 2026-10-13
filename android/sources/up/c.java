package up;

import e4.i;
import fp.o;
import java.util.Iterator;
import jp.h;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kr.g;
import kr.n;
import kr.s;
import kr.t;
import xq.j;
import xq.l;

/* loaded from: classes3.dex */
public final class c implements h {

    /* renamed from: d, reason: collision with root package name */
    public final i f18991d;

    /* renamed from: e, reason: collision with root package name */
    public final yp.b f18992e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f18993i;

    /* renamed from: v, reason: collision with root package name */
    public final j f18994v;

    public c(i c6, yp.b annotationOwner, boolean z5) {
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(annotationOwner, "annotationOwner");
        this.f18991d = c6;
        this.f18992e = annotationOwner;
        this.f18993i = z5;
        this.f18994v = ((l) ((a) c6.f7952d).a).d(new aq.a(16, this));
    }

    @Override // jp.h
    public final jp.b Q(hq.c fqName) {
        jp.b bVar;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        yp.b bVar2 = this.f18992e;
        op.d a = bVar2.a(fqName);
        if (a != null && (bVar = (jp.b) this.f18994v.invoke(a)) != null) {
            return bVar;
        }
        hq.e eVar = sp.c.a;
        return sp.c.a(fqName, bVar2, this.f18991d);
    }

    @Override // jp.h
    public final boolean isEmpty() {
        return this.f18992e.getAnnotations().isEmpty();
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        yp.b bVar = this.f18992e;
        t n6 = s.n(CollectionsKt.C(bVar.getAnnotations()), this.f18994v);
        hq.e eVar = sp.c.a;
        kr.h p3 = s.p(n6, sp.c.a(o.f8893m, bVar, this.f18991d));
        Intrinsics.checkNotNullParameter(p3, "<this>");
        g j = s.j(p3, new n(2));
        Intrinsics.checkNotNull(j, "null cannot be cast to non-null type kotlin.sequences.Sequence<T of kotlin.sequences.SequencesKt___SequencesKt.filterNotNull>");
        return new kr.d(j);
    }

    @Override // jp.h
    public final boolean r(hq.c cVar) {
        return ki.b.I(this, cVar);
    }
}
