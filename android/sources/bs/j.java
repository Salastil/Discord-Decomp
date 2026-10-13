package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class j implements KSerializer {
    public static final j a = new j();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3199b = new n1("kotlin.Byte", zr.e.f21416u);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Byte.valueOf(decoder.decodeByte());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3199b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        byte byteValue = ((Number) obj).byteValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.j(byteValue);
    }
}
