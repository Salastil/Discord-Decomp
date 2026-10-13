package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class g0 implements KSerializer {
    public static final g0 a = new g0();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3187b = new n1("kotlin.Float", zr.e.f21419x);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Float.valueOf(decoder.decodeFloat());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3187b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        float floatValue = ((Number) obj).floatValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.o(floatValue);
    }
}
