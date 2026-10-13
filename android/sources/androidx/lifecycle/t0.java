package androidx.lifecycle;

import android.os.Bundle;
import androidx.savedstate.SavedStateRegistry;
import java.util.Arrays;
import java.util.Map;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class t0 implements d3.d {
    public final SavedStateRegistry a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f2224b;

    /* renamed from: c, reason: collision with root package name */
    public Bundle f2225c;

    /* renamed from: d, reason: collision with root package name */
    public final fo.u f2226d;

    public t0(SavedStateRegistry savedStateRegistry, d1 viewModelStoreOwner) {
        Intrinsics.checkNotNullParameter(savedStateRegistry, "savedStateRegistry");
        Intrinsics.checkNotNullParameter(viewModelStoreOwner, "viewModelStoreOwner");
        this.a = savedStateRegistry;
        this.f2226d = fo.l.a(new s0(0, viewModelStoreOwner));
    }

    @Override // d3.d
    public final Bundle a() {
        kotlin.collections.v0.d().getClass();
        Bundle source = com.facebook.imagepipeline.nativecode.b.c((Pair[]) Arrays.copyOf(new Pair[0], 0));
        Intrinsics.checkNotNullParameter(source, "source");
        Bundle from = this.f2225c;
        if (from != null) {
            Intrinsics.checkNotNullParameter(from, "from");
            source.putAll(from);
        }
        for (Map.Entry entry : ((u0) this.f2226d.getValue()).f2227b.entrySet()) {
            String key = (String) entry.getKey();
            Bundle value = ((e.c) ((o0) entry.getValue()).a.f16327w).a();
            Intrinsics.checkNotNullParameter(value, "source");
            if (!value.isEmpty()) {
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(value, "value");
                source.putBundle(key, value);
            }
        }
        this.f2224b = false;
        return source;
    }

    public final void b() {
        if (this.f2224b) {
            return;
        }
        Bundle from = this.a.a("androidx.lifecycle.internal.SavedStateHandlesProvider");
        kotlin.collections.v0.d().getClass();
        Bundle source = com.facebook.imagepipeline.nativecode.b.c((Pair[]) Arrays.copyOf(new Pair[0], 0));
        Intrinsics.checkNotNullParameter(source, "source");
        Bundle from2 = this.f2225c;
        if (from2 != null) {
            Intrinsics.checkNotNullParameter(from2, "from");
            source.putAll(from2);
        }
        if (from != null) {
            Intrinsics.checkNotNullParameter(from, "from");
            source.putAll(from);
        }
        this.f2225c = source;
        this.f2224b = true;
    }
}
