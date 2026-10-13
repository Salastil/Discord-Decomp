package kotlin.collections;

import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\b\u0086\b\u0018\u0000*\u0006\b\u0000\u0010\u0001 \u00012\u00020\u0002¨\u0006\u0003"}, d2 = {"Lkotlin/collections/IndexedValue;", "T", "", "kotlin-stdlib"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class IndexedValue<T> {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f13483b;

    public IndexedValue(int i5, Object obj) {
        this.a = i5;
        this.f13483b = obj;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof IndexedValue)) {
            return false;
        }
        IndexedValue indexedValue = (IndexedValue) obj;
        return this.a == indexedValue.a && Intrinsics.areEqual(this.f13483b, indexedValue.f13483b);
    }

    public final int hashCode() {
        int hashCode = Integer.hashCode(this.a) * 31;
        Object obj = this.f13483b;
        return hashCode + (obj == null ? 0 : obj.hashCode());
    }

    public final String toString() {
        return "IndexedValue(index=" + this.a + ", value=" + this.f13483b + ')';
    }
}
