package kotlin.collections;

import java.util.AbstractSet;
import java.util.Set;
import kotlin.jvm.internal.markers.KMutableSet;

/* loaded from: classes3.dex */
public abstract class m extends AbstractSet implements Set, KMutableSet {
    public abstract int a();

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final /* bridge */ int size() {
        return a();
    }
}
