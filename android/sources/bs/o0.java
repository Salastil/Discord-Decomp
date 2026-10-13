package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class o0 implements KSerializer {
    public static final o0 a = new o0();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3221b = new n1("kotlin.Int", zr.e.f21420y);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Integer.valueOf(decoder.decodeInt());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3221b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        int intValue = ((Number) obj).intValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.K(intValue);
    }
}
