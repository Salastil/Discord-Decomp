package kotlin.collections;

import java.util.AbstractCollection;
import java.util.Collection;
import kotlin.jvm.internal.markers.KMutableCollection;

/* loaded from: classes3.dex */
public abstract class k extends AbstractCollection implements Collection, KMutableCollection {
    public abstract int a();

    @Override // java.util.AbstractCollection, java.util.Collection
    public final /* bridge */ int size() {
        return a();
    }
}
