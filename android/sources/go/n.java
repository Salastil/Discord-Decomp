package go;

import java.io.Serializable;
import java.util.Collection;
import java.util.Iterator;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableSet;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class n extends kotlin.collections.m implements Set, Serializable, KMutableSet {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    private static final m f9418e = new m(null);

    /* renamed from: i, reason: collision with root package name */
    public static final n f9419i;

    /* renamed from: d, reason: collision with root package name */
    public final i f9420d;

    static {
        i.K.getClass();
        f9419i = new n(i.L);
    }

    public n(i backing) {
        Intrinsics.checkNotNullParameter(backing, "backing");
        this.f9420d = backing;
    }

    @Override // kotlin.collections.m
    public final int a() {
        return this.f9420d.F;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean add(Object obj) {
        return this.f9420d.a(obj) >= 0;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean addAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9420d.c();
        return super.addAll(elements);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final void clear() {
        this.f9420d.clear();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean contains(Object obj) {
        return this.f9420d.containsKey(obj);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean isEmpty() {
        return this.f9420d.isEmpty();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        i map = this.f9420d;
        map.getClass();
        Intrinsics.checkNotNullParameter(map, "map");
        return new g(map, 1);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean remove(Object obj) {
        i iVar = this.f9420d;
        iVar.c();
        int h6 = iVar.h(obj);
        if (h6 < 0) {
            return false;
        }
        iVar.l(h6);
        return true;
    }

    @Override // java.util.AbstractSet, java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean removeAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9420d.c();
        return super.removeAll(elements);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.Set
    public final boolean retainAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.f9420d.c();
        return super.retainAll(elements);
    }

    public n() {
        this(new i());
    }
}
