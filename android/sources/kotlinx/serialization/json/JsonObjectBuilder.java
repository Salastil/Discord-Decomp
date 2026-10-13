package kotlinx.serialization.json;

import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class JsonObjectBuilder {
    public final LinkedHashMap a = new LinkedHashMap();

    public final JsonObject a() {
        return new JsonObject(this.a);
    }

    public final JsonElement b(String key, JsonElement element) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(element, "element");
        return (JsonElement) this.a.put(key, element);
    }
}
