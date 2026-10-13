package kotlin.collections;

import java.util.Iterator;
import kotlin.jvm.internal.markers.KMappedMarker;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class z implements Iterator, KMappedMarker {
    @Override // java.util.Iterator
    public /* bridge */ /* synthetic */ Object next() {
        return Byte.valueOf(nextByte());
    }

    public abstract byte nextByte();

    @Override // java.util.Iterator
    public void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.Iterator
    @NotNull
    public final Byte next() {
        return Byte.valueOf(nextByte());
    }
}
