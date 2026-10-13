package s;

import java.util.Iterator;
import java.util.Map;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c implements Iterator, Map.Entry {

    /* renamed from: d, reason: collision with root package name */
    public int f17666d;

    /* renamed from: e, reason: collision with root package name */
    public int f17667e = -1;

    /* renamed from: i, reason: collision with root package name */
    public boolean f17668i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ e f17669v;

    public c(e eVar) {
        this.f17669v = eVar;
        this.f17666d = eVar.f1208i - 1;
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (!this.f17668i) {
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }
        if (!(obj instanceof Map.Entry)) {
            return false;
        }
        Map.Entry entry = (Map.Entry) obj;
        Object key = entry.getKey();
        int i5 = this.f17667e;
        e eVar = this.f17669v;
        return Intrinsics.areEqual(key, eVar.f(i5)) && Intrinsics.areEqual(entry.getValue(), eVar.i(this.f17667e));
    }

    @Override // java.util.Map.Entry
    public final Object getKey() {
        if (this.f17668i) {
            return this.f17669v.f(this.f17667e);
        }
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        if (this.f17668i) {
            return this.f17669v.i(this.f17667e);
        }
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f17667e < this.f17666d;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        if (!this.f17668i) {
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }
        int i5 = this.f17667e;
        e eVar = this.f17669v;
        Object f2 = eVar.f(i5);
        Object i6 = eVar.i(this.f17667e);
        return (f2 == null ? 0 : f2.hashCode()) ^ (i6 != null ? i6.hashCode() : 0);
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        this.f17667e++;
        this.f17668i = true;
        return this;
    }

    @Override // java.util.Iterator
    public final void remove() {
        if (!this.f17668i) {
            throw new IllegalStateException();
        }
        this.f17669v.g(this.f17667e);
        this.f17667e--;
        this.f17666d--;
        this.f17668i = false;
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        if (this.f17668i) {
            return this.f17669v.h(this.f17667e, obj);
        }
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
    }

    public final String toString() {
        return getKey() + "=" + getValue();
    }
}
