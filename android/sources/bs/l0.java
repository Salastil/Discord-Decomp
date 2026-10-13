package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class l0 implements h0 {
    public final /* synthetic */ KSerializer a;

    public l0(KSerializer kSerializer) {
        this.a = kSerializer;
    }

    @Override // bs.h0
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{this.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        throw new IllegalStateException("unsupported");
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        throw new IllegalStateException("unsupported");
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        throw new IllegalStateException("unsupported");
    }

    @Override // bs.h0
    public final KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
