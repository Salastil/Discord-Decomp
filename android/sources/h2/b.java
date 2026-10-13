package h2;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class b {
    public final LinkedHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final AtomicBoolean f9483b;

    public b(LinkedHashMap preferencesMap, boolean z5) {
        Intrinsics.checkNotNullParameter(preferencesMap, "preferencesMap");
        this.a = preferencesMap;
        this.f9483b = new AtomicBoolean(z5);
    }

    public final void a(c key, Object obj) {
        Intrinsics.checkNotNullParameter(key, "key");
        AtomicBoolean atomicBoolean = this.f9483b;
        if (atomicBoolean.get()) {
            throw new IllegalStateException("Do mutate preferences once returned to DataStore.");
        }
        LinkedHashMap linkedHashMap = this.a;
        if (obj == null) {
            Intrinsics.checkNotNullParameter(key, "key");
            if (atomicBoolean.get()) {
                throw new IllegalStateException("Do mutate preferences once returned to DataStore.");
            }
            linkedHashMap.remove(key);
            return;
        }
        if (!(obj instanceof Set)) {
            linkedHashMap.put(key, obj);
            return;
        }
        Set unmodifiableSet = Collections.unmodifiableSet(CollectionsKt.l0((Iterable) obj));
        Intrinsics.checkNotNullExpressionValue(unmodifiableSet, "unmodifiableSet(value.toSet())");
        linkedHashMap.put(key, unmodifiableSet);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b)) {
            return false;
        }
        return Intrinsics.areEqual(this.a, ((b) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return CollectionsKt.O(this.a.entrySet(), ",\n", "{\n", "\n}", a.f9482d, 24);
    }

    public /* synthetic */ b(boolean z5) {
        this(new LinkedHashMap(), z5);
    }
}
