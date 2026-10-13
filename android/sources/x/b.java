package x;

import kotlin.jvm.internal.Intrinsics;
import u.h;
import u.y;

/* loaded from: classes.dex */
public final class b extends w.b implements u.e {

    /* renamed from: v, reason: collision with root package name */
    public static final b f20166v;

    static {
        Intrinsics.checkNotNull(w.e.f19592b, "null cannot be cast to non-null type androidx.compose.runtime.external.kotlinx.collections.immutable.implementations.immutableMap.TrieNode<androidx.compose.runtime.CompositionLocal<kotlin.Any?>, androidx.compose.runtime.ValueHolder<kotlin.Any?>>");
        w.e eVar = w.e.f19592b;
        f20166v = new b();
    }

    @Override // w.b, kotlin.collections.j, java.util.Map
    public final /* bridge */ boolean containsKey(Object obj) {
        if (!(obj instanceof y)) {
            return false;
        }
        super.containsKey((y) obj);
        return false;
    }

    @Override // kotlin.collections.j, java.util.Map
    public final /* bridge */ boolean containsValue(Object obj) {
        if (obj instanceof h) {
            return super.containsValue((h) obj);
        }
        return false;
    }

    public final Object f(y yVar) {
        Intrinsics.checkNotNull(yVar, "null cannot be cast to non-null type androidx.compose.runtime.CompositionLocal<kotlin.Any?>");
        get(yVar);
        return yVar.a.a.getValue();
    }

    @Override // w.b, kotlin.collections.j, java.util.Map
    public final /* bridge */ Object get(Object obj) {
        if (!(obj instanceof y)) {
            return null;
        }
        super.get((y) obj);
        return null;
    }

    @Override // java.util.Map
    public final /* bridge */ Object getOrDefault(Object obj, Object obj2) {
        return !(obj instanceof y) ? obj2 : (h) super.getOrDefault((y) obj, (h) obj2);
    }
}
