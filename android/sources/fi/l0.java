package fi;

import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class l0 implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8682d = 1;

    /* renamed from: e, reason: collision with root package name */
    public Iterator f8683e;

    public /* synthetic */ l0() {
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f8682d) {
        }
        return this.f8683e.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f8682d) {
            case 0:
                return ((Map.Entry) this.f8683e.next()).getValue();
            default:
                return (String) this.f8683e.next();
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f8682d) {
            case 0:
                this.f8683e.remove();
                return;
            default:
                throw new UnsupportedOperationException();
        }
    }

    public l0(Iterator it) {
        it.getClass();
        this.f8683e = it;
    }
}
