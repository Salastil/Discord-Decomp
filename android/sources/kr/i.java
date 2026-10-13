package kr;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class i implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public Object f13647d;

    /* renamed from: e, reason: collision with root package name */
    public int f13648e = -2;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e f13649i;

    public i(e eVar) {
        this.f13649i = eVar;
    }

    public final void a() {
        Object invoke;
        int i5 = this.f13648e;
        e eVar = this.f13649i;
        if (i5 == -2) {
            invoke = ((Function0) eVar.f13641b).invoke();
        } else {
            Function1 function1 = eVar.f13642c;
            Object obj = this.f13647d;
            Intrinsics.checkNotNull(obj);
            invoke = function1.invoke(obj);
        }
        this.f13647d = invoke;
        this.f13648e = invoke == null ? 0 : 1;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        if (this.f13648e < 0) {
            a();
        }
        return this.f13648e == 1;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f13648e < 0) {
            a();
        }
        if (this.f13648e == 0) {
            throw new NoSuchElementException();
        }
        Object obj = this.f13647d;
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type T of kotlin.sequences.GeneratorSequence");
        this.f13648e = -1;
        return obj;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
