package kotlinx.serialization.json;

import cs.d;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.function.UnaryOperator;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.CollectionToArray;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e(with = d.class)
/* loaded from: classes3.dex */
public final class a extends JsonElement implements List<JsonElement>, KMappedMarker {

    @NotNull
    public static final JsonArray$Companion Companion = new JsonArray$Companion();

    /* renamed from: d, reason: collision with root package name */
    public final List f13611d;

    public a(List content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f13611d = content;
    }

    @Override // java.util.List
    public final /* bridge */ /* synthetic */ void add(int i5, JsonElement jsonElement) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final boolean addAll(int i5, Collection<? extends JsonElement> collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final void clear() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final boolean contains(Object obj) {
        if (!(obj instanceof JsonElement)) {
            return false;
        }
        JsonElement element = (JsonElement) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        return this.f13611d.contains(element);
    }

    @Override // java.util.List, java.util.Collection
    public final boolean containsAll(Collection elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        return this.f13611d.containsAll(elements);
    }

    @Override // java.util.List, java.util.Collection
    public final boolean equals(Object obj) {
        return Intrinsics.areEqual(this.f13611d, obj);
    }

    @Override // java.util.List
    public final JsonElement get(int i5) {
        return (JsonElement) this.f13611d.get(i5);
    }

    @Override // java.util.List, java.util.Collection
    public final int hashCode() {
        return this.f13611d.hashCode();
    }

    @Override // java.util.List
    public final int indexOf(Object obj) {
        if (!(obj instanceof JsonElement)) {
            return -1;
        }
        JsonElement element = (JsonElement) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        return this.f13611d.indexOf(element);
    }

    @Override // java.util.List, java.util.Collection
    public final boolean isEmpty() {
        return this.f13611d.isEmpty();
    }

    @Override // java.util.List, java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        return this.f13611d.iterator();
    }

    @Override // java.util.List
    public final int lastIndexOf(Object obj) {
        if (!(obj instanceof JsonElement)) {
            return -1;
        }
        JsonElement element = (JsonElement) obj;
        Intrinsics.checkNotNullParameter(element, "element");
        return this.f13611d.lastIndexOf(element);
    }

    @Override // java.util.List
    public final ListIterator<JsonElement> listIterator() {
        return this.f13611d.listIterator();
    }

    @Override // java.util.List
    public final /* bridge */ /* synthetic */ JsonElement remove(int i5) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final boolean removeAll(Collection collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final void replaceAll(UnaryOperator<JsonElement> unaryOperator) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final boolean retainAll(Collection collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final /* bridge */ /* synthetic */ JsonElement set(int i5, JsonElement jsonElement) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final int size() {
        return this.f13611d.size();
    }

    @Override // java.util.List
    public final void sort(Comparator<? super JsonElement> comparator) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final List<JsonElement> subList(int i5, int i6) {
        return this.f13611d.subList(i5, i6);
    }

    @Override // java.util.List, java.util.Collection
    public final Object[] toArray() {
        return CollectionToArray.toArray(this);
    }

    public final String toString() {
        return CollectionsKt.O(this.f13611d, ",", "[", "]", null, 56);
    }

    @Override // java.util.List, java.util.Collection
    public final /* bridge */ /* synthetic */ boolean add(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final boolean addAll(Collection collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List
    public final ListIterator<JsonElement> listIterator(int i5) {
        return this.f13611d.listIterator(i5);
    }

    @Override // java.util.List, java.util.Collection
    public final boolean remove(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.List, java.util.Collection
    public final Object[] toArray(Object[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return CollectionToArray.toArray(this, array);
    }
}
