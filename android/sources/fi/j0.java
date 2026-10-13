package fi;

import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class j0 extends e1 {

    /* renamed from: d, reason: collision with root package name */
    public boolean f8671d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f8672e;

    public j0(Object obj) {
        this.f8672e = obj;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return !this.f8671d;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f8671d) {
            throw new NoSuchElementException();
        }
        this.f8671d = true;
        return this.f8672e;
    }
}
