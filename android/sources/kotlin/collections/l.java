package kotlin.collections;

import java.util.AbstractList;
import java.util.List;
import kotlin.jvm.internal.markers.KMutableList;

/* loaded from: classes3.dex */
public abstract class l extends AbstractList implements List, KMutableList {
    public abstract int a();

    public abstract Object b(int i5);

    @Override // java.util.AbstractList, java.util.List
    public final /* bridge */ Object remove(int i5) {
        return b(i5);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* bridge */ int size() {
        return a();
    }
}
