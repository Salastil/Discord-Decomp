package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class u1 implements KSerializer {
    public static final u1 a = new u1();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3241b = new n1("kotlin.Short", zr.e.A);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Short.valueOf(decoder.decodeShort());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3241b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        short shortValue = ((Number) obj).shortValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.f(shortValue);
    }
}
