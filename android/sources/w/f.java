package w;

import java.util.Iterator;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes.dex */
public final class f implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public Object[] f19593d;

    /* renamed from: e, reason: collision with root package name */
    public int f19594e;

    /* renamed from: i, reason: collision with root package name */
    public int f19595i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f19596v;

    public f(int i5) {
        this.f19596v = i5;
        e eVar = e.f19592b;
        this.f19593d = e.f19592b.a;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f19595i < this.f19594e;
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f19596v) {
            case 0:
                int i5 = this.f19595i;
                this.f19595i = i5 + 2;
                Object[] objArr = this.f19593d;
                return new a(objArr[i5], objArr[i5 + 1]);
            case 1:
                int i6 = this.f19595i;
                this.f19595i = i6 + 2;
                return this.f19593d[i6];
            default:
                int i10 = this.f19595i;
                this.f19595i = i10 + 2;
                return this.f19593d[i10 + 1];
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
