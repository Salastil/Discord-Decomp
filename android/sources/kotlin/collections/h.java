package kotlin.collections;

import java.util.Iterator;
import java.util.Map;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class h implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13504d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Iterator f13505e;

    public /* synthetic */ h(Iterator it, int i5) {
        this.f13504d = i5;
        this.f13505e = it;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f13504d) {
        }
        return this.f13505e.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f13504d) {
            case 0:
                return ((Map.Entry) this.f13505e.next()).getKey();
            default:
                return ((Map.Entry) this.f13505e.next()).getValue();
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f13504d) {
            case 0:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            default:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
        }
    }
}
