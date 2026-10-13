package bg;

import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class x extends h0 {

    /* renamed from: d, reason: collision with root package name */
    public final Object f3006d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3007e;

    public x(Object obj) {
        this.f3006d = obj;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return !this.f3007e;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f3007e) {
            throw new NoSuchElementException();
        }
        this.f3007e = true;
        return this.f3006d;
    }
}
