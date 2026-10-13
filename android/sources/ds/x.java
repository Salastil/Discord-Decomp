package ds;

import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;

/* loaded from: classes3.dex */
public final class x extends v {
    public final JsonObject k;

    /* renamed from: l, reason: collision with root package name */
    public final List f7748l;

    /* renamed from: m, reason: collision with root package name */
    public final int f7749m;

    /* renamed from: n, reason: collision with root package name */
    public int f7750n;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x(Json json, JsonObject value) {
        super(json, value, (String) null, 12);
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(value, "value");
        this.k = value;
        List i02 = CollectionsKt.i0(value.f13610d.keySet());
        this.f7748l = i02;
        this.f7749m = i02.size() * 2;
        this.f7750n = -1;
    }

    @Override // ds.v
    /* renamed from: C */
    public final JsonObject z() {
        return this.k;
    }

    @Override // ds.v, kotlinx.serialization.encoding.CompositeDecoder
    public final int decodeElementIndex(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        int i5 = this.f7750n;
        if (i5 >= this.f7749m - 1) {
            return -1;
        }
        int i6 = i5 + 1;
        this.f7750n = i6;
        return i6;
    }

    @Override // ds.v, ds.b, bs.a1, kotlinx.serialization.encoding.CompositeDecoder
    public final void endStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
    }

    @Override // ds.v, bs.a1
    public final String r(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return (String) this.f7748l.get(i5 / 2);
    }

    @Override // ds.v, ds.b
    public final JsonElement x(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        return this.f7750n % 2 == 0 ? cs.h.c(tag) : (JsonElement) v0.e(this.k, tag);
    }

    @Override // ds.v, ds.b
    public final JsonElement z() {
        return this.k;
    }
}
