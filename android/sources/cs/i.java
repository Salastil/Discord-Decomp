package cs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;

/* loaded from: classes3.dex */
public final class i implements KSerializer {
    public static final i a = new i();

    /* renamed from: b, reason: collision with root package name */
    public static final zr.g f7329b = com.facebook.imagepipeline.nativecode.c.g("kotlinx.serialization.json.JsonElement", zr.c.f21414u, new SerialDescriptor[0], new com.discord.mobile_voice_overlay.views.e(29));

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return com.facebook.imagepipeline.nativecode.c.c(decoder).a();
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f7329b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        JsonElement value = (JsonElement) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        com.facebook.imagepipeline.nativecode.c.b(encoder);
        if (value instanceof JsonPrimitive) {
            encoder.M(s.a, value);
        } else if (value instanceof JsonObject) {
            encoder.M(r.a, value);
        } else {
            if (!(value instanceof kotlinx.serialization.json.a)) {
                throw new fo.n();
            }
            encoder.M(d.a, value);
        }
    }
}
