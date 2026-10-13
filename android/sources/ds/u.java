package ds;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;

/* loaded from: classes3.dex */
public final class u extends b {

    /* renamed from: g, reason: collision with root package name */
    public final JsonElement f7741g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(Json json, JsonElement value, String str) {
        super(json, str);
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(value, "value");
        this.f7741g = value;
        ((ArrayList) this.f3160c).add("primitive");
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final int decodeElementIndex(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return 0;
    }

    @Override // ds.b
    public final JsonElement x(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        if (tag == "primitive") {
            return this.f7741g;
        }
        throw new IllegalArgumentException("This input can only handle primitives with 'primitive' tag");
    }

    @Override // ds.b
    public final JsonElement z() {
        return this.f7741g;
    }
}
