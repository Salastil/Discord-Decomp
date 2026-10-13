package qo;

import java.io.BufferedReader;
import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.collections.w;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class o implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public String f16934d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f16935e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ w f16936i;

    public o(w wVar) {
        this.f16936i = wVar;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        if (this.f16934d == null && !this.f16935e) {
            String readLine = ((BufferedReader) this.f16936i.f13524b).readLine();
            this.f16934d = readLine;
            if (readLine == null) {
                this.f16935e = true;
            }
        }
        return this.f16934d != null;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        String str = this.f16934d;
        this.f16934d = null;
        Intrinsics.checkNotNull(str);
        return str;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
