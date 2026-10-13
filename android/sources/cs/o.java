package cs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonNull;

/* loaded from: classes3.dex */
public final class o implements KSerializer {
    public static final o a = new o();

    /* renamed from: b, reason: collision with root package name */
    public static final zr.g f7333b = com.facebook.imagepipeline.nativecode.c.g("kotlinx.serialization.json.JsonNull", zr.i.f21432t, new SerialDescriptor[0], new kr.n(27));

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        com.facebook.imagepipeline.nativecode.c.c(decoder);
        if (decoder.decodeNotNullMark()) {
            Intrinsics.checkNotNullParameter("Expected 'null' literal", "message");
            throw new ds.n("Expected 'null' literal");
        }
        decoder.decodeNull();
        return JsonNull.INSTANCE;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f7333b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        JsonNull value = (JsonNull) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        com.facebook.imagepipeline.nativecode.c.b(encoder);
        encoder.a();
    }
}
