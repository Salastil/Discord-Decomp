package iq;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class w implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.cache.tape.d f12241d;

    /* renamed from: e, reason: collision with root package name */
    public androidx.datastore.preferences.protobuf.d f12242e;

    /* renamed from: i, reason: collision with root package name */
    public int f12243i;

    public w(x xVar) {
        io.sentry.cache.tape.d dVar = new io.sentry.cache.tape.d(xVar);
        this.f12241d = dVar;
        this.f12242e = new androidx.datastore.preferences.protobuf.d(dVar.a());
        this.f12243i = xVar.f12244e;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f12243i > 0;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!this.f12242e.hasNext()) {
            this.f12242e = new androidx.datastore.preferences.protobuf.d(this.f12241d.a());
        }
        this.f12243i--;
        return Byte.valueOf(this.f12242e.a());
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
