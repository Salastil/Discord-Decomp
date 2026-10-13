package cs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonNull;
import kotlinx.serialization.json.JsonPrimitive;

/* loaded from: classes3.dex */
public final class s implements KSerializer {
    public static final s a = new s();

    /* renamed from: b, reason: collision with root package name */
    public static final zr.g f7338b = com.facebook.imagepipeline.nativecode.c.g("kotlinx.serialization.json.JsonPrimitive", zr.e.B, new SerialDescriptor[0], new kr.n(27));

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        JsonElement a10 = com.facebook.imagepipeline.nativecode.c.c(decoder).a();
        if (a10 instanceof JsonPrimitive) {
            return (JsonPrimitive) a10;
        }
        throw ds.s.d(-1, a10.toString(), "Unexpected JSON element, expected JsonPrimitive, had " + Reflection.getOrCreateKotlinClass(a10.getClass()));
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f7338b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        JsonPrimitive value = (JsonPrimitive) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        com.facebook.imagepipeline.nativecode.c.b(encoder);
        if (value instanceof JsonNull) {
            encoder.M(o.a, JsonNull.INSTANCE);
        } else {
            encoder.M(m.a, (l) value);
        }
    }
}
