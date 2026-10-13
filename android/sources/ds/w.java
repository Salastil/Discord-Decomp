package ds;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;

/* loaded from: classes3.dex */
public final class w extends b {

    /* renamed from: g, reason: collision with root package name */
    public final kotlinx.serialization.json.a f7745g;

    /* renamed from: h, reason: collision with root package name */
    public final int f7746h;

    /* renamed from: i, reason: collision with root package name */
    public int f7747i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(Json json, kotlinx.serialization.json.a value) {
        super(json, null);
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(value, "value");
        this.f7745g = value;
        this.f7746h = value.f13611d.size();
        this.f7747i = -1;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final int decodeElementIndex(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        int i5 = this.f7747i;
        if (i5 >= this.f7746h - 1) {
            return -1;
        }
        int i6 = i5 + 1;
        this.f7747i = i6;
        return i6;
    }

    @Override // bs.a1
    public final String r(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return String.valueOf(i5);
    }

    @Override // ds.b
    public final JsonElement x(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        return (JsonElement) this.f7745g.f13611d.get(Integer.parseInt(tag));
    }

    @Override // ds.b
    public final JsonElement z() {
        return this.f7745g;
    }
}
