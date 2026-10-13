package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class v1 implements KSerializer {
    public static final v1 a = new v1();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3245b = new n1("kotlin.String", zr.e.B);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return decoder.decodeString();
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3245b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        String value = (String) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        encoder.Q(value);
    }
}
