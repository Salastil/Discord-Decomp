package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class t0 implements KSerializer {
    public static final t0 a = new t0();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3236b = new n1("kotlin.Long", zr.e.f21421z);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Long.valueOf(decoder.decodeLong());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3236b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        long longValue = ((Number) obj).longValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.O(longValue);
    }
}
