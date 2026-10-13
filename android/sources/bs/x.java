package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class x implements KSerializer {
    public static final x a = new x();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3254b = new n1("kotlin.Double", zr.e.f21418w);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Double.valueOf(decoder.decodeDouble());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3254b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        double doubleValue = ((Number) obj).doubleValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.e(doubleValue);
    }
}
