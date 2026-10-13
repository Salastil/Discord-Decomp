package kotlin.collections;

import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class q0 implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13518d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Iterator f13519e;

    /* renamed from: i, reason: collision with root package name */
    public int f13520i;

    public q0(Iterator iterator) {
        Intrinsics.checkNotNullParameter(iterator, "iterator");
        this.f13519e = iterator;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        Iterator it;
        switch (this.f13518d) {
            case 0:
                return this.f13519e.hasNext();
        }
        while (true) {
            int i5 = this.f13520i;
            it = this.f13519e;
            if (i5 > 0 && it.hasNext()) {
                it.next();
                this.f13520i--;
            }
        }
        return it.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        Iterator it;
        switch (this.f13518d) {
            case 0:
                int i5 = this.f13520i;
                this.f13520i = i5 + 1;
                if (i5 >= 0) {
                    return new IndexedValue(i5, this.f13519e.next());
                }
                c0.k();
                throw null;
        }
        while (true) {
            int i6 = this.f13520i;
            it = this.f13519e;
            if (i6 > 0 && it.hasNext()) {
                it.next();
                this.f13520i--;
            }
        }
        return it.next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f13518d) {
            case 0:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            default:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
        }
    }

    public q0(kr.b bVar) {
        this.f13519e = bVar.a.iterator();
        this.f13520i = bVar.f13635b;
    }
}
