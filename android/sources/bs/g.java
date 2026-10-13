package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class g implements KSerializer {
    public static final g a = new g();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3186b = new n1("kotlin.Boolean", zr.e.f21415t);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return Boolean.valueOf(decoder.decodeBoolean());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3186b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        boolean booleanValue = ((Boolean) obj).booleanValue();
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.k(booleanValue);
    }
}
